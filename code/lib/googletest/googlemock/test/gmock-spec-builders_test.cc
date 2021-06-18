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
// This file tests the spec builder syntax.

#include "gmock/gmock-spec-builders.h"

#include <memory>
#include <ostream>  // NOLINT
#include <sstream>
#include <string>

#include "gmock/gmock.h"
#include "gmock/internal/gmock-port.h"
#include "gtest/gtest.h"
#include "gtest/gtest-spi.h"
#include "gtest/internal/gtest-port.h"

namespace testing {
namespace internal {

// Helper class for testing the Expectation class template.
class ExpectationTester {
 public:
  // Sets the call count of the given expectation to the given number.
  void SetCallCount(int n, ExpectationBase* exp) {
    exp->call_count_ = n;
  }
};

}  // namespace internal
}  // namespace testing

namespace {

using testing::_;
using testing::AnyNumber;
using testing::AtLeast;
using testing::AtMost;
using testing::Between;
using testing::Cardinality;
using testing::CardinalityInterface;
using testing::ContainsRegex;
using testing::Const;
using testing::DoAll;
using testing::DoDefault;
using testing::Eq;
using testing::Expectation;
using testing::ExpectationSet;
using testing::GMOCK_FLAG(verbose);
using testing::Gt;
using testing::IgnoreResult;
using testing::InSequence;
using testing::Invoke;
using testing::InvokeWithoutArgs;
using testing::IsNotSubstring;
using testing::IsSubstring;
using testing::Lt;
using testing::Message;
using testing::Mock;
using testing::NaggyMock;
using testing::Ne;
using testing::Return;
using testing::SaveArg;
using testing::Sequence;
using testing::SetArgPointee;
using testing::internal::ExpectationTester;
using testing::internal::FormatFileLocation;
using testing::internal::kAllow;
using testing::internal::kErrorVerbosity;
using testing::internal::kFail;
using testing::internal::kInfoVerbosity;
using testing::internal::kWarn;
using testing::internal::kWarningVerbosity;

#if GTEST_HAS_STREAM_REDIRECTION
using testing::HasSubstr;
using testing::internal::CaptureStdout;
using testing::internal::GetCapturedStdout;
#endif

class Incomplete;

class MockIncomplete {
 public:
  // This line verifies that a mock method can take a by-reference
  // argument of an incomplete type.
  MOCK_METHOD1(ByRefFunc, void(const Incomplete& x));
};

// Tells Google Mock how to print a value of type Incomplete.
void PrintTo(const Incomplete& x, ::std::ostream* os);

TEST(MockMethodTest, CanInstantiateWithIncompleteArgType) {
  // Even though this mock class contains a mock method that takes
  // by-reference an argument whose type is incomplete, we can still
  // use the mock, as long as Google Mock knows how to print the
  // argument.
  MockIncomplete incomplete;
  EXPECT_CALL(incomplete, ByRefFunc(_))
      .Times(AnyNumber());
}

// The definition of the printer for the argument type doesn't have to
// be visible where the mock is used.
void PrintTo(const Incomplete& /* x */, ::std::ostream* os) {
  *os << "incomplete";
}

class Result {};

// A type that's not default constructible.
class NonDefaultConstructible {
 public:
  explicit NonDefaultConstructible(int /* dummy */) {}
};

class MockA {
 public:
  MockA() {}

  MOCK_METHOD1(DoA, void(int n));
  MOCK_METHOD1(ReturnResult, Result(int n));
  MOCK_METHOD0(ReturnNonDefaultConstructible, NonDefaultConstructible());
  MOCK_METHOD2(Binary, bool(int x, int y));
  MOCK_METHOD2(ReturnInt, int(int x, int y));

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockA);
};

class MockB {
 public:
  MockB() {}

  MOCK_CONST_METHOD0(DoB, int());  // NOLINT
  MOCK_METHOD1(DoB, int(int n));  // NOLINT

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockB);
};

class ReferenceHoldingMock {
 public:
  ReferenceHoldingMock() {}

  MOCK_METHOD1(AcceptReference, void(std::shared_ptr<MockA>*));

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(ReferenceHoldingMock);
};

// Tests that EXPECT_CALL and ON_CALL compile in a presence of macro
// redefining a mock method name. This could happen, for example, when
// the tested code #includes Win32 API headers which define many APIs
// as macros, e.g. #define TextOut TextOutW.

#define Method MethodW

class CC {
 public:
  virtual ~CC() {}
  virtual int Method() = 0;
};
class MockCC : public CC {
 public:
  MockCC() {}

  MOCK_METHOD0(Method, int());

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockCC);
};

// Tests that a method with expanded name compiles.
TEST(OnCallSyntaxTest, CompilesWithMethodNameExpandedFromMacro) {
  MockCC cc;
  ON_CALL(cc, Method());
}

// Tests that the method with expanded name not only compiles but runs
// and returns a correct value, too.
TEST(OnCallSyntaxTest, WorksWithMethodNameExpandedFromMacro) {
  MockCC cc;
  ON_CALL(cc, Method()).WillByDefault(Return(42));
  EXPECT_EQ(42, cc.Method());
}

// Tests that a method with expanded name compiles.
TEST(ExpectCallSyntaxTest, CompilesWithMethodNameExpandedFromMacro) {
  MockCC cc;
  EXPECT_CALL(cc, Method());
  cc.Method();
}

// Tests that it works, too.
TEST(ExpectCallSyntaxTest, WorksWithMethodNameExpandedFromMacro) {
  MockCC cc;
  EXPECT_CALL(cc, Method()).WillOnce(Return(42));
  EXPECT_EQ(42, cc.Method());
}

#undef Method  // Done with macro redefinition tests.

// Tests that ON_CALL evaluates its arguments exactly once as promised
// by Google Mock.
TEST(OnCallSyntaxTest, EvaluatesFirstArgumentOnce) {
  MockA a;
  MockA* pa = &a;

  ON_CALL(*pa++, DoA(_));
  EXPECT_EQ(&a + 1, pa);
}

TEST(OnCallSyntaxTest, EvaluatesSecondArgumentOnce) {
  MockA a;
  int n = 0;

  ON_CALL(a, DoA(n++));
  EXPECT_EQ(1, n);
}

// Tests that the syntax of ON_CALL() is enforced at run time.

TEST(OnCallSyntaxTest, WithIsOptional) {
  MockA a;

  ON_CALL(a, DoA(5))
      .WillByDefault(Return());
  ON_CALL(a, DoA(_))
      .With(_)
      .WillByDefault(Return());
}

TEST(OnCallSyntaxTest, WithCanAppearAtMostOnce) {
  MockA a;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    ON_CALL(a, ReturnResult(_))
        .With(_)
        .With(_)
        .WillByDefault(Return(Result()));
  }, ".With() cannot appear more than once in an ON_CALL()");
}

TEST(OnCallSyntaxTest, WillByDefaultIsMandatory) {
  MockA a;

  EXPECT_DEATH_IF_SUPPORTED({
    ON_CALL(a, DoA(5));
    a.DoA(5);
  }, "");
}

TEST(OnCallSyntaxTest, WillByDefaultCanAppearAtMostOnce) {
  MockA a;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    ON_CALL(a, DoA(5))
        .WillByDefault(Return())
        .WillByDefault(Return());
  }, ".WillByDefault() must appear exactly once in an ON_CALL()");
}

// Tests that EXPECT_CALL evaluates its arguments exactly once as
// promised by Google Mock.
TEST(ExpectCallSyntaxTest, EvaluatesFirstArgumentOnce) {
  MockA a;
  MockA* pa = &a;

  EXPECT_CALL(*pa++, DoA(_));
  a.DoA(0);
  EXPECT_EQ(&a + 1, pa);
}

TEST(ExpectCallSyntaxTest, EvaluatesSecondArgumentOnce) {
  MockA a;
  int n = 0;

  EXPECT_CALL(a, DoA(n++));
  a.DoA(0);
  EXPECT_EQ(1, n);
}

// Tests that the syntax of EXPECT_CALL() is enforced at run time.

TEST(ExpectCallSyntaxTest, WithIsOptional) {
  MockA a;

  EXPECT_CALL(a, DoA(5))
      .Times(0);
  EXPECT_CALL(a, DoA(6))
      .With(_)
      .Times(0);
}

TEST(ExpectCallSyntaxTest, WithCanAppearAtMostOnce) {
  MockA a;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(6))
        .With(_)
        .With(_);
  }, ".With() cannot appear more than once in an EXPECT_CALL()");

  a.DoA(6);
}

TEST(ExpectCallSyntaxTest, WithMustBeFirstClause) {
  MockA a;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(1))
        .Times(1)
        .With(_);
  }, ".With() must be the first clause in an EXPECT_CALL()");

  a.DoA(1);

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(2))
        .WillOnce(Return())
        .With(_);
  }, ".With() must be the first clause in an EXPECT_CALL()");

  a.DoA(2);
}

TEST(ExpectCallSyntaxTest, TimesCanBeInferred) {
  MockA a;

  EXPECT_CALL(a, DoA(1))
      .WillOnce(Return());

  EXPECT_CALL(a, DoA(2))
      .WillOnce(Return())
      .WillRepeatedly(Return());

  a.DoA(1);
  a.DoA(2);
  a.DoA(2);
}

TEST(ExpectCallSyntaxTest, TimesCanAppearAtMostOnce) {
  MockA a;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(1))
        .Times(1)
        .Times(2);
  }, ".Times() cannot appear more than once in an EXPECT_CALL()");

  a.DoA(1);
  a.DoA(1);
}

TEST(ExpectCallSyntaxTest, TimesMustBeBeforeInSequence) {
  MockA a;
  Sequence s;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(1))
        .InSequence(s)
        .Times(1);
  }, ".Times() cannot appear after ");

  a.DoA(1);
}

TEST(ExpectCallSyntaxTest, InSequenceIsOptional) {
  MockA a;
  Sequence s;

  EXPECT_CALL(a, DoA(1));
  EXPECT_CALL(a, DoA(2))
      .InSequence(s);

  a.DoA(1);
  a.DoA(2);
}

TEST(ExpectCallSyntaxTest, InSequenceCanAppearMultipleTimes) {
  MockA a;
  Sequence s1, s2;

  EXPECT_CALL(a, DoA(1))
      .InSequence(s1, s2)
      .InSequence(s1);

  a.DoA(1);
}

TEST(ExpectCallSyntaxTest, InSequenceMustBeBeforeAfter) {
  MockA a;
  Sequence s;

  Expectation e = EXPECT_CALL(a, DoA(1))
      .Times(AnyNumber());
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(2))
        .After(e)
        .InSequence(s);
  }, ".InSequence() cannot appear after ");

  a.DoA(2);
}

TEST(ExpectCallSyntaxTest, InSequenceMustBeBeforeWillOnce) {
  MockA a;
  Sequence s;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(1))
        .WillOnce(Return())
        .InSequence(s);
  }, ".InSequence() cannot appear after ");

  a.DoA(1);
}

