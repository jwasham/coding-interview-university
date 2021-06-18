// Copyright 2009, Google Inc.
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


// Verifies that test shuffling works.

#include "gtest/gtest.h"

namespace {

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Message;
using ::testing::Test;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::UnitTest;

// The test methods are empty, as the sole purpose of this program is
// to print the test names before/after shuffling.

class A : public Test {};
TEST_F(A, A) {}
TEST_F(A, B) {}

TEST(ADeathTest, A) {}
TEST(ADeathTest, B) {}
TEST(ADeathTest, C) {}

TEST(B, A) {}
TEST(B, B) {}
TEST(B, C) {}
TEST(B, DISABLED_D) {}
TEST(B, DISABLED_E) {}

TEST(BDeathTest, A) {}
TEST(BDeathTest, B) {}

TEST(C, A) {}
TEST(C, B) {}
TEST(C, C) {}
TEST(C, DISABLED_D) {}

TEST(CDeathTest, A) {}

TEST(DISABLED_D, A) {}
TEST(DISABLED_D, DISABLED_B) {}

// This printer prints the full test names only, starting each test
// iteration with a "----" marker.
class TestNamePrinter : public EmptyTestEventListener {
 public:
  void OnTestIterationStart(const UnitTest& /* unit_test */,
                            int /* iteration */) override {
    printf("----\n");
  }

  void OnTestStart(const TestInfo& test_info) override {
    printf("%s.%s\n", test_info.test_case_name(), test_info.name());
  }
};

}  // namespace

int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);

  // Replaces the default printer with TestNamePrinter, which prints
  // the test name only.
  TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
  delete listeners.Release(listeners.default_result_printer());
  listeners.Append(new TestNamePrinter);

  return RUN_ALL_TESTS();
}
