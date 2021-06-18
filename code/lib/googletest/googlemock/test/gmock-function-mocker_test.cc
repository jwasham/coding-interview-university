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
// This file tests the function mocker classes.
#include "gmock/gmock-generated-function-mockers.h"

#if GTEST_OS_WINDOWS
// MSDN says the header file to be included for STDMETHOD is BaseTyps.h but
// we are getting compiler errors if we use basetyps.h, hence including
// objbase.h for definition of STDMETHOD.
# include <objbase.h>
#endif  // GTEST_OS_WINDOWS

#include <map>
#include <string>
#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace testing {
namespace gmock_function_mocker_test {

using testing::_;
using testing::A;
using testing::An;
using testing::AnyNumber;
using testing::Const;
using testing::DoDefault;
using testing::Eq;
using testing::Lt;
using testing::MockFunction;
using testing::Ref;
using testing::Return;
using testing::ReturnRef;
using testing::TypedEq;

template<typename T>
class TemplatedCopyable {
 public:
  TemplatedCopyable() {}

  template <typename U>
  TemplatedCopyable(const U& other) {}  // NOLINT
};

class FooInterface {
 public:
  virtual ~FooInterface() {}

  virtual void VoidReturning(int x) = 0;

  virtual int Nullary() = 0;
  virtual bool Unary(int x) = 0;
  virtual long Binary(short x, int y) = 0;  // NOLINT
  virtual int Decimal(bool b, char c, short d, int e, long f,  // NOLINT
                      float g, double h, unsigned i, char* j,
                      const std::string& k) = 0;

  virtual bool TakesNonConstReference(int& n) = 0;  // NOLINT
  virtual std::string TakesConstReference(const int& n) = 0;
  virtual bool TakesConst(const int x) = 0;

  virtual int OverloadedOnArgumentNumber() = 0;
  virtual int OverloadedOnArgumentNumber(int n) = 0;

  virtual int OverloadedOnArgumentType(int n) = 0;
  virtual char OverloadedOnArgumentType(char c) = 0;

  virtual int OverloadedOnConstness() = 0;
  virtual char OverloadedOnConstness() const = 0;

  virtual int TypeWithHole(int (*func)()) = 0;
  virtual int TypeWithComma(const std::map<int, std::string>& a_map) = 0;
  virtual int TypeWithTemplatedCopyCtor(const TemplatedCopyable<int>&) = 0;

#if GTEST_OS_WINDOWS
  STDMETHOD_(int, CTNullary)() = 0;
  STDMETHOD_(bool, CTUnary)(int x) = 0;
  STDMETHOD_(int, CTDecimal)
  (bool b, char c, short d, int e, long f,  // NOLINT
   float g, double h, unsigned i, char* j, const std::string& k) = 0;
  STDMETHOD_(char, CTConst)(int x) const = 0;
#endif  // GTEST_OS_WINDOWS
};

// Const qualifiers on arguments were once (incorrectly) considered
// significant in determining whether two virtual functions had the same
// signature. This was fixed in Visual Studio 2008. However, the compiler
// still emits a warning that alerts about this change in behavior.
#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable : 4373)
#endif
class MockFoo : public FooInterface {
 public:
  MockFoo() {}

  // Makes sure that a mock function parameter can be named.
  MOCK_METHOD(void, VoidReturning, (int n));  // NOLINT

  MOCK_METHOD(int, Nullary, ());  // NOLINT

  // Makes sure that a mock function parameter can be unnamed.
  MOCK_METHOD(bool, Unary, (int));          // NOLINT
  MOCK_METHOD(long, Binary, (short, int));  // NOLINT
  MOCK_METHOD(int, Decimal,
              (bool, char, short, int, long, float,  // NOLINT
               double, unsigned, char*, const std::string& str),
              (override));

  MOCK_METHOD(bool, TakesNonConstReference, (int&));  // NOLINT
  MOCK_METHOD(std::string, TakesConstReference, (const int&));
  MOCK_METHOD(bool, TakesConst, (const int));  // NOLINT

  // Tests that the function return type can contain unprotected comma.
  MOCK_METHOD((std::map<int, std::string>), ReturnTypeWithComma, (), ());
  MOCK_METHOD((std::map<int, std::string>), ReturnTypeWithComma, (int),
              (const));  // NOLINT

