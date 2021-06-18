// Copyright 2008 Google Inc.
// All Rights Reserved.
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


#include "test/gtest-typed-test_test.h"

#include <set>
#include <type_traits>
#include <vector>

#include "gtest/gtest.h"

#if _MSC_VER
GTEST_DISABLE_MSC_WARNINGS_PUSH_(4127 /* conditional expression is constant */)
#endif  //  _MSC_VER

using testing::Test;

// Used for testing that SetUpTestSuite()/TearDownTestSuite(), fixture
// ctor/dtor, and SetUp()/TearDown() work correctly in typed tests and
// type-parameterized test.
template <typename T>
class CommonTest : public Test {
  // For some technical reason, SetUpTestSuite() and TearDownTestSuite()
  // must be public.
 public:
  static void SetUpTestSuite() {
    shared_ = new T(5);
  }

  static void TearDownTestSuite() {
    delete shared_;
    shared_ = nullptr;
  }

  // This 'protected:' is optional.  There's no harm in making all
  // members of this fixture class template public.
 protected:
  // We used to use std::list here, but switched to std::vector since
  // MSVC's <list> doesn't compile cleanly with /W4.
  typedef std::vector<T> Vector;
  typedef std::set<int> IntSet;

  CommonTest() : value_(1) {}

  ~CommonTest() override { EXPECT_EQ(3, value_); }

  void SetUp() override {
    EXPECT_EQ(1, value_);
    value_++;
  }

  void TearDown() override {
    EXPECT_EQ(2, value_);
    value_++;
  }

  T value_;
  static T* shared_;
};

template <typename T>
T* CommonTest<T>::shared_ = nullptr;

// This #ifdef block tests typed tests.
#if GTEST_HAS_TYPED_TEST

using testing::Types;

// Tests that SetUpTestSuite()/TearDownTestSuite(), fixture ctor/dtor,
// and SetUp()/TearDown() work correctly in typed tests

typedef Types<char, int> TwoTypes;
TYPED_TEST_SUITE(CommonTest, TwoTypes);

TYPED_TEST(CommonTest, ValuesAreCorrect) {
  // Static members of the fixture class template can be visited via
  // the TestFixture:: prefix.
  EXPECT_EQ(5, *TestFixture::shared_);

  // Typedefs in the fixture class template can be visited via the
  // "typename TestFixture::" prefix.
  typename TestFixture::Vector empty;
  EXPECT_EQ(0U, empty.size());

  typename TestFixture::IntSet empty2;
  EXPECT_EQ(0U, empty2.size());

  // Non-static members of the fixture class must be visited via
  // 'this', as required by C++ for class templates.
  EXPECT_EQ(2, this->value_);
}

// The second test makes sure shared_ is not deleted after the first
// test.
TYPED_TEST(CommonTest, ValuesAreStillCorrect) {
  // Static members of the fixture class template can also be visited
  // via 'this'.
  ASSERT_TRUE(this->shared_ != nullptr);
  EXPECT_EQ(5, *this->shared_);

  // TypeParam can be used to refer to the type parameter.
  EXPECT_EQ(static_cast<TypeParam>(2), this->value_);
}

// Tests that multiple TYPED_TEST_SUITE's can be defined in the same
// translation unit.

template <typename T>
class TypedTest1 : public Test {
};

// Verifies that the second argument of TYPED_TEST_SUITE can be a
// single type.
TYPED_TEST_SUITE(TypedTest1, int);
TYPED_TEST(TypedTest1, A) {}

template <typename T>
class TypedTest2 : public Test {
};

// Verifies that the second argument of TYPED_TEST_SUITE can be a
// Types<...> type list.
TYPED_TEST_SUITE(TypedTest2, Types<int>);

// This also verifies that tests from different typed test cases can
// share the same name.
TYPED_TEST(TypedTest2, A) {}

// Tests that a typed test case can be defined in a namespace.

namespace library1 {

template <typename T>
class NumericTest : public Test {
};

typedef Types<int, long> NumericTypes;
TYPED_TEST_SUITE(NumericTest, NumericTypes);

TYPED_TEST(NumericTest, DefaultIsZero) {
  EXPECT_EQ(0, TypeParam());
}

}  // namespace library1

