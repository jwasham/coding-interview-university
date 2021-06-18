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
// Tests for death tests.

#include "gtest/gtest-death-test.h"

#include "gtest/gtest.h"
#include "gtest/internal/gtest-filepath.h"

using testing::internal::AlwaysFalse;
using testing::internal::AlwaysTrue;

#if GTEST_HAS_DEATH_TEST

# if GTEST_OS_WINDOWS
#  include <fcntl.h>           // For O_BINARY
#  include <direct.h>          // For chdir().
#  include <io.h>
# else
#  include <unistd.h>
#  include <sys/wait.h>        // For waitpid.
# endif  // GTEST_OS_WINDOWS

# include <limits.h>
# include <signal.h>
# include <stdio.h>

# if GTEST_OS_LINUX
#  include <sys/time.h>
# endif  // GTEST_OS_LINUX

# include "gtest/gtest-spi.h"
# include "src/gtest-internal-inl.h"

namespace posix = ::testing::internal::posix;

using testing::ContainsRegex;
using testing::Matcher;
using testing::Message;
using testing::internal::DeathTest;
using testing::internal::DeathTestFactory;
using testing::internal::FilePath;
using testing::internal::GetLastErrnoDescription;
using testing::internal::GetUnitTestImpl;
using testing::internal::InDeathTestChild;
using testing::internal::ParseNaturalNumber;

namespace testing {
namespace internal {

// A helper class whose objects replace the death test factory for a
// single UnitTest object during their lifetimes.
class ReplaceDeathTestFactory {
 public:
  explicit ReplaceDeathTestFactory(DeathTestFactory* new_factory)
      : unit_test_impl_(GetUnitTestImpl()) {
    old_factory_ = unit_test_impl_->death_test_factory_.release();
    unit_test_impl_->death_test_factory_.reset(new_factory);
  }

  ~ReplaceDeathTestFactory() {
    unit_test_impl_->death_test_factory_.release();
    unit_test_impl_->death_test_factory_.reset(old_factory_);
  }
 private:
  // Prevents copying ReplaceDeathTestFactory objects.
  ReplaceDeathTestFactory(const ReplaceDeathTestFactory&);
  void operator=(const ReplaceDeathTestFactory&);

  UnitTestImpl* unit_test_impl_;
  DeathTestFactory* old_factory_;
};

}  // namespace internal
}  // namespace testing

namespace {

void DieWithMessage(const ::std::string& message) {
  fprintf(stderr, "%s", message.c_str());
  fflush(stderr);  // Make sure the text is printed before the process exits.

  // We call _exit() instead of exit(), as the former is a direct
  // system call and thus safer in the presence of threads.  exit()
  // will invoke user-defined exit-hooks, which may do dangerous
  // things that conflict with death tests.
  //
  // Some compilers can recognize that _exit() never returns and issue the
  // 'unreachable code' warning for code following this function, unless
  // fooled by a fake condition.
  if (AlwaysTrue())
    _exit(1);
}

void DieInside(const ::std::string& function) {
  DieWithMessage("death inside " + function + "().");
}

// Tests that death tests work.

class TestForDeathTest : public testing::Test {
 protected:
  TestForDeathTest() : original_dir_(FilePath::GetCurrentDir()) {}

  ~TestForDeathTest() override { posix::ChDir(original_dir_.c_str()); }

  // A static member function that's expected to die.
  static void StaticMemberFunction() { DieInside("StaticMemberFunction"); }

  // A method of the test fixture that may die.
  void MemberFunction() {
    if (should_die_)
      DieInside("MemberFunction");
  }

  // True if and only if MemberFunction() should die.
  bool should_die_;
  const FilePath original_dir_;
};

// A class with a member function that may die.
class MayDie {
 public:
  explicit MayDie(bool should_die) : should_die_(should_die) {}

  // A member function that may die.
  void MemberFunction() const {
    if (should_die_)
      DieInside("MayDie::MemberFunction");
  }

