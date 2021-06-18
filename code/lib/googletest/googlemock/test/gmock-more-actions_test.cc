// Copyright 2007, Google Inc.
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


// Google Mock - a framework for writing C++ mock classes.
//
// This file tests the built-in actions in gmock-more-actions.h.

#include "gmock/gmock-more-actions.h"

#include <functional>
#include <memory>
#include <sstream>
#include <string>
#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace testing {
namespace gmock_more_actions_test {

using ::std::plus;
using ::std::string;
using testing::_;
using testing::Action;
using testing::ActionInterface;
using testing::DeleteArg;
using testing::Invoke;
using testing::Return;
using testing::ReturnArg;
using testing::ReturnPointee;
using testing::SaveArg;
using testing::SaveArgPointee;
using testing::SetArgReferee;
using testing::Unused;
using testing::WithArg;
using testing::WithoutArgs;

// For suppressing compiler warnings on conversion possibly losing precision.
inline short Short(short n) { return n; }  // NOLINT
inline char Char(char ch) { return ch; }

// Sample functions and functors for testing Invoke() and etc.
int Nullary() { return 1; }

class NullaryFunctor {
 public:
  int operator()() { return 2; }
};

bool g_done = false;
void VoidNullary() { g_done = true; }

class VoidNullaryFunctor {
 public:
  void operator()() { g_done = true; }
};

bool Unary(int x) { return x < 0; }

const char* Plus1(const char* s) { return s + 1; }

void VoidUnary(int /* n */) { g_done = true; }

bool ByConstRef(const std::string& s) { return s == "Hi"; }

const double g_double = 0;
bool ReferencesGlobalDouble(const double& x) { return &x == &g_double; }

std::string ByNonConstRef(std::string& s) { return s += "+"; }  // NOLINT

struct UnaryFunctor {
  int operator()(bool x) { return x ? 1 : -1; }
};

const char* Binary(const char* input, short n) { return input + n; }  // NOLINT

void VoidBinary(int, char) { g_done = true; }

int Ternary(int x, char y, short z) { return x + y + z; }  // NOLINT

void VoidTernary(int, char, bool) { g_done = true; }

int SumOf4(int a, int b, int c, int d) { return a + b + c + d; }

int SumOfFirst2(int a, int b, Unused, Unused) { return a + b; }

void VoidFunctionWithFourArguments(char, int, float, double) { g_done = true; }

std::string Concat4(const char* s1, const char* s2, const char* s3,
                    const char* s4) {
  return std::string(s1) + s2 + s3 + s4;
}

int SumOf5(int a, int b, int c, int d, int e) { return a + b + c + d + e; }

struct SumOf5Functor {
  int operator()(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
  }
};

std::string Concat5(const char* s1, const char* s2, const char* s3,
                    const char* s4, const char* s5) {
  return std::string(s1) + s2 + s3 + s4 + s5;
}

int SumOf6(int a, int b, int c, int d, int e, int f) {
  return a + b + c + d + e + f;
}

struct SumOf6Functor {
  int operator()(int a, int b, int c, int d, int e, int f) {
    return a + b + c + d + e + f;
  }
};

std::string Concat6(const char* s1, const char* s2, const char* s3,
                    const char* s4, const char* s5, const char* s6) {
  return std::string(s1) + s2 + s3 + s4 + s5 + s6;
}

std::string Concat7(const char* s1, const char* s2, const char* s3,
                    const char* s4, const char* s5, const char* s6,
                    const char* s7) {
  return std::string(s1) + s2 + s3 + s4 + s5 + s6 + s7;
}

std::string Concat8(const char* s1, const char* s2, const char* s3,
                    const char* s4, const char* s5, const char* s6,
                    const char* s7, const char* s8) {
  return std::string(s1) + s2 + s3 + s4 + s5 + s6 + s7 + s8;
}

std::string Concat9(const char* s1, const char* s2, const char* s3,
                    const char* s4, const char* s5, const char* s6,
                    const char* s7, const char* s8, const char* s9) {
  return std::string(s1) + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9;
}

std::string Concat10(const char* s1, const char* s2, const char* s3,
                     const char* s4, const char* s5, const char* s6,
                     const char* s7, const char* s8, const char* s9,
                     const char* s10) {
  return std::string(s1) + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10;
}

class Foo {
 public:
  Foo() : value_(123) {}

