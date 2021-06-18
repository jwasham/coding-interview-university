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


#ifndef GTEST_TEST_GTEST_TYPED_TEST_TEST_H_
#define GTEST_TEST_GTEST_TYPED_TEST_TEST_H_

#include "gtest/gtest.h"

#if GTEST_HAS_TYPED_TEST_P

using testing::Test;

// For testing that the same type-parameterized test case can be
// instantiated in different translation units linked together.
// ContainerTest will be instantiated in both gtest-typed-test_test.cc
// and gtest-typed-test2_test.cc.

template <typename T>
class ContainerTest : public Test {
};

TYPED_TEST_SUITE_P(ContainerTest);

TYPED_TEST_P(ContainerTest, CanBeDefaultConstructed) {
  TypeParam container;
}

TYPED_TEST_P(ContainerTest, InitialSizeIsZero) {
  TypeParam container;
  EXPECT_EQ(0U, container.size());
}

REGISTER_TYPED_TEST_SUITE_P(ContainerTest,
                            CanBeDefaultConstructed, InitialSizeIsZero);

#endif  // GTEST_HAS_TYPED_TEST_P

#endif  // GTEST_TEST_GTEST_TYPED_TEST_TEST_H_