  MOCK_METHOD(int, OverloadedOnArgumentNumber, ());     // NOLINT
  MOCK_METHOD(int, OverloadedOnArgumentNumber, (int));  // NOLINT

  MOCK_METHOD(int, OverloadedOnArgumentType, (int));    // NOLINT
  MOCK_METHOD(char, OverloadedOnArgumentType, (char));  // NOLINT

  MOCK_METHOD(int, OverloadedOnConstness, (), (override));          // NOLINT
  MOCK_METHOD(char, OverloadedOnConstness, (), (override, const));  // NOLINT

  MOCK_METHOD(int, TypeWithHole, (int (*)()), ());  // NOLINT
  MOCK_METHOD(int, TypeWithComma, ((const std::map<int, std::string>&)));
  MOCK_METHOD(int, TypeWithTemplatedCopyCtor,
              (const TemplatedCopyable<int>&));  // NOLINT

#if GTEST_OS_WINDOWS
  MOCK_METHOD(int, CTNullary, (), (Calltype(STDMETHODCALLTYPE)));
  MOCK_METHOD(bool, CTUnary, (int), (Calltype(STDMETHODCALLTYPE)));
  MOCK_METHOD(int, CTDecimal,
              (bool b, char c, short d, int e, long f, float g, double h,
               unsigned i, char* j, const std::string& k),
              (Calltype(STDMETHODCALLTYPE)));
  MOCK_METHOD(char, CTConst, (int), (const, Calltype(STDMETHODCALLTYPE)));
  MOCK_METHOD((std::map<int, std::string>), CTReturnTypeWithComma, (),
              (Calltype(STDMETHODCALLTYPE)));
#endif  // GTEST_OS_WINDOWS

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockFoo);
};
#ifdef _MSC_VER
# pragma warning(pop)
#endif

class MockMethodFunctionMockerTest : public testing::Test {
 protected:
  MockMethodFunctionMockerTest() : foo_(&mock_foo_) {}

  FooInterface* const foo_;
  MockFoo mock_foo_;
};

// Tests mocking a void-returning function.
TEST_F(MockMethodFunctionMockerTest, MocksVoidFunction) {
  EXPECT_CALL(mock_foo_, VoidReturning(Lt(100)));
  foo_->VoidReturning(0);
}

// Tests mocking a nullary function.
TEST_F(MockMethodFunctionMockerTest, MocksNullaryFunction) {
  EXPECT_CALL(mock_foo_, Nullary())
      .WillOnce(DoDefault())
      .WillOnce(Return(1));

  EXPECT_EQ(0, foo_->Nullary());
  EXPECT_EQ(1, foo_->Nullary());
}

// Tests mocking a unary function.
TEST_F(MockMethodFunctionMockerTest, MocksUnaryFunction) {
  EXPECT_CALL(mock_foo_, Unary(Eq(2)))
      .Times(2)
      .WillOnce(Return(true));

  EXPECT_TRUE(foo_->Unary(2));
  EXPECT_FALSE(foo_->Unary(2));
}

// Tests mocking a binary function.
TEST_F(MockMethodFunctionMockerTest, MocksBinaryFunction) {
  EXPECT_CALL(mock_foo_, Binary(2, _))
      .WillOnce(Return(3));

  EXPECT_EQ(3, foo_->Binary(2, 1));
}

// Tests mocking a decimal function.
TEST_F(MockMethodFunctionMockerTest, MocksDecimalFunction) {
  EXPECT_CALL(mock_foo_, Decimal(true, 'a', 0, 0, 1L, A<float>(),
                                 Lt(100), 5U, NULL, "hi"))
      .WillOnce(Return(5));

  EXPECT_EQ(5, foo_->Decimal(true, 'a', 0, 0, 1, 0, 0, 5, nullptr, "hi"));
}

// Tests mocking a function that takes a non-const reference.
TEST_F(MockMethodFunctionMockerTest,
       MocksFunctionWithNonConstReferenceArgument) {
  int a = 0;
  EXPECT_CALL(mock_foo_, TakesNonConstReference(Ref(a)))
      .WillOnce(Return(true));

  EXPECT_TRUE(foo_->TakesNonConstReference(a));
}

