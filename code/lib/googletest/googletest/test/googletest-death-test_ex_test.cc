// Copyright 2010, Google Inc.
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
// Tests that verify interaction of exceptions and death tests.

#include "gtest/gtest-death-test.h"
#include "gtest/gtest.h"

#if GTEST_HAS_DEATH_TEST

# if GTEST_HAS_SEH
#  include <windows.h>          // For RaiseException().
# endif

# include "gtest/gtest-spi.h"

# if GTEST_HAS_EXCEPTIONS

#  include <exception>  // For std::exception.

// Tests that death tests report thrown exceptions as failures and that the
// exceptions do not escape death test macros.
TEST(CxxExceptionDeathTest, ExceptionIsFailure) {
  try {
    EXPECT_NONFATAL_FAILURE(EXPECT_DEATH(throw 1, ""), "threw an exception");
  } catch (...) {  // NOLINT
    FAIL() << "An exception escaped a death test macro invocation "
           << "with catch_exceptions "
           << (testing::GTEST_FLAG(catch_exceptions) ? "enabled" : "disabled");
  }
}

class TestException : public std::exception {
 public:
  const char* what() const throw() override { return "exceptional message"; }
};

TEST(CxxExceptionDeathTest, PrintsMessageForStdExceptions) {
  // Verifies that the exception message is quoted in the failure text.
  EXPECT_NONFATAL_FAILURE(EXPECT_DEATH(throw TestException(), ""),
                          "exceptional message");
  // Verifies that the location is mentioned in the failure text.
  EXPECT_NONFATAL_FAILURE(EXPECT_DEATH(throw TestException(), ""),
                          __FILE__);
}
# endif  // GTEST_HAS_EXCEPTIONS

# if GTEST_HAS_SEH
// Tests that enabling interception of SEH exceptions with the
// catch_exceptions flag does not interfere with SEH exceptions being
// treated as death by death tests.
TEST(SehExceptionDeasTest, CatchExceptionsDoesNotInterfere) {
  EXPECT_DEATH(RaiseException(42, 0x0, 0, NULL), "")
      << "with catch_exceptions "
      << (testing::GTEST_FLAG(catch_exceptions) ? "enabled" : "disabled");
}
# endif

#endif  // GTEST_HAS_DEATH_TEST

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  testing::GTEST_FLAG(catch_exceptions) = GTEST_ENABLE_CATCH_EXCEPTIONS_ != 0;
  return RUN_ALL_TESTS();
}