  int Nullary() const { return value_; }

  short Unary(long x) { return static_cast<short>(value_ + x); }  // NOLINT

  std::string Binary(const std::string& str, char c) const { return str + c; }

  int Ternary(int x, bool y, char z) { return value_ + x + y*z; }

  int SumOf4(int a, int b, int c, int d) const {
    return a + b + c + d + value_;
  }

  int SumOfLast2(Unused, Unused, int a, int b) const { return a + b; }

  int SumOf5(int a, int b, int c, int d, int e) { return a + b + c + d + e; }

  int SumOf6(int a, int b, int c, int d, int e, int f) {
    return a + b + c + d + e + f;
  }

  std::string Concat7(const char* s1, const char* s2, const char* s3,
                      const char* s4, const char* s5, const char* s6,
                      const char* s7) {
    return std::string(s1) + s2 + s3 + s4 + s5 + s6 + s7;
  }

  std::string Concat8(const char* s1, const char* s2, const char* s3,
                      const char* s4, const char* s5, const char* s6,
                      const char* s7, const char* s8) {
    return std::string(s1) + s2 + s3 + s4 + s5 + s6 + s7 + s8;
  }

  std::string Concat9(const char* s1, const char* s2, const char* s3,
                      const char* s4, const char* s5, const char* s6,
                      const char* s7, const char* s8, const char* s9) {
    return std::string(s1) + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9;
  }

  std::string Concat10(const char* s1, const char* s2, const char* s3,
                       const char* s4, const char* s5, const char* s6,
                       const char* s7, const char* s8, const char* s9,
                       const char* s10) {
    return std::string(s1) + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10;
  }

