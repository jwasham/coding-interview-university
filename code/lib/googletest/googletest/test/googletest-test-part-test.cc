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

#include "gtest/gtest-test-part.h"

#include "gtest/gtest.h"

using testing::Message;
using testing::Test;
using testing::TestPartResult;
using testing::TestPartResultArray;

namespace {

// Tests the TestPartResult class.

// The test fixture for testing TestPartResult.
class TestPartResultTest : public Test {
 protected:
  TestPartResultTest()
      : r1_(TestPartResult::kSuccess, "foo/bar.cc", 10, "Success!"),
        r2_(TestPartResult::kNonFatalFailure, "foo/bar.cc", -1, "Failure!"),
        r3_(TestPartResult::kFatalFailure, nullptr, -1, "Failure!"),
        r4_(TestPartResult::kSkip, "foo/bar.cc", 2, "Skipped!") {}

  TestPartResult r1_, r2_, r3_, r4_;
};


TEST_F(TestPartResultTest, ConstructorWorks) {
  Message message;
  message << "something is terribly wrong";
  message << static_cast<const char*>(testing::internal::kStackTraceMarker);
  message << "some unimportant stack trace";

  const TestPartResult result(TestPartResult::kNonFatalFailure,
                              "some_file.cc",
                              42,
                              message.GetString().c_str());

  EXPECT_EQ(TestPartResult::kNonFatalFailure, result.type());
  EXPECT_STREQ("some_file.cc", result.file_name());
  EXPECT_EQ(42, result.line_number());
  EXPECT_STREQ(message.GetString().c_str(), result.message());
  EXPECT_STREQ("something is terribly wrong", result.summary());
}

TEST_F(TestPartResultTest, ResultAccessorsWork) {
  const TestPartResult success(TestPartResult::kSuccess,
                               "file.cc",
                               42,
                               "message");
  EXPECT_TRUE(success.passed());
  EXPECT_FALSE(success.failed());
  EXPECT_FALSE(success.nonfatally_failed());
  EXPECT_FALSE(success.fatally_failed());
  EXPECT_FALSE(success.skipped());

  const TestPartResult nonfatal_failure(TestPartResult::kNonFatalFailure,
                                        "file.cc",
                                        42,
                                        "message");
  EXPECT_FALSE(nonfatal_failure.passed());
  EXPECT_TRUE(nonfatal_failure.failed());
  EXPECT_TRUE(nonfatal_failure.nonfatally_failed());
  EXPECT_FALSE(nonfatal_failure.fatally_failed());
  EXPECT_FALSE(nonfatal_failure.skipped());

  const TestPartResult fatal_failure(TestPartResult::kFatalFailure,
                                     "file.cc",
                                     42,
                                     "message");
  EXPECT_FALSE(fatal_failure.passed());
  EXPECT_TRUE(fatal_failure.failed());
  EXPECT_FALSE(fatal_failure.nonfatally_failed());
  EXPECT_TRUE(fatal_failure.fatally_failed());
  EXPECT_FALSE(fatal_failure.skipped());

  const TestPartResult skip(TestPartResult::kSkip, "file.cc", 42, "message");
  EXPECT_FALSE(skip.passed());
  EXPECT_FALSE(skip.failed());
  EXPECT_FALSE(skip.nonfatally_failed());
  EXPECT_FALSE(skip.fatally_failed());
  EXPECT_TRUE(skip.skipped());
}

// Tests TestPartResult::type().
TEST_F(TestPartResultTest, type) {
  EXPECT_EQ(TestPartResult::kSuccess, r1_.type());
  EXPECT_EQ(TestPartResult::kNonFatalFailure, r2_.type());
  EXPECT_EQ(TestPartResult::kFatalFailure, r3_.type());
  EXPECT_EQ(TestPartResult::kSkip, r4_.type());
}

// Tests TestPartResult::file_name().
TEST_F(TestPartResultTest, file_name) {
  EXPECT_STREQ("foo/bar.cc", r1_.file_name());
  EXPECT_STREQ(nullptr, r3_.file_name());
  EXPECT_STREQ("foo/bar.cc", r4_.file_name());
}

// Tests TestPartResult::line_number().
TEST_F(TestPartResultTest, line_number) {
  EXPECT_EQ(10, r1_.line_number());
  EXPECT_EQ(-1, r2_.line_number());
  EXPECT_EQ(2, r4_.line_number());
}

// Tests TestPartResult::message().
TEST_F(TestPartResultTest, message) {
  EXPECT_STREQ("Success!", r1_.message());
  EXPECT_STREQ("Skipped!", r4_.message());
}

// Tests TestPartResult::passed().
TEST_F(TestPartResultTest, Passed) {
  EXPECT_TRUE(r1_.passed());
  EXPECT_FALSE(r2_.passed());
  EXPECT_FALSE(r3_.passed());
  EXPECT_FALSE(r4_.passed());
}

// Tests TestPartResult::failed().
TEST_F(TestPartResultTest, Failed) {
  EXPECT_FALSE(r1_.failed());
  EXPECT_TRUE(r2_.failed());
  EXPECT_TRUE(r3_.failed());
  EXPECT_FALSE(r4_.failed());
}

// Tests TestPartResult::failed().
TEST_F(TestPartResultTest, Skipped) {
  EXPECT_FALSE(r1_.skipped());
  EXPECT_FALSE(r2_.skipped());
  EXPECT_FALSE(r3_.skipped());
  EXPECT_TRUE(r4_.skipped());
}

// Tests TestPartResult::fatally_failed().
TEST_F(TestPartResultTest, FatallyFailed) {
  EXPECT_FALSE(r1_.fatally_failed());
  EXPECT_FALSE(r2_.fatally_failed());
  EXPECT_TRUE(r3_.fatally_failed());
  EXPECT_FALSE(r4_.fatally_failed());
}

// Tests TestPartResult::nonfatally_failed().
TEST_F(TestPartResultTest, NonfatallyFailed) {
  EXPECT_FALSE(r1_.nonfatally_failed());
  EXPECT_TRUE(r2_.nonfatally_failed());
  EXPECT_FALSE(r3_.nonfatally_failed());
  EXPECT_FALSE(r4_.nonfatally_failed());
}

// Tests the TestPartResultArray class.

class TestPartResultArrayTest : public Test {
 protected:
  TestPartResultArrayTest()
      : r1_(TestPartResult::kNonFatalFailure, "foo/bar.cc", -1, "Failure 1"),
        r2_(TestPartResult::kFatalFailure, "foo/bar.cc", -1, "Failure 2") {}

