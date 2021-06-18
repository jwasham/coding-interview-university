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
// Tests for Google Test itself. Tests in this file throw C++ or SEH
// exceptions, and the output is verified by
// googletest-catch-exceptions-test.py.

#include <stdio.h>  // NOLINT
#include <stdlib.h>  // For exit().

#include "gtest/gtest.h"

#if GTEST_HAS_SEH
# include <windows.h>
#endif

#if GTEST_HAS_EXCEPTIONS
# include <exception>  // For set_terminate().
# include <stdexcept>
#endif

using testing::Test;

#if GTEST_HAS_SEH

class SehExceptionInConstructorTest : public Test {
 public:
  SehExceptionInConstructorTest() { RaiseException(42, 0, 0, NULL); }
};

TEST_F(SehExceptionInConstructorTest, ThrowsExceptionInConstructor) {}

class SehExceptionInDestructorTest : public Test {
 public:
  ~SehExceptionInDestructorTest() { RaiseException(42, 0, 0, NULL); }
};

TEST_F(SehExceptionInDestructorTest, ThrowsExceptionInDestructor) {}

class SehExceptionInSetUpTestSuiteTest : public Test {
 public:
  static void SetUpTestSuite() { RaiseException(42, 0, 0, NULL); }
};

TEST_F(SehExceptionInSetUpTestSuiteTest, ThrowsExceptionInSetUpTestSuite) {}

class SehExceptionInTearDownTestSuiteTest : public Test {
 public:
  static void TearDownTestSuite() { RaiseException(42, 0, 0, NULL); }
};

TEST_F(SehExceptionInTearDownTestSuiteTest,
       ThrowsExceptionInTearDownTestSuite) {}

class SehExceptionInSetUpTest : public Test {
 protected:
  virtual void SetUp() { RaiseException(42, 0, 0, NULL); }
};

TEST_F(SehExceptionInSetUpTest, ThrowsExceptionInSetUp) {}

class SehExceptionInTearDownTest : public Test {
 protected:
  virtual void TearDown() { RaiseException(42, 0, 0, NULL); }
};

TEST_F(SehExceptionInTearDownTest, ThrowsExceptionInTearDown) {}

TEST(SehExceptionTest, ThrowsSehException) {
  RaiseException(42, 0, 0, NULL);
}

#endif  // GTEST_HAS_SEH

#if GTEST_HAS_EXCEPTIONS

class CxxExceptionInConstructorTest : public Test {
 public:
  CxxExceptionInConstructorTest() {
    // Without this macro VC++ complains about unreachable code at the end of
    // the constructor.
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(
        throw std::runtime_error("Standard C++ exception"));
  }

  static void TearDownTestSuite() {
    printf("%s",
           "CxxExceptionInConstructorTest::TearDownTestSuite() "
           "called as expected.\n");
  }

 protected:
  ~CxxExceptionInConstructorTest() override {
    ADD_FAILURE() << "CxxExceptionInConstructorTest destructor "
                  << "called unexpectedly.";
  }

  void SetUp() override {
    ADD_FAILURE() << "CxxExceptionInConstructorTest::SetUp() "
                  << "called unexpectedly.";
  }

  void TearDown() override {
    ADD_FAILURE() << "CxxExceptionInConstructorTest::TearDown() "
                  << "called unexpectedly.";
  }
};

TEST_F(CxxExceptionInConstructorTest, ThrowsExceptionInConstructor) {
  ADD_FAILURE() << "CxxExceptionInConstructorTest test body "
                << "called unexpectedly.";
}

class CxxExceptionInSetUpTestSuiteTest : public Test {
 public:
  CxxExceptionInSetUpTestSuiteTest() {
    printf("%s",
           "CxxExceptionInSetUpTestSuiteTest constructor "
           "called as expected.\n");
  }

  static void SetUpTestSuite() {
    throw std::runtime_error("Standard C++ exception");
  }

