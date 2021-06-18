// Copyright 2009 Google Inc.  All rights reserved.
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
// The Google C++ Testing and Mocking Framework (Google Test)
//
// This file contains tests verifying correctness of data provided via
// UnitTest's public methods.

#include "gtest/gtest.h"

#include <string.h>  // For strcmp.
#include <algorithm>

using ::testing::InitGoogleTest;

namespace testing {
namespace internal {

template <typename T>
struct LessByName {
  bool operator()(const T* a, const T* b) {
    return strcmp(a->name(), b->name()) < 0;
  }
};

class UnitTestHelper {
 public:
  // Returns the array of pointers to all test suites sorted by the test suite
  // name.  The caller is responsible for deleting the array.
  static TestSuite const** GetSortedTestSuites() {
    UnitTest& unit_test = *UnitTest::GetInstance();
    auto const** const test_suites =
        new const TestSuite*[unit_test.total_test_suite_count()];

    for (int i = 0; i < unit_test.total_test_suite_count(); ++i)
      test_suites[i] = unit_test.GetTestSuite(i);

    std::sort(test_suites,
              test_suites + unit_test.total_test_suite_count(),
              LessByName<TestSuite>());
    return test_suites;
  }

  // Returns the test suite by its name.  The caller doesn't own the returned
  // pointer.
  static const TestSuite* FindTestSuite(const char* name) {
    UnitTest& unit_test = *UnitTest::GetInstance();
    for (int i = 0; i < unit_test.total_test_suite_count(); ++i) {
      const TestSuite* test_suite = unit_test.GetTestSuite(i);
      if (0 == strcmp(test_suite->name(), name))
        return test_suite;
    }
    return nullptr;
  }