// Tests that custom names work.
template <typename T>
class TypedTestWithNames : public Test {};

class TypedTestNames {
 public:
  template <typename T>
  static std::string GetName(int i) {
    if (std::is_same<T, char>::value) {
      return std::string("char") + ::testing::PrintToString(i);
    }
    if (std::is_same<T, int>::value) {
      return std::string("int") + ::testing::PrintToString(i);
    }
  }
};

TYPED_TEST_SUITE(TypedTestWithNames, TwoTypes, TypedTestNames);

TYPED_TEST(TypedTestWithNames, TestSuiteName) {
  if (std::is_same<TypeParam, char>::value) {
    EXPECT_STREQ(::testing::UnitTest::GetInstance()
                     ->current_test_info()
                     ->test_case_name(),
                 "TypedTestWithNames/char0");
  }
  if (std::is_same<TypeParam, int>::value) {
    EXPECT_STREQ(::testing::UnitTest::GetInstance()
                     ->current_test_info()
                     ->test_case_name(),
                 "TypedTestWithNames/int1");
  }
}

#endif  // GTEST_HAS_TYPED_TEST

// This #ifdef block tests type-parameterized tests.
#if GTEST_HAS_TYPED_TEST_P

using testing::Types;
using testing::internal::TypedTestSuitePState;

// Tests TypedTestSuitePState.

class TypedTestSuitePStateTest : public Test {
 protected:
  void SetUp() override {
    state_.AddTestName("foo.cc", 0, "FooTest", "A");
    state_.AddTestName("foo.cc", 0, "FooTest", "B");
    state_.AddTestName("foo.cc", 0, "FooTest", "C");
  }

  TypedTestSuitePState state_;
};

TEST_F(TypedTestSuitePStateTest, SucceedsForMatchingList) {
  const char* tests = "A, B, C";
  EXPECT_EQ(tests,
            state_.VerifyRegisteredTestNames("foo.cc", 1, tests));
}

// Makes sure that the order of the tests and spaces around the names
// don't matter.
TEST_F(TypedTestSuitePStateTest, IgnoresOrderAndSpaces) {
  const char* tests = "A,C,   B";
  EXPECT_EQ(tests,
            state_.VerifyRegisteredTestNames("foo.cc", 1, tests));
}

using TypedTestSuitePStateDeathTest = TypedTestSuitePStateTest;

TEST_F(TypedTestSuitePStateDeathTest, DetectsDuplicates) {
  EXPECT_DEATH_IF_SUPPORTED(
      state_.VerifyRegisteredTestNames("foo.cc", 1, "A, B, A, C"),
      "foo\\.cc.1.?: Test A is listed more than once\\.");
}

TEST_F(TypedTestSuitePStateDeathTest, DetectsExtraTest) {
  EXPECT_DEATH_IF_SUPPORTED(
      state_.VerifyRegisteredTestNames("foo.cc", 1, "A, B, C, D"),
      "foo\\.cc.1.?: No test named D can be found in this test suite\\.");
}

TEST_F(TypedTestSuitePStateDeathTest, DetectsMissedTest) {
  EXPECT_DEATH_IF_SUPPORTED(
      state_.VerifyRegisteredTestNames("foo.cc", 1, "A, C"),
      "foo\\.cc.1.?: You forgot to list test B\\.");
}

// Tests that defining a test for a parameterized test case generates
// a run-time error if the test case has been registered.
TEST_F(TypedTestSuitePStateDeathTest, DetectsTestAfterRegistration) {
  state_.VerifyRegisteredTestNames("foo.cc", 1, "A, B, C");
  EXPECT_DEATH_IF_SUPPORTED(
      state_.AddTestName("foo.cc", 2, "FooTest", "D"),
      "foo\\.cc.2.?: Test D must be defined before REGISTER_TYPED_TEST_SUITE_P"
      "\\(FooTest, \\.\\.\\.\\)\\.");
}