// Tests mocking a function that takes a const reference.
TEST_F(MockMethodFunctionMockerTest, MocksFunctionWithConstReferenceArgument) {
  int a = 0;
  EXPECT_CALL(mock_foo_, TakesConstReference(Ref(a)))
      .WillOnce(Return("Hello"));

  EXPECT_EQ("Hello", foo_->TakesConstReference(a));
}

// Tests mocking a function that takes a const variable.
TEST_F(MockMethodFunctionMockerTest, MocksFunctionWithConstArgument) {
  EXPECT_CALL(mock_foo_, TakesConst(Lt(10)))
      .WillOnce(DoDefault());

  EXPECT_FALSE(foo_->TakesConst(5));
}

// Tests mocking functions overloaded on the number of arguments.
TEST_F(MockMethodFunctionMockerTest, MocksFunctionsOverloadedOnArgumentNumber) {
  EXPECT_CALL(mock_foo_, OverloadedOnArgumentNumber())
      .WillOnce(Return(1));
  EXPECT_CALL(mock_foo_, OverloadedOnArgumentNumber(_))
      .WillOnce(Return(2));

  EXPECT_EQ(2, foo_->OverloadedOnArgumentNumber(1));
  EXPECT_EQ(1, foo_->OverloadedOnArgumentNumber());
}

// Tests mocking functions overloaded on the types of argument.
TEST_F(MockMethodFunctionMockerTest, MocksFunctionsOverloadedOnArgumentType) {
  EXPECT_CALL(mock_foo_, OverloadedOnArgumentType(An<int>()))
      .WillOnce(Return(1));
  EXPECT_CALL(mock_foo_, OverloadedOnArgumentType(TypedEq<char>('a')))
      .WillOnce(Return('b'));

  EXPECT_EQ(1, foo_->OverloadedOnArgumentType(0));
  EXPECT_EQ('b', foo_->OverloadedOnArgumentType('a'));
}

// Tests mocking functions overloaded on the const-ness of this object.
TEST_F(MockMethodFunctionMockerTest,
       MocksFunctionsOverloadedOnConstnessOfThis) {
  EXPECT_CALL(mock_foo_, OverloadedOnConstness());
  EXPECT_CALL(Const(mock_foo_), OverloadedOnConstness())
      .WillOnce(Return('a'));

  EXPECT_EQ(0, foo_->OverloadedOnConstness());
  EXPECT_EQ('a', Const(*foo_).OverloadedOnConstness());
}

TEST_F(MockMethodFunctionMockerTest, MocksReturnTypeWithComma) {
  const std::map<int, std::string> a_map;
  EXPECT_CALL(mock_foo_, ReturnTypeWithComma())
      .WillOnce(Return(a_map));
  EXPECT_CALL(mock_foo_, ReturnTypeWithComma(42))
      .WillOnce(Return(a_map));

  EXPECT_EQ(a_map, mock_foo_.ReturnTypeWithComma());
  EXPECT_EQ(a_map, mock_foo_.ReturnTypeWithComma(42));
}

TEST_F(MockMethodFunctionMockerTest, MocksTypeWithTemplatedCopyCtor) {
  EXPECT_CALL(mock_foo_, TypeWithTemplatedCopyCtor(_)).WillOnce(Return(true));
  EXPECT_TRUE(foo_->TypeWithTemplatedCopyCtor(TemplatedCopyable<int>()));
}

#if GTEST_OS_WINDOWS
// Tests mocking a nullary function with calltype.
TEST_F(MockMethodFunctionMockerTest, MocksNullaryFunctionWithCallType) {
  EXPECT_CALL(mock_foo_, CTNullary())
      .WillOnce(Return(-1))
      .WillOnce(Return(0));

  EXPECT_EQ(-1, foo_->CTNullary());
  EXPECT_EQ(0, foo_->CTNullary());
}

// Tests mocking a unary function with calltype.
TEST_F(MockMethodFunctionMockerTest, MocksUnaryFunctionWithCallType) {
  EXPECT_CALL(mock_foo_, CTUnary(Eq(2)))
      .Times(2)
      .WillOnce(Return(true))
      .WillOnce(Return(false));

  EXPECT_TRUE(foo_->CTUnary(2));
  EXPECT_FALSE(foo_->CTUnary(2));
}