TEST(ExpectCallSyntaxTest, AfterMustBeBeforeWillOnce) {
  MockA a;

  Expectation e = EXPECT_CALL(a, DoA(1));
  EXPECT_NONFATAL_FAILURE({
    EXPECT_CALL(a, DoA(2))
        .WillOnce(Return())
        .After(e);
  }, ".After() cannot appear after ");

  a.DoA(1);
  a.DoA(2);
}

TEST(ExpectCallSyntaxTest, WillIsOptional) {
  MockA a;

  EXPECT_CALL(a, DoA(1));
  EXPECT_CALL(a, DoA(2))
      .WillOnce(Return());

  a.DoA(1);
  a.DoA(2);
}

TEST(ExpectCallSyntaxTest, WillCanAppearMultipleTimes) {
  MockA a;

  EXPECT_CALL(a, DoA(1))
      .Times(AnyNumber())
      .WillOnce(Return())
      .WillOnce(Return())
      .WillOnce(Return());
}

TEST(ExpectCallSyntaxTest, WillMustBeBeforeWillRepeatedly) {
  MockA a;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(1))
        .WillRepeatedly(Return())
        .WillOnce(Return());
  }, ".WillOnce() cannot appear after ");

  a.DoA(1);
}

TEST(ExpectCallSyntaxTest, WillRepeatedlyIsOptional) {
  MockA a;

  EXPECT_CALL(a, DoA(1))
      .WillOnce(Return());
  EXPECT_CALL(a, DoA(2))
      .WillOnce(Return())
      .WillRepeatedly(Return());

  a.DoA(1);
  a.DoA(2);
  a.DoA(2);
}

TEST(ExpectCallSyntaxTest, WillRepeatedlyCannotAppearMultipleTimes) {
  MockA a;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(1))
        .WillRepeatedly(Return())
        .WillRepeatedly(Return());
  }, ".WillRepeatedly() cannot appear more than once in an "
     "EXPECT_CALL()");
}

TEST(ExpectCallSyntaxTest, WillRepeatedlyMustBeBeforeRetiresOnSaturation) {
  MockA a;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(1))
        .RetiresOnSaturation()
        .WillRepeatedly(Return());
  }, ".WillRepeatedly() cannot appear after ");
}

TEST(ExpectCallSyntaxTest, RetiresOnSaturationIsOptional) {
  MockA a;

  EXPECT_CALL(a, DoA(1));
  EXPECT_CALL(a, DoA(1))
      .RetiresOnSaturation();

  a.DoA(1);
  a.DoA(1);
}

TEST(ExpectCallSyntaxTest, RetiresOnSaturationCannotAppearMultipleTimes) {
  MockA a;

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_CALL(a, DoA(1))
        .RetiresOnSaturation()
        .RetiresOnSaturation();
  }, ".RetiresOnSaturation() cannot appear more than once");

  a.DoA(1);
}

TEST(ExpectCallSyntaxTest, DefaultCardinalityIsOnce) {
  {
    MockA a;
    EXPECT_CALL(a, DoA(1));
    a.DoA(1);
  }
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    MockA a;
    EXPECT_CALL(a, DoA(1));
  }, "to be called once");
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    MockA a;
    EXPECT_CALL(a, DoA(1));
    a.DoA(1);
    a.DoA(1);
  }, "to be called once");
}

#if GTEST_HAS_STREAM_REDIRECTION

// Tests that Google Mock doesn't print a warning when the number of
// WillOnce() is adequate.
TEST(ExpectCallSyntaxTest, DoesNotWarnOnAdequateActionCount) {
  CaptureStdout();
  {
    MockB b;

    // It's always fine to omit WillOnce() entirely.
    EXPECT_CALL(b, DoB())
        .Times(0);
    EXPECT_CALL(b, DoB(1))
        .Times(AtMost(1));
    EXPECT_CALL(b, DoB(2))
        .Times(1)
        .WillRepeatedly(Return(1));

    // It's fine for the number of WillOnce()s to equal the upper bound.
    EXPECT_CALL(b, DoB(3))
        .Times(Between(1, 2))
        .WillOnce(Return(1))
        .WillOnce(Return(2));

    // It's fine for the number of WillOnce()s to be smaller than the
    // upper bound when there is a WillRepeatedly().
    EXPECT_CALL(b, DoB(4))
        .Times(AtMost(3))
        .WillOnce(Return(1))
        .WillRepeatedly(Return(2));

    // Satisfies the above expectations.
    b.DoB(2);
    b.DoB(3);
  }
  EXPECT_STREQ("", GetCapturedStdout().c_str());
}

// Tests that Google Mock warns on having too many actions in an
// expectation compared to its cardinality.
TEST(ExpectCallSyntaxTest, WarnsOnTooManyActions) {
  CaptureStdout();
  {
    MockB b;

    // Warns when the number of WillOnce()s is larger than the upper bound.
    EXPECT_CALL(b, DoB())
        .Times(0)
        .WillOnce(Return(1));  // #1
    EXPECT_CALL(b, DoB())
        .Times(AtMost(1))
        .WillOnce(Return(1))
        .WillOnce(Return(2));  // #2
    EXPECT_CALL(b, DoB(1))
        .Times(1)
        .WillOnce(Return(1))
        .WillOnce(Return(2))
        .RetiresOnSaturation();  // #3

    // Warns when the number of WillOnce()s equals the upper bound and
    // there is a WillRepeatedly().
    EXPECT_CALL(b, DoB())
        .Times(0)
        .WillRepeatedly(Return(1));  // #4
    EXPECT_CALL(b, DoB(2))
        .Times(1)
        .WillOnce(Return(1))
        .WillRepeatedly(Return(2));  // #5

    // Satisfies the above expectations.
    b.DoB(1);
    b.DoB(2);
  }
  const std::string output = GetCapturedStdout();
  EXPECT_PRED_FORMAT2(
      IsSubstring,
      "Too many actions specified in EXPECT_CALL(b, DoB())...\n"
      "Expected to be never called, but has 1 WillOnce().",
      output);  // #1
  EXPECT_PRED_FORMAT2(
      IsSubstring,
      "Too many actions specified in EXPECT_CALL(b, DoB())...\n"
      "Expected to be called at most once, "
      "but has 2 WillOnce()s.",
      output);  // #2
  EXPECT_PRED_FORMAT2(
      IsSubstring,
      "Too many actions specified in EXPECT_CALL(b, DoB(1))...\n"
      "Expected to be called once, but has 2 WillOnce()s.",
      output);  // #3
  EXPECT_PRED_FORMAT2(
      IsSubstring,
      "Too many actions specified in EXPECT_CALL(b, DoB())...\n"
      "Expected to be never called, but has 0 WillOnce()s "
      "and a WillRepeatedly().",
      output);  // #4
  EXPECT_PRED_FORMAT2(
      IsSubstring,
      "Too many actions specified in EXPECT_CALL(b, DoB(2))...\n"
      "Expected to be called once, but has 1 WillOnce() "
      "and a WillRepeatedly().",
      output);  // #5
}

// Tests that Google Mock warns on having too few actions in an
// expectation compared to its cardinality.
TEST(ExpectCallSyntaxTest, WarnsOnTooFewActions) {
  MockB b;

  EXPECT_CALL(b, DoB())
      .Times(Between(2, 3))
      .WillOnce(Return(1));

  CaptureStdout();
  b.DoB();
  const std::string output = GetCapturedStdout();
  EXPECT_PRED_FORMAT2(
      IsSubstring,
      "Too few actions specified in EXPECT_CALL(b, DoB())...\n"
      "Expected to be called between 2 and 3 times, "
      "but has only 1 WillOnce().",
      output);
  b.DoB();
}

TEST(ExpectCallSyntaxTest, WarningIsErrorWithFlag) {
  int original_behavior = testing::GMOCK_FLAG(default_mock_behavior);

  testing::GMOCK_FLAG(default_mock_behavior) = kAllow;
  CaptureStdout();
  {
    MockA a;
    a.DoA(0);
  }
  std::string output = GetCapturedStdout();
  EXPECT_TRUE(output.empty()) << output;

  testing::GMOCK_FLAG(default_mock_behavior) = kWarn;
  CaptureStdout();
  {
    MockA a;
    a.DoA(0);
  }
  std::string warning_output = GetCapturedStdout();
  EXPECT_PRED_FORMAT2(IsSubstring, "GMOCK WARNING", warning_output);
  EXPECT_PRED_FORMAT2(IsSubstring, "Uninteresting mock function call",
                      warning_output);

  testing::GMOCK_FLAG(default_mock_behavior) = kFail;
  EXPECT_NONFATAL_FAILURE({
    MockA a;
    a.DoA(0);
  }, "Uninteresting mock function call");

  // Out of bounds values are converted to kWarn
  testing::GMOCK_FLAG(default_mock_behavior) = -1;
  CaptureStdout();
  {
    MockA a;
    a.DoA(0);
  }
  warning_output = GetCapturedStdout();
  EXPECT_PRED_FORMAT2(IsSubstring, "GMOCK WARNING", warning_output);
  EXPECT_PRED_FORMAT2(IsSubstring, "Uninteresting mock function call",
                      warning_output);
  testing::GMOCK_FLAG(default_mock_behavior) = 3;
  CaptureStdout();
  {
    MockA a;
    a.DoA(0);
  }
  warning_output = GetCapturedStdout();
  EXPECT_PRED_FORMAT2(IsSubstring, "GMOCK WARNING", warning_output);
  EXPECT_PRED_FORMAT2(IsSubstring, "Uninteresting mock function call",
                      warning_output);

  testing::GMOCK_FLAG(default_mock_behavior) = original_behavior;
}

#endif  // GTEST_HAS_STREAM_REDIRECTION

// Tests the semantics of ON_CALL().

// Tests that the built-in default action is taken when no ON_CALL()
// is specified.
TEST(OnCallTest, TakesBuiltInDefaultActionWhenNoOnCall) {
  MockB b;
  EXPECT_CALL(b, DoB());

  EXPECT_EQ(0, b.DoB());
}

// Tests that the built-in default action is taken when no ON_CALL()
// matches the invocation.
TEST(OnCallTest, TakesBuiltInDefaultActionWhenNoOnCallMatches) {
  MockB b;
  ON_CALL(b, DoB(1))
      .WillByDefault(Return(1));
  EXPECT_CALL(b, DoB(_));

  EXPECT_EQ(0, b.DoB(2));
}

// Tests that the last matching ON_CALL() action is taken.
TEST(OnCallTest, PicksLastMatchingOnCall) {
  MockB b;
  ON_CALL(b, DoB(_))
      .WillByDefault(Return(3));
  ON_CALL(b, DoB(2))
      .WillByDefault(Return(2));
  ON_CALL(b, DoB(1))
      .WillByDefault(Return(1));
  EXPECT_CALL(b, DoB(_));

  EXPECT_EQ(2, b.DoB(2));
}

// Tests the semantics of EXPECT_CALL().

// Tests that any call is allowed when no EXPECT_CALL() is specified.
TEST(ExpectCallTest, AllowsAnyCallWhenNoSpec) {
  MockB b;
  EXPECT_CALL(b, DoB());
  // There is no expectation on DoB(int).

  b.DoB();

  // DoB(int) can be called any number of times.
  b.DoB(1);
  b.DoB(2);
}

