// Copyright 2005, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

//
// This file implements death tests.

#include "gtest/gtest-death-test.h"

#include <utility>

#include "gtest/internal/gtest-port.h"
#include "gtest/internal/custom/gtest.h"

#if GTEST_HAS_DEATH_TEST

# if GTEST_OS_MAC
#  include <crt_externs.h>
# endif  // GTEST_OS_MAC

# include <errno.h>
# include <fcntl.h>
# include <limits.h>

# if GTEST_OS_LINUX
#  include <signal.h>
# endif  // GTEST_OS_LINUX

# include <stdarg.h>

# if GTEST_OS_WINDOWS
#  include <windows.h>
# else
#  include <sys/mman.h>
#  include <sys/wait.h>
# endif  // GTEST_OS_WINDOWS

# if GTEST_OS_QNX
#  include <spawn.h>
# endif  // GTEST_OS_QNX

# if GTEST_OS_FUCHSIA
#  include <lib/fdio/fd.h>
#  include <lib/fdio/io.h>
#  include <lib/fdio/spawn.h>
#  include <lib/zx/channel.h>
#  include <lib/zx/port.h>
#  include <lib/zx/process.h>
#  include <lib/zx/socket.h>
#  include <zircon/processargs.h>
#  include <zircon/syscalls.h>
#  include <zircon/syscalls/policy.h>
#  include <zircon/syscalls/port.h>
# endif  // GTEST_OS_FUCHSIA

#endif  // GTEST_HAS_DEATH_TEST

#include "gtest/gtest-message.h"
#include "gtest/internal/gtest-string.h"
#include "src/gtest-internal-inl.h"

