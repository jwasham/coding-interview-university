// Copyright 2006, Google Inc.
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


// Unit test for Google Test's break-on-failure mode.
//
// A user can ask Google Test to seg-fault when an assertion fails, using
// either the GTEST_BREAK_ON_FAILURE environment variable or the
// --gtest_break_on_failure flag.  This file is used for testing such
// functionality.
//
// This program will be invoked from a Python unit test.  It is
// expected to fail.  Don't run it directly.

#include "gtest/gtest.h"

#if GTEST_OS_WINDOWS
# include <windows.h>
# include <stdlib.h>
#endif

namespace {

// A test that's expected to fail.
TEST(Foo, Bar) {
  EXPECT_EQ(2, 3);
}

#if GTEST_HAS_SEH && !GTEST_OS_WINDOWS_MOBILE
// On Windows Mobile global exception handlers are not supported.
LONG WINAPI ExitWithExceptionCode(
    struct _EXCEPTION_POINTERS* exception_pointers) {
  exit(exception_pointers->ExceptionRecord->ExceptionCode);
}
#endif

}  // namespace

int main(int argc, char **argv) {
#if GTEST_OS_WINDOWS
  // Suppresses display of the Windows error dialog upon encountering
  // a general protection fault (segment violation).
  SetErrorMode(SEM_NOGPFAULTERRORBOX | SEM_FAILCRITICALERRORS);

# if GTEST_HAS_SEH && !GTEST_OS_WINDOWS_MOBILE

  // The default unhandled exception filter does not always exit
  // with the exception code as exit code - for example it exits with
  // 0 for EXCEPTION_ACCESS_VIOLATION and 1 for EXCEPTION_BREAKPOINT
  // if the application is compiled in debug mode. Thus we use our own
  // filter which always exits with the exception code for unhandled
  // exceptions.
  SetUnhandledExceptionFilter(ExitWithExceptionCode);

# endif
#endif  // GTEST_OS_WINDOWS
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