// Tests that SetUpTestSuite()/TearDownTestSuite(), fixture ctor/dtor,
// and SetUp()/TearDown() work correctly in type-parameterized tests.

template <typename T>
class DerivedTest : public CommonTest<T> {
};

TYPED_TEST_SUITE_P(DerivedTest);

TYPED_TEST_P(DerivedTest, ValuesAreCorrect) {
  // Static members of the fixture class template can be visited via
  // the TestFixture:: prefix.
  EXPECT_EQ(5, *TestFixture::shared_);

  // Non-static members of the fixture class must be visited via
  // 'this', as required by C++ for class templates.
  EXPECT_EQ(2, this->value_);
}

// The second test makes sure shared_ is not deleted after the first
// test.
TYPED_TEST_P(DerivedTest, ValuesAreStillCorrect) {
  // Static members of the fixture class template can also be visited
  // via 'this'.
  ASSERT_TRUE(this->shared_ != nullptr);
  EXPECT_EQ(5, *this->shared_);
  EXPECT_EQ(2, this->value_);
}

REGISTER_TYPED_TEST_SUITE_P(DerivedTest,
                           ValuesAreCorrect, ValuesAreStillCorrect);

typedef Types<short, long> MyTwoTypes;
INSTANTIATE_TYPED_TEST_SUITE_P(My, DerivedTest, MyTwoTypes);

// Tests that custom names work with type parametrized tests. We reuse the
// TwoTypes from above here.
template <typename T>
class TypeParametrizedTestWithNames : public Test {};

TYPED_TEST_SUITE_P(TypeParametrizedTestWithNames);

TYPED_TEST_P(TypeParametrizedTestWithNames, TestSuiteName) {
  if (std::is_same<TypeParam, char>::value) {
    EXPECT_STREQ(::testing::UnitTest::GetInstance()
                     ->current_test_info()
                     ->test_case_name(),
                 "CustomName/TypeParametrizedTestWithNames/parChar0");
  }
  if (std::is_same<TypeParam, int>::value) {
    EXPECT_STREQ(::testing::UnitTest::GetInstance()
                     ->current_test_info()
                     ->test_case_name(),
                 "CustomName/TypeParametrizedTestWithNames/parInt1");
  }
}

REGISTER_TYPED_TEST_SUITE_P(TypeParametrizedTestWithNames, TestSuiteName);

class TypeParametrizedTestNames {
 public:
  template <typename T>
  static std::string GetName(int i) {
    if (std::is_same<T, char>::value) {
      return std::string("parChar") + ::testing::PrintToString(i);
    }
    if (std::is_same<T, int>::value) {
      return std::string("parInt") + ::testing::PrintToString(i);
    }
  }
};

INSTANTIATE_TYPED_TEST_SUITE_P(CustomName, TypeParametrizedTestWithNames,
                              TwoTypes, TypeParametrizedTestNames);

// Tests that multiple TYPED_TEST_SUITE_P's can be defined in the same
// translation unit.

template <typename T>
class TypedTestP1 : public Test {
};

TYPED_TEST_SUITE_P(TypedTestP1);

// For testing that the code between TYPED_TEST_SUITE_P() and
// TYPED_TEST_P() is not enclosed in a namespace.
using IntAfterTypedTestSuiteP = int;

TYPED_TEST_P(TypedTestP1, A) {}
TYPED_TEST_P(TypedTestP1, B) {}

// For testing that the code between TYPED_TEST_P() and
// REGISTER_TYPED_TEST_SUITE_P() is not enclosed in a namespace.
using IntBeforeRegisterTypedTestSuiteP = int;

REGISTER_TYPED_TEST_SUITE_P(TypedTestP1, A, B);

template <typename T>
class TypedTestP2 : public Test {
};

TYPED_TEST_SUITE_P(TypedTestP2);

// This also verifies that tests from different type-parameterized
// test cases can share the same name.
TYPED_TEST_P(TypedTestP2, A) {}

REGISTER_TYPED_TEST_SUITE_P(TypedTestP2, A);