 private:
  int value_;
};

// Tests using Invoke() with a nullary function.
TEST(InvokeTest, Nullary) {
  Action<int()> a = Invoke(Nullary);  // NOLINT
  EXPECT_EQ(1, a.Perform(std::make_tuple()));
}

// Tests using Invoke() with a unary function.
TEST(InvokeTest, Unary) {
  Action<bool(int)> a = Invoke(Unary);  // NOLINT
  EXPECT_FALSE(a.Perform(std::make_tuple(1)));
  EXPECT_TRUE(a.Perform(std::make_tuple(-1)));
}

// Tests using Invoke() with a binary function.
TEST(InvokeTest, Binary) {
  Action<const char*(const char*, short)> a = Invoke(Binary);  // NOLINT
  const char* p = "Hello";
  EXPECT_EQ(p + 2, a.Perform(std::make_tuple(p, Short(2))));
}

// Tests using Invoke() with a ternary function.
TEST(InvokeTest, Ternary) {
  Action<int(int, char, short)> a = Invoke(Ternary);  // NOLINT
  EXPECT_EQ(6, a.Perform(std::make_tuple(1, '\2', Short(3))));
}

// Tests using Invoke() with a 4-argument function.
TEST(InvokeTest, FunctionThatTakes4Arguments) {
  Action<int(int, int, int, int)> a = Invoke(SumOf4);  // NOLINT
  EXPECT_EQ(1234, a.Perform(std::make_tuple(1000, 200, 30, 4)));
}

// Tests using Invoke() with a 5-argument function.
TEST(InvokeTest, FunctionThatTakes5Arguments) {
  Action<int(int, int, int, int, int)> a = Invoke(SumOf5);  // NOLINT
  EXPECT_EQ(12345, a.Perform(std::make_tuple(10000, 2000, 300, 40, 5)));
}

// Tests using Invoke() with a 6-argument function.
TEST(InvokeTest, FunctionThatTakes6Arguments) {
  Action<int(int, int, int, int, int, int)> a = Invoke(SumOf6);  // NOLINT
  EXPECT_EQ(123456,
            a.Perform(std::make_tuple(100000, 20000, 3000, 400, 50, 6)));
}

// A helper that turns the type of a C-string literal from const
// char[N] to const char*.
inline const char* CharPtr(const char* s) { return s; }

// Tests using Invoke() with a 7-argument function.
TEST(InvokeTest, FunctionThatTakes7Arguments) {
  Action<std::string(const char*, const char*, const char*, const char*,
                     const char*, const char*, const char*)>
      a = Invoke(Concat7);
  EXPECT_EQ("1234567",
            a.Perform(std::make_tuple(CharPtr("1"), CharPtr("2"), CharPtr("3"),
                                      CharPtr("4"), CharPtr("5"), CharPtr("6"),
                                      CharPtr("7"))));
}

// Tests using Invoke() with a 8-argument function.
TEST(InvokeTest, FunctionThatTakes8Arguments) {
  Action<std::string(const char*, const char*, const char*, const char*,
                     const char*, const char*, const char*, const char*)>
      a = Invoke(Concat8);
  EXPECT_EQ("12345678",
            a.Perform(std::make_tuple(CharPtr("1"), CharPtr("2"), CharPtr("3"),
                                      CharPtr("4"), CharPtr("5"), CharPtr("6"),
                                      CharPtr("7"), CharPtr("8"))));
}

// Tests using Invoke() with a 9-argument function.
TEST(InvokeTest, FunctionThatTakes9Arguments) {
  Action<std::string(const char*, const char*, const char*, const char*,
                     const char*, const char*, const char*, const char*,
                     const char*)>
      a = Invoke(Concat9);
  EXPECT_EQ("123456789", a.Perform(std::make_tuple(
                             CharPtr("1"), CharPtr("2"), CharPtr("3"),
                             CharPtr("4"), CharPtr("5"), CharPtr("6"),
                             CharPtr("7"), CharPtr("8"), CharPtr("9"))));
}

// Tests using Invoke() with a 10-argument function.
TEST(InvokeTest, FunctionThatTakes10Arguments) {
  Action<std::string(const char*, const char*, const char*, const char*,
                     const char*, const char*, const char*, const char*,
                     const char*, const char*)>
      a = Invoke(Concat10);
  EXPECT_EQ("1234567890",
            a.Perform(std::make_tuple(CharPtr("1"), CharPtr("2"), CharPtr("3"),
                                      CharPtr("4"), CharPtr("5"), CharPtr("6"),
                                      CharPtr("7"), CharPtr("8"), CharPtr("9"),
                                      CharPtr("0"))));
}

// Tests using Invoke() with functions with parameters declared as Unused.
TEST(InvokeTest, FunctionWithUnusedParameters) {
  Action<int(int, int, double, const std::string&)> a1 = Invoke(SumOfFirst2);
  std::tuple<int, int, double, std::string> dummy =
      std::make_tuple(10, 2, 5.6, std::string("hi"));
  EXPECT_EQ(12, a1.Perform(dummy));

  Action<int(int, int, bool, int*)> a2 =
      Invoke(SumOfFirst2);
  EXPECT_EQ(
      23, a2.Perform(std::make_tuple(20, 3, true, static_cast<int*>(nullptr))));
}

// Tests using Invoke() with methods with parameters declared as Unused.
TEST(InvokeTest, MethodWithUnusedParameters) {
  Foo foo;
  Action<int(std::string, bool, int, int)> a1 = Invoke(&foo, &Foo::SumOfLast2);
  EXPECT_EQ(12, a1.Perform(std::make_tuple(CharPtr("hi"), true, 10, 2)));

  Action<int(char, double, int, int)> a2 =
      Invoke(&foo, &Foo::SumOfLast2);
  EXPECT_EQ(23, a2.Perform(std::make_tuple('a', 2.5, 20, 3)));
}

// Tests using Invoke() with a functor.
TEST(InvokeTest, Functor) {
  Action<long(long, int)> a = Invoke(plus<long>());  // NOLINT
  EXPECT_EQ(3L, a.Perform(std::make_tuple(1, 2)));
}

// Tests using Invoke(f) as an action of a compatible type.
TEST(InvokeTest, FunctionWithCompatibleType) {
  Action<long(int, short, char, bool)> a = Invoke(SumOf4);  // NOLINT
  EXPECT_EQ(4321, a.Perform(std::make_tuple(4000, Short(300), Char(20), true)));
}

// Tests using Invoke() with an object pointer and a method pointer.

// Tests using Invoke() with a nullary method.
TEST(InvokeMethodTest, Nullary) {
  Foo foo;
  Action<int()> a = Invoke(&foo, &Foo::Nullary);  // NOLINT
  EXPECT_EQ(123, a.Perform(std::make_tuple()));
}

// Tests using Invoke() with a unary method.
TEST(InvokeMethodTest, Unary) {
  Foo foo;
  Action<short(long)> a = Invoke(&foo, &Foo::Unary);  // NOLINT
  EXPECT_EQ(4123, a.Perform(std::make_tuple(4000)));
}

// Tests using Invoke() with a binary method.
TEST(InvokeMethodTest, Binary) {
  Foo foo;
  Action<std::string(const std::string&, char)> a = Invoke(&foo, &Foo::Binary);
  std::string s("Hell");
  std::tuple<std::string, char> dummy = std::make_tuple(s, 'o');
  EXPECT_EQ("Hello", a.Perform(dummy));
}

// Tests using Invoke() with a ternary method.
TEST(InvokeMethodTest, Ternary) {
  Foo foo;
  Action<int(int, bool, char)> a = Invoke(&foo, &Foo::Ternary);  // NOLINT
  EXPECT_EQ(1124, a.Perform(std::make_tuple(1000, true, Char(1))));
}

// Tests using Invoke() with a 4-argument method.
TEST(InvokeMethodTest, MethodThatTakes4Arguments) {
  Foo foo;
  Action<int(int, int, int, int)> a = Invoke(&foo, &Foo::SumOf4);  // NOLINT
  EXPECT_EQ(1357, a.Perform(std::make_tuple(1000, 200, 30, 4)));
}

// Tests using Invoke() with a 5-argument method.
TEST(InvokeMethodTest, MethodThatTakes5Arguments) {
  Foo foo;
  Action<int(int, int, int, int, int)> a = Invoke(&foo, &Foo::SumOf5);  // NOLINT
  EXPECT_EQ(12345, a.Perform(std::make_tuple(10000, 2000, 300, 40, 5)));
}

// Tests using Invoke() with a 6-argument method.
TEST(InvokeMethodTest, MethodThatTakes6Arguments) {
  Foo foo;
  Action<int(int, int, int, int, int, int)> a =  // NOLINT
      Invoke(&foo, &Foo::SumOf6);
  EXPECT_EQ(123456,
            a.Perform(std::make_tuple(100000, 20000, 3000, 400, 50, 6)));
}

// Tests using Invoke() with a 7-argument method.
TEST(InvokeMethodTest, MethodThatTakes7Arguments) {
  Foo foo;
  Action<std::string(const char*, const char*, const char*, const char*,
                     const char*, const char*, const char*)>
      a = Invoke(&foo, &Foo::Concat7);
  EXPECT_EQ("1234567",
            a.Perform(std::make_tuple(CharPtr("1"), CharPtr("2"), CharPtr("3"),
                                      CharPtr("4"), CharPtr("5"), CharPtr("6"),
                                      CharPtr("7"))));
}

// Tests using Invoke() with a 8-argument method.
TEST(InvokeMethodTest, MethodThatTakes8Arguments) {
  Foo foo;
  Action<std::string(const char*, const char*, const char*, const char*,
                     const char*, const char*, const char*, const char*)>
      a = Invoke(&foo, &Foo::Concat8);
  EXPECT_EQ("12345678",
            a.Perform(std::make_tuple(CharPtr("1"), CharPtr("2"), CharPtr("3"),
                                      CharPtr("4"), CharPtr("5"), CharPtr("6"),
                                      CharPtr("7"), CharPtr("8"))));
}

// Tests using Invoke() with a 9-argument method.
TEST(InvokeMethodTest, MethodThatTakes9Arguments) {
  Foo foo;
  Action<std::string(const char*, const char*, const char*, const char*,
                     const char*, const char*, const char*, const char*,
                     const char*)>
      a = Invoke(&foo, &Foo::Concat9);
  EXPECT_EQ("123456789", a.Perform(std::make_tuple(
                             CharPtr("1"), CharPtr("2"), CharPtr("3"),
                             CharPtr("4"), CharPtr("5"), CharPtr("6"),
                             CharPtr("7"), CharPtr("8"), CharPtr("9"))));
}

// Tests using Invoke() with a 10-argument method.
TEST(InvokeMethodTest, MethodThatTakes10Arguments) {
  Foo foo;
  Action<std::string(const char*, const char*, const char*, const char*,
                     const char*, const char*, const char*, const char*,
                     const char*, const char*)>
      a = Invoke(&foo, &Foo::Concat10);
  EXPECT_EQ("1234567890",
            a.Perform(std::make_tuple(CharPtr("1"), CharPtr("2"), CharPtr("3"),
                                      CharPtr("4"), CharPtr("5"), CharPtr("6"),
                                      CharPtr("7"), CharPtr("8"), CharPtr("9"),
                                      CharPtr("0"))));
}

// Tests using Invoke(f) as an action of a compatible type.
TEST(InvokeMethodTest, MethodWithCompatibleType) {
  Foo foo;
  Action<long(int, short, char, bool)> a =  // NOLINT
      Invoke(&foo, &Foo::SumOf4);
  EXPECT_EQ(4444, a.Perform(std::make_tuple(4000, Short(300), Char(20), true)));
}

// Tests using WithoutArgs with an action that takes no argument.
TEST(WithoutArgsTest, NoArg) {
  Action<int(int n)> a = WithoutArgs(Invoke(Nullary));  // NOLINT
  EXPECT_EQ(1, a.Perform(std::make_tuple(2)));
}

// Tests using WithArg with an action that takes 1 argument.
TEST(WithArgTest, OneArg) {
  Action<bool(double x, int n)> b = WithArg<1>(Invoke(Unary));  // NOLINT
  EXPECT_TRUE(b.Perform(std::make_tuple(1.5, -1)));
  EXPECT_FALSE(b.Perform(std::make_tuple(1.5, 1)));
}

TEST(ReturnArgActionTest, WorksForOneArgIntArg0) {
  const Action<int(int)> a = ReturnArg<0>();
  EXPECT_EQ(5, a.Perform(std::make_tuple(5)));
}

TEST(ReturnArgActionTest, WorksForMultiArgBoolArg0) {
  const Action<bool(bool, bool, bool)> a = ReturnArg<0>();
  EXPECT_TRUE(a.Perform(std::make_tuple(true, false, false)));
}

TEST(ReturnArgActionTest, WorksForMultiArgStringArg2) {
  const Action<std::string(int, int, std::string, int)> a = ReturnArg<2>();
  EXPECT_EQ("seven", a.Perform(std::make_tuple(5, 6, std::string("seven"), 8)));
}

TEST(SaveArgActionTest, WorksForSameType) {
  int result = 0;
  const Action<void(int n)> a1 = SaveArg<0>(&result);
  a1.Perform(std::make_tuple(5));
  EXPECT_EQ(5, result);
}

TEST(SaveArgActionTest, WorksForCompatibleType) {
  int result = 0;
  const Action<void(bool, char)> a1 = SaveArg<1>(&result);
  a1.Perform(std::make_tuple(true, 'a'));
  EXPECT_EQ('a', result);
}

TEST(SaveArgPointeeActionTest, WorksForSameType) {
  int result = 0;
  const int value = 5;
  const Action<void(const int*)> a1 = SaveArgPointee<0>(&result);
  a1.Perform(std::make_tuple(&value));
  EXPECT_EQ(5, result);
}

TEST(SaveArgPointeeActionTest, WorksForCompatibleType) {
  int result = 0;
  char value = 'a';
  const Action<void(bool, char*)> a1 = SaveArgPointee<1>(&result);
  a1.Perform(std::make_tuple(true, &value));
  EXPECT_EQ('a', result);
}

TEST(SetArgRefereeActionTest, WorksForSameType) {
  int value = 0;
  const Action<void(int&)> a1 = SetArgReferee<0>(1);
  a1.Perform(std::tuple<int&>(value));
  EXPECT_EQ(1, value);
}

TEST(SetArgRefereeActionTest, WorksForCompatibleType) {
  int value = 0;
  const Action<void(int, int&)> a1 = SetArgReferee<1>('a');
  a1.Perform(std::tuple<int, int&>(0, value));
  EXPECT_EQ('a', value);
}

TEST(SetArgRefereeActionTest, WorksWithExtraArguments) {
  int value = 0;
  const Action<void(bool, int, int&, const char*)> a1 = SetArgReferee<2>('a');
  a1.Perform(std::tuple<bool, int, int&, const char*>(true, 0, value, "hi"));
  EXPECT_EQ('a', value);
}

// A class that can be used to verify that its destructor is called: it will set
// the bool provided to the constructor to true when destroyed.
class DeletionTester {
 public:
  explicit DeletionTester(bool* is_deleted)
    : is_deleted_(is_deleted) {
    // Make sure the bit is set to false.
    *is_deleted_ = false;
  }