// Tests that the last matching EXPECT_CALL() fires.
TEST(ExpectCallTest, PicksLastMatchingExpectCall) {
  MockB b;
  EXPECT_CALL(b, DoB(_))
      .WillRepeatedly(Return(2));
  EXPECT_CALL(b, DoB(1))
      .WillRepeatedly(Return(1));

  EXPECT_EQ(1, b.DoB(1));
}

// Tests lower-bound violation.
TEST(ExpectCallTest, CatchesTooFewCalls) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    MockB b;
    EXPECT_CALL(b, DoB(5))
        .Times(AtLeast(2));

    b.DoB(5);
  }, "Actual function call count doesn't match EXPECT_CALL(b, DoB(5))...\n"
     "         Expected: to be called at least twice\n"
     "           Actual: called once - unsatisfied and active");
}

// Tests that the cardinality can be inferred when no Times(...) is
// specified.
TEST(ExpectCallTest, InfersCardinalityWhenThereIsNoWillRepeatedly) {
  {
    MockB b;
    EXPECT_CALL(b, DoB())
        .WillOnce(Return(1))
        .WillOnce(Return(2));

    EXPECT_EQ(1, b.DoB());
    EXPECT_EQ(2, b.DoB());
  }

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    MockB b;
    EXPECT_CALL(b, DoB())
        .WillOnce(Return(1))
        .WillOnce(Return(2));

    EXPECT_EQ(1, b.DoB());
  }, "to be called twice");

  {  // NOLINT
    MockB b;
    EXPECT_CALL(b, DoB())
        .WillOnce(Return(1))
        .WillOnce(Return(2));

    EXPECT_EQ(1, b.DoB());
    EXPECT_EQ(2, b.DoB());
    EXPECT_NONFATAL_FAILURE(b.DoB(), "to be called twice");
  }
}

TEST(ExpectCallTest, InfersCardinality1WhenThereIsWillRepeatedly) {
  {
    MockB b;
    EXPECT_CALL(b, DoB())
        .WillOnce(Return(1))
        .WillRepeatedly(Return(2));

    EXPECT_EQ(1, b.DoB());
  }

  {  // NOLINT
    MockB b;
    EXPECT_CALL(b, DoB())
        .WillOnce(Return(1))
        .WillRepeatedly(Return(2));

    EXPECT_EQ(1, b.DoB());
    EXPECT_EQ(2, b.DoB());
    EXPECT_EQ(2, b.DoB());
  }

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    MockB b;
    EXPECT_CALL(b, DoB())
        .WillOnce(Return(1))
        .WillRepeatedly(Return(2));
  }, "to be called at least once");
}

// Tests that the n-th action is taken for the n-th matching
// invocation.
TEST(ExpectCallTest, NthMatchTakesNthAction) {
  MockB b;
  EXPECT_CALL(b, DoB())
      .WillOnce(Return(1))
      .WillOnce(Return(2))
      .WillOnce(Return(3));

  EXPECT_EQ(1, b.DoB());
  EXPECT_EQ(2, b.DoB());
  EXPECT_EQ(3, b.DoB());
}

// Tests that the WillRepeatedly() action is taken when the WillOnce(...)
// list is exhausted.
TEST(ExpectCallTest, TakesRepeatedActionWhenWillListIsExhausted) {
  MockB b;
  EXPECT_CALL(b, DoB())
      .WillOnce(Return(1))
      .WillRepeatedly(Return(2));

  EXPECT_EQ(1, b.DoB());
  EXPECT_EQ(2, b.DoB());
  EXPECT_EQ(2, b.DoB());
}

#if GTEST_HAS_STREAM_REDIRECTION

// Tests that the default action is taken when the WillOnce(...) list is
// exhausted and there is no WillRepeatedly().
TEST(ExpectCallTest, TakesDefaultActionWhenWillListIsExhausted) {
  MockB b;
  EXPECT_CALL(b, DoB(_))
      .Times(1);
  EXPECT_CALL(b, DoB())
      .Times(AnyNumber())
      .WillOnce(Return(1))
      .WillOnce(Return(2));

  CaptureStdout();
  EXPECT_EQ(0, b.DoB(1));  // Shouldn't generate a warning as the
                           // expectation has no action clause at all.
  EXPECT_EQ(1, b.DoB());
  EXPECT_EQ(2, b.DoB());
  const std::string output1 = GetCapturedStdout();
  EXPECT_STREQ("", output1.c_str());

  CaptureStdout();
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB());
  const std::string output2 = GetCapturedStdout();
  EXPECT_THAT(output2.c_str(),
              HasSubstr("Actions ran out in EXPECT_CALL(b, DoB())...\n"
                        "Called 3 times, but only 2 WillOnce()s are specified"
                        " - returning default value."));
  EXPECT_THAT(output2.c_str(),
              HasSubstr("Actions ran out in EXPECT_CALL(b, DoB())...\n"
                        "Called 4 times, but only 2 WillOnce()s are specified"
                        " - returning default value."));
}

TEST(FunctionMockerMessageTest, ReportsExpectCallLocationForExhausedActions) {
  MockB b;
  std::string expect_call_location = FormatFileLocation(__FILE__, __LINE__ + 1);
  EXPECT_CALL(b, DoB()).Times(AnyNumber()).WillOnce(Return(1));

  EXPECT_EQ(1, b.DoB());

  CaptureStdout();
  EXPECT_EQ(0, b.DoB());
  const std::string output = GetCapturedStdout();
  // The warning message should contain the call location.
  EXPECT_PRED_FORMAT2(IsSubstring, expect_call_location, output);
}

TEST(FunctionMockerMessageTest,
     ReportsDefaultActionLocationOfUninterestingCallsForNaggyMock) {
  std::string on_call_location;
  CaptureStdout();
  {
    NaggyMock<MockB> b;
    on_call_location = FormatFileLocation(__FILE__, __LINE__ + 1);
    ON_CALL(b, DoB(_)).WillByDefault(Return(0));
    b.DoB(0);
  }
  EXPECT_PRED_FORMAT2(IsSubstring, on_call_location, GetCapturedStdout());
}

#endif  // GTEST_HAS_STREAM_REDIRECTION

// Tests that an uninteresting call performs the default action.
TEST(UninterestingCallTest, DoesDefaultAction) {
  // When there is an ON_CALL() statement, the action specified by it
  // should be taken.
  MockA a;
  ON_CALL(a, Binary(_, _))
      .WillByDefault(Return(true));
  EXPECT_TRUE(a.Binary(1, 2));

  // When there is no ON_CALL(), the default value for the return type
  // should be returned.
  MockB b;
  EXPECT_EQ(0, b.DoB());
}

// Tests that an unexpected call performs the default action.
TEST(UnexpectedCallTest, DoesDefaultAction) {
  // When there is an ON_CALL() statement, the action specified by it
  // should be taken.
  MockA a;
  ON_CALL(a, Binary(_, _))
      .WillByDefault(Return(true));
  EXPECT_CALL(a, Binary(0, 0));
  a.Binary(0, 0);
  bool result = false;
  EXPECT_NONFATAL_FAILURE(result = a.Binary(1, 2),
                          "Unexpected mock function call");
  EXPECT_TRUE(result);

  // When there is no ON_CALL(), the default value for the return type
  // should be returned.
  MockB b;
  EXPECT_CALL(b, DoB(0))
      .Times(0);
  int n = -1;
  EXPECT_NONFATAL_FAILURE(n = b.DoB(1),
                          "Unexpected mock function call");
  EXPECT_EQ(0, n);
}

// Tests that when an unexpected void function generates the right
// failure message.
TEST(UnexpectedCallTest, GeneratesFailureForVoidFunction) {
  // First, tests the message when there is only one EXPECT_CALL().
  MockA a1;
  EXPECT_CALL(a1, DoA(1));
  a1.DoA(1);
  // Ideally we should match the failure message against a regex, but
  // EXPECT_NONFATAL_FAILURE doesn't support that, so we test for
  // multiple sub-strings instead.
  EXPECT_NONFATAL_FAILURE(
      a1.DoA(9),
      "Unexpected mock function call - returning directly.\n"
      "    Function call: DoA(9)\n"
      "Google Mock tried the following 1 expectation, but it didn't match:");
  EXPECT_NONFATAL_FAILURE(
      a1.DoA(9),
      "  Expected arg #0: is equal to 1\n"
      "           Actual: 9\n"
      "         Expected: to be called once\n"
      "           Actual: called once - saturated and active");

  // Next, tests the message when there are more than one EXPECT_CALL().
  MockA a2;
  EXPECT_CALL(a2, DoA(1));
  EXPECT_CALL(a2, DoA(3));
  a2.DoA(1);
  EXPECT_NONFATAL_FAILURE(
      a2.DoA(2),
      "Unexpected mock function call - returning directly.\n"
      "    Function call: DoA(2)\n"
      "Google Mock tried the following 2 expectations, but none matched:");
  EXPECT_NONFATAL_FAILURE(
      a2.DoA(2),
      "tried expectation #0: EXPECT_CALL(a2, DoA(1))...\n"
      "  Expected arg #0: is equal to 1\n"
      "           Actual: 2\n"
      "         Expected: to be called once\n"
      "           Actual: called once - saturated and active");
  EXPECT_NONFATAL_FAILURE(
      a2.DoA(2),
      "tried expectation #1: EXPECT_CALL(a2, DoA(3))...\n"
      "  Expected arg #0: is equal to 3\n"
      "           Actual: 2\n"
      "         Expected: to be called once\n"
      "           Actual: never called - unsatisfied and active");
  a2.DoA(3);
}

// Tests that an unexpected non-void function generates the right
// failure message.
TEST(UnexpectedCallTest, GeneartesFailureForNonVoidFunction) {
  MockB b1;
  EXPECT_CALL(b1, DoB(1));
  b1.DoB(1);
  EXPECT_NONFATAL_FAILURE(
      b1.DoB(2),
      "Unexpected mock function call - returning default value.\n"
      "    Function call: DoB(2)\n"
      "          Returns: 0\n"
      "Google Mock tried the following 1 expectation, but it didn't match:");
  EXPECT_NONFATAL_FAILURE(
      b1.DoB(2),
      "  Expected arg #0: is equal to 1\n"
      "           Actual: 2\n"
      "         Expected: to be called once\n"
      "           Actual: called once - saturated and active");
}

// Tests that Google Mock explains that an retired expectation doesn't
// match the call.
TEST(UnexpectedCallTest, RetiredExpectation) {
  MockB b;
  EXPECT_CALL(b, DoB(1))
      .RetiresOnSaturation();

  b.DoB(1);
  EXPECT_NONFATAL_FAILURE(
      b.DoB(1),
      "         Expected: the expectation is active\n"
      "           Actual: it is retired");
}

// Tests that Google Mock explains that an expectation that doesn't
// match the arguments doesn't match the call.
TEST(UnexpectedCallTest, UnmatchedArguments) {
  MockB b;
  EXPECT_CALL(b, DoB(1));

  EXPECT_NONFATAL_FAILURE(
      b.DoB(2),
      "  Expected arg #0: is equal to 1\n"
      "           Actual: 2\n");
  b.DoB(1);
}