 private:
  // True if and only if MemberFunction() should die.
  bool should_die_;
};

// A global function that's expected to die.
void GlobalFunction() { DieInside("GlobalFunction"); }

// A non-void function that's expected to die.
int NonVoidFunction() {
  DieInside("NonVoidFunction");
  return 1;
}

// A unary function that may die.
void DieIf(bool should_die) {
  if (should_die)
    DieInside("DieIf");
}

// A binary function that may die.
bool DieIfLessThan(int x, int y) {
  if (x < y) {
    DieInside("DieIfLessThan");
  }
  return true;
}

// Tests that ASSERT_DEATH can be used outside a TEST, TEST_F, or test fixture.
void DeathTestSubroutine() {
  EXPECT_DEATH(GlobalFunction(), "death.*GlobalFunction");
  ASSERT_DEATH(GlobalFunction(), "death.*GlobalFunction");
}

// Death in dbg, not opt.
int DieInDebugElse12(int* sideeffect) {
  if (sideeffect) *sideeffect = 12;

# ifndef NDEBUG

  DieInside("DieInDebugElse12");

# endif  // NDEBUG

  return 12;
}

# if GTEST_OS_WINDOWS

// Death in dbg due to Windows CRT assertion failure, not opt.
int DieInCRTDebugElse12(int* sideeffect) {
  if (sideeffect) *sideeffect = 12;

  // Create an invalid fd by closing a valid one
  int fdpipe[2];
  EXPECT_EQ(_pipe(fdpipe, 256, O_BINARY), 0);
  EXPECT_EQ(_close(fdpipe[0]), 0);
  EXPECT_EQ(_close(fdpipe[1]), 0);

  // _dup() should crash in debug mode
  EXPECT_EQ(_dup(fdpipe[0]), -1);

  return 12;
}

#endif  // GTEST_OS_WINDOWS

# if GTEST_OS_WINDOWS || GTEST_OS_FUCHSIA

// Tests the ExitedWithCode predicate.
TEST(ExitStatusPredicateTest, ExitedWithCode) {
  // On Windows, the process's exit code is the same as its exit status,
  // so the predicate just compares the its input with its parameter.
  EXPECT_TRUE(testing::ExitedWithCode(0)(0));
  EXPECT_TRUE(testing::ExitedWithCode(1)(1));
  EXPECT_TRUE(testing::ExitedWithCode(42)(42));
  EXPECT_FALSE(testing::ExitedWithCode(0)(1));
  EXPECT_FALSE(testing::ExitedWithCode(1)(0));
}

# else

// Returns the exit status of a process that calls _exit(2) with a
// given exit code.  This is a helper function for the
// ExitStatusPredicateTest test suite.
static int NormalExitStatus(int exit_code) {
  pid_t child_pid = fork();
  if (child_pid == 0) {
    _exit(exit_code);
  }
  int status;
  waitpid(child_pid, &status, 0);
  return status;
}

// Returns the exit status of a process that raises a given signal.
// If the signal does not cause the process to die, then it returns
// instead the exit status of a process that exits normally with exit
// code 1.  This is a helper function for the ExitStatusPredicateTest
// test suite.
static int KilledExitStatus(int signum) {
  pid_t child_pid = fork();
  if (child_pid == 0) {
    raise(signum);
    _exit(1);
  }
  int status;
  waitpid(child_pid, &status, 0);
  return status;
}

// Tests the ExitedWithCode predicate.
TEST(ExitStatusPredicateTest, ExitedWithCode) {
  const int status0  = NormalExitStatus(0);
  const int status1  = NormalExitStatus(1);
  const int status42 = NormalExitStatus(42);
  const testing::ExitedWithCode pred0(0);
  const testing::ExitedWithCode pred1(1);
  const testing::ExitedWithCode pred42(42);
  EXPECT_PRED1(pred0,  status0);
  EXPECT_PRED1(pred1,  status1);
  EXPECT_PRED1(pred42, status42);
  EXPECT_FALSE(pred0(status1));
  EXPECT_FALSE(pred42(status0));
  EXPECT_FALSE(pred1(status42));
}

// Tests the KilledBySignal predicate.
TEST(ExitStatusPredicateTest, KilledBySignal) {
  const int status_segv = KilledExitStatus(SIGSEGV);
  const int status_kill = KilledExitStatus(SIGKILL);
  const testing::KilledBySignal pred_segv(SIGSEGV);
  const testing::KilledBySignal pred_kill(SIGKILL);
  EXPECT_PRED1(pred_segv, status_segv);
  EXPECT_PRED1(pred_kill, status_kill);
  EXPECT_FALSE(pred_segv(status_kill));
  EXPECT_FALSE(pred_kill(status_segv));
}

# endif  // GTEST_OS_WINDOWS || GTEST_OS_FUCHSIA

// Tests that the death test macros expand to code which may or may not
// be followed by operator<<, and that in either case the complete text
// comprises only a single C++ statement.
TEST_F(TestForDeathTest, SingleStatement) {
  if (AlwaysFalse())
    // This would fail if executed; this is a compilation test only
    ASSERT_DEATH(return, "");

  if (AlwaysTrue())
    EXPECT_DEATH(_exit(1), "");
  else
    // This empty "else" branch is meant to ensure that EXPECT_DEATH
    // doesn't expand into an "if" statement without an "else"
    ;

  if (AlwaysFalse())
    ASSERT_DEATH(return, "") << "did not die";

  if (AlwaysFalse())
    ;
  else
    EXPECT_DEATH(_exit(1), "") << 1 << 2 << 3;
}

# if GTEST_USES_PCRE

void DieWithEmbeddedNul() {
  fprintf(stderr, "Hello%cmy null world.\n", '\0');
  fflush(stderr);
  _exit(1);
}

// Tests that EXPECT_DEATH and ASSERT_DEATH work when the error
// message has a NUL character in it.
TEST_F(TestForDeathTest, EmbeddedNulInMessage) {
  EXPECT_DEATH(DieWithEmbeddedNul(), "my null world");
  ASSERT_DEATH(DieWithEmbeddedNul(), "my null world");
}

# endif  // GTEST_USES_PCRE

// Tests that death test macros expand to code which interacts well with switch
// statements.
TEST_F(TestForDeathTest, SwitchStatement) {
  // Microsoft compiler usually complains about switch statements without
  // case labels. We suppress that warning for this test.
  GTEST_DISABLE_MSC_WARNINGS_PUSH_(4065)

  switch (0)
    default:
      ASSERT_DEATH(_exit(1), "") << "exit in default switch handler";

  switch (0)
    case 0:
      EXPECT_DEATH(_exit(1), "") << "exit in switch case";

  GTEST_DISABLE_MSC_WARNINGS_POP_()
}

// Tests that a static member function can be used in a "fast" style
// death test.
TEST_F(TestForDeathTest, StaticMemberFunctionFastStyle) {
  testing::GTEST_FLAG(death_test_style) = "fast";
  ASSERT_DEATH(StaticMemberFunction(), "death.*StaticMember");
}

// Tests that a method of the test fixture can be used in a "fast"
// style death test.
TEST_F(TestForDeathTest, MemberFunctionFastStyle) {
  testing::GTEST_FLAG(death_test_style) = "fast";
  should_die_ = true;
  EXPECT_DEATH(MemberFunction(), "inside.*MemberFunction");
}

void ChangeToRootDir() { posix::ChDir(GTEST_PATH_SEP_); }

// Tests that death tests work even if the current directory has been
// changed.
TEST_F(TestForDeathTest, FastDeathTestInChangedDir) {
  testing::GTEST_FLAG(death_test_style) = "fast";

  ChangeToRootDir();
  EXPECT_EXIT(_exit(1), testing::ExitedWithCode(1), "");

  ChangeToRootDir();
  ASSERT_DEATH(_exit(1), "");
}

# if GTEST_OS_LINUX
void SigprofAction(int, siginfo_t*, void*) { /* no op */ }

// Sets SIGPROF action and ITIMER_PROF timer (interval: 1ms).
void SetSigprofActionAndTimer() {
  struct itimerval timer;
  timer.it_interval.tv_sec = 0;
  timer.it_interval.tv_usec = 1;
  timer.it_value = timer.it_interval;
  ASSERT_EQ(0, setitimer(ITIMER_PROF, &timer, nullptr));
  struct sigaction signal_action;
  memset(&signal_action, 0, sizeof(signal_action));
  sigemptyset(&signal_action.sa_mask);
  signal_action.sa_sigaction = SigprofAction;
  signal_action.sa_flags = SA_RESTART | SA_SIGINFO;
  ASSERT_EQ(0, sigaction(SIGPROF, &signal_action, nullptr));
}

// Disables ITIMER_PROF timer and ignores SIGPROF signal.
void DisableSigprofActionAndTimer(struct sigaction* old_signal_action) {
  struct itimerval timer;
  timer.it_interval.tv_sec = 0;
  timer.it_interval.tv_usec = 0;
  timer.it_value = timer.it_interval;
  ASSERT_EQ(0, setitimer(ITIMER_PROF, &timer, nullptr));
  struct sigaction signal_action;
  memset(&signal_action, 0, sizeof(signal_action));
  sigemptyset(&signal_action.sa_mask);
  signal_action.sa_handler = SIG_IGN;
  ASSERT_EQ(0, sigaction(SIGPROF, &signal_action, old_signal_action));
}

// Tests that death tests work when SIGPROF handler and timer are set.
TEST_F(TestForDeathTest, FastSigprofActionSet) {
  testing::GTEST_FLAG(death_test_style) = "fast";
  SetSigprofActionAndTimer();
  EXPECT_DEATH(_exit(1), "");
  struct sigaction old_signal_action;
  DisableSigprofActionAndTimer(&old_signal_action);
  EXPECT_TRUE(old_signal_action.sa_sigaction == SigprofAction);
}

TEST_F(TestForDeathTest, ThreadSafeSigprofActionSet) {
  testing::GTEST_FLAG(death_test_style) = "threadsafe";
  SetSigprofActionAndTimer();
  EXPECT_DEATH(_exit(1), "");
  struct sigaction old_signal_action;
  DisableSigprofActionAndTimer(&old_signal_action);
  EXPECT_TRUE(old_signal_action.sa_sigaction == SigprofAction);
}
# endif  // GTEST_OS_LINUX

// Repeats a representative sample of death tests in the "threadsafe" style:

TEST_F(TestForDeathTest, StaticMemberFunctionThreadsafeStyle) {
  testing::GTEST_FLAG(death_test_style) = "threadsafe";
  ASSERT_DEATH(StaticMemberFunction(), "death.*StaticMember");
}

TEST_F(TestForDeathTest, MemberFunctionThreadsafeStyle) {
  testing::GTEST_FLAG(death_test_style) = "threadsafe";
  should_die_ = true;
  EXPECT_DEATH(MemberFunction(), "inside.*MemberFunction");
}

TEST_F(TestForDeathTest, ThreadsafeDeathTestInLoop) {
  testing::GTEST_FLAG(death_test_style) = "threadsafe";

  for (int i = 0; i < 3; ++i)
    EXPECT_EXIT(_exit(i), testing::ExitedWithCode(i), "") << ": i = " << i;
}

TEST_F(TestForDeathTest, ThreadsafeDeathTestInChangedDir) {
  testing::GTEST_FLAG(death_test_style) = "threadsafe";

  ChangeToRootDir();
  EXPECT_EXIT(_exit(1), testing::ExitedWithCode(1), "");

  ChangeToRootDir();
  ASSERT_DEATH(_exit(1), "");
}

TEST_F(TestForDeathTest, MixedStyles) {
  testing::GTEST_FLAG(death_test_style) = "threadsafe";
  EXPECT_DEATH(_exit(1), "");
  testing::GTEST_FLAG(death_test_style) = "fast";
  EXPECT_DEATH(_exit(1), "");
}

# if GTEST_HAS_CLONE && GTEST_HAS_PTHREAD

bool pthread_flag;

void SetPthreadFlag() {
  pthread_flag = true;
}

TEST_F(TestForDeathTest, DoesNotExecuteAtforkHooks) {
  if (!testing::GTEST_FLAG(death_test_use_fork)) {
    testing::GTEST_FLAG(death_test_style) = "threadsafe";
    pthread_flag = false;
    ASSERT_EQ(0, pthread_atfork(&SetPthreadFlag, nullptr, nullptr));
    ASSERT_DEATH(_exit(1), "");
    ASSERT_FALSE(pthread_flag);
  }
}

# endif  // GTEST_HAS_CLONE && GTEST_HAS_PTHREAD

// Tests that a method of another class can be used in a death test.
TEST_F(TestForDeathTest, MethodOfAnotherClass) {
  const MayDie x(true);
  ASSERT_DEATH(x.MemberFunction(), "MayDie\\:\\:MemberFunction");
}

// Tests that a global function can be used in a death test.
TEST_F(TestForDeathTest, GlobalFunction) {
  EXPECT_DEATH(GlobalFunction(), "GlobalFunction");
}

// Tests that any value convertible to an RE works as a second
// argument to EXPECT_DEATH.
TEST_F(TestForDeathTest, AcceptsAnythingConvertibleToRE) {
  static const char regex_c_str[] = "GlobalFunction";
  EXPECT_DEATH(GlobalFunction(), regex_c_str);

  const testing::internal::RE regex(regex_c_str);
  EXPECT_DEATH(GlobalFunction(), regex);

# if !GTEST_USES_PCRE

  const ::std::string regex_std_str(regex_c_str);
  EXPECT_DEATH(GlobalFunction(), regex_std_str);

  // This one is tricky; a temporary pointer into another temporary.  Reference
  // lifetime extension of the pointer is not sufficient.
  EXPECT_DEATH(GlobalFunction(), ::std::string(regex_c_str).c_str());

# endif  // !GTEST_USES_PCRE
}

// Tests that a non-void function can be used in a death test.
TEST_F(TestForDeathTest, NonVoidFunction) {
  ASSERT_DEATH(NonVoidFunction(), "NonVoidFunction");
}

// Tests that functions that take parameter(s) can be used in a death test.
TEST_F(TestForDeathTest, FunctionWithParameter) {
  EXPECT_DEATH(DieIf(true), "DieIf\\(\\)");
  EXPECT_DEATH(DieIfLessThan(2, 3), "DieIfLessThan");
}

// Tests that ASSERT_DEATH can be used outside a TEST, TEST_F, or test fixture.
TEST_F(TestForDeathTest, OutsideFixture) {
  DeathTestSubroutine();
}

// Tests that death tests can be done inside a loop.
TEST_F(TestForDeathTest, InsideLoop) {
  for (int i = 0; i < 5; i++) {
    EXPECT_DEATH(DieIfLessThan(-1, i), "DieIfLessThan") << "where i == " << i;
  }
}

// Tests that a compound statement can be used in a death test.
TEST_F(TestForDeathTest, CompoundStatement) {
  EXPECT_DEATH({  // NOLINT
    const int x = 2;
    const int y = x + 1;
    DieIfLessThan(x, y);
  },
  "DieIfLessThan");
}

// Tests that code that doesn't die causes a death test to fail.
TEST_F(TestForDeathTest, DoesNotDie) {
  EXPECT_NONFATAL_FAILURE(EXPECT_DEATH(DieIf(false), "DieIf"),
                          "failed to die");
}

// Tests that a death test fails when the error message isn't expected.
TEST_F(TestForDeathTest, ErrorMessageMismatch) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_DEATH(DieIf(true), "DieIfLessThan") << "End of death test message.";
  }, "died but not with expected error");
}