namespace testing {

// Constants.

// The default death test style.
//
// This is defined in internal/gtest-port.h as "fast", but can be overridden by
// a definition in internal/custom/gtest-port.h. The recommended value, which is
// used internally at Google, is "threadsafe".
static const char kDefaultDeathTestStyle[] = GTEST_DEFAULT_DEATH_TEST_STYLE;

GTEST_DEFINE_string_(
    death_test_style,
    internal::StringFromGTestEnv("death_test_style", kDefaultDeathTestStyle),
    "Indicates how to run a death test in a forked child process: "
    "\"threadsafe\" (child process re-executes the test binary "
    "from the beginning, running only the specific death test) or "
    "\"fast\" (child process runs the death test immediately "
    "after forking).");

GTEST_DEFINE_bool_(
    death_test_use_fork,
    internal::BoolFromGTestEnv("death_test_use_fork", false),
    "Instructs to use fork()/_exit() instead of clone() in death tests. "
    "Ignored and always uses fork() on POSIX systems where clone() is not "
    "implemented. Useful when running under valgrind or similar tools if "
    "those do not support clone(). Valgrind 3.3.1 will just fail if "
    "it sees an unsupported combination of clone() flags. "
    "It is not recommended to use this flag w/o valgrind though it will "
    "work in 99% of the cases. Once valgrind is fixed, this flag will "
    "most likely be removed.");

namespace internal {
GTEST_DEFINE_string_(
    internal_run_death_test, "",
    "Indicates the file, line number, temporal index of "
    "the single death test to run, and a file descriptor to "
    "which a success code may be sent, all separated by "
    "the '|' characters.  This flag is specified if and only if the "
    "current process is a sub-process launched for running a thread-safe "
    "death test.  FOR INTERNAL USE ONLY.");
}  // namespace internal

#if GTEST_HAS_DEATH_TEST

namespace internal {

// Valid only for fast death tests. Indicates the code is running in the
// child process of a fast style death test.
# if !GTEST_OS_WINDOWS && !GTEST_OS_FUCHSIA
static bool g_in_fast_death_test_child = false;
# endif

// Returns a Boolean value indicating whether the caller is currently
// executing in the context of the death test child process.  Tools such as
// Valgrind heap checkers may need this to modify their behavior in death
// tests.  IMPORTANT: This is an internal utility.  Using it may break the
// implementation of death tests.  User code MUST NOT use it.
bool InDeathTestChild() {
# if GTEST_OS_WINDOWS || GTEST_OS_FUCHSIA

  // On Windows and Fuchsia, death tests are thread-safe regardless of the value
  // of the death_test_style flag.
  return !GTEST_FLAG(internal_run_death_test).empty();

# else

  if (GTEST_FLAG(death_test_style) == "threadsafe")
    return !GTEST_FLAG(internal_run_death_test).empty();
  else
    return g_in_fast_death_test_child;
#endif
}

}  // namespace internal

// ExitedWithCode constructor.
ExitedWithCode::ExitedWithCode(int exit_code) : exit_code_(exit_code) {
}

// ExitedWithCode function-call operator.
bool ExitedWithCode::operator()(int exit_status) const {
# if GTEST_OS_WINDOWS || GTEST_OS_FUCHSIA

  return exit_status == exit_code_;

# else

  return WIFEXITED(exit_status) && WEXITSTATUS(exit_status) == exit_code_;

# endif  // GTEST_OS_WINDOWS || GTEST_OS_FUCHSIA
}

# if !GTEST_OS_WINDOWS && !GTEST_OS_FUCHSIA
// KilledBySignal constructor.
KilledBySignal::KilledBySignal(int signum) : signum_(signum) {
}

// KilledBySignal function-call operator.
bool KilledBySignal::operator()(int exit_status) const {
#  if defined(GTEST_KILLED_BY_SIGNAL_OVERRIDE_)
  {
    bool result;
    if (GTEST_KILLED_BY_SIGNAL_OVERRIDE_(signum_, exit_status, &result)) {
      return result;
    }
  }
#  endif  // defined(GTEST_KILLED_BY_SIGNAL_OVERRIDE_)
  return WIFSIGNALED(exit_status) && WTERMSIG(exit_status) == signum_;
}
# endif  // !GTEST_OS_WINDOWS && !GTEST_OS_FUCHSIA

namespace internal {

// Utilities needed for death tests.

// Generates a textual description of a given exit code, in the format
// specified by wait(2).
static std::string ExitSummary(int exit_code) {
  Message m;

# if GTEST_OS_WINDOWS || GTEST_OS_FUCHSIA

  m << "Exited with exit status " << exit_code;

# else

  if (WIFEXITED(exit_code)) {
    m << "Exited with exit status " << WEXITSTATUS(exit_code);
  } else if (WIFSIGNALED(exit_code)) {
    m << "Terminated by signal " << WTERMSIG(exit_code);
  }
#  ifdef WCOREDUMP
  if (WCOREDUMP(exit_code)) {
    m << " (core dumped)";
  }
#  endif
# endif  // GTEST_OS_WINDOWS || GTEST_OS_FUCHSIA

  return m.GetString();
}

// Returns true if exit_status describes a process that was terminated
// by a signal, or exited normally with a nonzero exit code.
bool ExitedUnsuccessfully(int exit_status) {
  return !ExitedWithCode(0)(exit_status);
}

# if !GTEST_OS_WINDOWS && !GTEST_OS_FUCHSIA
// Generates a textual failure message when a death test finds more than
// one thread running, or cannot determine the number of threads, prior
// to executing the given statement.  It is the responsibility of the
// caller not to pass a thread_count of 1.
static std::string DeathTestThreadWarning(size_t thread_count) {
  Message msg;
  msg << "Death tests use fork(), which is unsafe particularly"
      << " in a threaded context. For this test, " << GTEST_NAME_ << " ";
  if (thread_count == 0) {
    msg << "couldn't detect the number of threads.";
  } else {
    msg << "detected " << thread_count << " threads.";
  }
  msg << " See "
         "https://github.com/google/googletest/blob/master/googletest/docs/"
         "advanced.md#death-tests-and-threads"
      << " for more explanation and suggested solutions, especially if"
      << " this is the last message you see before your test times out.";
  return msg.GetString();
}
# endif  // !GTEST_OS_WINDOWS && !GTEST_OS_FUCHSIA

// Flag characters for reporting a death test that did not die.
static const char kDeathTestLived = 'L';
static const char kDeathTestReturned = 'R';
static const char kDeathTestThrew = 'T';
static const char kDeathTestInternalError = 'I';

#if GTEST_OS_FUCHSIA

// File descriptor used for the pipe in the child process.
static const int kFuchsiaReadPipeFd = 3;

#endif

// An enumeration describing all of the possible ways that a death test can
// conclude.  DIED means that the process died while executing the test
// code; LIVED means that process lived beyond the end of the test code;
// RETURNED means that the test statement attempted to execute a return
// statement, which is not allowed; THREW means that the test statement
// returned control by throwing an exception.  IN_PROGRESS means the test
// has not yet concluded.
enum DeathTestOutcome { IN_PROGRESS, DIED, LIVED, RETURNED, THREW };

// Routine for aborting the program which is safe to call from an
// exec-style death test child process, in which case the error
// message is propagated back to the parent process.  Otherwise, the
// message is simply printed to stderr.  In either case, the program
// then exits with status 1.
static void DeathTestAbort(const std::string& message) {
  // On a POSIX system, this function may be called from a threadsafe-style
  // death test child process, which operates on a very small stack.  Use
  // the heap for any additional non-minuscule memory requirements.
  const InternalRunDeathTestFlag* const flag =
      GetUnitTestImpl()->internal_run_death_test_flag();
  if (flag != nullptr) {
    FILE* parent = posix::FDOpen(flag->write_fd(), "w");
    fputc(kDeathTestInternalError, parent);
    fprintf(parent, "%s", message.c_str());
    fflush(parent);
    _exit(1);
  } else {
    fprintf(stderr, "%s", message.c_str());
    fflush(stderr);
    posix::Abort();
  }
}

// A replacement for CHECK that calls DeathTestAbort if the assertion
// fails.
# define GTEST_DEATH_TEST_CHECK_(expression) \
  do { \
    if (!::testing::internal::IsTrue(expression)) { \
      DeathTestAbort( \
          ::std::string("CHECK failed: File ") + __FILE__ +  ", line " \
          + ::testing::internal::StreamableToString(__LINE__) + ": " \
          + #expression); \
    } \
  } while (::testing::internal::AlwaysFalse())

// This macro is similar to GTEST_DEATH_TEST_CHECK_, but it is meant for
// evaluating any system call that fulfills two conditions: it must return
// -1 on failure, and set errno to EINTR when it is interrupted and
// should be tried again.  The macro expands to a loop that repeatedly
// evaluates the expression as long as it evaluates to -1 and sets
// errno to EINTR.  If the expression evaluates to -1 but errno is
// something other than EINTR, DeathTestAbort is called.
# define GTEST_DEATH_TEST_CHECK_SYSCALL_(expression) \
  do { \
    int gtest_retval; \
    do { \
      gtest_retval = (expression); \
    } while (gtest_retval == -1 && errno == EINTR); \
    if (gtest_retval == -1) { \
      DeathTestAbort( \
          ::std::string("CHECK failed: File ") + __FILE__ + ", line " \
          + ::testing::internal::StreamableToString(__LINE__) + ": " \
          + #expression + " != -1"); \
    } \
  } while (::testing::internal::AlwaysFalse())

// Returns the message describing the last system error in errno.
std::string GetLastErrnoDescription() {
    return errno == 0 ? "" : posix::StrError(errno);
}

// This is called from a death test parent process to read a failure
// message from the death test child process and log it with the FATAL
// severity. On Windows, the message is read from a pipe handle. On other
// platforms, it is read from a file descriptor.
static void FailFromInternalError(int fd) {
  Message error;
  char buffer[256];
  int num_read;

  do {
    while ((num_read = posix::Read(fd, buffer, 255)) > 0) {
      buffer[num_read] = '\0';
      error << buffer;
    }
  } while (num_read == -1 && errno == EINTR);

  if (num_read == 0) {
    GTEST_LOG_(FATAL) << error.GetString();
  } else {
    const int last_error = errno;
    GTEST_LOG_(FATAL) << "Error while reading death test internal: "
                      << GetLastErrnoDescription() << " [" << last_error << "]";
  }
}

// Death test constructor.  Increments the running death test count
// for the current test.
DeathTest::DeathTest() {
  TestInfo* const info = GetUnitTestImpl()->current_test_info();
  if (info == nullptr) {
    DeathTestAbort("Cannot run a death test outside of a TEST or "
                   "TEST_F construct");
  }
}

// Creates and returns a death test by dispatching to the current
// death test factory.
bool DeathTest::Create(const char* statement,
                       Matcher<const std::string&> matcher, const char* file,
                       int line, DeathTest** test) {
  return GetUnitTestImpl()->death_test_factory()->Create(
      statement, std::move(matcher), file, line, test);
}

const char* DeathTest::LastMessage() {
  return last_death_test_message_.c_str();
}

void DeathTest::set_last_death_test_message(const std::string& message) {
  last_death_test_message_ = message;
}

std::string DeathTest::last_death_test_message_;

// Provides cross platform implementation for some death functionality.
class DeathTestImpl : public DeathTest {
 protected:
  DeathTestImpl(const char* a_statement, Matcher<const std::string&> matcher)
      : statement_(a_statement),
        matcher_(std::move(matcher)),
        spawned_(false),
        status_(-1),
        outcome_(IN_PROGRESS),
        read_fd_(-1),
        write_fd_(-1) {}

  // read_fd_ is expected to be closed and cleared by a derived class.
  ~DeathTestImpl() override { GTEST_DEATH_TEST_CHECK_(read_fd_ == -1); }

  void Abort(AbortReason reason) override;
  bool Passed(bool status_ok) override;

  const char* statement() const { return statement_; }
  bool spawned() const { return spawned_; }
  void set_spawned(bool is_spawned) { spawned_ = is_spawned; }
  int status() const { return status_; }
  void set_status(int a_status) { status_ = a_status; }
  DeathTestOutcome outcome() const { return outcome_; }
  void set_outcome(DeathTestOutcome an_outcome) { outcome_ = an_outcome; }
  int read_fd() const { return read_fd_; }
  void set_read_fd(int fd) { read_fd_ = fd; }
  int write_fd() const { return write_fd_; }
  void set_write_fd(int fd) { write_fd_ = fd; }

  // Called in the parent process only. Reads the result code of the death
  // test child process via a pipe, interprets it to set the outcome_
  // member, and closes read_fd_.  Outputs diagnostics and terminates in
  // case of unexpected codes.
  void ReadAndInterpretStatusByte();

  // Returns stderr output from the child process.
  virtual std::string GetErrorLogs();

 private:
  // The textual content of the code this object is testing.  This class
  // doesn't own this string and should not attempt to delete it.
  const char* const statement_;
  // A matcher that's expected to match the stderr output by the child process.
  Matcher<const std::string&> matcher_;
  // True if the death test child process has been successfully spawned.
  bool spawned_;
  // The exit status of the child process.
  int status_;
  // How the death test concluded.
  DeathTestOutcome outcome_;
  // Descriptor to the read end of the pipe to the child process.  It is
  // always -1 in the child process.  The child keeps its write end of the
  // pipe in write_fd_.
  int read_fd_;
  // Descriptor to the child's write end of the pipe to the parent process.
  // It is always -1 in the parent process.  The parent keeps its end of the
  // pipe in read_fd_.
  int write_fd_;
};

// Called in the parent process only. Reads the result code of the death
// test child process via a pipe, interprets it to set the outcome_
// member, and closes read_fd_.  Outputs diagnostics and terminates in
// case of unexpected codes.
void DeathTestImpl::ReadAndInterpretStatusByte() {
  char flag;
  int bytes_read;

  // The read() here blocks until data is available (signifying the
  // failure of the death test) or until the pipe is closed (signifying
  // its success), so it's okay to call this in the parent before
  // the child process has exited.
  do {
    bytes_read = posix::Read(read_fd(), &flag, 1);
  } while (bytes_read == -1 && errno == EINTR);

  if (bytes_read == 0) {
    set_outcome(DIED);
  } else if (bytes_read == 1) {
    switch (flag) {
      case kDeathTestReturned:
        set_outcome(RETURNED);
        break;
      case kDeathTestThrew:
        set_outcome(THREW);
        break;
      case kDeathTestLived:
        set_outcome(LIVED);
        break;
      case kDeathTestInternalError:
        FailFromInternalError(read_fd());  // Does not return.
        break;
      default:
        GTEST_LOG_(FATAL) << "Death test child process reported "
                          << "unexpected status byte ("
                          << static_cast<unsigned int>(flag) << ")";
    }
  } else {
    GTEST_LOG_(FATAL) << "Read from death test child process failed: "
                      << GetLastErrnoDescription();
  }
  GTEST_DEATH_TEST_CHECK_SYSCALL_(posix::Close(read_fd()));
  set_read_fd(-1);
}

std::string DeathTestImpl::GetErrorLogs() {
  return GetCapturedStderr();
}

// Signals that the death test code which should have exited, didn't.
// Should be called only in a death test child process.
// Writes a status byte to the child's status file descriptor, then
// calls _exit(1).
void DeathTestImpl::Abort(AbortReason reason) {
  // The parent process considers the death test to be a failure if
  // it finds any data in our pipe.  So, here we write a single flag byte
  // to the pipe, then exit.
  const char status_ch =
      reason == TEST_DID_NOT_DIE ? kDeathTestLived :
      reason == TEST_THREW_EXCEPTION ? kDeathTestThrew : kDeathTestReturned;

  GTEST_DEATH_TEST_CHECK_SYSCALL_(posix::Write(write_fd(), &status_ch, 1));
  // We are leaking the descriptor here because on some platforms (i.e.,
  // when built as Windows DLL), destructors of global objects will still
  // run after calling _exit(). On such systems, write_fd_ will be
  // indirectly closed from the destructor of UnitTestImpl, causing double
  // close if it is also closed here. On debug configurations, double close
  // may assert. As there are no in-process buffers to flush here, we are
  // relying on the OS to close the descriptor after the process terminates
  // when the destructors are not run.
  _exit(1);  // Exits w/o any normal exit hooks (we were supposed to crash)
}

// Returns an indented copy of stderr output for a death test.
// This makes distinguishing death test output lines from regular log lines
// much easier.
static ::std::string FormatDeathTestOutput(const ::std::string& output) {
  ::std::string ret;
  for (size_t at = 0; ; ) {
    const size_t line_end = output.find('\n', at);
    ret += "[  DEATH   ] ";
    if (line_end == ::std::string::npos) {
      ret += output.substr(at);
      break;
    }
    ret += output.substr(at, line_end + 1 - at);
    at = line_end + 1;
  }
  return ret;
}

// Assesses the success or failure of a death test, using both private
// members which have previously been set, and one argument:
//
// Private data members:
//   outcome:  An enumeration describing how the death test
//             concluded: DIED, LIVED, THREW, or RETURNED.  The death test
//             fails in the latter three cases.
//   status:   The exit status of the child process. On *nix, it is in the
//             in the format specified by wait(2). On Windows, this is the
//             value supplied to the ExitProcess() API or a numeric code
//             of the exception that terminated the program.
//   matcher_: A matcher that's expected to match the stderr output by the child
//             process.
//
// Argument:
//   status_ok: true if exit_status is acceptable in the context of
//              this particular death test, which fails if it is false
//
// Returns true if and only if all of the above conditions are met.  Otherwise,
// the first failing condition, in the order given above, is the one that is
// reported. Also sets the last death test message string.
bool DeathTestImpl::Passed(bool status_ok) {
  if (!spawned())
    return false;

  const std::string error_message = GetErrorLogs();

  bool success = false;
  Message buffer;

  buffer << "Death test: " << statement() << "\n";
  switch (outcome()) {
    case LIVED:
      buffer << "    Result: failed to die.\n"
             << " Error msg:\n" << FormatDeathTestOutput(error_message);
      break;
    case THREW:
      buffer << "    Result: threw an exception.\n"
             << " Error msg:\n" << FormatDeathTestOutput(error_message);
      break;
    case RETURNED:
      buffer << "    Result: illegal return in test statement.\n"
             << " Error msg:\n" << FormatDeathTestOutput(error_message);
      break;
    case DIED:
      if (status_ok) {
        if (matcher_.Matches(error_message)) {
          success = true;
        } else {
          std::ostringstream stream;
          matcher_.DescribeTo(&stream);
          buffer << "    Result: died but not with expected error.\n"
                 << "  Expected: " << stream.str() << "\n"
                 << "Actual msg:\n"
                 << FormatDeathTestOutput(error_message);
        }
      } else {
        buffer << "    Result: died but not with expected exit code:\n"
               << "            " << ExitSummary(status()) << "\n"
               << "Actual msg:\n" << FormatDeathTestOutput(error_message);
      }
      break;
    case IN_PROGRESS:
    default:
      GTEST_LOG_(FATAL)
          << "DeathTest::Passed somehow called before conclusion of test";
  }

  DeathTest::set_last_death_test_message(buffer.GetString());
  return success;
}

# if GTEST_OS_WINDOWS
// WindowsDeathTest implements death tests on Windows. Due to the
// specifics of starting new processes on Windows, death tests there are
// always threadsafe, and Google Test considers the
// --gtest_death_test_style=fast setting to be equivalent to
// --gtest_death_test_style=threadsafe there.
//
// A few implementation notes:  Like the Linux version, the Windows
// implementation uses pipes for child-to-parent communication. But due to
// the specifics of pipes on Windows, some extra steps are required:
//
// 1. The parent creates a communication pipe and stores handles to both
//    ends of it.
// 2. The parent starts the child and provides it with the information
//    necessary to acquire the handle to the write end of the pipe.
// 3. The child acquires the write end of the pipe and signals the parent
//    using a Windows event.
// 4. Now the parent can release the write end of the pipe on its side. If
//    this is done before step 3, the object's reference count goes down to
//    0 and it is destroyed, preventing the child from acquiring it. The
//    parent now has to release it, or read operations on the read end of
//    the pipe will not return when the child terminates.
// 5. The parent reads child's output through the pipe (outcome code and
//    any possible error messages) from the pipe, and its stderr and then
//    determines whether to fail the test.
//
// Note: to distinguish Win32 API calls from the local method and function
// calls, the former are explicitly resolved in the global namespace.
//
class WindowsDeathTest : public DeathTestImpl {
 public:
  WindowsDeathTest(const char* a_statement, Matcher<const std::string&> matcher,
                   const char* file, int line)
      : DeathTestImpl(a_statement, std::move(matcher)),
        file_(file),
        line_(line) {}

  // All of these virtual functions are inherited from DeathTest.
  virtual int Wait();
  virtual TestRole AssumeRole();

 private:
  // The name of the file in which the death test is located.
  const char* const file_;
  // The line number on which the death test is located.
  const int line_;
  // Handle to the write end of the pipe to the child process.
  AutoHandle write_handle_;
  // Child process handle.
  AutoHandle child_handle_;
  // Event the child process uses to signal the parent that it has
  // acquired the handle to the write end of the pipe. After seeing this
  // event the parent can release its own handles to make sure its
  // ReadFile() calls return when the child terminates.
  AutoHandle event_handle_;
};

// Waits for the child in a death test to exit, returning its exit
// status, or 0 if no child process exists.  As a side effect, sets the
// outcome data member.
int WindowsDeathTest::Wait() {
  if (!spawned())
    return 0;

  // Wait until the child either signals that it has acquired the write end
  // of the pipe or it dies.
  const HANDLE wait_handles[2] = { child_handle_.Get(), event_handle_.Get() };
  switch (::WaitForMultipleObjects(2,
                                   wait_handles,
                                   FALSE,  // Waits for any of the handles.
                                   INFINITE)) {
    case WAIT_OBJECT_0:
    case WAIT_OBJECT_0 + 1:
      break;
    default:
      GTEST_DEATH_TEST_CHECK_(false);  // Should not get here.
  }

  // The child has acquired the write end of the pipe or exited.
  // We release the handle on our side and continue.
  write_handle_.Reset();
  event_handle_.Reset();

  ReadAndInterpretStatusByte();

  // Waits for the child process to exit if it haven't already. This
  // returns immediately if the child has already exited, regardless of
  // whether previous calls to WaitForMultipleObjects synchronized on this
  // handle or not.
  GTEST_DEATH_TEST_CHECK_(
      WAIT_OBJECT_0 == ::WaitForSingleObject(child_handle_.Get(),
                                             INFINITE));
  DWORD status_code;
  GTEST_DEATH_TEST_CHECK_(
      ::GetExitCodeProcess(child_handle_.Get(), &status_code) != FALSE);
  child_handle_.Reset();
  set_status(static_cast<int>(status_code));
  return status();
}

// The AssumeRole process for a Windows death test.  It creates a child
// process with the same executable as the current process to run the
// death test.  The child process is given the --gtest_filter and
// --gtest_internal_run_death_test flags such that it knows to run the
// current death test only.
DeathTest::TestRole WindowsDeathTest::AssumeRole() {
  const UnitTestImpl* const impl = GetUnitTestImpl();
  const InternalRunDeathTestFlag* const flag =
      impl->internal_run_death_test_flag();
  const TestInfo* const info = impl->current_test_info();
  const int death_test_index = info->result()->death_test_count();

  if (flag != nullptr) {
    // ParseInternalRunDeathTestFlag() has performed all the necessary
    // processing.
    set_write_fd(flag->write_fd());
    return EXECUTE_TEST;
  }

  // WindowsDeathTest uses an anonymous pipe to communicate results of
  // a death test.
  SECURITY_ATTRIBUTES handles_are_inheritable = {sizeof(SECURITY_ATTRIBUTES),
                                                 nullptr, TRUE};
  HANDLE read_handle, write_handle;
  GTEST_DEATH_TEST_CHECK_(
      ::CreatePipe(&read_handle, &write_handle, &handles_are_inheritable,
                   0)  // Default buffer size.
      != FALSE);
  set_read_fd(::_open_osfhandle(reinterpret_cast<intptr_t>(read_handle),
                                O_RDONLY));
  write_handle_.Reset(write_handle);
  event_handle_.Reset(::CreateEvent(
      &handles_are_inheritable,
      TRUE,       // The event will automatically reset to non-signaled state.
      FALSE,      // The initial state is non-signalled.
      nullptr));  // The even is unnamed.
  GTEST_DEATH_TEST_CHECK_(event_handle_.Get() != nullptr);
  const std::string filter_flag = std::string("--") + GTEST_FLAG_PREFIX_ +
                                  kFilterFlag + "=" + info->test_suite_name() +
                                  "." + info->name();
  const std::string internal_flag =
      std::string("--") + GTEST_FLAG_PREFIX_ + kInternalRunDeathTestFlag +
      "=" + file_ + "|" + StreamableToString(line_) + "|" +
      StreamableToString(death_test_index) + "|" +
      StreamableToString(static_cast<unsigned int>(::GetCurrentProcessId())) +
      // size_t has the same width as pointers on both 32-bit and 64-bit
      // Windows platforms.
      // See http://msdn.microsoft.com/en-us/library/tcxf1dw6.aspx.
      "|" + StreamableToString(reinterpret_cast<size_t>(write_handle)) +
      "|" + StreamableToString(reinterpret_cast<size_t>(event_handle_.Get()));

  char executable_path[_MAX_PATH + 1];  // NOLINT
  GTEST_DEATH_TEST_CHECK_(_MAX_PATH + 1 != ::GetModuleFileNameA(nullptr,
                                                                executable_path,
                                                                _MAX_PATH));

  std::string command_line =
      std::string(::GetCommandLineA()) + " " + filter_flag + " \"" +
      internal_flag + "\"";

  DeathTest::set_last_death_test_message("");

  CaptureStderr();
  // Flush the log buffers since the log streams are shared with the child.
  FlushInfoLog();

  // The child process will share the standard handles with the parent.
  STARTUPINFOA startup_info;
  memset(&startup_info, 0, sizeof(STARTUPINFO));
  startup_info.dwFlags = STARTF_USESTDHANDLES;
  startup_info.hStdInput = ::GetStdHandle(STD_INPUT_HANDLE);
  startup_info.hStdOutput = ::GetStdHandle(STD_OUTPUT_HANDLE);
  startup_info.hStdError = ::GetStdHandle(STD_ERROR_HANDLE);

  PROCESS_INFORMATION process_info;
  GTEST_DEATH_TEST_CHECK_(
      ::CreateProcessA(
          executable_path, const_cast<char*>(command_line.c_str()),
          nullptr,  // Retuned process handle is not inheritable.
          nullptr,  // Retuned thread handle is not inheritable.
          TRUE,  // Child inherits all inheritable handles (for write_handle_).
          0x0,   // Default creation flags.
          nullptr,  // Inherit the parent's environment.
          UnitTest::GetInstance()->original_working_dir(), &startup_info,
          &process_info) != FALSE);
  child_handle_.Reset(process_info.hProcess);
  ::CloseHandle(process_info.hThread);
  set_spawned(true);
  return OVERSEE_TEST;
}

# elif GTEST_OS_FUCHSIA

class FuchsiaDeathTest : public DeathTestImpl {
 public:
  FuchsiaDeathTest(const char* a_statement, Matcher<const std::string&> matcher,
                   const char* file, int line)
      : DeathTestImpl(a_statement, std::move(matcher)),
        file_(file),
        line_(line) {}

  // All of these virtual functions are inherited from DeathTest.
  int Wait() override;
  TestRole AssumeRole() override;
  std::string GetErrorLogs() override;

 private:
  // The name of the file in which the death test is located.
  const char* const file_;
  // The line number on which the death test is located.
  const int line_;
  // The stderr data captured by the child process.
  std::string captured_stderr_;

  zx::process child_process_;
  zx::channel exception_channel_;
  zx::socket stderr_socket_;
};

// Utility class for accumulating command-line arguments.
class Arguments {
 public:
  Arguments() { args_.push_back(nullptr); }

  ~Arguments() {
    for (std::vector<char*>::iterator i = args_.begin(); i != args_.end();
         ++i) {
      free(*i);
    }
  }
  void AddArgument(const char* argument) {
    args_.insert(args_.end() - 1, posix::StrDup(argument));
  }

  template <typename Str>
  void AddArguments(const ::std::vector<Str>& arguments) {
    for (typename ::std::vector<Str>::const_iterator i = arguments.begin();
         i != arguments.end();
         ++i) {
      args_.insert(args_.end() - 1, posix::StrDup(i->c_str()));
    }
  }
  char* const* Argv() {
    return &args_[0];
  }

  int size() {
    return args_.size() - 1;
  }

 private:
  std::vector<char*> args_;
};

// Waits for the child in a death test to exit, returning its exit
// status, or 0 if no child process exists.  As a side effect, sets the
// outcome data member.
int FuchsiaDeathTest::Wait() {
  const int kProcessKey = 0;
  const int kSocketKey = 1;
  const int kExceptionKey = 2;

  if (!spawned())
    return 0;

  // Create a port to wait for socket/task/exception events.
  zx_status_t status_zx;
  zx::port port;
  status_zx = zx::port::create(0, &port);
  GTEST_DEATH_TEST_CHECK_(status_zx == ZX_OK);

  // Register to wait for the child process to terminate.
  status_zx = child_process_.wait_async(
      port, kProcessKey, ZX_PROCESS_TERMINATED, ZX_WAIT_ASYNC_ONCE);
  GTEST_DEATH_TEST_CHECK_(status_zx == ZX_OK);

  // Register to wait for the socket to be readable or closed.
  status_zx = stderr_socket_.wait_async(
      port, kSocketKey, ZX_SOCKET_READABLE | ZX_SOCKET_PEER_CLOSED,
      ZX_WAIT_ASYNC_ONCE);
  GTEST_DEATH_TEST_CHECK_(status_zx == ZX_OK);

  // Register to wait for an exception.
  status_zx = exception_channel_.wait_async(
      port, kExceptionKey, ZX_CHANNEL_READABLE, ZX_WAIT_ASYNC_ONCE);
  GTEST_DEATH_TEST_CHECK_(status_zx == ZX_OK);

  bool process_terminated = false;
  bool socket_closed = false;
  do {
    zx_port_packet_t packet = {};
    status_zx = port.wait(zx::time::infinite(), &packet);
    GTEST_DEATH_TEST_CHECK_(status_zx == ZX_OK);

    if (packet.key == kExceptionKey) {
      // Process encountered an exception. Kill it directly rather than
      // letting other handlers process the event. We will get a kProcessKey
      // event when the process actually terminates.
      status_zx = child_process_.kill();
      GTEST_DEATH_TEST_CHECK_(status_zx == ZX_OK);
    } else if (packet.key == kProcessKey) {
      // Process terminated.
      GTEST_DEATH_TEST_CHECK_(ZX_PKT_IS_SIGNAL_ONE(packet.type));
      GTEST_DEATH_TEST_CHECK_(packet.signal.observed & ZX_PROCESS_TERMINATED);
      process_terminated = true;
    } else if (packet.key == kSocketKey) {
      GTEST_DEATH_TEST_CHECK_(ZX_PKT_IS_SIGNAL_ONE(packet.type));
      if (packet.signal.observed & ZX_SOCKET_READABLE) {
        // Read data from the socket.
        constexpr size_t kBufferSize = 1024;
        do {
          size_t old_length = captured_stderr_.length();
          size_t bytes_read = 0;
          captured_stderr_.resize(old_length + kBufferSize);
          status_zx = stderr_socket_.read(
              0, &captured_stderr_.front() + old_length, kBufferSize,
              &bytes_read);
          captured_stderr_.resize(old_length + bytes_read);
        } while (status_zx == ZX_OK);
        if (status_zx == ZX_ERR_PEER_CLOSED) {
          socket_closed = true;
        } else {
          GTEST_DEATH_TEST_CHECK_(status_zx == ZX_ERR_SHOULD_WAIT);
          status_zx = stderr_socket_.wait_async(
              port, kSocketKey, ZX_SOCKET_READABLE | ZX_SOCKET_PEER_CLOSED,
              ZX_WAIT_ASYNC_ONCE);
          GTEST_DEATH_TEST_CHECK_(status_zx == ZX_OK);
        }
      } else {
        GTEST_DEATH_TEST_CHECK_(packet.signal.observed & ZX_SOCKET_PEER_CLOSED);
        socket_closed = true;
      }
    }
  } while (!process_terminated && !socket_closed);

  ReadAndInterpretStatusByte();

  zx_info_process_t buffer;
  status_zx = child_process_.get_info(
      ZX_INFO_PROCESS, &buffer, sizeof(buffer), nullptr, nullptr);
  GTEST_DEATH_TEST_CHECK_(status_zx == ZX_OK);

  GTEST_DEATH_TEST_CHECK_(buffer.exited);
  set_status(buffer.return_code);
  return status();
}

// The AssumeRole process for a Fuchsia death test.  It creates a child
// process with the same executable as the current process to run the
// death test.  The child process is given the --gtest_filter and
// --gtest_internal_run_death_test flags such that it knows to run the
// current death test only.
DeathTest::TestRole FuchsiaDeathTest::AssumeRole() {
  const UnitTestImpl* const impl = GetUnitTestImpl();
  const InternalRunDeathTestFlag* const flag =
      impl->internal_run_death_test_flag();
  const TestInfo* const info = impl->current_test_info();
  const int death_test_index = info->result()->death_test_count();

  if (flag != nullptr) {
    // ParseInternalRunDeathTestFlag() has performed all the necessary
    // processing.
    set_write_fd(kFuchsiaReadPipeFd);
    return EXECUTE_TEST;
  }

  // Flush the log buffers since the log streams are shared with the child.
  FlushInfoLog();

  // Build the child process command line.
  const std::string filter_flag = std::string("--") + GTEST_FLAG_PREFIX_ +
                                  kFilterFlag + "=" + info->test_suite_name() +
                                  "." + info->name();
  const std::string internal_flag =
      std::string("--") + GTEST_FLAG_PREFIX_ + kInternalRunDeathTestFlag + "="
      + file_ + "|"
      + StreamableToString(line_) + "|"
      + StreamableToString(death_test_index);
  Arguments args;
  args.AddArguments(GetInjectableArgvs());
  args.AddArgument(filter_flag.c_str());
  args.AddArgument(internal_flag.c_str());

  // Build the pipe for communication with the child.
  zx_status_t status;
  zx_handle_t child_pipe_handle;
  int child_pipe_fd;
  status = fdio_pipe_half(&child_pipe_fd, &child_pipe_handle);
  GTEST_DEATH_TEST_CHECK_(status == ZX_OK);
  set_read_fd(child_pipe_fd);

  // Set the pipe handle for the child.
  fdio_spawn_action_t spawn_actions[2] = {};
  fdio_spawn_action_t* add_handle_action = &spawn_actions[0];
  add_handle_action->action = FDIO_SPAWN_ACTION_ADD_HANDLE;
  add_handle_action->h.id = PA_HND(PA_FD, kFuchsiaReadPipeFd);
  add_handle_action->h.handle = child_pipe_handle;

  // Create a socket pair will be used to receive the child process' stderr.
  zx::socket stderr_producer_socket;
  status =
      zx::socket::create(0, &stderr_producer_socket, &stderr_socket_);
  GTEST_DEATH_TEST_CHECK_(status >= 0);
  int stderr_producer_fd = -1;
  status =
      fdio_fd_create(stderr_producer_socket.release(), &stderr_producer_fd);
  GTEST_DEATH_TEST_CHECK_(status >= 0);

  // Make the stderr socket nonblocking.
  GTEST_DEATH_TEST_CHECK_(fcntl(stderr_producer_fd, F_SETFL, 0) == 0);

  fdio_spawn_action_t* add_stderr_action = &spawn_actions[1];
  add_stderr_action->action = FDIO_SPAWN_ACTION_CLONE_FD;
  add_stderr_action->fd.local_fd = stderr_producer_fd;
  add_stderr_action->fd.target_fd = STDERR_FILENO;

  // Create a child job.
  zx_handle_t child_job = ZX_HANDLE_INVALID;
  status = zx_job_create(zx_job_default(), 0, & child_job);
  GTEST_DEATH_TEST_CHECK_(status == ZX_OK);
  zx_policy_basic_t policy;
  policy.condition = ZX_POL_NEW_ANY;
  policy.policy = ZX_POL_ACTION_ALLOW;
  status = zx_job_set_policy(
      child_job, ZX_JOB_POL_RELATIVE, ZX_JOB_POL_BASIC, &policy, 1);
  GTEST_DEATH_TEST_CHECK_(status == ZX_OK);

  // Create an exception channel attached to the |child_job|, to allow
  // us to suppress the system default exception handler from firing.
  status =
      zx_task_create_exception_channel(
          child_job, 0, exception_channel_.reset_and_get_address());
  GTEST_DEATH_TEST_CHECK_(status == ZX_OK);

  // Spawn the child process.
  status = fdio_spawn_etc(
      child_job, FDIO_SPAWN_CLONE_ALL, args.Argv()[0], args.Argv(), nullptr,
      2, spawn_actions, child_process_.reset_and_get_address(), nullptr);
  GTEST_DEATH_TEST_CHECK_(status == ZX_OK);

  set_spawned(true);
  return OVERSEE_TEST;
}

std::string FuchsiaDeathTest::GetErrorLogs() {
  return captured_stderr_;
}

#else  // We are neither on Windows, nor on Fuchsia.

// ForkingDeathTest provides implementations for most of the abstract
// methods of the DeathTest interface.  Only the AssumeRole method is
// left undefined.
class ForkingDeathTest : public DeathTestImpl {
 public:
  ForkingDeathTest(const char* statement, Matcher<const std::string&> matcher);

  // All of these virtual functions are inherited from DeathTest.
  int Wait() override;

 protected:
  void set_child_pid(pid_t child_pid) { child_pid_ = child_pid; }

 private:
  // PID of child process during death test; 0 in the child process itself.
  pid_t child_pid_;
};

// Constructs a ForkingDeathTest.
ForkingDeathTest::ForkingDeathTest(const char* a_statement,
                                   Matcher<const std::string&> matcher)
    : DeathTestImpl(a_statement, std::move(matcher)), child_pid_(-1) {}

// Waits for the child in a death test to exit, returning its exit
// status, or 0 if no child process exists.  As a side effect, sets the
// outcome data member.
int ForkingDeathTest::Wait() {
  if (!spawned())
    return 0;

  ReadAndInterpretStatusByte();

  int status_value;
  GTEST_DEATH_TEST_CHECK_SYSCALL_(waitpid(child_pid_, &status_value, 0));
  set_status(status_value);
  return status_value;
}

// A concrete death test class that forks, then immediately runs the test
// in the child process.
class NoExecDeathTest : public ForkingDeathTest {
 public:
  NoExecDeathTest(const char* a_statement, Matcher<const std::string&> matcher)
      : ForkingDeathTest(a_statement, std::move(matcher)) {}
  TestRole AssumeRole() override;
};

// The AssumeRole process for a fork-and-run death test.  It implements a
// straightforward fork, with a simple pipe to transmit the status byte.
DeathTest::TestRole NoExecDeathTest::AssumeRole() {
  const size_t thread_count = GetThreadCount();
  if (thread_count != 1) {
    GTEST_LOG_(WARNING) << DeathTestThreadWarning(thread_count);
  }

  int pipe_fd[2];
  GTEST_DEATH_TEST_CHECK_(pipe(pipe_fd) != -1);

  DeathTest::set_last_death_test_message("");
  CaptureStderr();
  // When we fork the process below, the log file buffers are copied, but the
  // file descriptors are shared.  We flush all log files here so that closing
  // the file descriptors in the child process doesn't throw off the
  // synchronization between descriptors and buffers in the parent process.
  // This is as close to the fork as possible to avoid a race condition in case
  // there are multiple threads running before the death test, and another
  // thread writes to the log file.
  FlushInfoLog();

  const pid_t child_pid = fork();
  GTEST_DEATH_TEST_CHECK_(child_pid != -1);
  set_child_pid(child_pid);
  if (child_pid == 0) {
    GTEST_DEATH_TEST_CHECK_SYSCALL_(close(pipe_fd[0]));
    set_write_fd(pipe_fd[1]);
    // Redirects all logging to stderr in the child process to prevent
    // concurrent writes to the log files.  We capture stderr in the parent
    // process and append the child process' output to a log.
    LogToStderr();
    // Event forwarding to the listeners of event listener API mush be shut
    // down in death test subprocesses.
    GetUnitTestImpl()->listeners()->SuppressEventForwarding();
    g_in_fast_death_test_child = true;
    return EXECUTE_TEST;
  } else {
    GTEST_DEATH_TEST_CHECK_SYSCALL_(close(pipe_fd[1]));
    set_read_fd(pipe_fd[0]);
    set_spawned(true);
    return OVERSEE_TEST;
  }
}

// A concrete death test class that forks and re-executes the main
// program from the beginning, with command-line flags set that cause
// only this specific death test to be run.
class ExecDeathTest : public ForkingDeathTest {
 public:
  ExecDeathTest(const char* a_statement, Matcher<const std::string&> matcher,
                const char* file, int line)
      : ForkingDeathTest(a_statement, std::move(matcher)),
        file_(file),
        line_(line) {}
  TestRole AssumeRole() override;

 private:
  static ::std::vector<std::string> GetArgvsForDeathTestChildProcess() {
    ::std::vector<std::string> args = GetInjectableArgvs();
#  if defined(GTEST_EXTRA_DEATH_TEST_COMMAND_LINE_ARGS_)
    ::std::vector<std::string> extra_args =
        GTEST_EXTRA_DEATH_TEST_COMMAND_LINE_ARGS_();
    args.insert(args.end(), extra_args.begin(), extra_args.end());
#  endif  // defined(GTEST_EXTRA_DEATH_TEST_COMMAND_LINE_ARGS_)
    return args;
  }
  // The name of the file in which the death test is located.
  const char* const file_;
  // The line number on which the death test is located.
  const int line_;
};

// Utility class for accumulating command-line arguments.
class Arguments {
 public:
  Arguments() { args_.push_back(nullptr); }

  ~Arguments() {
    for (std::vector<char*>::iterator i = args_.begin(); i != args_.end();
         ++i) {
      free(*i);
    }
  }
  void AddArgument(const char* argument) {
    args_.insert(args_.end() - 1, posix::StrDup(argument));
  }

  template <typename Str>
  void AddArguments(const ::std::vector<Str>& arguments) {
    for (typename ::std::vector<Str>::const_iterator i = arguments.begin();
         i != arguments.end();
         ++i) {
      args_.insert(args_.end() - 1, posix::StrDup(i->c_str()));
    }
  }
  char* const* Argv() {
    return &args_[0];
  }

 private:
  std::vector<char*> args_;
};

// A struct that encompasses the arguments to the child process of a
// threadsafe-style death test process.
struct ExecDeathTestArgs {
  char* const* argv;  // Command-line arguments for the child's call to exec
  int close_fd;       // File descriptor to close; the read end of a pipe
};

#  if GTEST_OS_MAC
inline char** GetEnviron() {
  // When Google Test is built as a framework on MacOS X, the environ variable
  // is unavailable. Apple's documentation (man environ) recommends using
  // _NSGetEnviron() instead.
  return *_NSGetEnviron();
}
#  else
// Some POSIX platforms expect you to declare environ. extern "C" makes
// it reside in the global namespace.
extern "C" char** environ;
inline char** GetEnviron() { return environ; }
#  endif  // GTEST_OS_MAC

#  if !GTEST_OS_QNX
// The main function for a threadsafe-style death test child process.
// This function is called in a clone()-ed process and thus must avoid
// any potentially unsafe operations like malloc or libc functions.
static int ExecDeathTestChildMain(void* child_arg) {
  ExecDeathTestArgs* const args = static_cast<ExecDeathTestArgs*>(child_arg);
  GTEST_DEATH_TEST_CHECK_SYSCALL_(close(args->close_fd));

  // We need to execute the test program in the same environment where
  // it was originally invoked.  Therefore we change to the original
  // working directory first.
  const char* const original_dir =
      UnitTest::GetInstance()->original_working_dir();
  // We can safely call chdir() as it's a direct system call.
  if (chdir(original_dir) != 0) {
    DeathTestAbort(std::string("chdir(\"") + original_dir + "\") failed: " +
                   GetLastErrnoDescription());
    return EXIT_FAILURE;
  }

  // We can safely call execve() as it's a direct system call.  We
  // cannot use execvp() as it's a libc function and thus potentially
  // unsafe.  Since execve() doesn't search the PATH, the user must
  // invoke the test program via a valid path that contains at least
  // one path separator.
  execve(args->argv[0], args->argv, GetEnviron());
  DeathTestAbort(std::string("execve(") + args->argv[0] + ", ...) in " +
                 original_dir + " failed: " +
                 GetLastErrnoDescription());
  return EXIT_FAILURE;
}
#  endif  // !GTEST_OS_QNX

#  if GTEST_HAS_CLONE
// Two utility routines that together determine the direction the stack
// grows.
// This could be accomplished more elegantly by a single recursive
// function, but we want to guard against the unlikely possibility of
// a smart compiler optimizing the recursion away.
//
// GTEST_NO_INLINE_ is required to prevent GCC 4.6 from inlining
// StackLowerThanAddress into StackGrowsDown, which then doesn't give
// correct answer.
static void StackLowerThanAddress(const void* ptr,
                                  bool* result) GTEST_NO_INLINE_;
// HWAddressSanitizer add a random tag to the MSB of the local variable address,
// making comparison result unpredictable.
GTEST_ATTRIBUTE_NO_SANITIZE_HWADDRESS_
static void StackLowerThanAddress(const void* ptr, bool* result) {
  int dummy;
  *result = (&dummy < ptr);
}

// Make sure AddressSanitizer does not tamper with the stack here.
GTEST_ATTRIBUTE_NO_SANITIZE_ADDRESS_
GTEST_ATTRIBUTE_NO_SANITIZE_HWADDRESS_
static bool StackGrowsDown() {
  int dummy;
  bool result;
  StackLowerThanAddress(&dummy, &result);
  return result;
}
#  endif  // GTEST_HAS_CLONE

// Spawns a child process with the same executable as the current process in
// a thread-safe manner and instructs it to run the death test.  The
// implementation uses fork(2) + exec.  On systems where clone(2) is
// available, it is used instead, being slightly more thread-safe.  On QNX,
// fork supports only single-threaded environments, so this function uses
// spawn(2) there instead.  The function dies with an error message if
// anything goes wrong.
static pid_t ExecDeathTestSpawnChild(char* const* argv, int close_fd) {
  ExecDeathTestArgs args = { argv, close_fd };
  pid_t child_pid = -1;

#  if GTEST_OS_QNX
  // Obtains the current directory and sets it to be closed in the child
  // process.
  const int cwd_fd = open(".", O_RDONLY);
  GTEST_DEATH_TEST_CHECK_(cwd_fd != -1);
  GTEST_DEATH_TEST_CHECK_SYSCALL_(fcntl(cwd_fd, F_SETFD, FD_CLOEXEC));
  // We need to execute the test program in the same environment where
  // it was originally invoked.  Therefore we change to the original
  // working directory first.
  const char* const original_dir =
      UnitTest::GetInstance()->original_working_dir();
  // We can safely call chdir() as it's a direct system call.
  if (chdir(original_dir) != 0) {
    DeathTestAbort(std::string("chdir(\"") + original_dir + "\") failed: " +
                   GetLastErrnoDescription());
    return EXIT_FAILURE;
  }

  int fd_flags;
  // Set close_fd to be closed after spawn.
  GTEST_DEATH_TEST_CHECK_SYSCALL_(fd_flags = fcntl(close_fd, F_GETFD));
  GTEST_DEATH_TEST_CHECK_SYSCALL_(fcntl(close_fd, F_SETFD,
                                        fd_flags | FD_CLOEXEC));
  struct inheritance inherit = {0};
  // spawn is a system call.
  child_pid =
      spawn(args.argv[0], 0, nullptr, &inherit, args.argv, GetEnviron());
  // Restores the current working directory.
  GTEST_DEATH_TEST_CHECK_(fchdir(cwd_fd) != -1);
  GTEST_DEATH_TEST_CHECK_SYSCALL_(close(cwd_fd));

#  else   // GTEST_OS_QNX
#   if GTEST_OS_LINUX
  // When a SIGPROF signal is received while fork() or clone() are executing,
  // the process may hang. To avoid this, we ignore SIGPROF here and re-enable
  // it after the call to fork()/clone() is complete.
  struct sigaction saved_sigprof_action;
  struct sigaction ignore_sigprof_action;
  memset(&ignore_sigprof_action, 0, sizeof(ignore_sigprof_action));
  sigemptyset(&ignore_sigprof_action.sa_mask);
  ignore_sigprof_action.sa_handler = SIG_IGN;
  GTEST_DEATH_TEST_CHECK_SYSCALL_(sigaction(
      SIGPROF, &ignore_sigprof_action, &saved_sigprof_action));
#   endif  // GTEST_OS_LINUX

#   if GTEST_HAS_CLONE
  const bool use_fork = GTEST_FLAG(death_test_use_fork);

  if (!use_fork) {
    static const bool stack_grows_down = StackGrowsDown();
    const auto stack_size = static_cast<size_t>(getpagesize());
    // MMAP_ANONYMOUS is not defined on Mac, so we use MAP_ANON instead.
    void* const stack = mmap(nullptr, stack_size, PROT_READ | PROT_WRITE,
                             MAP_ANON | MAP_PRIVATE, -1, 0);
    GTEST_DEATH_TEST_CHECK_(stack != MAP_FAILED);

    // Maximum stack alignment in bytes:  For a downward-growing stack, this
    // amount is subtracted from size of the stack space to get an address
    // that is within the stack space and is aligned on all systems we care
    // about.  As far as I know there is no ABI with stack alignment greater
    // than 64.  We assume stack and stack_size already have alignment of
    // kMaxStackAlignment.
    const size_t kMaxStackAlignment = 64;
    void* const stack_top =
        static_cast<char*>(stack) +
            (stack_grows_down ? stack_size - kMaxStackAlignment : 0);
    GTEST_DEATH_TEST_CHECK_(
        static_cast<size_t>(stack_size) > kMaxStackAlignment &&
        reinterpret_cast<uintptr_t>(stack_top) % kMaxStackAlignment == 0);

    child_pid = clone(&ExecDeathTestChildMain, stack_top, SIGCHLD, &args);

    GTEST_DEATH_TEST_CHECK_(munmap(stack, stack_size) != -1);
  }
#   else
  const bool use_fork = true;
#   endif  // GTEST_HAS_CLONE

  if (use_fork && (child_pid = fork()) == 0) {
      ExecDeathTestChildMain(&args);
      _exit(0);
  }
#  endif  // GTEST_OS_QNX
#  if GTEST_OS_LINUX
  GTEST_DEATH_TEST_CHECK_SYSCALL_(
      sigaction(SIGPROF, &saved_sigprof_action, nullptr));
#  endif  // GTEST_OS_LINUX

  GTEST_DEATH_TEST_CHECK_(child_pid != -1);
  return child_pid;
}

// The AssumeRole process for a fork-and-exec death test.  It re-executes the
// main program from the beginning, setting the --gtest_filter
// and --gtest_internal_run_death_test flags to cause only the current
// death test to be re-run.
DeathTest::TestRole ExecDeathTest::AssumeRole() {
  const UnitTestImpl* const impl = GetUnitTestImpl();
  const InternalRunDeathTestFlag* const flag =
      impl->internal_run_death_test_flag();
  const TestInfo* const info = impl->current_test_info();
  const int death_test_index = info->result()->death_test_count();

  if (flag != nullptr) {
    set_write_fd(flag->write_fd());
    return EXECUTE_TEST;
  }

  int pipe_fd[2];
  GTEST_DEATH_TEST_CHECK_(pipe(pipe_fd) != -1);
  // Clear the close-on-exec flag on the write end of the pipe, lest
  // it be closed when the child process does an exec:
  GTEST_DEATH_TEST_CHECK_(fcntl(pipe_fd[1], F_SETFD, 0) != -1);

  const std::string filter_flag = std::string("--") + GTEST_FLAG_PREFIX_ +
                                  kFilterFlag + "=" + info->test_suite_name() +
                                  "." + info->name();
  const std::string internal_flag =
      std::string("--") + GTEST_FLAG_PREFIX_ + kInternalRunDeathTestFlag + "="
      + file_ + "|" + StreamableToString(line_) + "|"
      + StreamableToString(death_test_index) + "|"
      + StreamableToString(pipe_fd[1]);
  Arguments args;
  args.AddArguments(GetArgvsForDeathTestChildProcess());
  args.AddArgument(filter_flag.c_str());
  args.AddArgument(internal_flag.c_str());

  DeathTest::set_last_death_test_message("");

  CaptureStderr();
  // See the comment in NoExecDeathTest::AssumeRole for why the next line
  // is necessary.
  FlushInfoLog();

  const pid_t child_pid = ExecDeathTestSpawnChild(args.Argv(), pipe_fd[0]);
  GTEST_DEATH_TEST_CHECK_SYSCALL_(close(pipe_fd[1]));
  set_child_pid(child_pid);
  set_read_fd(pipe_fd[0]);
  set_spawned(true);
  return OVERSEE_TEST;
}

# endif  // !GTEST_OS_WINDOWS

// Creates a concrete DeathTest-derived class that depends on the
// --gtest_death_test_style flag, and sets the pointer pointed to
// by the "test" argument to its address.  If the test should be
// skipped, sets that pointer to NULL.  Returns true, unless the
// flag is set to an invalid value.
bool DefaultDeathTestFactory::Create(const char* statement,
                                     Matcher<const std::string&> matcher,
                                     const char* file, int line,
                                     DeathTest** test) {
  UnitTestImpl* const impl = GetUnitTestImpl();
  const InternalRunDeathTestFlag* const flag =
      impl->internal_run_death_test_flag();
  const int death_test_index = impl->current_test_info()
      ->increment_death_test_count();

  if (flag != nullptr) {
    if (death_test_index > flag->index()) {
      DeathTest::set_last_death_test_message(
          "Death test count (" + StreamableToString(death_test_index)
          + ") somehow exceeded expected maximum ("
          + StreamableToString(flag->index()) + ")");
      return false;
    }

    if (!(flag->file() == file && flag->line() == line &&
          flag->index() == death_test_index)) {
      *test = nullptr;
      return true;
    }
  }

# if GTEST_OS_WINDOWS

  if (GTEST_FLAG(death_test_style) == "threadsafe" ||
      GTEST_FLAG(death_test_style) == "fast") {
    *test = new WindowsDeathTest(statement, std::move(matcher), file, line);
  }

# elif GTEST_OS_FUCHSIA

  if (GTEST_FLAG(death_test_style) == "threadsafe" ||
      GTEST_FLAG(death_test_style) == "fast") {
    *test = new FuchsiaDeathTest(statement, std::move(matcher), file, line);
  }

# else

  if (GTEST_FLAG(death_test_style) == "threadsafe") {
    *test = new ExecDeathTest(statement, std::move(matcher), file, line);
  } else if (GTEST_FLAG(death_test_style) == "fast") {
    *test = new NoExecDeathTest(statement, std::move(matcher));
  }

# endif  // GTEST_OS_WINDOWS

  else {  // NOLINT - this is more readable than unbalanced brackets inside #if.
    DeathTest::set_last_death_test_message(
        "Unknown death test style \"" + GTEST_FLAG(death_test_style)
        + "\" encountered");
    return false;
  }

  return true;
}

# if GTEST_OS_WINDOWS
// Recreates the pipe and event handles from the provided parameters,
// signals the event, and returns a file descriptor wrapped around the pipe
// handle. This function is called in the child process only.
static int GetStatusFileDescriptor(unsigned int parent_process_id,
                            size_t write_handle_as_size_t,
                            size_t event_handle_as_size_t) {
  AutoHandle parent_process_handle(::OpenProcess(PROCESS_DUP_HANDLE,
                                                   FALSE,  // Non-inheritable.
                                                   parent_process_id));
  if (parent_process_handle.Get() == INVALID_HANDLE_VALUE) {
    DeathTestAbort("Unable to open parent process " +
                   StreamableToString(parent_process_id));
  }

  GTEST_CHECK_(sizeof(HANDLE) <= sizeof(size_t));

  const HANDLE write_handle =
      reinterpret_cast<HANDLE>(write_handle_as_size_t);
  HANDLE dup_write_handle;

  // The newly initialized handle is accessible only in the parent
  // process. To obtain one accessible within the child, we need to use
  // DuplicateHandle.
  if (!::DuplicateHandle(parent_process_handle.Get(), write_handle,
                         ::GetCurrentProcess(), &dup_write_handle,
                         0x0,    // Requested privileges ignored since
                                 // DUPLICATE_SAME_ACCESS is used.
                         FALSE,  // Request non-inheritable handler.
                         DUPLICATE_SAME_ACCESS)) {
    DeathTestAbort("Unable to duplicate the pipe handle " +
                   StreamableToString(write_handle_as_size_t) +
                   " from the parent process " +
                   StreamableToString(parent_process_id));
  }

  const HANDLE event_handle = reinterpret_cast<HANDLE>(event_handle_as_size_t);
  HANDLE dup_event_handle;

  if (!::DuplicateHandle(parent_process_handle.Get(), event_handle,
                         ::GetCurrentProcess(), &dup_event_handle,
                         0x0,
                         FALSE,
                         DUPLICATE_SAME_ACCESS)) {
    DeathTestAbort("Unable to duplicate the event handle " +
                   StreamableToString(event_handle_as_size_t) +
                   " from the parent process " +
                   StreamableToString(parent_process_id));
  }

  const int write_fd =
      ::_open_osfhandle(reinterpret_cast<intptr_t>(dup_write_handle), O_APPEND);
  if (write_fd == -1) {
    DeathTestAbort("Unable to convert pipe handle " +
                   StreamableToString(write_handle_as_size_t) +
                   " to a file descriptor");
  }

  // Signals the parent that the write end of the pipe has been acquired
  // so the parent can release its own write end.
  ::SetEvent(dup_event_handle);

  return write_fd;
}
# endif  // GTEST_OS_WINDOWS

// Returns a newly created InternalRunDeathTestFlag object with fields
// initialized from the GTEST_FLAG(internal_run_death_test) flag if
// the flag is specified; otherwise returns NULL.
InternalRunDeathTestFlag* ParseInternalRunDeathTestFlag() {
  if (GTEST_FLAG(internal_run_death_test) == "") return nullptr;

  // GTEST_HAS_DEATH_TEST implies that we have ::std::string, so we
  // can use it here.
  int line = -1;
  int index = -1;
  ::std::vector< ::std::string> fields;
  SplitString(GTEST_FLAG(internal_run_death_test).c_str(), '|', &fields);
  int write_fd = -1;

# if GTEST_OS_WINDOWS

  unsigned int parent_process_id = 0;
  size_t write_handle_as_size_t = 0;
  size_t event_handle_as_size_t = 0;

  if (fields.size() != 6
      || !ParseNaturalNumber(fields[1], &line)
      || !ParseNaturalNumber(fields[2], &index)
      || !ParseNaturalNumber(fields[3], &parent_process_id)
      || !ParseNaturalNumber(fields[4], &write_handle_as_size_t)
      || !ParseNaturalNumber(fields[5], &event_handle_as_size_t)) {
    DeathTestAbort("Bad --gtest_internal_run_death_test flag: " +
                   GTEST_FLAG(internal_run_death_test));
  }
  write_fd = GetStatusFileDescriptor(parent_process_id,
                                     write_handle_as_size_t,
                                     event_handle_as_size_t);

# elif GTEST_OS_FUCHSIA

  if (fields.size() != 3
      || !ParseNaturalNumber(fields[1], &line)
      || !ParseNaturalNumber(fields[2], &index)) {
    DeathTestAbort("Bad --gtest_internal_run_death_test flag: "
        + GTEST_FLAG(internal_run_death_test));
  }

# else

  if (fields.size() != 4
      || !ParseNaturalNumber(fields[1], &line)
      || !ParseNaturalNumber(fields[2], &index)
      || !ParseNaturalNumber(fields[3], &write_fd)) {
    DeathTestAbort("Bad --gtest_internal_run_death_test flag: "
        + GTEST_FLAG(internal_run_death_test));
  }

# endif  // GTEST_OS_WINDOWS

  return new InternalRunDeathTestFlag(fields[0], line, index, write_fd);
}

}  // namespace internal

#endif  // GTEST_HAS_DEATH_TEST

}  // namespace testing