// Tests that Google Mock explains that an expectation with
// unsatisfied pre-requisites doesn't match the call.
TEST(UnexpectedCallTest, UnsatisifiedPrerequisites) {
  Sequence s1, s2;
  MockB b;
  EXPECT_CALL(b, DoB(1))
      .InSequence(s1);
  EXPECT_CALL(b, DoB(2))
      .Times(AnyNumber())
      .InSequence(s1);
  EXPECT_CALL(b, DoB(3))
      .InSequence(s2);
  EXPECT_CALL(b, DoB(4))
      .InSequence(s1, s2);

  ::testing::TestPartResultArray failures;
  {
    ::testing::ScopedFakeTestPartResultReporter reporter(&failures);
    b.DoB(4);
    // Now 'failures' contains the Google Test failures generated by
    // the above statement.
  }

  // There should be one non-fatal failure.
  ASSERT_EQ(1, failures.size());
  const ::testing::TestPartResult& r = failures.GetTestPartResult(0);
  EXPECT_EQ(::testing::TestPartResult::kNonFatalFailure, r.type());

  // Verifies that the failure message contains the two unsatisfied
  // pre-requisites but not the satisfied one.
#if GTEST_USES_PCRE
  EXPECT_THAT(r.message(), ContainsRegex(
      // PCRE has trouble using (.|\n) to match any character, but
      // supports the (?s) prefix for using . to match any character.
      "(?s)the following immediate pre-requisites are not satisfied:\n"
      ".*: pre-requisite #0\n"
      ".*: pre-requisite #1"));
#elif GTEST_USES_POSIX_RE
  EXPECT_THAT(r.message(), ContainsRegex(
      // POSIX RE doesn't understand the (?s) prefix, but has no trouble
      // with (.|\n).
      "the following immediate pre-requisites are not satisfied:\n"
      "(.|\n)*: pre-requisite #0\n"
      "(.|\n)*: pre-requisite #1"));
#else
  // We can only use Google Test's own simple regex.
  EXPECT_THAT(r.message(), ContainsRegex(
      "the following immediate pre-requisites are not satisfied:"));
  EXPECT_THAT(r.message(), ContainsRegex(": pre-requisite #0"));
  EXPECT_THAT(r.message(), ContainsRegex(": pre-requisite #1"));
#endif  // GTEST_USES_PCRE

  b.DoB(1);
  b.DoB(3);
  b.DoB(4);
}

TEST(UndefinedReturnValueTest,
     ReturnValueIsMandatoryWhenNotDefaultConstructible) {
  MockA a;
  // FIXME: We should really verify the output message,
  // but we cannot yet due to that EXPECT_DEATH only captures stderr
  // while Google Mock logs to stdout.
#if GTEST_HAS_EXCEPTIONS
  EXPECT_ANY_THROW(a.ReturnNonDefaultConstructible());
#else
  EXPECT_DEATH_IF_SUPPORTED(a.ReturnNonDefaultConstructible(), "");
#endif
}

// Tests that an excessive call (one whose arguments match the
// matchers but is called too many times) performs the default action.
TEST(ExcessiveCallTest, DoesDefaultAction) {
  // When there is an ON_CALL() statement, the action specified by it
  // should be taken.
  MockA a;
  ON_CALL(a, Binary(_, _))
      .WillByDefault(Return(true));
  EXPECT_CALL(a, Binary(0, 0));
  a.Binary(0, 0);
  bool result = false;
  EXPECT_NONFATAL_FAILURE(result = a.Binary(0, 0),
                          "Mock function called more times than expected");
  EXPECT_TRUE(result);

  // When there is no ON_CALL(), the default value for the return type
  // should be returned.
  MockB b;
  EXPECT_CALL(b, DoB(0))
      .Times(0);
  int n = -1;
  EXPECT_NONFATAL_FAILURE(n = b.DoB(0),
                          "Mock function called more times than expected");
  EXPECT_EQ(0, n);
}

// Tests that when a void function is called too many times,
// the failure message contains the argument values.
TEST(ExcessiveCallTest, GeneratesFailureForVoidFunction) {
  MockA a;
  EXPECT_CALL(a, DoA(_))
      .Times(0);
  EXPECT_NONFATAL_FAILURE(
      a.DoA(9),
      "Mock function called more times than expected - returning directly.\n"
      "    Function call: DoA(9)\n"
      "         Expected: to be never called\n"
      "           Actual: called once - over-saturated and active");
}

// Tests that when a non-void function is called too many times, the
// failure message contains the argument values and the return value.
TEST(ExcessiveCallTest, GeneratesFailureForNonVoidFunction) {
  MockB b;
  EXPECT_CALL(b, DoB(_));
  b.DoB(1);
  EXPECT_NONFATAL_FAILURE(
      b.DoB(2),
      "Mock function called more times than expected - "
      "returning default value.\n"
      "    Function call: DoB(2)\n"
      "          Returns: 0\n"
      "         Expected: to be called once\n"
      "           Actual: called twice - over-saturated and active");
}

// Tests using sequences.

TEST(InSequenceTest, AllExpectationInScopeAreInSequence) {
  MockA a;
  {
    InSequence dummy;

    EXPECT_CALL(a, DoA(1));
    EXPECT_CALL(a, DoA(2));
  }

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    a.DoA(2);
  }, "Unexpected mock function call");

  a.DoA(1);
  a.DoA(2);
}

TEST(InSequenceTest, NestedInSequence) {
  MockA a;
  {
    InSequence dummy;

    EXPECT_CALL(a, DoA(1));
    {
      InSequence dummy2;

      EXPECT_CALL(a, DoA(2));
      EXPECT_CALL(a, DoA(3));
    }
  }

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    a.DoA(1);
    a.DoA(3);
  }, "Unexpected mock function call");

  a.DoA(2);
  a.DoA(3);
}

TEST(InSequenceTest, ExpectationsOutOfScopeAreNotAffected) {
  MockA a;
  {
    InSequence dummy;

    EXPECT_CALL(a, DoA(1));
    EXPECT_CALL(a, DoA(2));
  }
  EXPECT_CALL(a, DoA(3));

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    a.DoA(2);
  }, "Unexpected mock function call");

  a.DoA(3);
  a.DoA(1);
  a.DoA(2);
}

// Tests that any order is allowed when no sequence is used.
TEST(SequenceTest, AnyOrderIsOkByDefault) {
  {
    MockA a;
    MockB b;

    EXPECT_CALL(a, DoA(1));
    EXPECT_CALL(b, DoB())
        .Times(AnyNumber());

    a.DoA(1);
    b.DoB();
  }

  {  // NOLINT
    MockA a;
    MockB b;

    EXPECT_CALL(a, DoA(1));
    EXPECT_CALL(b, DoB())
        .Times(AnyNumber());

    b.DoB();
    a.DoA(1);
  }
}

// Tests that the calls must be in strict order when a complete order
// is specified.
TEST(SequenceTest, CallsMustBeInStrictOrderWhenSaidSo1) {
  MockA a;
  ON_CALL(a, ReturnResult(_))
      .WillByDefault(Return(Result()));

  Sequence s;
  EXPECT_CALL(a, ReturnResult(1))
      .InSequence(s);
  EXPECT_CALL(a, ReturnResult(2))
      .InSequence(s);
  EXPECT_CALL(a, ReturnResult(3))
      .InSequence(s);

  a.ReturnResult(1);

  // May only be called after a.ReturnResult(2).
  EXPECT_NONFATAL_FAILURE(a.ReturnResult(3), "Unexpected mock function call");

  a.ReturnResult(2);
  a.ReturnResult(3);
}

// Tests that the calls must be in strict order when a complete order
// is specified.
TEST(SequenceTest, CallsMustBeInStrictOrderWhenSaidSo2) {
  MockA a;
  ON_CALL(a, ReturnResult(_))
      .WillByDefault(Return(Result()));

  Sequence s;
  EXPECT_CALL(a, ReturnResult(1))
      .InSequence(s);
  EXPECT_CALL(a, ReturnResult(2))
      .InSequence(s);

  // May only be called after a.ReturnResult(1).
  EXPECT_NONFATAL_FAILURE(a.ReturnResult(2), "Unexpected mock function call");

  a.ReturnResult(1);
  a.ReturnResult(2);
}

// Tests specifying a DAG using multiple sequences.
class PartialOrderTest : public testing::Test {
 protected:
  PartialOrderTest() {
    ON_CALL(a_, ReturnResult(_))
        .WillByDefault(Return(Result()));

    // Specifies this partial ordering:
    //
    // a.ReturnResult(1) ==>
    //                       a.ReturnResult(2) * n  ==>  a.ReturnResult(3)
    // b.DoB() * 2       ==>
    Sequence x, y;
    EXPECT_CALL(a_, ReturnResult(1))
        .InSequence(x);
    EXPECT_CALL(b_, DoB())
        .Times(2)
        .InSequence(y);
    EXPECT_CALL(a_, ReturnResult(2))
        .Times(AnyNumber())
        .InSequence(x, y);
    EXPECT_CALL(a_, ReturnResult(3))
        .InSequence(x);
  }

  MockA a_;
  MockB b_;
};

TEST_F(PartialOrderTest, CallsMustConformToSpecifiedDag1) {
  a_.ReturnResult(1);
  b_.DoB();

  // May only be called after the second DoB().
  EXPECT_NONFATAL_FAILURE(a_.ReturnResult(2), "Unexpected mock function call");

  b_.DoB();
  a_.ReturnResult(3);
}

TEST_F(PartialOrderTest, CallsMustConformToSpecifiedDag2) {
  // May only be called after ReturnResult(1).
  EXPECT_NONFATAL_FAILURE(a_.ReturnResult(2), "Unexpected mock function call");

  a_.ReturnResult(1);
  b_.DoB();
  b_.DoB();
  a_.ReturnResult(3);
}

TEST_F(PartialOrderTest, CallsMustConformToSpecifiedDag3) {
  // May only be called last.
  EXPECT_NONFATAL_FAILURE(a_.ReturnResult(3), "Unexpected mock function call");

  a_.ReturnResult(1);
  b_.DoB();
  b_.DoB();
  a_.ReturnResult(3);
}

TEST_F(PartialOrderTest, CallsMustConformToSpecifiedDag4) {
  a_.ReturnResult(1);
  b_.DoB();
  b_.DoB();
  a_.ReturnResult(3);

  // May only be called before ReturnResult(3).
  EXPECT_NONFATAL_FAILURE(a_.ReturnResult(2), "Unexpected mock function call");
}

TEST(SequenceTest, Retirement) {
  MockA a;
  Sequence s;

  EXPECT_CALL(a, DoA(1))
      .InSequence(s);
  EXPECT_CALL(a, DoA(_))
      .InSequence(s)
      .RetiresOnSaturation();
  EXPECT_CALL(a, DoA(1))
      .InSequence(s);

  a.DoA(1);
  a.DoA(2);
  a.DoA(1);
}

// Tests Expectation.

