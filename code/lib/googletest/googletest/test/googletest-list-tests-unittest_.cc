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


// Unit test for Google Test's --gtest_list_tests flag.
//
// A user can ask Google Test to list all tests that will run
// so that when using a filter, a user will know what
// tests to look for. The tests will not be run after listing.
//
// This program will be invoked from a Python unit test.
// Don't run it directly.

#include "gtest/gtest.h"

// Several different test cases and tests that will be listed.
TEST(Foo, Bar1) {
}

TEST(Foo, Bar2) {
}

TEST(Foo, DISABLED_Bar3) {
}

TEST(Abc, Xyz) {
}

TEST(Abc, Def) {
}

TEST(FooBar, Baz) {
}

class FooTest : public testing::Test {
};

TEST_F(FooTest, Test1) {
}

TEST_F(FooTest, DISABLED_Test2) {
}

TEST_F(FooTest, Test3) {
}

TEST(FooDeathTest, Test1) {
}

// A group of value-parameterized tests.

class MyType {
 public:
  explicit MyType(const std::string& a_value) : value_(a_value) {}

  const std::string& value() const { return value_; }

 private:
  std::string value_;
};

// Teaches Google Test how to print a MyType.
void PrintTo(const MyType& x, std::ostream* os) {
  *os << x.value();
}

class ValueParamTest : public testing::TestWithParam<MyType> {
};

TEST_P(ValueParamTest, TestA) {
}

TEST_P(ValueParamTest, TestB) {
}

INSTANTIATE_TEST_SUITE_P(
    MyInstantiation, ValueParamTest,
    testing::Values(MyType("one line"),
                    MyType("two\nlines"),
                    MyType("a very\nloooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong line")));  // NOLINT

// A group of typed tests.

// A deliberately long type name for testing the line-truncating
// behavior when printing a type parameter.
class VeryLoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooogName {  // NOLINT
};

template <typename T>
class TypedTest : public testing::Test {
};

template <typename T, int kSize>
class MyArray {
};

typedef testing::Types<VeryLoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooogName,  // NOLINT
                       int*, MyArray<bool, 42> > MyTypes;

TYPED_TEST_SUITE(TypedTest, MyTypes);

TYPED_TEST(TypedTest, TestA) {
}

TYPED_TEST(TypedTest, TestB) {
}

// A group of type-parameterized tests.

template <typename T>
class TypeParamTest : public testing::Test {
};

TYPED_TEST_SUITE_P(TypeParamTest);

TYPED_TEST_P(TypeParamTest, TestA) {
}

TYPED_TEST_P(TypeParamTest, TestB) {
}

REGISTER_TYPED_TEST_SUITE_P(TypeParamTest, TestA, TestB);

INSTANTIATE_TYPED_TEST_SUITE_P(My, TypeParamTest, MyTypes);

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
