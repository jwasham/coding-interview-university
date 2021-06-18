// Copyright 2009 Google Inc. All rights reserved.
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
// This file verifies Google Test event listeners receive events at the
// right times.

#include <vector>

#include "gtest/gtest.h"
#include "gtest/internal/custom/gtest.h"

using ::testing::AddGlobalTestEnvironment;
using ::testing::Environment;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestSuite;
using ::testing::TestEventListener;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;

// Used by tests to register their events.
std::vector<std::string>* g_events = nullptr;

namespace testing {
namespace internal {

class EventRecordingListener : public TestEventListener {
 public:
  explicit EventRecordingListener(const char* name) : name_(name) {}

 protected:
  void OnTestProgramStart(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnTestProgramStart"));
  }

  void OnTestIterationStart(const UnitTest& /*unit_test*/,
                            int iteration) override {
    Message message;
    message << GetFullMethodName("OnTestIterationStart")
            << "(" << iteration << ")";
    g_events->push_back(message.GetString());
  }

  void OnEnvironmentsSetUpStart(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnEnvironmentsSetUpStart"));
  }

  void OnEnvironmentsSetUpEnd(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnEnvironmentsSetUpEnd"));
  }
#ifndef GTEST_REMOVE_LEGACY_TEST_CASEAPI_
  void OnTestCaseStart(const TestCase& /*test_case*/) override {
    g_events->push_back(GetFullMethodName("OnTestCaseStart"));
  }
#endif  // GTEST_REMOVE_LEGACY_TEST_CASEAPI_

  void OnTestStart(const TestInfo& /*test_info*/) override {
    g_events->push_back(GetFullMethodName("OnTestStart"));
  }

  void OnTestPartResult(const TestPartResult& /*test_part_result*/) override {
    g_events->push_back(GetFullMethodName("OnTestPartResult"));
  }

  void OnTestEnd(const TestInfo& /*test_info*/) override {
    g_events->push_back(GetFullMethodName("OnTestEnd"));
  }

#ifndef GTEST_REMOVE_LEGACY_TEST_CASEAPI_
  void OnTestCaseEnd(const TestCase& /*test_case*/) override {
    g_events->push_back(GetFullMethodName("OnTestCaseEnd"));
  }
#endif  // GTEST_REMOVE_LEGACY_TEST_CASEAPI_

  void OnEnvironmentsTearDownStart(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnEnvironmentsTearDownStart"));
  }

  void OnEnvironmentsTearDownEnd(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnEnvironmentsTearDownEnd"));
  }

  void OnTestIterationEnd(const UnitTest& /*unit_test*/,
                          int iteration) override {
    Message message;
    message << GetFullMethodName("OnTestIterationEnd")
            << "("  << iteration << ")";
    g_events->push_back(message.GetString());
  }

  void OnTestProgramEnd(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnTestProgramEnd"));
  }

 private:
  std::string GetFullMethodName(const char* name) {
    return name_ + "." + name;
  }

  std::string name_;
};

// This listener is using OnTestSuiteStart, OnTestSuiteEnd API
class EventRecordingListener2 : public TestEventListener {
 public:
  explicit EventRecordingListener2(const char* name) : name_(name) {}

 protected:
  void OnTestProgramStart(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnTestProgramStart"));
  }

  void OnTestIterationStart(const UnitTest& /*unit_test*/,
                            int iteration) override {
    Message message;
    message << GetFullMethodName("OnTestIterationStart") << "(" << iteration
            << ")";
    g_events->push_back(message.GetString());
  }

  void OnEnvironmentsSetUpStart(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnEnvironmentsSetUpStart"));
  }

  void OnEnvironmentsSetUpEnd(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnEnvironmentsSetUpEnd"));
  }

  void OnTestSuiteStart(const TestSuite& /*test_suite*/) override {
    g_events->push_back(GetFullMethodName("OnTestSuiteStart"));
  }

  void OnTestStart(const TestInfo& /*test_info*/) override {
    g_events->push_back(GetFullMethodName("OnTestStart"));
  }

  void OnTestPartResult(const TestPartResult& /*test_part_result*/) override {
    g_events->push_back(GetFullMethodName("OnTestPartResult"));
  }

  void OnTestEnd(const TestInfo& /*test_info*/) override {
    g_events->push_back(GetFullMethodName("OnTestEnd"));
  }

  void OnTestSuiteEnd(const TestSuite& /*test_suite*/) override {
    g_events->push_back(GetFullMethodName("OnTestSuiteEnd"));
  }

  void OnEnvironmentsTearDownStart(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnEnvironmentsTearDownStart"));
  }

  void OnEnvironmentsTearDownEnd(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnEnvironmentsTearDownEnd"));
  }

