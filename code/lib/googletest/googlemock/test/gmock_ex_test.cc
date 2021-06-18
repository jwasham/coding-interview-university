// Copyright 2013, Google Inc.
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


// Tests Google Mock's functionality that depends on exceptions.

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#if GTEST_HAS_EXCEPTIONS
namespace {

using testing::HasSubstr;

using testing::internal::GoogleTestFailureException;

// A type that cannot be default constructed.
class NonDefaultConstructible {
 public:
  explicit NonDefaultConstructible(int /* dummy */) {}
};

class MockFoo {
 public:
  // A mock method that returns a user-defined type.  Google Mock
  // doesn't know what the default value for this type is.
  MOCK_METHOD0(GetNonDefaultConstructible, NonDefaultConstructible());
};

TEST(DefaultValueTest, ThrowsRuntimeErrorWhenNoDefaultValue) {
  MockFoo mock;
  try {
    // No expectation is set on this method, so Google Mock must
    // return the default value.  However, since Google Mock knows
    // nothing about the return type, it doesn't know what to return,
    // and has to throw (when exceptions are enabled) or abort
    // (otherwise).
    mock.GetNonDefaultConstructible();
    FAIL() << "GetNonDefaultConstructible()'s return type has no default "
           << "value, so Google Mock should have thrown.";
  } catch (const GoogleTestFailureException& /* unused */) {
    FAIL() << "Google Test does not try to catch an exception of type "
           << "GoogleTestFailureException, which is used for reporting "
           << "a failure to other testing frameworks.  Google Mock should "
           << "not throw a GoogleTestFailureException as it will kill the "
           << "entire test program instead of just the current TEST.";
  } catch (const std::exception& ex) {
    EXPECT_THAT(ex.what(), HasSubstr("has no default value"));
  }
}


}  // unnamed namespace
#endif