// On exit, *aborted will be true if and only if the EXPECT_DEATH()
// statement aborted the function.
void ExpectDeathTestHelper(bool* aborted) {
  *aborted = true;
  EXPECT_DEATH(DieIf(false), "DieIf");  // This assertion should fail.
  *aborted = false;
}

// Tests that EXPECT_DEATH doesn't abort the test on failure.
TEST_F(TestForDeathTest, EXPECT_DEATH) {
  bool aborted = true;
  EXPECT_NONFATAL_FAILURE(ExpectDeathTestHelper(&aborted),
                          "failed to die");
  EXPECT_FALSE(aborted);
}

// Tests that ASSERT_DEATH does abort the test on failure.
TEST_F(TestForDeathTest, ASSERT_DEATH) {
  static bool aborted;
  EXPECT_FATAL_FAILURE({  // NOLINT
    aborted = true;
    ASSERT_DEATH(DieIf(false), "DieIf");  // This assertion should fail.
    aborted = false;
  }, "failed to die");
  EXPECT_TRUE(aborted);
}

// Tests that EXPECT_DEATH evaluates the arguments exactly once.
TEST_F(TestForDeathTest, SingleEvaluation) {
  int x = 3;
  EXPECT_DEATH(DieIf((++x) == 4), "DieIf");

  const char* regex = "DieIf";
  const char* regex_save = regex;
  EXPECT_DEATH(DieIfLessThan(3, 4), regex++);
  EXPECT_EQ(regex_save + 1, regex);
}