  // Returns the array of pointers to all tests in a particular test suite
  // sorted by the test name.  The caller is responsible for deleting the
  // array.
  static TestInfo const** GetSortedTests(const TestSuite* test_suite) {
    TestInfo const** const tests =
        new const TestInfo*[test_suite->total_test_count()];

    for (int i = 0; i < test_suite->total_test_count(); ++i)
      tests[i] = test_suite->GetTestInfo(i);

    std::sort(tests, tests + test_suite->total_test_count(),
              LessByName<TestInfo>());
    return tests;
  }
};

#if GTEST_HAS_TYPED_TEST
template <typename T> class TestSuiteWithCommentTest : public Test {};
TYPED_TEST_SUITE(TestSuiteWithCommentTest, Types<int>);
TYPED_TEST(TestSuiteWithCommentTest, Dummy) {}

const int kTypedTestSuites = 1;
const int kTypedTests = 1;
#else
const int kTypedTestSuites = 0;
const int kTypedTests = 0;
#endif  // GTEST_HAS_TYPED_TEST

// We can only test the accessors that do not change value while tests run.
// Since tests can be run in any order, the values the accessors that track
// test execution (such as failed_test_count) can not be predicted.
TEST(ApiTest, UnitTestImmutableAccessorsWork) {
  UnitTest* unit_test = UnitTest::GetInstance();

  ASSERT_EQ(2 + kTypedTestSuites, unit_test->total_test_suite_count());
  EXPECT_EQ(1 + kTypedTestSuites, unit_test->test_suite_to_run_count());
  EXPECT_EQ(2, unit_test->disabled_test_count());
  EXPECT_EQ(5 + kTypedTests, unit_test->total_test_count());
  EXPECT_EQ(3 + kTypedTests, unit_test->test_to_run_count());

  const TestSuite** const test_suites = UnitTestHelper::GetSortedTestSuites();

  EXPECT_STREQ("ApiTest", test_suites[0]->name());
  EXPECT_STREQ("DISABLED_Test", test_suites[1]->name());
#if GTEST_HAS_TYPED_TEST
  EXPECT_STREQ("TestSuiteWithCommentTest/0", test_suites[2]->name());
#endif  // GTEST_HAS_TYPED_TEST

  delete[] test_suites;

  // The following lines initiate actions to verify certain methods in
  // FinalSuccessChecker::TearDown.

  // Records a test property to verify TestResult::GetTestProperty().
  RecordProperty("key", "value");
}

AssertionResult IsNull(const char* str) {
  if (str != nullptr) {
    return testing::AssertionFailure() << "argument is " << str;
  }
  return AssertionSuccess();
}

TEST(ApiTest, TestSuiteImmutableAccessorsWork) {
  const TestSuite* test_suite = UnitTestHelper::FindTestSuite("ApiTest");
  ASSERT_TRUE(test_suite != nullptr);

  EXPECT_STREQ("ApiTest", test_suite->name());
  EXPECT_TRUE(IsNull(test_suite->type_param()));
  EXPECT_TRUE(test_suite->should_run());
  EXPECT_EQ(1, test_suite->disabled_test_count());
  EXPECT_EQ(3, test_suite->test_to_run_count());
  ASSERT_EQ(4, test_suite->total_test_count());

  const TestInfo** tests = UnitTestHelper::GetSortedTests(test_suite);

  EXPECT_STREQ("DISABLED_Dummy1", tests[0]->name());
  EXPECT_STREQ("ApiTest", tests[0]->test_suite_name());
  EXPECT_TRUE(IsNull(tests[0]->value_param()));
  EXPECT_TRUE(IsNull(tests[0]->type_param()));
  EXPECT_FALSE(tests[0]->should_run());

  EXPECT_STREQ("TestSuiteDisabledAccessorsWork", tests[1]->name());
  EXPECT_STREQ("ApiTest", tests[1]->test_suite_name());
  EXPECT_TRUE(IsNull(tests[1]->value_param()));
  EXPECT_TRUE(IsNull(tests[1]->type_param()));
  EXPECT_TRUE(tests[1]->should_run());

  EXPECT_STREQ("TestSuiteImmutableAccessorsWork", tests[2]->name());
  EXPECT_STREQ("ApiTest", tests[2]->test_suite_name());
  EXPECT_TRUE(IsNull(tests[2]->value_param()));
  EXPECT_TRUE(IsNull(tests[2]->type_param()));
  EXPECT_TRUE(tests[2]->should_run());

  EXPECT_STREQ("UnitTestImmutableAccessorsWork", tests[3]->name());
  EXPECT_STREQ("ApiTest", tests[3]->test_suite_name());
  EXPECT_TRUE(IsNull(tests[3]->value_param()));
  EXPECT_TRUE(IsNull(tests[3]->type_param()));
  EXPECT_TRUE(tests[3]->should_run());

  delete[] tests;
  tests = nullptr;

#if GTEST_HAS_TYPED_TEST
  test_suite = UnitTestHelper::FindTestSuite("TestSuiteWithCommentTest/0");
  ASSERT_TRUE(test_suite != nullptr);

  EXPECT_STREQ("TestSuiteWithCommentTest/0", test_suite->name());
  EXPECT_STREQ(GetTypeName<int>().c_str(), test_suite->type_param());
  EXPECT_TRUE(test_suite->should_run());
  EXPECT_EQ(0, test_suite->disabled_test_count());
  EXPECT_EQ(1, test_suite->test_to_run_count());
  ASSERT_EQ(1, test_suite->total_test_count());

  tests = UnitTestHelper::GetSortedTests(test_suite);

  EXPECT_STREQ("Dummy", tests[0]->name());
  EXPECT_STREQ("TestSuiteWithCommentTest/0", tests[0]->test_suite_name());
  EXPECT_TRUE(IsNull(tests[0]->value_param()));
  EXPECT_STREQ(GetTypeName<int>().c_str(), tests[0]->type_param());
  EXPECT_TRUE(tests[0]->should_run());

  delete[] tests;
#endif  // GTEST_HAS_TYPED_TEST
}

TEST(ApiTest, TestSuiteDisabledAccessorsWork) {
  const TestSuite* test_suite = UnitTestHelper::FindTestSuite("DISABLED_Test");
  ASSERT_TRUE(test_suite != nullptr);

  EXPECT_STREQ("DISABLED_Test", test_suite->name());
  EXPECT_TRUE(IsNull(test_suite->type_param()));
  EXPECT_FALSE(test_suite->should_run());
  EXPECT_EQ(1, test_suite->disabled_test_count());
  EXPECT_EQ(0, test_suite->test_to_run_count());
  ASSERT_EQ(1, test_suite->total_test_count());

  const TestInfo* const test_info = test_suite->GetTestInfo(0);
  EXPECT_STREQ("Dummy2", test_info->name());
  EXPECT_STREQ("DISABLED_Test", test_info->test_suite_name());
  EXPECT_TRUE(IsNull(test_info->value_param()));
  EXPECT_TRUE(IsNull(test_info->type_param()));
  EXPECT_FALSE(test_info->should_run());
}

// These two tests are here to provide support for testing
// test_suite_to_run_count, disabled_test_count, and test_to_run_count.
TEST(ApiTest, DISABLED_Dummy1) {}
TEST(DISABLED_Test, Dummy2) {}

class FinalSuccessChecker : public Environment {
 protected:
  void TearDown() override {
    UnitTest* unit_test = UnitTest::GetInstance();

    EXPECT_EQ(1 + kTypedTestSuites, unit_test->successful_test_suite_count());
    EXPECT_EQ(3 + kTypedTests, unit_test->successful_test_count());
    EXPECT_EQ(0, unit_test->failed_test_suite_count());
    EXPECT_EQ(0, unit_test->failed_test_count());
    EXPECT_TRUE(unit_test->Passed());
    EXPECT_FALSE(unit_test->Failed());
    ASSERT_EQ(2 + kTypedTestSuites, unit_test->total_test_suite_count());

    const TestSuite** const test_suites = UnitTestHelper::GetSortedTestSuites();

    EXPECT_STREQ("ApiTest", test_suites[0]->name());
    EXPECT_TRUE(IsNull(test_suites[0]->type_param()));
    EXPECT_TRUE(test_suites[0]->should_run());
    EXPECT_EQ(1, test_suites[0]->disabled_test_count());
    ASSERT_EQ(4, test_suites[0]->total_test_count());
    EXPECT_EQ(3, test_suites[0]->successful_test_count());
    EXPECT_EQ(0, test_suites[0]->failed_test_count());
    EXPECT_TRUE(test_suites[0]->Passed());
    EXPECT_FALSE(test_suites[0]->Failed());

    EXPECT_STREQ("DISABLED_Test", test_suites[1]->name());
    EXPECT_TRUE(IsNull(test_suites[1]->type_param()));
    EXPECT_FALSE(test_suites[1]->should_run());
    EXPECT_EQ(1, test_suites[1]->disabled_test_count());
    ASSERT_EQ(1, test_suites[1]->total_test_count());
    EXPECT_EQ(0, test_suites[1]->successful_test_count());
    EXPECT_EQ(0, test_suites[1]->failed_test_count());

#if GTEST_HAS_TYPED_TEST
    EXPECT_STREQ("TestSuiteWithCommentTest/0", test_suites[2]->name());
    EXPECT_STREQ(GetTypeName<int>().c_str(), test_suites[2]->type_param());
    EXPECT_TRUE(test_suites[2]->should_run());
    EXPECT_EQ(0, test_suites[2]->disabled_test_count());
    ASSERT_EQ(1, test_suites[2]->total_test_count());
    EXPECT_EQ(1, test_suites[2]->successful_test_count());
    EXPECT_EQ(0, test_suites[2]->failed_test_count());
    EXPECT_TRUE(test_suites[2]->Passed());
    EXPECT_FALSE(test_suites[2]->Failed());
#endif  // GTEST_HAS_TYPED_TEST

    const TestSuite* test_suite = UnitTestHelper::FindTestSuite("ApiTest");
    const TestInfo** tests = UnitTestHelper::GetSortedTests(test_suite);
    EXPECT_STREQ("DISABLED_Dummy1", tests[0]->name());
    EXPECT_STREQ("ApiTest", tests[0]->test_suite_name());
    EXPECT_FALSE(tests[0]->should_run());

    EXPECT_STREQ("TestSuiteDisabledAccessorsWork", tests[1]->name());
    EXPECT_STREQ("ApiTest", tests[1]->test_suite_name());
    EXPECT_TRUE(IsNull(tests[1]->value_param()));
    EXPECT_TRUE(IsNull(tests[1]->type_param()));
    EXPECT_TRUE(tests[1]->should_run());
    EXPECT_TRUE(tests[1]->result()->Passed());
    EXPECT_EQ(0, tests[1]->result()->test_property_count());

    EXPECT_STREQ("TestSuiteImmutableAccessorsWork", tests[2]->name());
    EXPECT_STREQ("ApiTest", tests[2]->test_suite_name());
    EXPECT_TRUE(IsNull(tests[2]->value_param()));
    EXPECT_TRUE(IsNull(tests[2]->type_param()));
    EXPECT_TRUE(tests[2]->should_run());
    EXPECT_TRUE(tests[2]->result()->Passed());
    EXPECT_EQ(0, tests[2]->result()->test_property_count());

    EXPECT_STREQ("UnitTestImmutableAccessorsWork", tests[3]->name());
    EXPECT_STREQ("ApiTest", tests[3]->test_suite_name());
    EXPECT_TRUE(IsNull(tests[3]->value_param()));
    EXPECT_TRUE(IsNull(tests[3]->type_param()));
    EXPECT_TRUE(tests[3]->should_run());
    EXPECT_TRUE(tests[3]->result()->Passed());
    EXPECT_EQ(1, tests[3]->result()->test_property_count());
    const TestProperty& property = tests[3]->result()->GetTestProperty(0);
    EXPECT_STREQ("key", property.key());
    EXPECT_STREQ("value", property.value());

    delete[] tests;

#if GTEST_HAS_TYPED_TEST
    test_suite = UnitTestHelper::FindTestSuite("TestSuiteWithCommentTest/0");
    tests = UnitTestHelper::GetSortedTests(test_suite);

    EXPECT_STREQ("Dummy", tests[0]->name());
    EXPECT_STREQ("TestSuiteWithCommentTest/0", tests[0]->test_suite_name());
    EXPECT_TRUE(IsNull(tests[0]->value_param()));
    EXPECT_STREQ(GetTypeName<int>().c_str(), tests[0]->type_param());
    EXPECT_TRUE(tests[0]->should_run());
    EXPECT_TRUE(tests[0]->result()->Passed());
    EXPECT_EQ(0, tests[0]->result()->test_property_count());

    delete[] tests;
#endif  // GTEST_HAS_TYPED_TEST
    delete[] test_suites;
  }
};

}  // namespace internal
}  // namespace testing

int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);

  AddGlobalTestEnvironment(new testing::internal::FinalSuccessChecker());

  return RUN_ALL_TESTS();
}