  static void TearDownTestSuite() {
    printf("%s",
           "CxxExceptionInSetUpTestSuiteTest::TearDownTestSuite() "
           "called as expected.\n");
  }

 protected:
  ~CxxExceptionInSetUpTestSuiteTest() override {
    printf("%s",
           "CxxExceptionInSetUpTestSuiteTest destructor "
           "called as expected.\n");
  }

  void SetUp() override {
    printf("%s",
           "CxxExceptionInSetUpTestSuiteTest::SetUp() "
           "called as expected.\n");
  }

  void TearDown() override {
    printf("%s",
           "CxxExceptionInSetUpTestSuiteTest::TearDown() "
           "called as expected.\n");
  }
};

TEST_F(CxxExceptionInSetUpTestSuiteTest, ThrowsExceptionInSetUpTestSuite) {
  printf("%s",
         "CxxExceptionInSetUpTestSuiteTest test body "
         "called as expected.\n");
}

class CxxExceptionInTearDownTestSuiteTest : public Test {
 public:
  static void TearDownTestSuite() {
    throw std::runtime_error("Standard C++ exception");
  }
};

TEST_F(CxxExceptionInTearDownTestSuiteTest,
       ThrowsExceptionInTearDownTestSuite) {}

class CxxExceptionInSetUpTest : public Test {
 public:
  static void TearDownTestSuite() {
    printf("%s",
           "CxxExceptionInSetUpTest::TearDownTestSuite() "
           "called as expected.\n");
  }

 protected:
  ~CxxExceptionInSetUpTest() override {
    printf("%s",
           "CxxExceptionInSetUpTest destructor "
           "called as expected.\n");
  }

  void SetUp() override { throw std::runtime_error("Standard C++ exception"); }

  void TearDown() override {
    printf("%s",
           "CxxExceptionInSetUpTest::TearDown() "
           "called as expected.\n");
  }
};

TEST_F(CxxExceptionInSetUpTest, ThrowsExceptionInSetUp) {
  ADD_FAILURE() << "CxxExceptionInSetUpTest test body "
                << "called unexpectedly.";
}

class CxxExceptionInTearDownTest : public Test {
 public:
  static void TearDownTestSuite() {
    printf("%s",
           "CxxExceptionInTearDownTest::TearDownTestSuite() "
           "called as expected.\n");
  }

 protected:
  ~CxxExceptionInTearDownTest() override {
    printf("%s",
           "CxxExceptionInTearDownTest destructor "
           "called as expected.\n");
  }

  void TearDown() override {
    throw std::runtime_error("Standard C++ exception");
  }
};

TEST_F(CxxExceptionInTearDownTest, ThrowsExceptionInTearDown) {}

class CxxExceptionInTestBodyTest : public Test {
 public:
  static void TearDownTestSuite() {
    printf("%s",
           "CxxExceptionInTestBodyTest::TearDownTestSuite() "
           "called as expected.\n");
  }

 protected:
  ~CxxExceptionInTestBodyTest() override {
    printf("%s",
           "CxxExceptionInTestBodyTest destructor "
           "called as expected.\n");
  }

  void TearDown() override {
    printf("%s",
           "CxxExceptionInTestBodyTest::TearDown() "
           "called as expected.\n");
  }
};

TEST_F(CxxExceptionInTestBodyTest, ThrowsStdCxxException) {
  throw std::runtime_error("Standard C++ exception");
}

TEST(CxxExceptionTest, ThrowsNonStdCxxException) {
  throw "C-string";
}

// This terminate handler aborts the program using exit() rather than abort().
// This avoids showing pop-ups on Windows systems and core dumps on Unix-like
// ones.
void TerminateHandler() {
  fprintf(stderr, "%s\n", "Unhandled C++ exception terminating the program.");
  fflush(nullptr);
  exit(3);
}

#endif  // GTEST_HAS_EXCEPTIONS

int main(int argc, char** argv) {
#if GTEST_HAS_EXCEPTIONS
  std::set_terminate(&TerminateHandler);
#endif
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