// Tests that run-away death tests are reported as failures.
TEST_F(TestForDeathTest, RunawayIsFailure) {
  EXPECT_NONFATAL_FAILURE(EXPECT_DEATH(static_cast<void>(0), "Foo"),
                          "failed to die.");
}

// Tests that death tests report executing 'return' in the statement as
// failure.
TEST_F(TestForDeathTest, ReturnIsFailure) {
  EXPECT_FATAL_FAILURE(ASSERT_DEATH(return, "Bar"),
                       "illegal return in test statement.");
}

// Tests that EXPECT_DEBUG_DEATH works as expected, that is, you can stream a
// message to it, and in debug mode it:
// 1. Asserts on death.
// 2. Has no side effect.
//
// And in opt mode, it:
// 1.  Has side effects but does not assert.
TEST_F(TestForDeathTest, TestExpectDebugDeath) {
  int sideeffect = 0;

  // Put the regex in a local variable to make sure we don't get an "unused"
  // warning in opt mode.
  const char* regex = "death.*DieInDebugElse12";

  EXPECT_DEBUG_DEATH(DieInDebugElse12(&sideeffect), regex)
      << "Must accept a streamed message";

# ifdef NDEBUG

  // Checks that the assignment occurs in opt mode (sideeffect).
  EXPECT_EQ(12, sideeffect);

# else

  // Checks that the assignment does not occur in dbg mode (no sideeffect).
  EXPECT_EQ(0, sideeffect);

# endif
}

# if GTEST_OS_WINDOWS

// Tests that EXPECT_DEBUG_DEATH works as expected when in debug mode
// the Windows CRT crashes the process with an assertion failure.
// 1. Asserts on death.
// 2. Has no side effect (doesn't pop up a window or wait for user input).
//
// And in opt mode, it:
// 1.  Has side effects but does not assert.
TEST_F(TestForDeathTest, CRTDebugDeath) {
  int sideeffect = 0;

  // Put the regex in a local variable to make sure we don't get an "unused"
  // warning in opt mode.
  const char* regex = "dup.* : Assertion failed";

  EXPECT_DEBUG_DEATH(DieInCRTDebugElse12(&sideeffect), regex)
      << "Must accept a streamed message";

# ifdef NDEBUG

  // Checks that the assignment occurs in opt mode (sideeffect).
  EXPECT_EQ(12, sideeffect);

# else

  // Checks that the assignment does not occur in dbg mode (no sideeffect).
  EXPECT_EQ(0, sideeffect);

# endif
}

# endif  // GTEST_OS_WINDOWS

// Tests that ASSERT_DEBUG_DEATH works as expected, that is, you can stream a
// message to it, and in debug mode it:
// 1. Asserts on death.
// 2. Has no side effect.
//
// And in opt mode, it:
// 1.  Has side effects but does not assert.
TEST_F(TestForDeathTest, TestAssertDebugDeath) {
  int sideeffect = 0;

  ASSERT_DEBUG_DEATH(DieInDebugElse12(&sideeffect), "death.*DieInDebugElse12")
      << "Must accept a streamed message";

# ifdef NDEBUG

  // Checks that the assignment occurs in opt mode (sideeffect).
  EXPECT_EQ(12, sideeffect);

# else

  // Checks that the assignment does not occur in dbg mode (no sideeffect).
  EXPECT_EQ(0, sideeffect);

# endif
}

# ifndef NDEBUG

void ExpectDebugDeathHelper(bool* aborted) {
  *aborted = true;
  EXPECT_DEBUG_DEATH(return, "") << "This is expected to fail.";
  *aborted = false;
}

#  if GTEST_OS_WINDOWS
TEST(PopUpDeathTest, DoesNotShowPopUpOnAbort) {
  printf("This test should be considered failing if it shows "
         "any pop-up dialogs.\n");
  fflush(stdout);

  EXPECT_DEATH({
    testing::GTEST_FLAG(catch_exceptions) = false;
    abort();
  }, "");
}
#  endif  // GTEST_OS_WINDOWS

// Tests that EXPECT_DEBUG_DEATH in debug mode does not abort
// the function.
TEST_F(TestForDeathTest, ExpectDebugDeathDoesNotAbort) {
  bool aborted = true;
  EXPECT_NONFATAL_FAILURE(ExpectDebugDeathHelper(&aborted), "");
  EXPECT_FALSE(aborted);
}

void AssertDebugDeathHelper(bool* aborted) {
  *aborted = true;
  GTEST_LOG_(INFO) << "Before ASSERT_DEBUG_DEATH";
  ASSERT_DEBUG_DEATH(GTEST_LOG_(INFO) << "In ASSERT_DEBUG_DEATH"; return, "")
      << "This is expected to fail.";
  GTEST_LOG_(INFO) << "After ASSERT_DEBUG_DEATH";
  *aborted = false;
}

// Tests that ASSERT_DEBUG_DEATH in debug mode aborts the function on
// failure.
TEST_F(TestForDeathTest, AssertDebugDeathAborts) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

TEST_F(TestForDeathTest, AssertDebugDeathAborts2) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

TEST_F(TestForDeathTest, AssertDebugDeathAborts3) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

TEST_F(TestForDeathTest, AssertDebugDeathAborts4) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

TEST_F(TestForDeathTest, AssertDebugDeathAborts5) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

TEST_F(TestForDeathTest, AssertDebugDeathAborts6) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

TEST_F(TestForDeathTest, AssertDebugDeathAborts7) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

TEST_F(TestForDeathTest, AssertDebugDeathAborts8) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

TEST_F(TestForDeathTest, AssertDebugDeathAborts9) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

TEST_F(TestForDeathTest, AssertDebugDeathAborts10) {
  static bool aborted;
  aborted = false;
  EXPECT_FATAL_FAILURE(AssertDebugDeathHelper(&aborted), "");
  EXPECT_TRUE(aborted);
}

# endif  // _NDEBUG