  void OnTestIterationEnd(const UnitTest& /*unit_test*/,
                          int iteration) override {
    Message message;
    message << GetFullMethodName("OnTestIterationEnd") << "(" << iteration
            << ")";
    g_events->push_back(message.GetString());
  }

  void OnTestProgramEnd(const UnitTest& /*unit_test*/) override {
    g_events->push_back(GetFullMethodName("OnTestProgramEnd"));
  }

 private:
  std::string GetFullMethodName(const char* name) { return name_ + "." + name; }

  std::string name_;
};

class EnvironmentInvocationCatcher : public Environment {
 protected:
  void SetUp() override { g_events->push_back("Environment::SetUp"); }

  void TearDown() override { g_events->push_back("Environment::TearDown"); }
};

class ListenerTest : public Test {
 protected:
  static void SetUpTestSuite() {
    g_events->push_back("ListenerTest::SetUpTestSuite");
  }

  static void TearDownTestSuite() {
    g_events->push_back("ListenerTest::TearDownTestSuite");
  }

  void SetUp() override { g_events->push_back("ListenerTest::SetUp"); }

  void TearDown() override { g_events->push_back("ListenerTest::TearDown"); }
};

TEST_F(ListenerTest, DoesFoo) {
  // Test execution order within a test case is not guaranteed so we are not
  // recording the test name.
  g_events->push_back("ListenerTest::* Test Body");
  SUCCEED();  // Triggers OnTestPartResult.
}

TEST_F(ListenerTest, DoesBar) {
  g_events->push_back("ListenerTest::* Test Body");
  SUCCEED();  // Triggers OnTestPartResult.
}

}  // namespace internal

}  // namespace testing

using ::testing::internal::EnvironmentInvocationCatcher;
using ::testing::internal::EventRecordingListener;
using ::testing::internal::EventRecordingListener2;

void VerifyResults(const std::vector<std::string>& data,
                   const char* const* expected_data,
                   size_t expected_data_size) {
  const size_t actual_size = data.size();
  // If the following assertion fails, a new entry will be appended to
  // data.  Hence we save data.size() first.
  EXPECT_EQ(expected_data_size, actual_size);

  // Compares the common prefix.
  const size_t shorter_size = expected_data_size <= actual_size ?
      expected_data_size : actual_size;
  size_t i = 0;
  for (; i < shorter_size; ++i) {
    ASSERT_STREQ(expected_data[i], data[i].c_str())
        << "at position " << i;
  }

  // Prints extra elements in the actual data.
  for (; i < actual_size; ++i) {
    printf("  Actual event #%lu: %s\n",
        static_cast<unsigned long>(i), data[i].c_str());
  }
}

