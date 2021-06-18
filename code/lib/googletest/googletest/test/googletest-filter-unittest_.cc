// Copyright 2005, Google Inc.
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


// Unit test for Google Test test filters.
//
// A user can specify which test(s) in a Google Test program to run via
// either the GTEST_FILTER environment variable or the --gtest_filter
// flag.  This is used for testing such functionality.
//
// The program will be invoked from a Python unit test.  Don't run it
// directly.

#include "gtest/gtest.h"

namespace {

// Test case FooTest.

class FooTest : public testing::Test {
};

TEST_F(FooTest, Abc) {
}

TEST_F(FooTest, Xyz) {
  FAIL() << "Expected failure.";
}

// Test case BarTest.

TEST(BarTest, TestOne) {
}

TEST(BarTest, TestTwo) {
}

TEST(BarTest, TestThree) {
}

TEST(BarTest, DISABLED_TestFour) {
  FAIL() << "Expected failure.";
}

TEST(BarTest, DISABLED_TestFive) {
  FAIL() << "Expected failure.";
}

// Test case BazTest.

TEST(BazTest, TestOne) {
  FAIL() << "Expected failure.";
}

TEST(BazTest, TestA) {
}

TEST(BazTest, TestB) {
}

TEST(BazTest, DISABLED_TestC) {
  FAIL() << "Expected failure.";
}

// Test case HasDeathTest

TEST(HasDeathTest, Test1) {
  EXPECT_DEATH_IF_SUPPORTED(exit(1), ".*");
}

// We need at least two death tests to make sure that the all death tests
// aren't on the first shard.
TEST(HasDeathTest, Test2) {
  EXPECT_DEATH_IF_SUPPORTED(exit(1), ".*");
}

// Test case FoobarTest

TEST(DISABLED_FoobarTest, Test1) {
  FAIL() << "Expected failure.";
}

TEST(DISABLED_FoobarTest, DISABLED_Test2) {
  FAIL() << "Expected failure.";
}

// Test case FoobarbazTest

TEST(DISABLED_FoobarbazTest, TestA) {
  FAIL() << "Expected failure.";
}

class ParamTest : public testing::TestWithParam<int> {
};

TEST_P(ParamTest, TestX) {
}

TEST_P(ParamTest, TestY) {
}

INSTANTIATE_TEST_SUITE_P(SeqP, ParamTest, testing::Values(1, 2));
INSTANTIATE_TEST_SUITE_P(SeqQ, ParamTest, testing::Values(5, 6));

}  // namespace

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