// Tests the *_EXIT family of macros, using a variety of predicates.
static void TestExitMacros() {
  EXPECT_EXIT(_exit(1),  testing::ExitedWithCode(1),  "");
  ASSERT_EXIT(_exit(42), testing::ExitedWithCode(42), "");

# if GTEST_OS_WINDOWS

  // Of all signals effects on the process exit code, only those of SIGABRT
  // are documented on Windows.
  // See https://msdn.microsoft.com/en-us/query-bi/m/dwwzkt4c.
  EXPECT_EXIT(raise(SIGABRT), testing::ExitedWithCode(3), "") << "b_ar";

# elif !GTEST_OS_FUCHSIA

  // Fuchsia has no unix signals.
  EXPECT_EXIT(raise(SIGKILL), testing::KilledBySignal(SIGKILL), "") << "foo";
  ASSERT_EXIT(raise(SIGUSR2), testing::KilledBySignal(SIGUSR2), "") << "bar";

  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_EXIT(_exit(0), testing::KilledBySignal(SIGSEGV), "")
      << "This failure is expected, too.";
  }, "This failure is expected, too.");

# endif  // GTEST_OS_WINDOWS

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_EXIT(raise(SIGSEGV), testing::ExitedWithCode(0), "")
      << "This failure is expected.";
  }, "This failure is expected.");
}

TEST_F(TestForDeathTest, ExitMacros) {
  TestExitMacros();
}

TEST_F(TestForDeathTest, ExitMacrosUsingFork) {
  testing::GTEST_FLAG(death_test_use_fork) = true;
  TestExitMacros();
}

TEST_F(TestForDeathTest, InvalidStyle) {
  testing::GTEST_FLAG(death_test_style) = "rococo";
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_DEATH(_exit(0), "") << "This failure is expected.";
  }, "This failure is expected.");
}

TEST_F(TestForDeathTest, DeathTestFailedOutput) {
  testing::GTEST_FLAG(death_test_style) = "fast";
  EXPECT_NONFATAL_FAILURE(
      EXPECT_DEATH(DieWithMessage("death\n"),
                   "expected message"),
      "Actual msg:\n"
      "[  DEATH   ] death\n");
}

TEST_F(TestForDeathTest, DeathTestUnexpectedReturnOutput) {
  testing::GTEST_FLAG(death_test_style) = "fast";
  EXPECT_NONFATAL_FAILURE(
      EXPECT_DEATH({
          fprintf(stderr, "returning\n");
          fflush(stderr);
          return;
        }, ""),
      "    Result: illegal return in test statement.\n"
      " Error msg:\n"
      "[  DEATH   ] returning\n");
}

TEST_F(TestForDeathTest, DeathTestBadExitCodeOutput) {
  testing::GTEST_FLAG(death_test_style) = "fast";
  EXPECT_NONFATAL_FAILURE(
      EXPECT_EXIT(DieWithMessage("exiting with rc 1\n"),
                  testing::ExitedWithCode(3),
                  "expected message"),
      "    Result: died but not with expected exit code:\n"
      "            Exited with exit status 1\n"
      "Actual msg:\n"
      "[  DEATH   ] exiting with rc 1\n");
}

TEST_F(TestForDeathTest, DeathTestMultiLineMatchFail) {
  testing::GTEST_FLAG(death_test_style) = "fast";
  EXPECT_NONFATAL_FAILURE(
      EXPECT_DEATH(DieWithMessage("line 1\nline 2\nline 3\n"),
                   "line 1\nxyz\nline 3\n"),
      "Actual msg:\n"
      "[  DEATH   ] line 1\n"
      "[  DEATH   ] line 2\n"
      "[  DEATH   ] line 3\n");
}

TEST_F(TestForDeathTest, DeathTestMultiLineMatchPass) {
  testing::GTEST_FLAG(death_test_style) = "fast";
  EXPECT_DEATH(DieWithMessage("line 1\nline 2\nline 3\n"),
               "line 1\nline 2\nline 3\n");
}

// A DeathTestFactory that returns MockDeathTests.
class MockDeathTestFactory : public DeathTestFactory {
 public:
  MockDeathTestFactory();
  bool Create(const char* statement,
              testing::Matcher<const std::string&> matcher, const char* file,
              int line, DeathTest** test) override;

  // Sets the parameters for subsequent calls to Create.
  void SetParameters(bool create, DeathTest::TestRole role,
                     int status, bool passed);

  // Accessors.
  int AssumeRoleCalls() const { return assume_role_calls_; }
  int WaitCalls() const { return wait_calls_; }
  size_t PassedCalls() const { return passed_args_.size(); }
  bool PassedArgument(int n) const {
    return passed_args_[static_cast<size_t>(n)];
  }
  size_t AbortCalls() const { return abort_args_.size(); }
  DeathTest::AbortReason AbortArgument(int n) const {
    return abort_args_[static_cast<size_t>(n)];
  }
  bool TestDeleted() const { return test_deleted_; }

 private:
  friend class MockDeathTest;
  // If true, Create will return a MockDeathTest; otherwise it returns
  // NULL.
  bool create_;
  // The value a MockDeathTest will return from its AssumeRole method.
  DeathTest::TestRole role_;
  // The value a MockDeathTest will return from its Wait method.
  int status_;
  // The value a MockDeathTest will return from its Passed method.
  bool passed_;

  // Number of times AssumeRole was called.
  int assume_role_calls_;
  // Number of times Wait was called.
  int wait_calls_;
  // The arguments to the calls to Passed since the last call to
  // SetParameters.
  std::vector<bool> passed_args_;
  // The arguments to the calls to Abort since the last call to
  // SetParameters.
  std::vector<DeathTest::AbortReason> abort_args_;
  // True if the last MockDeathTest returned by Create has been
  // deleted.
  bool test_deleted_;
};


// A DeathTest implementation useful in testing.  It returns values set
// at its creation from its various inherited DeathTest methods, and
// reports calls to those methods to its parent MockDeathTestFactory
// object.
class MockDeathTest : public DeathTest {
 public:
  MockDeathTest(MockDeathTestFactory *parent,
                TestRole role, int status, bool passed) :
      parent_(parent), role_(role), status_(status), passed_(passed) {
  }
  ~MockDeathTest() override { parent_->test_deleted_ = true; }
  TestRole AssumeRole() override {
    ++parent_->assume_role_calls_;
    return role_;
  }
  int Wait() override {
    ++parent_->wait_calls_;
    return status_;
  }
  bool Passed(bool exit_status_ok) override {
    parent_->passed_args_.push_back(exit_status_ok);
    return passed_;
  }
  void Abort(AbortReason reason) override {
    parent_->abort_args_.push_back(reason);
  }

 private:
  MockDeathTestFactory* const parent_;
  const TestRole role_;
  const int status_;
  const bool passed_;
};