TEST(ExpectationTest, ConstrutorsWork) {
  MockA a;
  Expectation e1;  // Default ctor.

  // Ctor from various forms of EXPECT_CALL.
  Expectation e2 = EXPECT_CALL(a, DoA(2));
  Expectation e3 = EXPECT_CALL(a, DoA(3)).With(_);
  {
    Sequence s;
    Expectation e4 = EXPECT_CALL(a, DoA(4)).Times(1);
    Expectation e5 = EXPECT_CALL(a, DoA(5)).InSequence(s);
  }
  Expectation e6 = EXPECT_CALL(a, DoA(6)).After(e2);
  Expectation e7 = EXPECT_CALL(a, DoA(7)).WillOnce(Return());
  Expectation e8 = EXPECT_CALL(a, DoA(8)).WillRepeatedly(Return());
  Expectation e9 = EXPECT_CALL(a, DoA(9)).RetiresOnSaturation();

  Expectation e10 = e2;  // Copy ctor.

  EXPECT_THAT(e1, Ne(e2));
  EXPECT_THAT(e2, Eq(e10));

  a.DoA(2);
  a.DoA(3);
  a.DoA(4);
  a.DoA(5);
  a.DoA(6);
  a.DoA(7);
  a.DoA(8);
  a.DoA(9);
}

TEST(ExpectationTest, AssignmentWorks) {
  MockA a;
  Expectation e1;
  Expectation e2 = EXPECT_CALL(a, DoA(1));

  EXPECT_THAT(e1, Ne(e2));

  e1 = e2;
  EXPECT_THAT(e1, Eq(e2));

  a.DoA(1);
}

// Tests ExpectationSet.

TEST(ExpectationSetTest, MemberTypesAreCorrect) {
  ::testing::StaticAssertTypeEq<Expectation, ExpectationSet::value_type>();
}

TEST(ExpectationSetTest, ConstructorsWork) {
  MockA a;

  Expectation e1;
  const Expectation e2;
  ExpectationSet es1;  // Default ctor.
  ExpectationSet es2 = EXPECT_CALL(a, DoA(1));  // Ctor from EXPECT_CALL.
  ExpectationSet es3 = e1;  // Ctor from Expectation.
  ExpectationSet es4(e1);   // Ctor from Expectation; alternative syntax.
  ExpectationSet es5 = e2;  // Ctor from const Expectation.
  ExpectationSet es6(e2);   // Ctor from const Expectation; alternative syntax.
  ExpectationSet es7 = es2;  // Copy ctor.

  EXPECT_EQ(0, es1.size());
  EXPECT_EQ(1, es2.size());
  EXPECT_EQ(1, es3.size());
  EXPECT_EQ(1, es4.size());
  EXPECT_EQ(1, es5.size());
  EXPECT_EQ(1, es6.size());
  EXPECT_EQ(1, es7.size());

  EXPECT_THAT(es3, Ne(es2));
  EXPECT_THAT(es4, Eq(es3));
  EXPECT_THAT(es5, Eq(es4));
  EXPECT_THAT(es6, Eq(es5));
  EXPECT_THAT(es7, Eq(es2));
  a.DoA(1);
}

TEST(ExpectationSetTest, AssignmentWorks) {
  ExpectationSet es1;
  ExpectationSet es2 = Expectation();

  es1 = es2;
  EXPECT_EQ(1, es1.size());
  EXPECT_THAT(*(es1.begin()), Eq(Expectation()));
  EXPECT_THAT(es1, Eq(es2));
}

TEST(ExpectationSetTest, InsertionWorks) {
  ExpectationSet es1;
  Expectation e1;
  es1 += e1;
  EXPECT_EQ(1, es1.size());
  EXPECT_THAT(*(es1.begin()), Eq(e1));

  MockA a;
  Expectation e2 = EXPECT_CALL(a, DoA(1));
  es1 += e2;
  EXPECT_EQ(2, es1.size());

  ExpectationSet::const_iterator it1 = es1.begin();
  ExpectationSet::const_iterator it2 = it1;
  ++it2;
  EXPECT_TRUE(*it1 == e1 || *it2 == e1);  // e1 must be in the set.
  EXPECT_TRUE(*it1 == e2 || *it2 == e2);  // e2 must be in the set too.
  a.DoA(1);
}

TEST(ExpectationSetTest, SizeWorks) {
  ExpectationSet es;
  EXPECT_EQ(0, es.size());

  es += Expectation();
  EXPECT_EQ(1, es.size());

  MockA a;
  es += EXPECT_CALL(a, DoA(1));
  EXPECT_EQ(2, es.size());

  a.DoA(1);
}

TEST(ExpectationSetTest, IsEnumerable) {
  ExpectationSet es;
  EXPECT_TRUE(es.begin() == es.end());

  es += Expectation();
  ExpectationSet::const_iterator it = es.begin();
  EXPECT_TRUE(it != es.end());
  EXPECT_THAT(*it, Eq(Expectation()));
  ++it;
  EXPECT_TRUE(it== es.end());
}

// Tests the .After() clause.

TEST(AfterTest, SucceedsWhenPartialOrderIsSatisfied) {
  MockA a;
  ExpectationSet es;
  es += EXPECT_CALL(a, DoA(1));
  es += EXPECT_CALL(a, DoA(2));
  EXPECT_CALL(a, DoA(3))
      .After(es);

  a.DoA(1);
  a.DoA(2);
  a.DoA(3);
}

TEST(AfterTest, SucceedsWhenTotalOrderIsSatisfied) {
  MockA a;
  MockB b;
  // The following also verifies that const Expectation objects work
  // too.  Do not remove the const modifiers.
  const Expectation e1 = EXPECT_CALL(a, DoA(1));
  const Expectation e2 = EXPECT_CALL(b, DoB())
      .Times(2)
      .After(e1);
  EXPECT_CALL(a, DoA(2)).After(e2);

  a.DoA(1);
  b.DoB();
  b.DoB();
  a.DoA(2);
}

// Calls must be in strict order when specified so using .After().
TEST(AfterTest, CallsMustBeInStrictOrderWhenSpecifiedSo1) {
  MockA a;
  MockB b;

  // Define ordering:
  //   a.DoA(1) ==> b.DoB() ==> a.DoA(2)
  Expectation e1 = EXPECT_CALL(a, DoA(1));
  Expectation e2 = EXPECT_CALL(b, DoB())
      .After(e1);
  EXPECT_CALL(a, DoA(2))
      .After(e2);

  a.DoA(1);

  // May only be called after DoB().
  EXPECT_NONFATAL_FAILURE(a.DoA(2), "Unexpected mock function call");

  b.DoB();
  a.DoA(2);
}

// Calls must be in strict order when specified so using .After().
TEST(AfterTest, CallsMustBeInStrictOrderWhenSpecifiedSo2) {
  MockA a;
  MockB b;

  // Define ordering:
  //   a.DoA(1) ==> b.DoB() * 2 ==> a.DoA(2)
  Expectation e1 = EXPECT_CALL(a, DoA(1));
  Expectation e2 = EXPECT_CALL(b, DoB())
      .Times(2)
      .After(e1);
  EXPECT_CALL(a, DoA(2))
      .After(e2);

  a.DoA(1);
  b.DoB();

  // May only be called after the second DoB().
  EXPECT_NONFATAL_FAILURE(a.DoA(2), "Unexpected mock function call");

  b.DoB();
  a.DoA(2);
}

// Calls must satisfy the partial order when specified so.
TEST(AfterTest, CallsMustSatisfyPartialOrderWhenSpecifiedSo) {
  MockA a;
  ON_CALL(a, ReturnResult(_))
      .WillByDefault(Return(Result()));

  // Define ordering:
  //   a.DoA(1) ==>
  //   a.DoA(2) ==> a.ReturnResult(3)
  Expectation e = EXPECT_CALL(a, DoA(1));
  const ExpectationSet es = EXPECT_CALL(a, DoA(2));
  EXPECT_CALL(a, ReturnResult(3))
      .After(e, es);

  // May only be called last.
  EXPECT_NONFATAL_FAILURE(a.ReturnResult(3), "Unexpected mock function call");

  a.DoA(2);
  a.DoA(1);
  a.ReturnResult(3);
}

// Calls must satisfy the partial order when specified so.
TEST(AfterTest, CallsMustSatisfyPartialOrderWhenSpecifiedSo2) {
  MockA a;

  // Define ordering:
  //   a.DoA(1) ==>
  //   a.DoA(2) ==> a.DoA(3)
  Expectation e = EXPECT_CALL(a, DoA(1));
  const ExpectationSet es = EXPECT_CALL(a, DoA(2));
  EXPECT_CALL(a, DoA(3))
      .After(e, es);

  a.DoA(2);

  // May only be called last.
  EXPECT_NONFATAL_FAILURE(a.DoA(3), "Unexpected mock function call");

  a.DoA(1);
  a.DoA(3);
}

// .After() can be combined with .InSequence().
TEST(AfterTest, CanBeUsedWithInSequence) {
  MockA a;
  Sequence s;
  Expectation e = EXPECT_CALL(a, DoA(1));
  EXPECT_CALL(a, DoA(2)).InSequence(s);
  EXPECT_CALL(a, DoA(3))
      .InSequence(s)
      .After(e);

  a.DoA(1);

  // May only be after DoA(2).
  EXPECT_NONFATAL_FAILURE(a.DoA(3), "Unexpected mock function call");

  a.DoA(2);
  a.DoA(3);
}

// .After() can be called multiple times.
TEST(AfterTest, CanBeCalledManyTimes) {
  MockA a;
  Expectation e1 = EXPECT_CALL(a, DoA(1));
  Expectation e2 = EXPECT_CALL(a, DoA(2));
  Expectation e3 = EXPECT_CALL(a, DoA(3));
  EXPECT_CALL(a, DoA(4))
      .After(e1)
      .After(e2)
      .After(e3);

  a.DoA(3);
  a.DoA(1);
  a.DoA(2);
  a.DoA(4);
}

// .After() accepts up to 5 arguments.
TEST(AfterTest, AcceptsUpToFiveArguments) {
  MockA a;
  Expectation e1 = EXPECT_CALL(a, DoA(1));
  Expectation e2 = EXPECT_CALL(a, DoA(2));
  Expectation e3 = EXPECT_CALL(a, DoA(3));
  ExpectationSet es1 = EXPECT_CALL(a, DoA(4));
  ExpectationSet es2 = EXPECT_CALL(a, DoA(5));
  EXPECT_CALL(a, DoA(6))
      .After(e1, e2, e3, es1, es2);

  a.DoA(5);
  a.DoA(2);
  a.DoA(4);
  a.DoA(1);
  a.DoA(3);
  a.DoA(6);
}

// .After() allows input to contain duplicated Expectations.
TEST(AfterTest, AcceptsDuplicatedInput) {
  MockA a;
  ON_CALL(a, ReturnResult(_))
      .WillByDefault(Return(Result()));

  // Define ordering:
  //   DoA(1) ==>
  //   DoA(2) ==> ReturnResult(3)
  Expectation e1 = EXPECT_CALL(a, DoA(1));
  Expectation e2 = EXPECT_CALL(a, DoA(2));
  ExpectationSet es;
  es += e1;
  es += e2;
  EXPECT_CALL(a, ReturnResult(3))
      .After(e1, e2, es, e1);

  a.DoA(1);

  // May only be after DoA(2).
  EXPECT_NONFATAL_FAILURE(a.ReturnResult(3), "Unexpected mock function call");

  a.DoA(2);
  a.ReturnResult(3);
}

