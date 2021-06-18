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


// Tests Google Mock's output in various scenarios.  This ensures that
// Google Mock's messages are readable and useful.

#include "gmock/gmock.h"

#include <stdio.h>
#include <string>

#include "gtest/gtest.h"

// Silence C4100 (unreferenced formal parameter)
#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable:4100)
#endif

using testing::_;
using testing::AnyNumber;
using testing::Ge;
using testing::InSequence;
using testing::NaggyMock;
using testing::Ref;
using testing::Return;
using testing::Sequence;
using testing::Value;

class MockFoo {
 public:
  MockFoo() {}

  MOCK_METHOD3(Bar, char(const std::string& s, int i, double x));
  MOCK_METHOD2(Bar2, bool(int x, int y));
  MOCK_METHOD2(Bar3, void(int x, int y));

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockFoo);
};

class GMockOutputTest : public testing::Test {
 protected:
  NaggyMock<MockFoo> foo_;
};

TEST_F(GMockOutputTest, ExpectedCall) {
  testing::GMOCK_FLAG(verbose) = "info";

  EXPECT_CALL(foo_, Bar2(0, _));
  foo_.Bar2(0, 0);  // Expected call

  testing::GMOCK_FLAG(verbose) = "warning";
}

TEST_F(GMockOutputTest, ExpectedCallToVoidFunction) {
  testing::GMOCK_FLAG(verbose) = "info";

  EXPECT_CALL(foo_, Bar3(0, _));
  foo_.Bar3(0, 0);  // Expected call

  testing::GMOCK_FLAG(verbose) = "warning";
}

TEST_F(GMockOutputTest, ExplicitActionsRunOut) {
  EXPECT_CALL(foo_, Bar2(_, _))
      .Times(2)
      .WillOnce(Return(false));
  foo_.Bar2(2, 2);
  foo_.Bar2(1, 1);  // Explicit actions in EXPECT_CALL run out.
}

TEST_F(GMockOutputTest, UnexpectedCall) {
  EXPECT_CALL(foo_, Bar2(0, _));

  foo_.Bar2(1, 0);  // Unexpected call
  foo_.Bar2(0, 0);  // Expected call
}

TEST_F(GMockOutputTest, UnexpectedCallToVoidFunction) {
  EXPECT_CALL(foo_, Bar3(0, _));

  foo_.Bar3(1, 0);  // Unexpected call
  foo_.Bar3(0, 0);  // Expected call
}

TEST_F(GMockOutputTest, ExcessiveCall) {
  EXPECT_CALL(foo_, Bar2(0, _));

  foo_.Bar2(0, 0);  // Expected call
  foo_.Bar2(0, 1);  // Excessive call
}

TEST_F(GMockOutputTest, ExcessiveCallToVoidFunction) {
  EXPECT_CALL(foo_, Bar3(0, _));

  foo_.Bar3(0, 0);  // Expected call
  foo_.Bar3(0, 1);  // Excessive call
}

TEST_F(GMockOutputTest, UninterestingCall) {
  foo_.Bar2(0, 1);  // Uninteresting call
}

TEST_F(GMockOutputTest, UninterestingCallToVoidFunction) {
  foo_.Bar3(0, 1);  // Uninteresting call
}

TEST_F(GMockOutputTest, RetiredExpectation) {
  EXPECT_CALL(foo_, Bar2(_, _))
      .RetiresOnSaturation();
  EXPECT_CALL(foo_, Bar2(0, 0));

  foo_.Bar2(1, 1);
  foo_.Bar2(1, 1);  // Matches a retired expectation
  foo_.Bar2(0, 0);
}

TEST_F(GMockOutputTest, UnsatisfiedPrerequisite) {
  {
    InSequence s;
    EXPECT_CALL(foo_, Bar(_, 0, _));
    EXPECT_CALL(foo_, Bar2(0, 0));
    EXPECT_CALL(foo_, Bar2(1, _));
  }

  foo_.Bar2(1, 0);  // Has one immediate unsatisfied pre-requisite
  foo_.Bar("Hi", 0, 0);
  foo_.Bar2(0, 0);
  foo_.Bar2(1, 0);
}

TEST_F(GMockOutputTest, UnsatisfiedPrerequisites) {
  Sequence s1, s2;

  EXPECT_CALL(foo_, Bar(_, 0, _))
      .InSequence(s1);
  EXPECT_CALL(foo_, Bar2(0, 0))
      .InSequence(s2);
  EXPECT_CALL(foo_, Bar2(1, _))
      .InSequence(s1, s2);

  foo_.Bar2(1, 0);  // Has two immediate unsatisfied pre-requisites
  foo_.Bar("Hi", 0, 0);
  foo_.Bar2(0, 0);
  foo_.Bar2(1, 0);
}

TEST_F(GMockOutputTest, UnsatisfiedWith) {
  EXPECT_CALL(foo_, Bar2(_, _)).With(Ge());
}

TEST_F(GMockOutputTest, UnsatisfiedExpectation) {
  EXPECT_CALL(foo_, Bar(_, _, _));
  EXPECT_CALL(foo_, Bar2(0, _))
      .Times(2);

  foo_.Bar2(0, 1);
}