// MockDeathTestFactory constructor.
MockDeathTestFactory::MockDeathTestFactory()
    : create_(true),
      role_(DeathTest::OVERSEE_TEST),
      status_(0),
      passed_(true),
      assume_role_calls_(0),
      wait_calls_(0),
      passed_args_(),
      abort_args_() {
}


// Sets the parameters for subsequent calls to Create.
void MockDeathTestFactory::SetParameters(bool create,
                                         DeathTest::TestRole role,
                                         int status, bool passed) {
  create_ = create;
  role_ = role;
  status_ = status;
  passed_ = passed;

  assume_role_calls_ = 0;
  wait_calls_ = 0;
  passed_args_.clear();
  abort_args_.clear();
}


// Sets test to NULL (if create_ is false) or to the address of a new
// MockDeathTest object with parameters taken from the last call
// to SetParameters (if create_ is true).  Always returns true.
bool MockDeathTestFactory::Create(
    const char* /*statement*/, testing::Matcher<const std::string&> /*matcher*/,
    const char* /*file*/, int /*line*/, DeathTest** test) {
  test_deleted_ = false;
  if (create_) {
    *test = new MockDeathTest(this, role_, status_, passed_);
  } else {
    *test = nullptr;
  }
  return true;
}

// A test fixture for testing the logic of the GTEST_DEATH_TEST_ macro.
// It installs a MockDeathTestFactory that is used for the duration
// of the test case.
class MacroLogicDeathTest : public testing::Test {
 protected:
  static testing::internal::ReplaceDeathTestFactory* replacer_;
  static MockDeathTestFactory* factory_;

  static void SetUpTestSuite() {
    factory_ = new MockDeathTestFactory;
    replacer_ = new testing::internal::ReplaceDeathTestFactory(factory_);
  }

  static void TearDownTestSuite() {
    delete replacer_;
    replacer_ = nullptr;
    delete factory_;
    factory_ = nullptr;
  }

  // Runs a death test that breaks the rules by returning.  Such a death
  // test cannot be run directly from a test routine that uses a
  // MockDeathTest, or the remainder of the routine will not be executed.
  static void RunReturningDeathTest(bool* flag) {
    ASSERT_DEATH({  // NOLINT
      *flag = true;
      return;
    }, "");
  }
};

testing::internal::ReplaceDeathTestFactory* MacroLogicDeathTest::replacer_ =
    nullptr;
MockDeathTestFactory* MacroLogicDeathTest::factory_ = nullptr;

// Test that nothing happens when the factory doesn't return a DeathTest:
TEST_F(MacroLogicDeathTest, NothingHappens) {
  bool flag = false;
  factory_->SetParameters(false, DeathTest::OVERSEE_TEST, 0, true);
  EXPECT_DEATH(flag = true, "");
  EXPECT_FALSE(flag);
  EXPECT_EQ(0, factory_->AssumeRoleCalls());
  EXPECT_EQ(0, factory_->WaitCalls());
  EXPECT_EQ(0U, factory_->PassedCalls());
  EXPECT_EQ(0U, factory_->AbortCalls());
  EXPECT_FALSE(factory_->TestDeleted());
}

// Test that the parent process doesn't run the death test code,
// and that the Passed method returns false when the (simulated)
// child process exits with status 0:
TEST_F(MacroLogicDeathTest, ChildExitsSuccessfully) {
  bool flag = false;
  factory_->SetParameters(true, DeathTest::OVERSEE_TEST, 0, true);
  EXPECT_DEATH(flag = true, "");
  EXPECT_FALSE(flag);
  EXPECT_EQ(1, factory_->AssumeRoleCalls());
  EXPECT_EQ(1, factory_->WaitCalls());
  ASSERT_EQ(1U, factory_->PassedCalls());
  EXPECT_FALSE(factory_->PassedArgument(0));
  EXPECT_EQ(0U, factory_->AbortCalls());
  EXPECT_TRUE(factory_->TestDeleted());
}

// Tests that the Passed method was given the argument "true" when
// the (simulated) child process exits with status 1:
TEST_F(MacroLogicDeathTest, ChildExitsUnsuccessfully) {
  bool flag = false;
  factory_->SetParameters(true, DeathTest::OVERSEE_TEST, 1, true);
  EXPECT_DEATH(flag = true, "");
  EXPECT_FALSE(flag);
  EXPECT_EQ(1, factory_->AssumeRoleCalls());
  EXPECT_EQ(1, factory_->WaitCalls());
  ASSERT_EQ(1U, factory_->PassedCalls());
  EXPECT_TRUE(factory_->PassedArgument(0));
  EXPECT_EQ(0U, factory_->AbortCalls());
  EXPECT_TRUE(factory_->TestDeleted());
}

// Tests that the (simulated) child process executes the death test
// code, and is aborted with the correct AbortReason if it
// executes a return statement.
TEST_F(MacroLogicDeathTest, ChildPerformsReturn) {
  bool flag = false;
  factory_->SetParameters(true, DeathTest::EXECUTE_TEST, 0, true);
  RunReturningDeathTest(&flag);
  EXPECT_TRUE(flag);
  EXPECT_EQ(1, factory_->AssumeRoleCalls());
  EXPECT_EQ(0, factory_->WaitCalls());
  EXPECT_EQ(0U, factory_->PassedCalls());
  EXPECT_EQ(1U, factory_->AbortCalls());
  EXPECT_EQ(DeathTest::TEST_ENCOUNTERED_RETURN_STATEMENT,
            factory_->AbortArgument(0));
  EXPECT_TRUE(factory_->TestDeleted());
}

// Tests that the (simulated) child process is aborted with the
// correct AbortReason if it does not die.
TEST_F(MacroLogicDeathTest, ChildDoesNotDie) {
  bool flag = false;
  factory_->SetParameters(true, DeathTest::EXECUTE_TEST, 0, true);
  EXPECT_DEATH(flag = true, "");
  EXPECT_TRUE(flag);
  EXPECT_EQ(1, factory_->AssumeRoleCalls());
  EXPECT_EQ(0, factory_->WaitCalls());
  EXPECT_EQ(0U, factory_->PassedCalls());
  // This time there are two calls to Abort: one since the test didn't
  // die, and another from the ReturnSentinel when it's destroyed.  The
  // sentinel normally isn't destroyed if a test doesn't die, since
  // _exit(2) is called in that case by ForkingDeathTest, but not by
  // our MockDeathTest.
  ASSERT_EQ(2U, factory_->AbortCalls());
  EXPECT_EQ(DeathTest::TEST_DID_NOT_DIE,
            factory_->AbortArgument(0));
  EXPECT_EQ(DeathTest::TEST_ENCOUNTERED_RETURN_STATEMENT,
            factory_->AbortArgument(1));
  EXPECT_TRUE(factory_->TestDeleted());
}