// Tests mocking a decimal function with calltype.
TEST_F(MockMethodFunctionMockerTest, MocksDecimalFunctionWithCallType) {
  EXPECT_CALL(mock_foo_, CTDecimal(true, 'a', 0, 0, 1L, A<float>(),
                                   Lt(100), 5U, NULL, "hi"))
      .WillOnce(Return(10));

  EXPECT_EQ(10, foo_->CTDecimal(true, 'a', 0, 0, 1, 0, 0, 5, NULL, "hi"));
}

// Tests mocking functions overloaded on the const-ness of this object.
TEST_F(MockMethodFunctionMockerTest, MocksFunctionsConstFunctionWithCallType) {
  EXPECT_CALL(Const(mock_foo_), CTConst(_))
      .WillOnce(Return('a'));

  EXPECT_EQ('a', Const(*foo_).CTConst(0));
}

TEST_F(MockMethodFunctionMockerTest, MocksReturnTypeWithCommaAndCallType) {
  const std::map<int, std::string> a_map;
  EXPECT_CALL(mock_foo_, CTReturnTypeWithComma())
      .WillOnce(Return(a_map));

  EXPECT_EQ(a_map, mock_foo_.CTReturnTypeWithComma());
}

#endif  // GTEST_OS_WINDOWS

class MockB {
 public:
  MockB() {}

  MOCK_METHOD(void, DoB, ());

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockB);
};

// Tests that functions with no EXPECT_CALL() rules can be called any
// number of times.
TEST(MockMethodExpectCallTest, UnmentionedFunctionCanBeCalledAnyNumberOfTimes) {
  {
    MockB b;
  }

  {
    MockB b;
    b.DoB();
  }

  {
    MockB b;
    b.DoB();
    b.DoB();
  }
}

// Tests mocking template interfaces.

template <typename T>
class StackInterface {
 public:
  virtual ~StackInterface() {}

  // Template parameter appears in function parameter.
  virtual void Push(const T& value) = 0;
  virtual void Pop() = 0;
  virtual int GetSize() const = 0;
  // Template parameter appears in function return type.
  virtual const T& GetTop() const = 0;
};

template <typename T>
class MockStack : public StackInterface<T> {
 public:
  MockStack() {}

  MOCK_METHOD(void, Push, (const T& elem), ());
  MOCK_METHOD(void, Pop, (), (final));
  MOCK_METHOD(int, GetSize, (), (const, override));
  MOCK_METHOD(const T&, GetTop, (), (const));

  // Tests that the function return type can contain unprotected comma.
  MOCK_METHOD((std::map<int, int>), ReturnTypeWithComma, (), ());
  MOCK_METHOD((std::map<int, int>), ReturnTypeWithComma, (int), (const));

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockStack);
};

// Tests that template mock works.
TEST(MockMethodTemplateMockTest, Works) {
  MockStack<int> mock;

  EXPECT_CALL(mock, GetSize())
      .WillOnce(Return(0))
      .WillOnce(Return(1))
      .WillOnce(Return(0));
  EXPECT_CALL(mock, Push(_));
  int n = 5;
  EXPECT_CALL(mock, GetTop())
      .WillOnce(ReturnRef(n));
  EXPECT_CALL(mock, Pop())
      .Times(AnyNumber());

  EXPECT_EQ(0, mock.GetSize());
  mock.Push(5);
  EXPECT_EQ(1, mock.GetSize());
  EXPECT_EQ(5, mock.GetTop());
  mock.Pop();
  EXPECT_EQ(0, mock.GetSize());
}

TEST(MockMethodTemplateMockTest, MethodWithCommaInReturnTypeWorks) {
  MockStack<int> mock;

  const std::map<int, int> a_map;
  EXPECT_CALL(mock, ReturnTypeWithComma())
      .WillOnce(Return(a_map));
  EXPECT_CALL(mock, ReturnTypeWithComma(1))
      .WillOnce(Return(a_map));

  EXPECT_EQ(a_map, mock.ReturnTypeWithComma());
  EXPECT_EQ(a_map, mock.ReturnTypeWithComma(1));
}