// Verifies that the code between TYPED_TEST_SUITE_P() and
// REGISTER_TYPED_TEST_SUITE_P() is not enclosed in a namespace.
IntAfterTypedTestSuiteP after = 0;
IntBeforeRegisterTypedTestSuiteP before = 0;

// Verifies that the last argument of INSTANTIATE_TYPED_TEST_SUITE_P()
// can be either a single type or a Types<...> type list.
INSTANTIATE_TYPED_TEST_SUITE_P(Int, TypedTestP1, int);
INSTANTIATE_TYPED_TEST_SUITE_P(Int, TypedTestP2, Types<int>);

// Tests that the same type-parameterized test case can be
// instantiated more than once in the same translation unit.
INSTANTIATE_TYPED_TEST_SUITE_P(Double, TypedTestP2, Types<double>);

// Tests that the same type-parameterized test case can be
// instantiated in different translation units linked together.
// (ContainerTest is also instantiated in gtest-typed-test_test.cc.)
typedef Types<std::vector<double>, std::set<char> > MyContainers;
INSTANTIATE_TYPED_TEST_SUITE_P(My, ContainerTest, MyContainers);

// Tests that a type-parameterized test case can be defined and
// instantiated in a namespace.

namespace library2 {

template <typename T>
class NumericTest : public Test {
};

TYPED_TEST_SUITE_P(NumericTest);

TYPED_TEST_P(NumericTest, DefaultIsZero) {
  EXPECT_EQ(0, TypeParam());
}

TYPED_TEST_P(NumericTest, ZeroIsLessThanOne) {
  EXPECT_LT(TypeParam(0), TypeParam(1));
}

REGISTER_TYPED_TEST_SUITE_P(NumericTest,
                           DefaultIsZero, ZeroIsLessThanOne);
typedef Types<int, double> NumericTypes;
INSTANTIATE_TYPED_TEST_SUITE_P(My, NumericTest, NumericTypes);

static const char* GetTestName() {
  return testing::UnitTest::GetInstance()->current_test_info()->name();
}
// Test the stripping of space from test names
template <typename T> class TrimmedTest : public Test { };
TYPED_TEST_SUITE_P(TrimmedTest);
TYPED_TEST_P(TrimmedTest, Test1) { EXPECT_STREQ("Test1", GetTestName()); }
TYPED_TEST_P(TrimmedTest, Test2) { EXPECT_STREQ("Test2", GetTestName()); }
TYPED_TEST_P(TrimmedTest, Test3) { EXPECT_STREQ("Test3", GetTestName()); }
TYPED_TEST_P(TrimmedTest, Test4) { EXPECT_STREQ("Test4", GetTestName()); }
TYPED_TEST_P(TrimmedTest, Test5) { EXPECT_STREQ("Test5", GetTestName()); }
REGISTER_TYPED_TEST_SUITE_P(
    TrimmedTest,
    Test1, Test2,Test3 , Test4 ,Test5 );  // NOLINT
template <typename T1, typename T2> struct MyPair {};
// Be sure to try a type with a comma in its name just in case it matters.
typedef Types<int, double, MyPair<int, int> > TrimTypes;
INSTANTIATE_TYPED_TEST_SUITE_P(My, TrimmedTest, TrimTypes);

}  // namespace library2

#endif  // GTEST_HAS_TYPED_TEST_P

#if !defined(GTEST_HAS_TYPED_TEST) && !defined(GTEST_HAS_TYPED_TEST_P)

// Google Test may not support type-parameterized tests with some
// compilers. If we use conditional compilation to compile out all
// code referring to the gtest_main library, MSVC linker will not link
// that library at all and consequently complain about missing entry
// point defined in that library (fatal error LNK1561: entry point
// must be defined). This dummy test keeps gtest_main linked in.
TEST(DummyTest, TypedTestsAreNotSupportedOnThisPlatform) {}

#if _MSC_VER
GTEST_DISABLE_MSC_WARNINGS_POP_()  //  4127
#endif                             //  _MSC_VER

#endif  // #if !defined(GTEST_HAS_TYPED_TEST) && !defined(GTEST_HAS_TYPED_TEST_P)