// Tests that a successful death test does not register a successful
// test part.
TEST(SuccessRegistrationDeathTest, NoSuccessPart) {
  EXPECT_DEATH(_exit(1), "");
  EXPECT_EQ(0, GetUnitTestImpl()->current_test_result()->total_part_count());
}

TEST(StreamingAssertionsDeathTest, DeathTest) {
  EXPECT_DEATH(_exit(1), "") << "unexpected failure";
  ASSERT_DEATH(_exit(1), "") << "unexpected failure";
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_DEATH(_exit(0), "") << "expected failure";
  }, "expected failure");
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_DEATH(_exit(0), "") << "expected failure";
  }, "expected failure");
}

// Tests that GetLastErrnoDescription returns an empty string when the
// last error is 0 and non-empty string when it is non-zero.
TEST(GetLastErrnoDescription, GetLastErrnoDescriptionWorks) {
  errno = ENOENT;
  EXPECT_STRNE("", GetLastErrnoDescription().c_str());
  errno = 0;
  EXPECT_STREQ("", GetLastErrnoDescription().c_str());
}

# if GTEST_OS_WINDOWS
TEST(AutoHandleTest, AutoHandleWorks) {
  HANDLE handle = ::CreateEvent(NULL, FALSE, FALSE, NULL);
  ASSERT_NE(INVALID_HANDLE_VALUE, handle);

  // Tests that the AutoHandle is correctly initialized with a handle.
  testing::internal::AutoHandle auto_handle(handle);
  EXPECT_EQ(handle, auto_handle.Get());

  // Tests that Reset assigns INVALID_HANDLE_VALUE.
  // Note that this cannot verify whether the original handle is closed.
  auto_handle.Reset();
  EXPECT_EQ(INVALID_HANDLE_VALUE, auto_handle.Get());

  // Tests that Reset assigns the new handle.
  // Note that this cannot verify whether the original handle is closed.
  handle = ::CreateEvent(NULL, FALSE, FALSE, NULL);
  ASSERT_NE(INVALID_HANDLE_VALUE, handle);
  auto_handle.Reset(handle);
  EXPECT_EQ(handle, auto_handle.Get());

  // Tests that AutoHandle contains INVALID_HANDLE_VALUE by default.
  testing::internal::AutoHandle auto_handle2;
  EXPECT_EQ(INVALID_HANDLE_VALUE, auto_handle2.Get());
}
# endif  // GTEST_OS_WINDOWS

# if GTEST_OS_WINDOWS
typedef unsigned __int64 BiggestParsable;
typedef signed __int64 BiggestSignedParsable;
# else
typedef unsigned long long BiggestParsable;
typedef signed long long BiggestSignedParsable;
# endif  // GTEST_OS_WINDOWS

// We cannot use std::numeric_limits<T>::max() as it clashes with the
// max() macro defined by <windows.h>.
const BiggestParsable kBiggestParsableMax = ULLONG_MAX;
const BiggestSignedParsable kBiggestSignedParsableMax = LLONG_MAX;

TEST(ParseNaturalNumberTest, RejectsInvalidFormat) {
  BiggestParsable result = 0;

  // Rejects non-numbers.
  EXPECT_FALSE(ParseNaturalNumber("non-number string", &result));

  // Rejects numbers with whitespace prefix.
  EXPECT_FALSE(ParseNaturalNumber(" 123", &result));

  // Rejects negative numbers.
  EXPECT_FALSE(ParseNaturalNumber("-123", &result));

  // Rejects numbers starting with a plus sign.
  EXPECT_FALSE(ParseNaturalNumber("+123", &result));
  errno = 0;
}

TEST(ParseNaturalNumberTest, RejectsOverflownNumbers) {
  BiggestParsable result = 0;

  EXPECT_FALSE(ParseNaturalNumber("99999999999999999999999", &result));

  signed char char_result = 0;
  EXPECT_FALSE(ParseNaturalNumber("200", &char_result));
  errno = 0;
}

TEST(ParseNaturalNumberTest, AcceptsValidNumbers) {
  BiggestParsable result = 0;

  result = 0;
  ASSERT_TRUE(ParseNaturalNumber("123", &result));
  EXPECT_EQ(123U, result);

  // Check 0 as an edge case.
  result = 1;
  ASSERT_TRUE(ParseNaturalNumber("0", &result));
  EXPECT_EQ(0U, result);

  result = 1;
  ASSERT_TRUE(ParseNaturalNumber("00000", &result));
  EXPECT_EQ(0U, result);
}

TEST(ParseNaturalNumberTest, AcceptsTypeLimits) {
  Message msg;
  msg << kBiggestParsableMax;

  BiggestParsable result = 0;
  EXPECT_TRUE(ParseNaturalNumber(msg.GetString(), &result));
  EXPECT_EQ(kBiggestParsableMax, result);

  Message msg2;
  msg2 << kBiggestSignedParsableMax;

  BiggestSignedParsable signed_result = 0;
  EXPECT_TRUE(ParseNaturalNumber(msg2.GetString(), &signed_result));
  EXPECT_EQ(kBiggestSignedParsableMax, signed_result);

  Message msg3;
  msg3 << INT_MAX;

  int int_result = 0;
  EXPECT_TRUE(ParseNaturalNumber(msg3.GetString(), &int_result));
  EXPECT_EQ(INT_MAX, int_result);

  Message msg4;
  msg4 << UINT_MAX;

  unsigned int uint_result = 0;
  EXPECT_TRUE(ParseNaturalNumber(msg4.GetString(), &uint_result));
  EXPECT_EQ(UINT_MAX, uint_result);
}

TEST(ParseNaturalNumberTest, WorksForShorterIntegers) {
  short short_result = 0;
  ASSERT_TRUE(ParseNaturalNumber("123", &short_result));
  EXPECT_EQ(123, short_result);

  signed char char_result = 0;
  ASSERT_TRUE(ParseNaturalNumber("123", &char_result));
  EXPECT_EQ(123, char_result);
}

# if GTEST_OS_WINDOWS
TEST(EnvironmentTest, HandleFitsIntoSizeT) {
  ASSERT_TRUE(sizeof(HANDLE) <= sizeof(size_t));
}
# endif  // GTEST_OS_WINDOWS

// Tests that EXPECT_DEATH_IF_SUPPORTED/ASSERT_DEATH_IF_SUPPORTED trigger
// failures when death tests are available on the system.
TEST(ConditionalDeathMacrosDeathTest, ExpectsDeathWhenDeathTestsAvailable) {
  EXPECT_DEATH_IF_SUPPORTED(DieInside("CondDeathTestExpectMacro"),
                            "death inside CondDeathTestExpectMacro");
  ASSERT_DEATH_IF_SUPPORTED(DieInside("CondDeathTestAssertMacro"),
                            "death inside CondDeathTestAssertMacro");

  // Empty statement will not crash, which must trigger a failure.
  EXPECT_NONFATAL_FAILURE(EXPECT_DEATH_IF_SUPPORTED(;, ""), "");
  EXPECT_FATAL_FAILURE(ASSERT_DEATH_IF_SUPPORTED(;, ""), "");
}

