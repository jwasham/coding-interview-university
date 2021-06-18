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

//
// Each TEST() expands to some static registration logic.  GCC puts all
// such static initialization logic for a translation unit in a common,
// internal function.  Since Google's build system restricts how much
// stack space a function can use, there's a limit on how many TEST()s
// one can put in a single C++ test file.  This test ensures that a large
// number of TEST()s can be defined in the same translation unit.

#include "gtest/gtest.h"

// This macro defines 10 dummy tests.
#define TEN_TESTS_(test_case_name) \
  TEST(test_case_name, T0) {} \
  TEST(test_case_name, T1) {} \
  TEST(test_case_name, T2) {} \
  TEST(test_case_name, T3) {} \
  TEST(test_case_name, T4) {} \
  TEST(test_case_name, T5) {} \
  TEST(test_case_name, T6) {} \
  TEST(test_case_name, T7) {} \
  TEST(test_case_name, T8) {} \
  TEST(test_case_name, T9) {}

// This macro defines 100 dummy tests.
#define HUNDRED_TESTS_(test_case_name_prefix) \
  TEN_TESTS_(test_case_name_prefix ## 0) \
  TEN_TESTS_(test_case_name_prefix ## 1) \
  TEN_TESTS_(test_case_name_prefix ## 2) \
  TEN_TESTS_(test_case_name_prefix ## 3) \
  TEN_TESTS_(test_case_name_prefix ## 4) \
  TEN_TESTS_(test_case_name_prefix ## 5) \
  TEN_TESTS_(test_case_name_prefix ## 6) \
  TEN_TESTS_(test_case_name_prefix ## 7) \
  TEN_TESTS_(test_case_name_prefix ## 8) \
  TEN_TESTS_(test_case_name_prefix ## 9)

// This macro defines 1000 dummy tests.
#define THOUSAND_TESTS_(test_case_name_prefix) \
  HUNDRED_TESTS_(test_case_name_prefix ## 0) \
  HUNDRED_TESTS_(test_case_name_prefix ## 1) \
  HUNDRED_TESTS_(test_case_name_prefix ## 2) \
  HUNDRED_TESTS_(test_case_name_prefix ## 3) \
  HUNDRED_TESTS_(test_case_name_prefix ## 4) \
  HUNDRED_TESTS_(test_case_name_prefix ## 5) \
  HUNDRED_TESTS_(test_case_name_prefix ## 6) \
  HUNDRED_TESTS_(test_case_name_prefix ## 7) \
  HUNDRED_TESTS_(test_case_name_prefix ## 8) \
  HUNDRED_TESTS_(test_case_name_prefix ## 9)

// Ensures that we can define 1000 TEST()s in the same translation
// unit.
THOUSAND_TESTS_(T)

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  // We don't actually need to run the dummy tests - the purpose is to
  // ensure that they compile.
  return 0;
}