#if GTEST_OS_WINDOWS
// Tests mocking template interfaces with calltype.

template <typename T>
class StackInterfaceWithCallType {
 public:
  virtual ~StackInterfaceWithCallType() {}

  // Template parameter appears in function parameter.
  STDMETHOD_(void, Push)(const T& value) = 0;
  STDMETHOD_(void, Pop)() = 0;
  STDMETHOD_(int, GetSize)() const = 0;
  // Template parameter appears in function return type.
  STDMETHOD_(const T&, GetTop)() const = 0;
};

template <typename T>
class MockStackWithCallType : public StackInterfaceWithCallType<T> {
 public:
  MockStackWithCallType() {}

  MOCK_METHOD(void, Push, (const T& elem),
              (Calltype(STDMETHODCALLTYPE), override));
  MOCK_METHOD(void, Pop, (), (Calltype(STDMETHODCALLTYPE), override));
  MOCK_METHOD(int, GetSize, (), (Calltype(STDMETHODCALLTYPE), override, const));
  MOCK_METHOD(const T&, GetTop, (),
              (Calltype(STDMETHODCALLTYPE), override, const));

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockStackWithCallType);
};

// Tests that template mock with calltype works.
TEST(MockMethodTemplateMockTestWithCallType, Works) {
  MockStackWithCallType<int> mock;

  EXPECT_CALL(mock, GetSize())
      .WillOnce(Return(0))
      .WillOnce(Return(1))
      .WillOnce(Return(0));
  EXPECT_CALL(mock, Push(_));
  int n = 5;
  EXPECT_CALL(mock, GetTop())
      .WillOnce(ReturnRef(n));
  EXPECT_CALL(mock, Pop())
      .Times(AnyNumber());

  EXPECT_EQ(0, mock.GetSize());
  mock.Push(5);
  EXPECT_EQ(1, mock.GetSize());
  EXPECT_EQ(5, mock.GetTop());
  mock.Pop();
  EXPECT_EQ(0, mock.GetSize());
}
#endif  // GTEST_OS_WINDOWS

#define MY_MOCK_METHODS1_                       \
  MOCK_METHOD(void, Overloaded, ());            \
  MOCK_METHOD(int, Overloaded, (int), (const)); \
  MOCK_METHOD(bool, Overloaded, (bool f, int n))

class MockOverloadedOnArgNumber {
 public:
  MockOverloadedOnArgNumber() {}

  MY_MOCK_METHODS1_;

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockOverloadedOnArgNumber);
};

TEST(MockMethodOverloadedMockMethodTest, CanOverloadOnArgNumberInMacroBody) {
  MockOverloadedOnArgNumber mock;
  EXPECT_CALL(mock, Overloaded());
  EXPECT_CALL(mock, Overloaded(1)).WillOnce(Return(2));
  EXPECT_CALL(mock, Overloaded(true, 1)).WillOnce(Return(true));

  mock.Overloaded();
  EXPECT_EQ(2, mock.Overloaded(1));
  EXPECT_TRUE(mock.Overloaded(true, 1));
}

#define MY_MOCK_METHODS2_ \
    MOCK_CONST_METHOD1(Overloaded, int(int n)); \
    MOCK_METHOD1(Overloaded, int(int n))

class MockOverloadedOnConstness {
 public:
  MockOverloadedOnConstness() {}

  MY_MOCK_METHODS2_;

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockOverloadedOnConstness);
};

TEST(MockMethodOverloadedMockMethodTest, CanOverloadOnConstnessInMacroBody) {
  MockOverloadedOnConstness mock;
  const MockOverloadedOnConstness* const_mock = &mock;
  EXPECT_CALL(mock, Overloaded(1)).WillOnce(Return(2));
  EXPECT_CALL(*const_mock, Overloaded(1)).WillOnce(Return(3));

  EXPECT_EQ(2, mock.Overloaded(1));
  EXPECT_EQ(3, const_mock->Overloaded(1));
}

TEST(MockMethodMockFunctionTest, WorksForVoidNullary) {
  MockFunction<void()> foo;
  EXPECT_CALL(foo, Call());
  foo.Call();
}