TEST_F(GMockOutputTest, MismatchArguments) {
  const std::string s = "Hi";
  EXPECT_CALL(foo_, Bar(Ref(s), _, Ge(0)));

  foo_.Bar("Ho", 0, -0.1);  // Mismatch arguments
  foo_.Bar(s, 0, 0);
}

TEST_F(GMockOutputTest, MismatchWith) {
  EXPECT_CALL(foo_, Bar2(Ge(2), Ge(1)))
      .With(Ge());

  foo_.Bar2(2, 3);  // Mismatch With()
  foo_.Bar2(2, 1);
}

TEST_F(GMockOutputTest, MismatchArgumentsAndWith) {
  EXPECT_CALL(foo_, Bar2(Ge(2), Ge(1)))
      .With(Ge());

  foo_.Bar2(1, 3);  // Mismatch arguments and mismatch With()
  foo_.Bar2(2, 1);
}

TEST_F(GMockOutputTest, UnexpectedCallWithDefaultAction) {
  ON_CALL(foo_, Bar2(_, _))
      .WillByDefault(Return(true));   // Default action #1
  ON_CALL(foo_, Bar2(1, _))
      .WillByDefault(Return(false));  // Default action #2

  EXPECT_CALL(foo_, Bar2(2, 2));
  foo_.Bar2(1, 0);  // Unexpected call, takes default action #2.
  foo_.Bar2(0, 0);  // Unexpected call, takes default action #1.
  foo_.Bar2(2, 2);  // Expected call.
}

TEST_F(GMockOutputTest, ExcessiveCallWithDefaultAction) {
  ON_CALL(foo_, Bar2(_, _))
      .WillByDefault(Return(true));   // Default action #1
  ON_CALL(foo_, Bar2(1, _))
      .WillByDefault(Return(false));  // Default action #2

  EXPECT_CALL(foo_, Bar2(2, 2));
  EXPECT_CALL(foo_, Bar2(1, 1));

  foo_.Bar2(2, 2);  // Expected call.
  foo_.Bar2(2, 2);  // Excessive call, takes default action #1.
  foo_.Bar2(1, 1);  // Expected call.
  foo_.Bar2(1, 1);  // Excessive call, takes default action #2.
}

TEST_F(GMockOutputTest, UninterestingCallWithDefaultAction) {
  ON_CALL(foo_, Bar2(_, _))
      .WillByDefault(Return(true));   // Default action #1
  ON_CALL(foo_, Bar2(1, _))
      .WillByDefault(Return(false));  // Default action #2

  foo_.Bar2(2, 2);  // Uninteresting call, takes default action #1.
  foo_.Bar2(1, 1);  // Uninteresting call, takes default action #2.
}

TEST_F(GMockOutputTest, ExplicitActionsRunOutWithDefaultAction) {
  ON_CALL(foo_, Bar2(_, _))
      .WillByDefault(Return(true));   // Default action #1

  EXPECT_CALL(foo_, Bar2(_, _))
      .Times(2)
      .WillOnce(Return(false));
  foo_.Bar2(2, 2);
  foo_.Bar2(1, 1);  // Explicit actions in EXPECT_CALL run out.
}

TEST_F(GMockOutputTest, CatchesLeakedMocks) {
  MockFoo* foo1 = new MockFoo;
  MockFoo* foo2 = new MockFoo;

  // Invokes ON_CALL on foo1.
  ON_CALL(*foo1, Bar(_, _, _)).WillByDefault(Return('a'));

  // Invokes EXPECT_CALL on foo2.
  EXPECT_CALL(*foo2, Bar2(_, _));
  EXPECT_CALL(*foo2, Bar2(1, _));
  EXPECT_CALL(*foo2, Bar3(_, _)).Times(AnyNumber());
  foo2->Bar2(2, 1);
  foo2->Bar2(1, 1);

  // Both foo1 and foo2 are deliberately leaked.
}

MATCHER_P2(IsPair, first, second, "") {
  return Value(arg.first, first) && Value(arg.second, second);
}

TEST_F(GMockOutputTest, PrintsMatcher) {
  const testing::Matcher<int> m1 = Ge(48);
  EXPECT_THAT((std::pair<int, bool>(42, true)), IsPair(m1, true));
}

void TestCatchesLeakedMocksInAdHocTests() {
  MockFoo* foo = new MockFoo;

  // Invokes EXPECT_CALL on foo.
  EXPECT_CALL(*foo, Bar2(_, _));
  foo->Bar2(2, 1);

  // foo is deliberately leaked.
}

int main(int argc, char **argv) {
  testing::InitGoogleMock(&argc, argv);
  // Ensures that the tests pass no matter what value of
  // --gmock_catch_leaked_mocks and --gmock_verbose the user specifies.
  testing::GMOCK_FLAG(catch_leaked_mocks) = true;
  testing::GMOCK_FLAG(verbose) = "warning";

  TestCatchesLeakedMocksInAdHocTests();
  return RUN_ALL_TESTS();
}

#ifdef _MSC_VER
# pragma warning(pop)
#endif
