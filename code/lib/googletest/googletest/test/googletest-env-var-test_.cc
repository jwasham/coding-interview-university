// Copyright 2008, Google Inc.
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


// A helper program for testing that Google Test parses the environment
// variables correctly.

#include <iostream>

#include "gtest/gtest.h"
#include "src/gtest-internal-inl.h"

using ::std::cout;

namespace testing {

// The purpose of this is to make the test more realistic by ensuring
// that the UnitTest singleton is created before main() is entered.
// We don't actual run the TEST itself.
TEST(GTestEnvVarTest, Dummy) {
}

void PrintFlag(const char* flag) {
  if (strcmp(flag, "break_on_failure") == 0) {
    cout << GTEST_FLAG(break_on_failure);
    return;
  }

  if (strcmp(flag, "catch_exceptions") == 0) {
    cout << GTEST_FLAG(catch_exceptions);
    return;
  }

  if (strcmp(flag, "color") == 0) {
    cout << GTEST_FLAG(color);
    return;
  }

  if (strcmp(flag, "death_test_style") == 0) {
    cout << GTEST_FLAG(death_test_style);
    return;
  }

  if (strcmp(flag, "death_test_use_fork") == 0) {
    cout << GTEST_FLAG(death_test_use_fork);
    return;
  }

  if (strcmp(flag, "filter") == 0) {
    cout << GTEST_FLAG(filter);
    return;
  }

  if (strcmp(flag, "output") == 0) {
    cout << GTEST_FLAG(output);
    return;
  }

  if (strcmp(flag, "print_time") == 0) {
    cout << GTEST_FLAG(print_time);
    return;
  }

  if (strcmp(flag, "repeat") == 0) {
    cout << GTEST_FLAG(repeat);
    return;
  }

  if (strcmp(flag, "stack_trace_depth") == 0) {
    cout << GTEST_FLAG(stack_trace_depth);
    return;
  }

  if (strcmp(flag, "throw_on_failure") == 0) {
    cout << GTEST_FLAG(throw_on_failure);
    return;
  }

  cout << "Invalid flag name " << flag
       << ".  Valid names are break_on_failure, color, filter, etc.\n";
  exit(1);
}

}  // namespace testing

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);

  if (argc != 2) {
    cout << "Usage: googletest-env-var-test_ NAME_OF_FLAG\n";
    return 1;
  }

  testing::PrintFlag(argv[1]);
  return 0;
}
