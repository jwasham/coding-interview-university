// Copyright 2008, Google Inc.
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


#include "gmock/gmock.h"
#include "gmock/internal/gmock-port.h"

namespace testing {

GMOCK_DEFINE_bool_(catch_leaked_mocks, true,
                   "true if and only if Google Mock should report leaked "
                   "mock objects as failures.");

GMOCK_DEFINE_string_(verbose, internal::kWarningVerbosity,
                     "Controls how verbose Google Mock's output is."
                     "  Valid values:\n"
                     "  info    - prints all messages.\n"
                     "  warning - prints warnings and errors.\n"
                     "  error   - prints errors only.");

GMOCK_DEFINE_int32_(default_mock_behavior, 1,
                    "Controls the default behavior of mocks."
                    "  Valid values:\n"
                    "  0 - by default, mocks act as NiceMocks.\n"
                    "  1 - by default, mocks act as NaggyMocks.\n"
                    "  2 - by default, mocks act as StrictMocks.");

namespace internal {

// Parses a string as a command line flag.  The string should have the
// format "--gmock_flag=value".  When def_optional is true, the
// "=value" part can be omitted.
//
// Returns the value of the flag, or NULL if the parsing failed.
static const char* ParseGoogleMockFlagValue(const char* str,
                                            const char* flag,
                                            bool def_optional) {
  // str and flag must not be NULL.
  if (str == nullptr || flag == nullptr) return nullptr;

  // The flag must start with "--gmock_".
  const std::string flag_str = std::string("--gmock_") + flag;
  const size_t flag_len = flag_str.length();
  if (strncmp(str, flag_str.c_str(), flag_len) != 0) return nullptr;

  // Skips the flag name.
  const char* flag_end = str + flag_len;

  // When def_optional is true, it's OK to not have a "=value" part.
  if (def_optional && (flag_end[0] == '\0')) {
    return flag_end;
  }

  // If def_optional is true and there are more characters after the
  // flag name, or if def_optional is false, there must be a '=' after
  // the flag name.
  if (flag_end[0] != '=') return nullptr;

  // Returns the string after "=".
  return flag_end + 1;
}

// Parses a string for a Google Mock bool flag, in the form of
// "--gmock_flag=value".
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
static bool ParseGoogleMockBoolFlag(const char* str, const char* flag,
                                    bool* value) {
  // Gets the value of the flag as a string.
  const char* const value_str = ParseGoogleMockFlagValue(str, flag, true);

  // Aborts if the parsing failed.
  if (value_str == nullptr) return false;

  // Converts the string value to a bool.
  *value = !(*value_str == '0' || *value_str == 'f' || *value_str == 'F');
  return true;
}

// Parses a string for a Google Mock string flag, in the form of
// "--gmock_flag=value".
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
template <typename String>
static bool ParseGoogleMockStringFlag(const char* str, const char* flag,
                                      String* value) {
  // Gets the value of the flag as a string.
  const char* const value_str = ParseGoogleMockFlagValue(str, flag, false);

  // Aborts if the parsing failed.
  if (value_str == nullptr) return false;

  // Sets *value to the value of the flag.
  *value = value_str;
  return true;
}

static bool ParseGoogleMockIntFlag(const char* str, const char* flag,
                                   int* value) {
  // Gets the value of the flag as a string.
  const char* const value_str = ParseGoogleMockFlagValue(str, flag, true);

  // Aborts if the parsing failed.
  if (value_str == nullptr) return false;

  // Sets *value to the value of the flag.
  return ParseInt32(Message() << "The value of flag --" << flag,
                    value_str, value);
}

// The internal implementation of InitGoogleMock().
//
// The type parameter CharType can be instantiated to either char or
// wchar_t.
template <typename CharType>
void InitGoogleMockImpl(int* argc, CharType** argv) {
  // Makes sure Google Test is initialized.  InitGoogleTest() is
  // idempotent, so it's fine if the user has already called it.
  InitGoogleTest(argc, argv);
  if (*argc <= 0) return;

  for (int i = 1; i != *argc; i++) {
    const std::string arg_string = StreamableToString(argv[i]);
    const char* const arg = arg_string.c_str();

    // Do we see a Google Mock flag?
    if (ParseGoogleMockBoolFlag(arg, "catch_leaked_mocks",
                                &GMOCK_FLAG(catch_leaked_mocks)) ||
        ParseGoogleMockStringFlag(arg, "verbose", &GMOCK_FLAG(verbose)) ||
        ParseGoogleMockIntFlag(arg, "default_mock_behavior",
                               &GMOCK_FLAG(default_mock_behavior))) {
      // Yes.  Shift the remainder of the argv list left by one.  Note
      // that argv has (*argc + 1) elements, the last one always being
      // NULL.  The following loop moves the trailing NULL element as
      // well.
      for (int j = i; j != *argc; j++) {
        argv[j] = argv[j + 1];
      }

      // Decrements the argument count.
      (*argc)--;

      // We also need to decrement the iterator as we just removed
      // an element.
      i--;
    }
  }
}

}  // namespace internal

// Initializes Google Mock.  This must be called before running the
// tests.  In particular, it parses a command line for the flags that
// Google Mock recognizes.  Whenever a Google Mock flag is seen, it is
// removed from argv, and *argc is decremented.
//
// No value is returned.  Instead, the Google Mock flag variables are
// updated.
//
// Since Google Test is needed for Google Mock to work, this function
// also initializes Google Test and parses its flags, if that hasn't
// been done.
GTEST_API_ void InitGoogleMock(int* argc, char** argv) {
  internal::InitGoogleMockImpl(argc, argv);
}

// This overloaded version can be used in Windows programs compiled in
// UNICODE mode.
GTEST_API_ void InitGoogleMock(int* argc, wchar_t** argv) {
  internal::InitGoogleMockImpl(argc, argv);
}

// This overloaded version can be used on Arduino/embedded platforms where
// there is no argc/argv.
GTEST_API_ void InitGoogleMock() {
  // Since Arduino doesn't have a command line, fake out the argc/argv arguments
  int argc = 1;
  const auto arg0 = "dummy";
  char* argv0 = const_cast<char*>(arg0);
  char** argv = &argv0;

  internal::InitGoogleMockImpl(&argc, argv);
}

}  // namespace testing