// An Expectation added to an ExpectationSet after it has been used in
// an .After() has no effect.
TEST(AfterTest, ChangesToExpectationSetHaveNoEffectAfterwards) {
  MockA a;
  ExpectationSet es1 = EXPECT_CALL(a, DoA(1));
  Expectation e2 = EXPECT_CALL(a, DoA(2));
  EXPECT_CALL(a, DoA(3))
      .After(es1);
  es1 += e2;

  a.DoA(1);
  a.DoA(3);
  a.DoA(2);
}

// Tests that Google Mock correctly handles calls to mock functions
// after a mock object owning one of their pre-requisites has died.

// Tests that calls that satisfy the original spec are successful.
TEST(DeletingMockEarlyTest, Success1) {
  MockB* const b1 = new MockB;
  MockA* const a = new MockA;
  MockB* const b2 = new MockB;

  {
    InSequence dummy;
    EXPECT_CALL(*b1, DoB(_))
        .WillOnce(Return(1));
    EXPECT_CALL(*a, Binary(_, _))
        .Times(AnyNumber())
        .WillRepeatedly(Return(true));
    EXPECT_CALL(*b2, DoB(_))
        .Times(AnyNumber())
        .WillRepeatedly(Return(2));
  }

  EXPECT_EQ(1, b1->DoB(1));
  delete b1;
  // a's pre-requisite has died.
  EXPECT_TRUE(a->Binary(0, 1));
  delete b2;
  // a's successor has died.
  EXPECT_TRUE(a->Binary(1, 2));
  delete a;
}

// Tests that calls that satisfy the original spec are successful.
TEST(DeletingMockEarlyTest, Success2) {
  MockB* const b1 = new MockB;
  MockA* const a = new MockA;
  MockB* const b2 = new MockB;

  {
    InSequence dummy;
    EXPECT_CALL(*b1, DoB(_))
        .WillOnce(Return(1));
    EXPECT_CALL(*a, Binary(_, _))
        .Times(AnyNumber());
    EXPECT_CALL(*b2, DoB(_))
        .Times(AnyNumber())
        .WillRepeatedly(Return(2));
  }

  delete a;  // a is trivially satisfied.
  EXPECT_EQ(1, b1->DoB(1));
  EXPECT_EQ(2, b2->DoB(2));
  delete b1;
  delete b2;
}

// Tests that it's OK to delete a mock object itself in its action.

// Suppresses warning on unreferenced formal parameter in MSVC with
// -W4.
#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable:4100)
#endif

ACTION_P(Delete, ptr) { delete ptr; }

#ifdef _MSC_VER
# pragma warning(pop)
#endif

TEST(DeletingMockEarlyTest, CanDeleteSelfInActionReturningVoid) {
  MockA* const a = new MockA;
  EXPECT_CALL(*a, DoA(_)).WillOnce(Delete(a));
  a->DoA(42);  // This will cause a to be deleted.
}

TEST(DeletingMockEarlyTest, CanDeleteSelfInActionReturningValue) {
  MockA* const a = new MockA;
  EXPECT_CALL(*a, ReturnResult(_))
      .WillOnce(DoAll(Delete(a), Return(Result())));
  a->ReturnResult(42);  // This will cause a to be deleted.
}

// Tests that calls that violate the original spec yield failures.
TEST(DeletingMockEarlyTest, Failure1) {
  MockB* const b1 = new MockB;
  MockA* const a = new MockA;
  MockB* const b2 = new MockB;

  {
    InSequence dummy;
    EXPECT_CALL(*b1, DoB(_))
        .WillOnce(Return(1));
    EXPECT_CALL(*a, Binary(_, _))
        .Times(AnyNumber());
    EXPECT_CALL(*b2, DoB(_))
        .Times(AnyNumber())
        .WillRepeatedly(Return(2));
  }

  delete a;  // a is trivially satisfied.
  EXPECT_NONFATAL_FAILURE({
    b2->DoB(2);
  }, "Unexpected mock function call");
  EXPECT_EQ(1, b1->DoB(1));
  delete b1;
  delete b2;
}

// Tests that calls that violate the original spec yield failures.
TEST(DeletingMockEarlyTest, Failure2) {
  MockB* const b1 = new MockB;
  MockA* const a = new MockA;
  MockB* const b2 = new MockB;

  {
    InSequence dummy;
    EXPECT_CALL(*b1, DoB(_));
    EXPECT_CALL(*a, Binary(_, _))
        .Times(AnyNumber());
    EXPECT_CALL(*b2, DoB(_))
        .Times(AnyNumber());
  }

  EXPECT_NONFATAL_FAILURE(delete b1,
                          "Actual: never called");
  EXPECT_NONFATAL_FAILURE(a->Binary(0, 1),
                          "Unexpected mock function call");
  EXPECT_NONFATAL_FAILURE(b2->DoB(1),
                          "Unexpected mock function call");
  delete a;
  delete b2;
}

class EvenNumberCardinality : public CardinalityInterface {
 public:
  // Returns true if and only if call_count calls will satisfy this
  // cardinality.
  bool IsSatisfiedByCallCount(int call_count) const override {
    return call_count % 2 == 0;
  }

  // Returns true if and only if call_count calls will saturate this
  // cardinality.
  bool IsSaturatedByCallCount(int /* call_count */) const override {
    return false;
  }

  // Describes self to an ostream.
  void DescribeTo(::std::ostream* os) const override {
    *os << "called even number of times";
  }
};

Cardinality EvenNumber() {
  return Cardinality(new EvenNumberCardinality);
}

TEST(ExpectationBaseTest,
     AllPrerequisitesAreSatisfiedWorksForNonMonotonicCardinality) {
  MockA* a = new MockA;
  Sequence s;

  EXPECT_CALL(*a, DoA(1))
      .Times(EvenNumber())
      .InSequence(s);
  EXPECT_CALL(*a, DoA(2))
      .Times(AnyNumber())
      .InSequence(s);
  EXPECT_CALL(*a, DoA(3))
      .Times(AnyNumber());

  a->DoA(3);
  a->DoA(1);
  EXPECT_NONFATAL_FAILURE(a->DoA(2), "Unexpected mock function call");
  EXPECT_NONFATAL_FAILURE(delete a, "to be called even number of times");
}

// The following tests verify the message generated when a mock
// function is called.

struct Printable {
};

inline void operator<<(::std::ostream& os, const Printable&) {
  os << "Printable";
}

struct Unprintable {
  Unprintable() : value(0) {}
  int value;
};

class MockC {
 public:
  MockC() {}

  MOCK_METHOD6(VoidMethod, void(bool cond, int n, std::string s, void* p,
                                const Printable& x, Unprintable y));
  MOCK_METHOD0(NonVoidMethod, int());  // NOLINT

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockC);
};

class VerboseFlagPreservingFixture : public testing::Test {
 protected:
  VerboseFlagPreservingFixture()
      : saved_verbose_flag_(GMOCK_FLAG(verbose)) {}

  ~VerboseFlagPreservingFixture() override {
    GMOCK_FLAG(verbose) = saved_verbose_flag_;
  }

 private:
  const std::string saved_verbose_flag_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(VerboseFlagPreservingFixture);
};

#if GTEST_HAS_STREAM_REDIRECTION

// Tests that an uninteresting mock function call on a naggy mock
// generates a warning without the stack trace when
// --gmock_verbose=warning is specified.
TEST(FunctionCallMessageTest,
     UninterestingCallOnNaggyMockGeneratesNoStackTraceWhenVerboseWarning) {
  GMOCK_FLAG(verbose) = kWarningVerbosity;
  NaggyMock<MockC> c;
  CaptureStdout();
  c.VoidMethod(false, 5, "Hi", nullptr, Printable(), Unprintable());
  const std::string output = GetCapturedStdout();
  EXPECT_PRED_FORMAT2(IsSubstring, "GMOCK WARNING", output);
  EXPECT_PRED_FORMAT2(IsNotSubstring, "Stack trace:", output);
}

// Tests that an uninteresting mock function call on a naggy mock
// generates a warning containing the stack trace when
// --gmock_verbose=info is specified.
TEST(FunctionCallMessageTest,
     UninterestingCallOnNaggyMockGeneratesFyiWithStackTraceWhenVerboseInfo) {
  GMOCK_FLAG(verbose) = kInfoVerbosity;
  NaggyMock<MockC> c;
  CaptureStdout();
  c.VoidMethod(false, 5, "Hi", nullptr, Printable(), Unprintable());
  const std::string output = GetCapturedStdout();
  EXPECT_PRED_FORMAT2(IsSubstring, "GMOCK WARNING", output);
  EXPECT_PRED_FORMAT2(IsSubstring, "Stack trace:", output);

# ifndef NDEBUG

  // We check the stack trace content in dbg-mode only, as opt-mode
  // may inline the call we are interested in seeing.

  // Verifies that a void mock function's name appears in the stack
  // trace.
  EXPECT_PRED_FORMAT2(IsSubstring, "VoidMethod(", output);

  // Verifies that a non-void mock function's name appears in the
  // stack trace.
  CaptureStdout();
  c.NonVoidMethod();
  const std::string output2 = GetCapturedStdout();
  EXPECT_PRED_FORMAT2(IsSubstring, "NonVoidMethod(", output2);

# endif  // NDEBUG
}

// Tests that an uninteresting mock function call on a naggy mock
// causes the function arguments and return value to be printed.
TEST(FunctionCallMessageTest,
     UninterestingCallOnNaggyMockPrintsArgumentsAndReturnValue) {
  // A non-void mock function.
  NaggyMock<MockB> b;
  CaptureStdout();
  b.DoB();
  const std::string output1 = GetCapturedStdout();
  EXPECT_PRED_FORMAT2(
      IsSubstring,
      "Uninteresting mock function call - returning default value.\n"
      "    Function call: DoB()\n"
      "          Returns: 0\n", output1.c_str());
  // Makes sure the return value is printed.

  // A void mock function.
  NaggyMock<MockC> c;
  CaptureStdout();
  c.VoidMethod(false, 5, "Hi", nullptr, Printable(), Unprintable());
  const std::string output2 = GetCapturedStdout();
  EXPECT_THAT(output2.c_str(),
              ContainsRegex(
                  "Uninteresting mock function call - returning directly\\.\n"
                  "    Function call: VoidMethod"
                  "\\(false, 5, \"Hi\", NULL, @.+ "
                  "Printable, 4-byte object <00-00 00-00>\\)"));
  // A void function has no return value to print.
}

// Tests how the --gmock_verbose flag affects Google Mock's output.

class GMockVerboseFlagTest : public VerboseFlagPreservingFixture {
 public:
  // Verifies that the given Google Mock output is correct.  (When
  // should_print is true, the output should match the given regex and
  // contain the given function name in the stack trace.  When it's
  // false, the output should be empty.)
  void VerifyOutput(const std::string& output, bool should_print,
                    const std::string& expected_substring,
                    const std::string& function_name) {
    if (should_print) {
      EXPECT_THAT(output.c_str(), HasSubstr(expected_substring));
# ifndef NDEBUG
      // We check the stack trace content in dbg-mode only, as opt-mode
      // may inline the call we are interested in seeing.
      EXPECT_THAT(output.c_str(), HasSubstr(function_name));
# else
      // Suppresses 'unused function parameter' warnings.
      static_cast<void>(function_name);
# endif  // NDEBUG
    } else {
      EXPECT_STREQ("", output.c_str());
    }
  }