TEST(InDeathTestChildDeathTest, ReportsDeathTestCorrectlyInFastStyle) {
  testing::GTEST_FLAG(death_test_style) = "fast";
  EXPECT_FALSE(InDeathTestChild());
  EXPECT_DEATH({
    fprintf(stderr, InDeathTestChild() ? "Inside" : "Outside");
    fflush(stderr);
    _exit(1);
  }, "Inside");
}

TEST(InDeathTestChildDeathTest, ReportsDeathTestCorrectlyInThreadSafeStyle) {
  testing::GTEST_FLAG(death_test_style) = "threadsafe";
  EXPECT_FALSE(InDeathTestChild());
  EXPECT_DEATH({
    fprintf(stderr, InDeathTestChild() ? "Inside" : "Outside");
    fflush(stderr);
    _exit(1);
  }, "Inside");
}

void DieWithMessage(const char* message) {
  fputs(message, stderr);
  fflush(stderr);  // Make sure the text is printed before the process exits.
  _exit(1);
}

TEST(MatcherDeathTest, DoesNotBreakBareRegexMatching) {
  // googletest tests this, of course; here we ensure that including googlemock
  // has not broken it.
  EXPECT_DEATH(DieWithMessage("O, I die, Horatio."), "I d[aeiou]e");
}

TEST(MatcherDeathTest, MonomorphicMatcherMatches) {
  EXPECT_DEATH(DieWithMessage("Behind O, I am slain!"),
               Matcher<const std::string&>(ContainsRegex("I am slain")));
}

TEST(MatcherDeathTest, MonomorphicMatcherDoesNotMatch) {
  EXPECT_NONFATAL_FAILURE(
      EXPECT_DEATH(
          DieWithMessage("Behind O, I am slain!"),
          Matcher<const std::string&>(ContainsRegex("Ow, I am slain"))),
      "Expected: contains regular expression \"Ow, I am slain\"");
}

TEST(MatcherDeathTest, PolymorphicMatcherMatches) {
  EXPECT_DEATH(DieWithMessage("The rest is silence."),
               ContainsRegex("rest is silence"));
}

TEST(MatcherDeathTest, PolymorphicMatcherDoesNotMatch) {
  EXPECT_NONFATAL_FAILURE(
      EXPECT_DEATH(DieWithMessage("The rest is silence."),
                   ContainsRegex("rest is science")),
      "Expected: contains regular expression \"rest is science\"");
}

}  // namespace

#else  // !GTEST_HAS_DEATH_TEST follows

namespace {

using testing::internal::CaptureStderr;
using testing::internal::GetCapturedStderr;

// Tests that EXPECT_DEATH_IF_SUPPORTED/ASSERT_DEATH_IF_SUPPORTED are still
// defined but do not trigger failures when death tests are not available on
// the system.
TEST(ConditionalDeathMacrosTest, WarnsWhenDeathTestsNotAvailable) {
  // Empty statement will not crash, but that should not trigger a failure
  // when death tests are not supported.
  CaptureStderr();
  EXPECT_DEATH_IF_SUPPORTED(;, "");
  std::string output = GetCapturedStderr();
  ASSERT_TRUE(NULL != strstr(output.c_str(),
                             "Death tests are not supported on this platform"));
  ASSERT_TRUE(NULL != strstr(output.c_str(), ";"));

  // The streamed message should not be printed as there is no test failure.
  CaptureStderr();
  EXPECT_DEATH_IF_SUPPORTED(;, "") << "streamed message";
  output = GetCapturedStderr();
  ASSERT_TRUE(NULL == strstr(output.c_str(), "streamed message"));

  CaptureStderr();
  ASSERT_DEATH_IF_SUPPORTED(;, "");  // NOLINT
  output = GetCapturedStderr();
  ASSERT_TRUE(NULL != strstr(output.c_str(),
                             "Death tests are not supported on this platform"));
  ASSERT_TRUE(NULL != strstr(output.c_str(), ";"));

  CaptureStderr();
  ASSERT_DEATH_IF_SUPPORTED(;, "") << "streamed message";  // NOLINT
  output = GetCapturedStderr();
  ASSERT_TRUE(NULL == strstr(output.c_str(), "streamed message"));
}

void FuncWithAssert(int* n) {
  ASSERT_DEATH_IF_SUPPORTED(return;, "");
  (*n)++;
}

// Tests that ASSERT_DEATH_IF_SUPPORTED does not return from the current
// function (as ASSERT_DEATH does) if death tests are not supported.
TEST(ConditionalDeathMacrosTest, AssertDeatDoesNotReturnhIfUnsupported) {
  int n = 0;
  FuncWithAssert(&n);
  EXPECT_EQ(1, n);
}

}  // namespace

#endif  // !GTEST_HAS_DEATH_TEST

namespace {

// Tests that the death test macros expand to code which may or may not
// be followed by operator<<, and that in either case the complete text
// comprises only a single C++ statement.
//
// The syntax should work whether death tests are available or not.
TEST(ConditionalDeathMacrosSyntaxDeathTest, SingleStatement) {
  if (AlwaysFalse())
    // This would fail if executed; this is a compilation test only
    ASSERT_DEATH_IF_SUPPORTED(return, "");

  if (AlwaysTrue())
    EXPECT_DEATH_IF_SUPPORTED(_exit(1), "");
  else
    // This empty "else" branch is meant to ensure that EXPECT_DEATH
    // doesn't expand into an "if" statement without an "else"
    ;  // NOLINT

  if (AlwaysFalse())
    ASSERT_DEATH_IF_SUPPORTED(return, "") << "did not die";

  if (AlwaysFalse())
    ;  // NOLINT
  else
    EXPECT_DEATH_IF_SUPPORTED(_exit(1), "") << 1 << 2 << 3;
}

// Tests that conditional death test macros expand to code which interacts
// well with switch statements.
TEST(ConditionalDeathMacrosSyntaxDeathTest, SwitchStatement) {
  // Microsoft compiler usually complains about switch statements without
  // case labels. We suppress that warning for this test.
  GTEST_DISABLE_MSC_WARNINGS_PUSH_(4065)

  switch (0)
    default:
      ASSERT_DEATH_IF_SUPPORTED(_exit(1), "")
          << "exit in default switch handler";

  switch (0)
    case 0:
      EXPECT_DEATH_IF_SUPPORTED(_exit(1), "") << "exit in switch case";

  GTEST_DISABLE_MSC_WARNINGS_POP_()
}

// Tests that a test case whose name ends with "DeathTest" works fine
// on Windows.
TEST(NotADeathTest, Test) {
  SUCCEED();
}

}  // namespace