  ~DeletionTester() {
    *is_deleted_ = true;
  }

 private:
  bool* is_deleted_;
};

TEST(DeleteArgActionTest, OneArg) {
  bool is_deleted = false;
  DeletionTester* t = new DeletionTester(&is_deleted);
  const Action<void(DeletionTester*)> a1 = DeleteArg<0>();      // NOLINT
  EXPECT_FALSE(is_deleted);
  a1.Perform(std::make_tuple(t));
  EXPECT_TRUE(is_deleted);
}

TEST(DeleteArgActionTest, TenArgs) {
  bool is_deleted = false;
  DeletionTester* t = new DeletionTester(&is_deleted);
  const Action<void(bool, int, int, const char*, bool,
                    int, int, int, int, DeletionTester*)> a1 = DeleteArg<9>();
  EXPECT_FALSE(is_deleted);
  a1.Perform(std::make_tuple(true, 5, 6, CharPtr("hi"), false, 7, 8, 9, 10, t));
  EXPECT_TRUE(is_deleted);
}

#if GTEST_HAS_EXCEPTIONS

TEST(ThrowActionTest, ThrowsGivenExceptionInVoidFunction) {
  const Action<void(int n)> a = Throw('a');
  EXPECT_THROW(a.Perform(std::make_tuple(0)), char);
}

class MyException {};

TEST(ThrowActionTest, ThrowsGivenExceptionInNonVoidFunction) {
  const Action<double(char ch)> a = Throw(MyException());
  EXPECT_THROW(a.Perform(std::make_tuple('0')), MyException);
}

TEST(ThrowActionTest, ThrowsGivenExceptionInNullaryFunction) {
  const Action<double()> a = Throw(MyException());
  EXPECT_THROW(a.Perform(std::make_tuple()), MyException);
}

#endif  // GTEST_HAS_EXCEPTIONS

// Tests that SetArrayArgument<N>(first, last) sets the elements of the array
// pointed to by the N-th (0-based) argument to values in range [first, last).
TEST(SetArrayArgumentTest, SetsTheNthArray) {
  typedef void MyFunction(bool, int*, char*);
  int numbers[] = { 1, 2, 3 };
  Action<MyFunction> a = SetArrayArgument<1>(numbers, numbers + 3);

  int n[4] = {};
  int* pn = n;
  char ch[4] = {};
  char* pch = ch;
  a.Perform(std::make_tuple(true, pn, pch));
  EXPECT_EQ(1, n[0]);
  EXPECT_EQ(2, n[1]);
  EXPECT_EQ(3, n[2]);
  EXPECT_EQ(0, n[3]);
  EXPECT_EQ('\0', ch[0]);
  EXPECT_EQ('\0', ch[1]);
  EXPECT_EQ('\0', ch[2]);
  EXPECT_EQ('\0', ch[3]);

  // Tests first and last are iterators.
  std::string letters = "abc";
  a = SetArrayArgument<2>(letters.begin(), letters.end());
  std::fill_n(n, 4, 0);
  std::fill_n(ch, 4, '\0');
  a.Perform(std::make_tuple(true, pn, pch));
  EXPECT_EQ(0, n[0]);
  EXPECT_EQ(0, n[1]);
  EXPECT_EQ(0, n[2]);
  EXPECT_EQ(0, n[3]);
  EXPECT_EQ('a', ch[0]);
  EXPECT_EQ('b', ch[1]);
  EXPECT_EQ('c', ch[2]);
  EXPECT_EQ('\0', ch[3]);
}

// Tests SetArrayArgument<N>(first, last) where first == last.
TEST(SetArrayArgumentTest, SetsTheNthArrayWithEmptyRange) {
  typedef void MyFunction(bool, int*);
  int numbers[] = { 1, 2, 3 };
  Action<MyFunction> a = SetArrayArgument<1>(numbers, numbers);

  int n[4] = {};
  int* pn = n;
  a.Perform(std::make_tuple(true, pn));
  EXPECT_EQ(0, n[0]);
  EXPECT_EQ(0, n[1]);
  EXPECT_EQ(0, n[2]);
  EXPECT_EQ(0, n[3]);
}

// Tests SetArrayArgument<N>(first, last) where *first is convertible
// (but not equal) to the argument type.
TEST(SetArrayArgumentTest, SetsTheNthArrayWithConvertibleType) {
  typedef void MyFunction(bool, int*);
  char chars[] = { 97, 98, 99 };
  Action<MyFunction> a = SetArrayArgument<1>(chars, chars + 3);

  int codes[4] = { 111, 222, 333, 444 };
  int* pcodes = codes;
  a.Perform(std::make_tuple(true, pcodes));
  EXPECT_EQ(97, codes[0]);
  EXPECT_EQ(98, codes[1]);
  EXPECT_EQ(99, codes[2]);
  EXPECT_EQ(444, codes[3]);
}

// Test SetArrayArgument<N>(first, last) with iterator as argument.
TEST(SetArrayArgumentTest, SetsTheNthArrayWithIteratorArgument) {
  typedef void MyFunction(bool, std::back_insert_iterator<std::string>);
  std::string letters = "abc";
  Action<MyFunction> a = SetArrayArgument<1>(letters.begin(), letters.end());

  std::string s;
  a.Perform(std::make_tuple(true, back_inserter(s)));
  EXPECT_EQ(letters, s);
}

TEST(ReturnPointeeTest, Works) {
  int n = 42;
  const Action<int()> a = ReturnPointee(&n);
  EXPECT_EQ(42, a.Perform(std::make_tuple()));

  n = 43;
  EXPECT_EQ(43, a.Perform(std::make_tuple()));
}

}  // namespace gmock_generated_actions_test
}  // namespace testing