TEST(MockMethodMockFunctionTest, WorksForNonVoidNullary) {
  MockFunction<int()> foo;
  EXPECT_CALL(foo, Call())
      .WillOnce(Return(1))
      .WillOnce(Return(2));
  EXPECT_EQ(1, foo.Call());
  EXPECT_EQ(2, foo.Call());
}

TEST(MockMethodMockFunctionTest, WorksForVoidUnary) {
  MockFunction<void(int)> foo;
  EXPECT_CALL(foo, Call(1));
  foo.Call(1);
}

TEST(MockMethodMockFunctionTest, WorksForNonVoidBinary) {
  MockFunction<int(bool, int)> foo;
  EXPECT_CALL(foo, Call(false, 42))
      .WillOnce(Return(1))
      .WillOnce(Return(2));
  EXPECT_CALL(foo, Call(true, Ge(100)))
      .WillOnce(Return(3));
  EXPECT_EQ(1, foo.Call(false, 42));
  EXPECT_EQ(2, foo.Call(false, 42));
  EXPECT_EQ(3, foo.Call(true, 120));
}

TEST(MockMethodMockFunctionTest, WorksFor10Arguments) {
  MockFunction<int(bool a0, char a1, int a2, int a3, int a4,
                   int a5, int a6, char a7, int a8, bool a9)> foo;
  EXPECT_CALL(foo, Call(_, 'a', _, _, _, _, _, _, _, _))
      .WillOnce(Return(1))
      .WillOnce(Return(2));
  EXPECT_EQ(1, foo.Call(false, 'a', 0, 0, 0, 0, 0, 'b', 0, true));
  EXPECT_EQ(2, foo.Call(true, 'a', 0, 0, 0, 0, 0, 'b', 1, false));
}

TEST(MockMethodMockFunctionTest, AsStdFunction) {
  MockFunction<int(int)> foo;
  auto call = [](const std::function<int(int)> &f, int i) {
    return f(i);
  };
  EXPECT_CALL(foo, Call(1)).WillOnce(Return(-1));
  EXPECT_CALL(foo, Call(2)).WillOnce(Return(-2));
  EXPECT_EQ(-1, call(foo.AsStdFunction(), 1));
  EXPECT_EQ(-2, call(foo.AsStdFunction(), 2));
}

TEST(MockMethodMockFunctionTest, AsStdFunctionReturnsReference) {
  MockFunction<int&()> foo;
  int value = 1;
  EXPECT_CALL(foo, Call()).WillOnce(ReturnRef(value));
  int& ref = foo.AsStdFunction()();
  EXPECT_EQ(1, ref);
  value = 2;
  EXPECT_EQ(2, ref);
}

TEST(MockMethodMockFunctionTest, AsStdFunctionWithReferenceParameter) {
  MockFunction<int(int &)> foo;
  auto call = [](const std::function<int(int& )> &f, int &i) {
    return f(i);
  };
  int i = 42;
  EXPECT_CALL(foo, Call(i)).WillOnce(Return(-1));
  EXPECT_EQ(-1, call(foo.AsStdFunction(), i));
}


struct MockMethodSizes0 {
  MOCK_METHOD(void, func, ());
};
struct MockMethodSizes1 {
  MOCK_METHOD(void, func, (int));
};
struct MockMethodSizes2 {
  MOCK_METHOD(void, func, (int, int));
};
struct MockMethodSizes3 {
  MOCK_METHOD(void, func, (int, int, int));
};
struct MockMethodSizes4 {
  MOCK_METHOD(void, func, (int, int, int, int));
};

TEST(MockMethodMockFunctionTest, MockMethodSizeOverhead) {
  EXPECT_EQ(sizeof(MockMethodSizes0), sizeof(MockMethodSizes1));
  EXPECT_EQ(sizeof(MockMethodSizes0), sizeof(MockMethodSizes2));
  EXPECT_EQ(sizeof(MockMethodSizes0), sizeof(MockMethodSizes3));
  EXPECT_EQ(sizeof(MockMethodSizes0), sizeof(MockMethodSizes4));
}

}  // namespace gmock_function_mocker_test
}  // namespace testing