int main(int argc, char **argv) {
  std::vector<std::string> events;
  g_events = &events;
  InitGoogleTest(&argc, argv);

  UnitTest::GetInstance()->listeners().Append(
      new EventRecordingListener("1st"));
  UnitTest::GetInstance()->listeners().Append(
      new EventRecordingListener("2nd"));
  UnitTest::GetInstance()->listeners().Append(
      new EventRecordingListener2("3rd"));

  AddGlobalTestEnvironment(new EnvironmentInvocationCatcher);

  GTEST_CHECK_(events.size() == 0)
      << "AddGlobalTestEnvironment should not generate any events itself.";

  ::testing::GTEST_FLAG(repeat) = 2;
  int ret_val = RUN_ALL_TESTS();

#ifndef GTEST_REMOVE_LEGACY_TEST_CASEAPI_

  // The deprecated OnTestSuiteStart/OnTestCaseStart events are included
  const char* const expected_events[] = {"1st.OnTestProgramStart",
                                         "2nd.OnTestProgramStart",
                                         "3rd.OnTestProgramStart",
                                         "1st.OnTestIterationStart(0)",
                                         "2nd.OnTestIterationStart(0)",
                                         "3rd.OnTestIterationStart(0)",
                                         "1st.OnEnvironmentsSetUpStart",
                                         "2nd.OnEnvironmentsSetUpStart",
                                         "3rd.OnEnvironmentsSetUpStart",
                                         "Environment::SetUp",
                                         "3rd.OnEnvironmentsSetUpEnd",
                                         "2nd.OnEnvironmentsSetUpEnd",
                                         "1st.OnEnvironmentsSetUpEnd",
                                         "3rd.OnTestSuiteStart",
                                         "1st.OnTestCaseStart",
                                         "2nd.OnTestCaseStart",
                                         "ListenerTest::SetUpTestSuite",
                                         "1st.OnTestStart",
                                         "2nd.OnTestStart",
                                         "3rd.OnTestStart",
                                         "ListenerTest::SetUp",
                                         "ListenerTest::* Test Body",
                                         "1st.OnTestPartResult",
                                         "2nd.OnTestPartResult",
                                         "3rd.OnTestPartResult",
                                         "ListenerTest::TearDown",
                                         "3rd.OnTestEnd",
                                         "2nd.OnTestEnd",
                                         "1st.OnTestEnd",
                                         "1st.OnTestStart",
                                         "2nd.OnTestStart",
                                         "3rd.OnTestStart",
                                         "ListenerTest::SetUp",
                                         "ListenerTest::* Test Body",
                                         "1st.OnTestPartResult",
                                         "2nd.OnTestPartResult",
                                         "3rd.OnTestPartResult",
                                         "ListenerTest::TearDown",
                                         "3rd.OnTestEnd",
                                         "2nd.OnTestEnd",
                                         "1st.OnTestEnd",
                                         "ListenerTest::TearDownTestSuite",
                                         "3rd.OnTestSuiteEnd",
                                         "2nd.OnTestCaseEnd",
                                         "1st.OnTestCaseEnd",
                                         "1st.OnEnvironmentsTearDownStart",
                                         "2nd.OnEnvironmentsTearDownStart",
                                         "3rd.OnEnvironmentsTearDownStart",
                                         "Environment::TearDown",
                                         "3rd.OnEnvironmentsTearDownEnd",
                                         "2nd.OnEnvironmentsTearDownEnd",
                                         "1st.OnEnvironmentsTearDownEnd",
                                         "3rd.OnTestIterationEnd(0)",
                                         "2nd.OnTestIterationEnd(0)",
                                         "1st.OnTestIterationEnd(0)",
                                         "1st.OnTestIterationStart(1)",
                                         "2nd.OnTestIterationStart(1)",
                                         "3rd.OnTestIterationStart(1)",
                                         "1st.OnEnvironmentsSetUpStart",
                                         "2nd.OnEnvironmentsSetUpStart",
                                         "3rd.OnEnvironmentsSetUpStart",
                                         "Environment::SetUp",
                                         "3rd.OnEnvironmentsSetUpEnd",
                                         "2nd.OnEnvironmentsSetUpEnd",
                                         "1st.OnEnvironmentsSetUpEnd",
                                         "3rd.OnTestSuiteStart",
                                         "1st.OnTestCaseStart",
                                         "2nd.OnTestCaseStart",
                                         "ListenerTest::SetUpTestSuite",
                                         "1st.OnTestStart",
                                         "2nd.OnTestStart",
                                         "3rd.OnTestStart",
                                         "ListenerTest::SetUp",
                                         "ListenerTest::* Test Body",
                                         "1st.OnTestPartResult",
                                         "2nd.OnTestPartResult",
                                         "3rd.OnTestPartResult",
                                         "ListenerTest::TearDown",
                                         "3rd.OnTestEnd",
                                         "2nd.OnTestEnd",
                                         "1st.OnTestEnd",
                                         "1st.OnTestStart",
                                         "2nd.OnTestStart",
                                         "3rd.OnTestStart",
                                         "ListenerTest::SetUp",
                                         "ListenerTest::* Test Body",
                                         "1st.OnTestPartResult",
                                         "2nd.OnTestPartResult",
                                         "3rd.OnTestPartResult",
                                         "ListenerTest::TearDown",
                                         "3rd.OnTestEnd",
                                         "2nd.OnTestEnd",
                                         "1st.OnTestEnd",
                                         "ListenerTest::TearDownTestSuite",
                                         "3rd.OnTestSuiteEnd",
                                         "2nd.OnTestCaseEnd",
                                         "1st.OnTestCaseEnd",
                                         "1st.OnEnvironmentsTearDownStart",
                                         "2nd.OnEnvironmentsTearDownStart",
                                         "3rd.OnEnvironmentsTearDownStart",
                                         "Environment::TearDown",
                                         "3rd.OnEnvironmentsTearDownEnd",
                                         "2nd.OnEnvironmentsTearDownEnd",
                                         "1st.OnEnvironmentsTearDownEnd",
                                         "3rd.OnTestIterationEnd(1)",
                                         "2nd.OnTestIterationEnd(1)",
                                         "1st.OnTestIterationEnd(1)",
                                         "3rd.OnTestProgramEnd",
                                         "2nd.OnTestProgramEnd",
                                         "1st.OnTestProgramEnd"};
#else
  const char* const expected_events[] = {"1st.OnTestProgramStart",
                                         "2nd.OnTestProgramStart",
                                         "3rd.OnTestProgramStart",
                                         "1st.OnTestIterationStart(0)",
                                         "2nd.OnTestIterationStart(0)",
                                         "3rd.OnTestIterationStart(0)",
                                         "1st.OnEnvironmentsSetUpStart",
                                         "2nd.OnEnvironmentsSetUpStart",
                                         "3rd.OnEnvironmentsSetUpStart",
                                         "Environment::SetUp",
                                         "3rd.OnEnvironmentsSetUpEnd",
                                         "2nd.OnEnvironmentsSetUpEnd",
                                         "1st.OnEnvironmentsSetUpEnd",
                                         "3rd.OnTestSuiteStart",
                                         "ListenerTest::SetUpTestSuite",
                                         "1st.OnTestStart",
                                         "2nd.OnTestStart",
                                         "3rd.OnTestStart",
                                         "ListenerTest::SetUp",
                                         "ListenerTest::* Test Body",
                                         "1st.OnTestPartResult",
                                         "2nd.OnTestPartResult",
                                         "3rd.OnTestPartResult",
                                         "ListenerTest::TearDown",
                                         "3rd.OnTestEnd",
                                         "2nd.OnTestEnd",
                                         "1st.OnTestEnd",
                                         "1st.OnTestStart",
                                         "2nd.OnTestStart",
                                         "3rd.OnTestStart",
                                         "ListenerTest::SetUp",
                                         "ListenerTest::* Test Body",
                                         "1st.OnTestPartResult",
                                         "2nd.OnTestPartResult",
                                         "3rd.OnTestPartResult",
                                         "ListenerTest::TearDown",
                                         "3rd.OnTestEnd",
                                         "2nd.OnTestEnd",
                                         "1st.OnTestEnd",
                                         "ListenerTest::TearDownTestSuite",
                                         "3rd.OnTestSuiteEnd",
                                         "1st.OnEnvironmentsTearDownStart",
                                         "2nd.OnEnvironmentsTearDownStart",
                                         "3rd.OnEnvironmentsTearDownStart",
                                         "Environment::TearDown",
                                         "3rd.OnEnvironmentsTearDownEnd",
                                         "2nd.OnEnvironmentsTearDownEnd",
                                         "1st.OnEnvironmentsTearDownEnd",
                                         "3rd.OnTestIterationEnd(0)",
                                         "2nd.OnTestIterationEnd(0)",
                                         "1st.OnTestIterationEnd(0)",
                                         "1st.OnTestIterationStart(1)",
                                         "2nd.OnTestIterationStart(1)",
                                         "3rd.OnTestIterationStart(1)",
                                         "1st.OnEnvironmentsSetUpStart",
                                         "2nd.OnEnvironmentsSetUpStart",
                                         "3rd.OnEnvironmentsSetUpStart",
                                         "Environment::SetUp",
                                         "3rd.OnEnvironmentsSetUpEnd",
                                         "2nd.OnEnvironmentsSetUpEnd",
                                         "1st.OnEnvironmentsSetUpEnd",
                                         "3rd.OnTestSuiteStart",
                                         "ListenerTest::SetUpTestSuite",
                                         "1st.OnTestStart",
                                         "2nd.OnTestStart",
                                         "3rd.OnTestStart",
                                         "ListenerTest::SetUp",
                                         "ListenerTest::* Test Body",
                                         "1st.OnTestPartResult",
                                         "2nd.OnTestPartResult",
                                         "3rd.OnTestPartResult",
                                         "ListenerTest::TearDown",
                                         "3rd.OnTestEnd",
                                         "2nd.OnTestEnd",
                                         "1st.OnTestEnd",
                                         "1st.OnTestStart",
                                         "2nd.OnTestStart",
                                         "3rd.OnTestStart",
                                         "ListenerTest::SetUp",
                                         "ListenerTest::* Test Body",
                                         "1st.OnTestPartResult",
                                         "2nd.OnTestPartResult",
                                         "3rd.OnTestPartResult",
                                         "ListenerTest::TearDown",
                                         "3rd.OnTestEnd",
                                         "2nd.OnTestEnd",
                                         "1st.OnTestEnd",
                                         "ListenerTest::TearDownTestSuite",
                                         "3rd.OnTestSuiteEnd",
                                         "1st.OnEnvironmentsTearDownStart",
                                         "2nd.OnEnvironmentsTearDownStart",
                                         "3rd.OnEnvironmentsTearDownStart",
                                         "Environment::TearDown",
                                         "3rd.OnEnvironmentsTearDownEnd",
                                         "2nd.OnEnvironmentsTearDownEnd",
                                         "1st.OnEnvironmentsTearDownEnd",
                                         "3rd.OnTestIterationEnd(1)",
                                         "2nd.OnTestIterationEnd(1)",
                                         "1st.OnTestIterationEnd(1)",
                                         "3rd.OnTestProgramEnd",
                                         "2nd.OnTestProgramEnd",
                                         "1st.OnTestProgramEnd"};
#endif  // GTEST_REMOVE_LEGACY_TEST_CASEAPI_

  VerifyResults(events,
                expected_events,
                sizeof(expected_events)/sizeof(expected_events[0]));

  // We need to check manually for ad hoc test failures that happen after
  // RUN_ALL_TESTS finishes.
  if (UnitTest::GetInstance()->Failed())
    ret_val = 1;

  return ret_val;
}