  const TestPartResult r1_, r2_;
};

// Tests that TestPartResultArray initially has size 0.
TEST_F(TestPartResultArrayTest, InitialSizeIsZero) {
  TestPartResultArray results;
  EXPECT_EQ(0, results.size());
}

// Tests that TestPartResultArray contains the given TestPartResult
// after one Append() operation.
TEST_F(TestPartResultArrayTest, ContainsGivenResultAfterAppend) {
  TestPartResultArray results;
  results.Append(r1_);
  EXPECT_EQ(1, results.size());
  EXPECT_STREQ("Failure 1", results.GetTestPartResult(0).message());
}

// Tests that TestPartResultArray contains the given TestPartResults
// after two Append() operations.
TEST_F(TestPartResultArrayTest, ContainsGivenResultsAfterTwoAppends) {
  TestPartResultArray results;
  results.Append(r1_);
  results.Append(r2_);
  EXPECT_EQ(2, results.size());
  EXPECT_STREQ("Failure 1", results.GetTestPartResult(0).message());
  EXPECT_STREQ("Failure 2", results.GetTestPartResult(1).message());
}

typedef TestPartResultArrayTest TestPartResultArrayDeathTest;

// Tests that the program dies when GetTestPartResult() is called with
// an invalid index.
TEST_F(TestPartResultArrayDeathTest, DiesWhenIndexIsOutOfBound) {
  TestPartResultArray results;
  results.Append(r1_);

  EXPECT_DEATH_IF_SUPPORTED(results.GetTestPartResult(-1), "");
  EXPECT_DEATH_IF_SUPPORTED(results.GetTestPartResult(1), "");
}

}  // namespace
