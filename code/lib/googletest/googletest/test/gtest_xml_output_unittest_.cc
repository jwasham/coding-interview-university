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

// Unit test for Google Test XML output.
//
// A user can specify XML output in a Google Test program to run via
// either the GTEST_OUTPUT environment variable or the --gtest_output
// flag.  This is used for testing such functionality.
//
// This program will be invoked from a Python unit test.  Don't run it
// directly.

#include "gtest/gtest.h"

using ::testing::InitGoogleTest;
using ::testing::TestEventListeners;
using ::testing::TestWithParam;
using ::testing::UnitTest;
using ::testing::Test;
using ::testing::Values;

class SuccessfulTest : public Test {
};

TEST_F(SuccessfulTest, Succeeds) {
  SUCCEED() << "This is a success.";
  ASSERT_EQ(1, 1);
}

class FailedTest : public Test {
};

TEST_F(FailedTest, Fails) {
  ASSERT_EQ(1, 2);
}

class DisabledTest : public Test {
};

TEST_F(DisabledTest, DISABLED_test_not_run) {
  FAIL() << "Unexpected failure: Disabled test should not be run";
}

class SkippedTest : public Test {
};

TEST_F(SkippedTest, Skipped) {
  GTEST_SKIP();
}

TEST(MixedResultTest, Succeeds) {
  EXPECT_EQ(1, 1);
  ASSERT_EQ(1, 1);
}

TEST(MixedResultTest, Fails) {
  EXPECT_EQ(1, 2);
  ASSERT_EQ(2, 3);
}

TEST(MixedResultTest, DISABLED_test) {
  FAIL() << "Unexpected failure: Disabled test should not be run";
}

TEST(XmlQuotingTest, OutputsCData) {
  FAIL() << "XML output: "
            "<?xml encoding=\"utf-8\"><top><![CDATA[cdata text]]></top>";
}

// Helps to test that invalid characters produced by test code do not make
// it into the XML file.
TEST(InvalidCharactersTest, InvalidCharactersInMessage) {
  FAIL() << "Invalid characters in brackets [\x1\x2]";
}

class PropertyRecordingTest : public Test {
 public:
  static void SetUpTestSuite() { RecordProperty("SetUpTestSuite", "yes"); }
  static void TearDownTestSuite() {
    RecordProperty("TearDownTestSuite", "aye");
  }
};

TEST_F(PropertyRecordingTest, OneProperty) {
  RecordProperty("key_1", "1");
}

TEST_F(PropertyRecordingTest, IntValuedProperty) {
  RecordProperty("key_int", 1);
}

TEST_F(PropertyRecordingTest, ThreeProperties) {
  RecordProperty("key_1", "1");
  RecordProperty("key_2", "2");
  RecordProperty("key_3", "3");
}

TEST_F(PropertyRecordingTest, TwoValuesForOneKeyUsesLastValue) {
  RecordProperty("key_1", "1");
  RecordProperty("key_1", "2");
}

TEST(NoFixtureTest, RecordProperty) {
  RecordProperty("key", "1");
}

void ExternalUtilityThatCallsRecordProperty(const std::string& key, int value) {
  testing::Test::RecordProperty(key, value);
}

void ExternalUtilityThatCallsRecordProperty(const std::string& key,
                                            const std::string& value) {
  testing::Test::RecordProperty(key, value);
}

TEST(NoFixtureTest, ExternalUtilityThatCallsRecordIntValuedProperty) {
  ExternalUtilityThatCallsRecordProperty("key_for_utility_int", 1);
}

TEST(NoFixtureTest, ExternalUtilityThatCallsRecordStringValuedProperty) {
  ExternalUtilityThatCallsRecordProperty("key_for_utility_string", "1");
}

// Verifies that the test parameter value is output in the 'value_param'
// XML attribute for value-parameterized tests.
class ValueParamTest : public TestWithParam<int> {};
TEST_P(ValueParamTest, HasValueParamAttribute) {}
TEST_P(ValueParamTest, AnotherTestThatHasValueParamAttribute) {}
INSTANTIATE_TEST_SUITE_P(Single, ValueParamTest, Values(33, 42));

#if GTEST_HAS_TYPED_TEST
// Verifies that the type parameter name is output in the 'type_param'
// XML attribute for typed tests.
template <typename T> class TypedTest : public Test {};
typedef testing::Types<int, long> TypedTestTypes;
TYPED_TEST_SUITE(TypedTest, TypedTestTypes);
TYPED_TEST(TypedTest, HasTypeParamAttribute) {}
#endif

#if GTEST_HAS_TYPED_TEST_P
// Verifies that the type parameter name is output in the 'type_param'
// XML attribute for type-parameterized tests.
template <typename T>
class TypeParameterizedTestSuite : public Test {};
TYPED_TEST_SUITE_P(TypeParameterizedTestSuite);
TYPED_TEST_P(TypeParameterizedTestSuite, HasTypeParamAttribute) {}
REGISTER_TYPED_TEST_SUITE_P(TypeParameterizedTestSuite, HasTypeParamAttribute);
typedef testing::Types<int, long> TypeParameterizedTestSuiteTypes;  // NOLINT
INSTANTIATE_TYPED_TEST_SUITE_P(Single, TypeParameterizedTestSuite,
                               TypeParameterizedTestSuiteTypes);
#endif

int main(int argc, char** argv) {
  InitGoogleTest(&argc, argv);

  if (argc > 1 && strcmp(argv[1], "--shut_down_xml") == 0) {
    TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
    delete listeners.Release(listeners.default_xml_generator());
  }
  testing::Test::RecordProperty("ad_hoc_property", "42");
  return RUN_ALL_TESTS();
}