  // Tests how the flag affects expected calls.
  void TestExpectedCall(bool should_print) {
    MockA a;
    EXPECT_CALL(a, DoA(5));
    EXPECT_CALL(a, Binary(_, 1))
        .WillOnce(Return(true));

    // A void-returning function.
    CaptureStdout();
    a.DoA(5);
    VerifyOutput(
        GetCapturedStdout(),
        should_print,
        "Mock function call matches EXPECT_CALL(a, DoA(5))...\n"
        "    Function call: DoA(5)\n"
        "Stack trace:\n",
        "DoA");

    // A non-void-returning function.
    CaptureStdout();
    a.Binary(2, 1);
    VerifyOutput(
        GetCapturedStdout(),
        should_print,
        "Mock function call matches EXPECT_CALL(a, Binary(_, 1))...\n"
        "    Function call: Binary(2, 1)\n"
        "          Returns: true\n"
        "Stack trace:\n",
        "Binary");
  }

  // Tests how the flag affects uninteresting calls on a naggy mock.
  void TestUninterestingCallOnNaggyMock(bool should_print) {
    NaggyMock<MockA> a;
    const std::string note =
        "NOTE: You can safely ignore the above warning unless this "
        "call should not happen.  Do not suppress it by blindly adding "
        "an EXPECT_CALL() if you don't mean to enforce the call.  "
        "See "
        "https://github.com/google/googletest/blob/master/googlemock/docs/"
        "cook_book.md#"
        "knowing-when-to-expect for details.";

    // A void-returning function.
    CaptureStdout();
    a.DoA(5);
    VerifyOutput(
        GetCapturedStdout(),
        should_print,
        "\nGMOCK WARNING:\n"
        "Uninteresting mock function call - returning directly.\n"
        "    Function call: DoA(5)\n" +
        note,
        "DoA");

    // A non-void-returning function.
    CaptureStdout();
    a.Binary(2, 1);
    VerifyOutput(
        GetCapturedStdout(),
        should_print,
        "\nGMOCK WARNING:\n"
        "Uninteresting mock function call - returning default value.\n"
        "    Function call: Binary(2, 1)\n"
        "          Returns: false\n" +
        note,
        "Binary");
  }
};

// Tests that --gmock_verbose=info causes both expected and
// uninteresting calls to be reported.
TEST_F(GMockVerboseFlagTest, Info) {
  GMOCK_FLAG(verbose) = kInfoVerbosity;
  TestExpectedCall(true);
  TestUninterestingCallOnNaggyMock(true);
}

// Tests that --gmock_verbose=warning causes uninteresting calls to be
// reported.
TEST_F(GMockVerboseFlagTest, Warning) {
  GMOCK_FLAG(verbose) = kWarningVerbosity;
  TestExpectedCall(false);
  TestUninterestingCallOnNaggyMock(true);
}

// Tests that --gmock_verbose=warning causes neither expected nor
// uninteresting calls to be reported.
TEST_F(GMockVerboseFlagTest, Error) {
  GMOCK_FLAG(verbose) = kErrorVerbosity;
  TestExpectedCall(false);
  TestUninterestingCallOnNaggyMock(false);
}

// Tests that --gmock_verbose=SOME_INVALID_VALUE has the same effect
// as --gmock_verbose=warning.
TEST_F(GMockVerboseFlagTest, InvalidFlagIsTreatedAsWarning) {
  GMOCK_FLAG(verbose) = "invalid";  // Treated as "warning".
  TestExpectedCall(false);
  TestUninterestingCallOnNaggyMock(true);
}

#endif  // GTEST_HAS_STREAM_REDIRECTION

// A helper class that generates a failure when printed.  We use it to
// ensure that Google Mock doesn't print a value (even to an internal
// buffer) when it is not supposed to do so.
class PrintMeNot {};

void PrintTo(PrintMeNot /* dummy */, ::std::ostream* /* os */) {
  ADD_FAILURE() << "Google Mock is printing a value that shouldn't be "
                << "printed even to an internal buffer.";
}

class LogTestHelper {
 public:
  LogTestHelper() {}

  MOCK_METHOD1(Foo, PrintMeNot(PrintMeNot));

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(LogTestHelper);
};

class GMockLogTest : public VerboseFlagPreservingFixture {
 protected:
  LogTestHelper helper_;
};

TEST_F(GMockLogTest, DoesNotPrintGoodCallInternallyIfVerbosityIsWarning) {
  GMOCK_FLAG(verbose) = kWarningVerbosity;
  EXPECT_CALL(helper_, Foo(_))
      .WillOnce(Return(PrintMeNot()));
  helper_.Foo(PrintMeNot());  // This is an expected call.
}

TEST_F(GMockLogTest, DoesNotPrintGoodCallInternallyIfVerbosityIsError) {
  GMOCK_FLAG(verbose) = kErrorVerbosity;
  EXPECT_CALL(helper_, Foo(_))
      .WillOnce(Return(PrintMeNot()));
  helper_.Foo(PrintMeNot());  // This is an expected call.
}

TEST_F(GMockLogTest, DoesNotPrintWarningInternallyIfVerbosityIsError) {
  GMOCK_FLAG(verbose) = kErrorVerbosity;
  ON_CALL(helper_, Foo(_))
      .WillByDefault(Return(PrintMeNot()));
  helper_.Foo(PrintMeNot());  // This should generate a warning.
}

// Tests Mock::AllowLeak().

TEST(AllowLeakTest, AllowsLeakingUnusedMockObject) {
  MockA* a = new MockA;
  Mock::AllowLeak(a);
}

TEST(AllowLeakTest, CanBeCalledBeforeOnCall) {
  MockA* a = new MockA;
  Mock::AllowLeak(a);
  ON_CALL(*a, DoA(_)).WillByDefault(Return());
  a->DoA(0);
}

TEST(AllowLeakTest, CanBeCalledAfterOnCall) {
  MockA* a = new MockA;
  ON_CALL(*a, DoA(_)).WillByDefault(Return());
  Mock::AllowLeak(a);
}

TEST(AllowLeakTest, CanBeCalledBeforeExpectCall) {
  MockA* a = new MockA;
  Mock::AllowLeak(a);
  EXPECT_CALL(*a, DoA(_));
  a->DoA(0);
}

TEST(AllowLeakTest, CanBeCalledAfterExpectCall) {
  MockA* a = new MockA;
  EXPECT_CALL(*a, DoA(_)).Times(AnyNumber());
  Mock::AllowLeak(a);
}

TEST(AllowLeakTest, WorksWhenBothOnCallAndExpectCallArePresent) {
  MockA* a = new MockA;
  ON_CALL(*a, DoA(_)).WillByDefault(Return());
  EXPECT_CALL(*a, DoA(_)).Times(AnyNumber());
  Mock::AllowLeak(a);
}

// Tests that we can verify and clear a mock object's expectations
// when none of its methods has expectations.
TEST(VerifyAndClearExpectationsTest, NoMethodHasExpectations) {
  MockB b;
  ASSERT_TRUE(Mock::VerifyAndClearExpectations(&b));

  // There should be no expectations on the methods now, so we can
  // freely call them.
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that we can verify and clear a mock object's expectations
// when some, but not all, of its methods have expectations *and* the
// verification succeeds.
TEST(VerifyAndClearExpectationsTest, SomeMethodsHaveExpectationsAndSucceed) {
  MockB b;
  EXPECT_CALL(b, DoB())
      .WillOnce(Return(1));
  b.DoB();
  ASSERT_TRUE(Mock::VerifyAndClearExpectations(&b));

  // There should be no expectations on the methods now, so we can
  // freely call them.
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that we can verify and clear a mock object's expectations
// when some, but not all, of its methods have expectations *and* the
// verification fails.
TEST(VerifyAndClearExpectationsTest, SomeMethodsHaveExpectationsAndFail) {
  MockB b;
  EXPECT_CALL(b, DoB())
      .WillOnce(Return(1));
  bool result = true;
  EXPECT_NONFATAL_FAILURE(result = Mock::VerifyAndClearExpectations(&b),
                          "Actual: never called");
  ASSERT_FALSE(result);

  // There should be no expectations on the methods now, so we can
  // freely call them.
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that we can verify and clear a mock object's expectations
// when all of its methods have expectations.
TEST(VerifyAndClearExpectationsTest, AllMethodsHaveExpectations) {
  MockB b;
  EXPECT_CALL(b, DoB())
      .WillOnce(Return(1));
  EXPECT_CALL(b, DoB(_))
      .WillOnce(Return(2));
  b.DoB();
  b.DoB(1);
  ASSERT_TRUE(Mock::VerifyAndClearExpectations(&b));

  // There should be no expectations on the methods now, so we can
  // freely call them.
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that we can verify and clear a mock object's expectations
// when a method has more than one expectation.
TEST(VerifyAndClearExpectationsTest, AMethodHasManyExpectations) {
  MockB b;
  EXPECT_CALL(b, DoB(0))
      .WillOnce(Return(1));
  EXPECT_CALL(b, DoB(_))
      .WillOnce(Return(2));
  b.DoB(1);
  bool result = true;
  EXPECT_NONFATAL_FAILURE(result = Mock::VerifyAndClearExpectations(&b),
                          "Actual: never called");
  ASSERT_FALSE(result);

  // There should be no expectations on the methods now, so we can
  // freely call them.
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that we can call VerifyAndClearExpectations() on the same
// mock object multiple times.
TEST(VerifyAndClearExpectationsTest, CanCallManyTimes) {
  MockB b;
  EXPECT_CALL(b, DoB());
  b.DoB();
  Mock::VerifyAndClearExpectations(&b);

  EXPECT_CALL(b, DoB(_))
      .WillOnce(Return(1));
  b.DoB(1);
  Mock::VerifyAndClearExpectations(&b);
  Mock::VerifyAndClearExpectations(&b);

  // There should be no expectations on the methods now, so we can
  // freely call them.
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that we can clear a mock object's default actions when none
// of its methods has default actions.
TEST(VerifyAndClearTest, NoMethodHasDefaultActions) {
  MockB b;
  // If this crashes or generates a failure, the test will catch it.
  Mock::VerifyAndClear(&b);
  EXPECT_EQ(0, b.DoB());
}

// Tests that we can clear a mock object's default actions when some,
// but not all of its methods have default actions.
TEST(VerifyAndClearTest, SomeMethodsHaveDefaultActions) {
  MockB b;
  ON_CALL(b, DoB())
      .WillByDefault(Return(1));

  Mock::VerifyAndClear(&b);

  // Verifies that the default action of int DoB() was removed.
  EXPECT_EQ(0, b.DoB());
}

// Tests that we can clear a mock object's default actions when all of
// its methods have default actions.
TEST(VerifyAndClearTest, AllMethodsHaveDefaultActions) {
  MockB b;
  ON_CALL(b, DoB())
      .WillByDefault(Return(1));
  ON_CALL(b, DoB(_))
      .WillByDefault(Return(2));

  Mock::VerifyAndClear(&b);

  // Verifies that the default action of int DoB() was removed.
  EXPECT_EQ(0, b.DoB());

  // Verifies that the default action of int DoB(int) was removed.
  EXPECT_EQ(0, b.DoB(0));
}

// Tests that we can clear a mock object's default actions when a
// method has more than one ON_CALL() set on it.
TEST(VerifyAndClearTest, AMethodHasManyDefaultActions) {
  MockB b;
  ON_CALL(b, DoB(0))
      .WillByDefault(Return(1));
  ON_CALL(b, DoB(_))
      .WillByDefault(Return(2));

  Mock::VerifyAndClear(&b);

  // Verifies that the default actions (there are two) of int DoB(int)
  // were removed.
  EXPECT_EQ(0, b.DoB(0));
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that we can call VerifyAndClear() on a mock object multiple
// times.
TEST(VerifyAndClearTest, CanCallManyTimes) {
  MockB b;
  ON_CALL(b, DoB())
      .WillByDefault(Return(1));
  Mock::VerifyAndClear(&b);
  Mock::VerifyAndClear(&b);

  ON_CALL(b, DoB(_))
      .WillByDefault(Return(1));
  Mock::VerifyAndClear(&b);

  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that VerifyAndClear() works when the verification succeeds.
TEST(VerifyAndClearTest, Success) {
  MockB b;
  ON_CALL(b, DoB())
      .WillByDefault(Return(1));
  EXPECT_CALL(b, DoB(1))
      .WillOnce(Return(2));

  b.DoB();
  b.DoB(1);
  ASSERT_TRUE(Mock::VerifyAndClear(&b));

  // There should be no expectations on the methods now, so we can
  // freely call them.
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that VerifyAndClear() works when the verification fails.
TEST(VerifyAndClearTest, Failure) {
  MockB b;
  ON_CALL(b, DoB(_))
      .WillByDefault(Return(1));
  EXPECT_CALL(b, DoB())
      .WillOnce(Return(2));

  b.DoB(1);
  bool result = true;
  EXPECT_NONFATAL_FAILURE(result = Mock::VerifyAndClear(&b),
                          "Actual: never called");
  ASSERT_FALSE(result);

  // There should be no expectations on the methods now, so we can
  // freely call them.
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that VerifyAndClear() works when the default actions and
// expectations are set on a const mock object.
TEST(VerifyAndClearTest, Const) {
  MockB b;
  ON_CALL(Const(b), DoB())
      .WillByDefault(Return(1));

  EXPECT_CALL(Const(b), DoB())
      .WillOnce(DoDefault())
      .WillOnce(Return(2));

  b.DoB();
  b.DoB();
  ASSERT_TRUE(Mock::VerifyAndClear(&b));

  // There should be no expectations on the methods now, so we can
  // freely call them.
  EXPECT_EQ(0, b.DoB());
  EXPECT_EQ(0, b.DoB(1));
}

// Tests that we can set default actions and expectations on a mock
// object after VerifyAndClear() has been called on it.
TEST(VerifyAndClearTest, CanSetDefaultActionsAndExpectationsAfterwards) {
  MockB b;
  ON_CALL(b, DoB())
      .WillByDefault(Return(1));
  EXPECT_CALL(b, DoB(_))
      .WillOnce(Return(2));
  b.DoB(1);

  Mock::VerifyAndClear(&b);

  EXPECT_CALL(b, DoB())
      .WillOnce(Return(3));
  ON_CALL(b, DoB(_))
      .WillByDefault(Return(4));

  EXPECT_EQ(3, b.DoB());
  EXPECT_EQ(4, b.DoB(1));
}

// Tests that calling VerifyAndClear() on one mock object does not
// affect other mock objects (either of the same type or not).
TEST(VerifyAndClearTest, DoesNotAffectOtherMockObjects) {
  MockA a;
  MockB b1;
  MockB b2;

  ON_CALL(a, Binary(_, _))
      .WillByDefault(Return(true));
  EXPECT_CALL(a, Binary(_, _))
      .WillOnce(DoDefault())
      .WillOnce(Return(false));

  ON_CALL(b1, DoB())
      .WillByDefault(Return(1));
  EXPECT_CALL(b1, DoB(_))
      .WillOnce(Return(2));

  ON_CALL(b2, DoB())
      .WillByDefault(Return(3));
  EXPECT_CALL(b2, DoB(_));

  b2.DoB(0);
  Mock::VerifyAndClear(&b2);

  // Verifies that the default actions and expectations of a and b1
  // are still in effect.
  EXPECT_TRUE(a.Binary(0, 0));
  EXPECT_FALSE(a.Binary(0, 0));

  EXPECT_EQ(1, b1.DoB());
  EXPECT_EQ(2, b1.DoB(0));
}

TEST(VerifyAndClearTest,
     DestroyingChainedMocksDoesNotDeadlockThroughExpectations) {
  std::shared_ptr<MockA> a(new MockA);
  ReferenceHoldingMock test_mock;

  // EXPECT_CALL stores a reference to a inside test_mock.
  EXPECT_CALL(test_mock, AcceptReference(_))
      .WillRepeatedly(SetArgPointee<0>(a));

  // Throw away the reference to the mock that we have in a. After this, the
  // only reference to it is stored by test_mock.
  a.reset();

  // When test_mock goes out of scope, it destroys the last remaining reference
  // to the mock object originally pointed to by a. This will cause the MockA
  // destructor to be called from inside the ReferenceHoldingMock destructor.
  // The state of all mocks is protected by a single global lock, but there
  // should be no deadlock.
}

TEST(VerifyAndClearTest,
     DestroyingChainedMocksDoesNotDeadlockThroughDefaultAction) {
  std::shared_ptr<MockA> a(new MockA);
  ReferenceHoldingMock test_mock;

  // ON_CALL stores a reference to a inside test_mock.
  ON_CALL(test_mock, AcceptReference(_))
      .WillByDefault(SetArgPointee<0>(a));

  // Throw away the reference to the mock that we have in a. After this, the
  // only reference to it is stored by test_mock.
  a.reset();

  // When test_mock goes out of scope, it destroys the last remaining reference
  // to the mock object originally pointed to by a. This will cause the MockA
  // destructor to be called from inside the ReferenceHoldingMock destructor.
  // The state of all mocks is protected by a single global lock, but there
  // should be no deadlock.
}

// Tests that a mock function's action can call a mock function
// (either the same function or a different one) either as an explicit
// action or as a default action without causing a dead lock.  It
// verifies that the action is not performed inside the critical
// section.
TEST(SynchronizationTest, CanCallMockMethodInAction) {
  MockA a;
  MockC c;
  ON_CALL(a, DoA(_))
      .WillByDefault(IgnoreResult(InvokeWithoutArgs(&c,
                                                    &MockC::NonVoidMethod)));
  EXPECT_CALL(a, DoA(1));
  EXPECT_CALL(a, DoA(1))
      .WillOnce(Invoke(&a, &MockA::DoA))
      .RetiresOnSaturation();
  EXPECT_CALL(c, NonVoidMethod());

  a.DoA(1);
  // This will match the second EXPECT_CALL() and trigger another a.DoA(1),
  // which will in turn match the first EXPECT_CALL() and trigger a call to
  // c.NonVoidMethod() that was specified by the ON_CALL() since the first
  // EXPECT_CALL() did not specify an action.
}

TEST(ParameterlessExpectationsTest, CanSetExpectationsWithoutMatchers) {
  MockA a;
  int do_a_arg0 = 0;
  ON_CALL(a, DoA).WillByDefault(SaveArg<0>(&do_a_arg0));
  int do_a_47_arg0 = 0;
  ON_CALL(a, DoA(47)).WillByDefault(SaveArg<0>(&do_a_47_arg0));

  a.DoA(17);
  EXPECT_THAT(do_a_arg0, 17);
  EXPECT_THAT(do_a_47_arg0, 0);
  a.DoA(47);
  EXPECT_THAT(do_a_arg0, 17);
  EXPECT_THAT(do_a_47_arg0, 47);

  ON_CALL(a, Binary).WillByDefault(Return(true));
  ON_CALL(a, Binary(_, 14)).WillByDefault(Return(false));
  EXPECT_THAT(a.Binary(14, 17), true);
  EXPECT_THAT(a.Binary(17, 14), false);
}

TEST(ParameterlessExpectationsTest, CanSetExpectationsForOverloadedMethods) {
  MockB b;
  ON_CALL(b, DoB()).WillByDefault(Return(9));
  ON_CALL(b, DoB(5)).WillByDefault(Return(11));

  EXPECT_THAT(b.DoB(), 9);
  EXPECT_THAT(b.DoB(1), 0);  // default value
  EXPECT_THAT(b.DoB(5), 11);
}

struct MockWithConstMethods {
 public:
  MOCK_CONST_METHOD1(Foo, int(int));
  MOCK_CONST_METHOD2(Bar, int(int, const char*));
};

TEST(ParameterlessExpectationsTest, CanSetExpectationsForConstMethods) {
  MockWithConstMethods mock;
  ON_CALL(mock, Foo).WillByDefault(Return(7));
  ON_CALL(mock, Bar).WillByDefault(Return(33));

  EXPECT_THAT(mock.Foo(17), 7);
  EXPECT_THAT(mock.Bar(27, "purple"), 33);
}

class MockConstOverload {
 public:
  MOCK_METHOD1(Overloaded, int(int));
  MOCK_CONST_METHOD1(Overloaded, int(int));
};

TEST(ParameterlessExpectationsTest,
     CanSetExpectationsForConstOverloadedMethods) {
  MockConstOverload mock;
  ON_CALL(mock, Overloaded(_)).WillByDefault(Return(7));
  ON_CALL(mock, Overloaded(5)).WillByDefault(Return(9));
  ON_CALL(Const(mock), Overloaded(5)).WillByDefault(Return(11));
  ON_CALL(Const(mock), Overloaded(7)).WillByDefault(Return(13));

  EXPECT_THAT(mock.Overloaded(1), 7);
  EXPECT_THAT(mock.Overloaded(5), 9);
  EXPECT_THAT(mock.Overloaded(7), 7);

  const MockConstOverload& const_mock = mock;
  EXPECT_THAT(const_mock.Overloaded(1), 0);
  EXPECT_THAT(const_mock.Overloaded(5), 11);
  EXPECT_THAT(const_mock.Overloaded(7), 13);
}

}  // namespace

// Allows the user to define their own main and then invoke gmock_main
// from it. This might be necessary on some platforms which require
// specific setup and teardown.
#if GMOCK_RENAME_MAIN
int gmock_main(int argc, char **argv) {
#else
int main(int argc, char **argv) {
#endif  // GMOCK_RENAME_MAIN
  testing::InitGoogleMock(&argc, argv);
  // Ensures that the tests pass no matter what value of
  // --gmock_catch_leaked_mocks and --gmock_verbose the user specifies.
  testing::GMOCK_FLAG(catch_leaked_mocks) = true;
  testing::GMOCK_FLAG(verbose) = testing::internal::kWarningVerbosity;

  return RUN_ALL_TESTS();
}
