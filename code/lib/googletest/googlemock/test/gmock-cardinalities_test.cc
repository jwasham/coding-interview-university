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
// This file tests the built-in cardinalities.

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "gtest/gtest-spi.h"

namespace {

using std::stringstream;
using testing::AnyNumber;
using testing::AtLeast;
using testing::AtMost;
using testing::Between;
using testing::Cardinality;
using testing::CardinalityInterface;
using testing::Exactly;
using testing::IsSubstring;
using testing::MakeCardinality;

class MockFoo {
 public:
  MockFoo() {}
  MOCK_METHOD0(Bar, int());  // NOLINT

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(MockFoo);
};

// Tests that Cardinality objects can be default constructed.
TEST(CardinalityTest, IsDefaultConstructable) {
  Cardinality c;
}

// Tests that Cardinality objects are copyable.
TEST(CardinalityTest, IsCopyable) {
  // Tests the copy constructor.
  Cardinality c = Exactly(1);
  EXPECT_FALSE(c.IsSatisfiedByCallCount(0));
  EXPECT_TRUE(c.IsSatisfiedByCallCount(1));
  EXPECT_TRUE(c.IsSaturatedByCallCount(1));

  // Tests the assignment operator.
  c = Exactly(2);
  EXPECT_FALSE(c.IsSatisfiedByCallCount(1));
  EXPECT_TRUE(c.IsSatisfiedByCallCount(2));
  EXPECT_TRUE(c.IsSaturatedByCallCount(2));
}

TEST(CardinalityTest, IsOverSaturatedByCallCountWorks) {
  const Cardinality c = AtMost(5);
  EXPECT_FALSE(c.IsOverSaturatedByCallCount(4));
  EXPECT_FALSE(c.IsOverSaturatedByCallCount(5));
  EXPECT_TRUE(c.IsOverSaturatedByCallCount(6));
}

// Tests that Cardinality::DescribeActualCallCountTo() creates the
// correct description.
TEST(CardinalityTest, CanDescribeActualCallCount) {
  stringstream ss0;
  Cardinality::DescribeActualCallCountTo(0, &ss0);
  EXPECT_EQ("never called", ss0.str());

  stringstream ss1;
  Cardinality::DescribeActualCallCountTo(1, &ss1);
  EXPECT_EQ("called once", ss1.str());

  stringstream ss2;
  Cardinality::DescribeActualCallCountTo(2, &ss2);
  EXPECT_EQ("called twice", ss2.str());

  stringstream ss3;
  Cardinality::DescribeActualCallCountTo(3, &ss3);
  EXPECT_EQ("called 3 times", ss3.str());
}

// Tests AnyNumber()
TEST(AnyNumber, Works) {
  const Cardinality c = AnyNumber();
  EXPECT_TRUE(c.IsSatisfiedByCallCount(0));
  EXPECT_FALSE(c.IsSaturatedByCallCount(0));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(1));
  EXPECT_FALSE(c.IsSaturatedByCallCount(1));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(9));
  EXPECT_FALSE(c.IsSaturatedByCallCount(9));

  stringstream ss;
  c.DescribeTo(&ss);
  EXPECT_PRED_FORMAT2(IsSubstring, "called any number of times",
                      ss.str());
}

TEST(AnyNumberTest, HasCorrectBounds) {
  const Cardinality c = AnyNumber();
  EXPECT_EQ(0, c.ConservativeLowerBound());
  EXPECT_EQ(INT_MAX, c.ConservativeUpperBound());
}

// Tests AtLeast(n).

TEST(AtLeastTest, OnNegativeNumber) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    AtLeast(-1);
  }, "The invocation lower bound must be >= 0");
}

TEST(AtLeastTest, OnZero) {
  const Cardinality c = AtLeast(0);
  EXPECT_TRUE(c.IsSatisfiedByCallCount(0));
  EXPECT_FALSE(c.IsSaturatedByCallCount(0));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(1));
  EXPECT_FALSE(c.IsSaturatedByCallCount(1));

  stringstream ss;
  c.DescribeTo(&ss);
  EXPECT_PRED_FORMAT2(IsSubstring, "any number of times",
                      ss.str());
}

TEST(AtLeastTest, OnPositiveNumber) {
  const Cardinality c = AtLeast(2);
  EXPECT_FALSE(c.IsSatisfiedByCallCount(0));
  EXPECT_FALSE(c.IsSaturatedByCallCount(0));

  EXPECT_FALSE(c.IsSatisfiedByCallCount(1));
  EXPECT_FALSE(c.IsSaturatedByCallCount(1));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(2));
  EXPECT_FALSE(c.IsSaturatedByCallCount(2));

  stringstream ss1;
  AtLeast(1).DescribeTo(&ss1);
  EXPECT_PRED_FORMAT2(IsSubstring, "at least once",
                      ss1.str());

  stringstream ss2;
  c.DescribeTo(&ss2);
  EXPECT_PRED_FORMAT2(IsSubstring, "at least twice",
                      ss2.str());

  stringstream ss3;
  AtLeast(3).DescribeTo(&ss3);
  EXPECT_PRED_FORMAT2(IsSubstring, "at least 3 times",
                      ss3.str());
}

TEST(AtLeastTest, HasCorrectBounds) {
  const Cardinality c = AtLeast(2);
  EXPECT_EQ(2, c.ConservativeLowerBound());
  EXPECT_EQ(INT_MAX, c.ConservativeUpperBound());
}

// Tests AtMost(n).

TEST(AtMostTest, OnNegativeNumber) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    AtMost(-1);
  }, "The invocation upper bound must be >= 0");
}

TEST(AtMostTest, OnZero) {
  const Cardinality c = AtMost(0);
  EXPECT_TRUE(c.IsSatisfiedByCallCount(0));
  EXPECT_TRUE(c.IsSaturatedByCallCount(0));

  EXPECT_FALSE(c.IsSatisfiedByCallCount(1));
  EXPECT_TRUE(c.IsSaturatedByCallCount(1));

  stringstream ss;
  c.DescribeTo(&ss);
  EXPECT_PRED_FORMAT2(IsSubstring, "never called",
                      ss.str());
}

TEST(AtMostTest, OnPositiveNumber) {
  const Cardinality c = AtMost(2);
  EXPECT_TRUE(c.IsSatisfiedByCallCount(0));
  EXPECT_FALSE(c.IsSaturatedByCallCount(0));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(1));
  EXPECT_FALSE(c.IsSaturatedByCallCount(1));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(2));
  EXPECT_TRUE(c.IsSaturatedByCallCount(2));

  stringstream ss1;
  AtMost(1).DescribeTo(&ss1);
  EXPECT_PRED_FORMAT2(IsSubstring, "called at most once",
                      ss1.str());

  stringstream ss2;
  c.DescribeTo(&ss2);
  EXPECT_PRED_FORMAT2(IsSubstring, "called at most twice",
                      ss2.str());

  stringstream ss3;
  AtMost(3).DescribeTo(&ss3);
  EXPECT_PRED_FORMAT2(IsSubstring, "called at most 3 times",
                      ss3.str());
}

TEST(AtMostTest, HasCorrectBounds) {
  const Cardinality c = AtMost(2);
  EXPECT_EQ(0, c.ConservativeLowerBound());
  EXPECT_EQ(2, c.ConservativeUpperBound());
}

// Tests Between(m, n).

TEST(BetweenTest, OnNegativeStart) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    Between(-1, 2);
  }, "The invocation lower bound must be >= 0, but is actually -1");
}

TEST(BetweenTest, OnNegativeEnd) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    Between(1, -2);
  }, "The invocation upper bound must be >= 0, but is actually -2");
}

TEST(BetweenTest, OnStartBiggerThanEnd) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    Between(2, 1);
  }, "The invocation upper bound (1) must be >= "
     "the invocation lower bound (2)");
}

TEST(BetweenTest, OnZeroStartAndZeroEnd) {
  const Cardinality c = Between(0, 0);

  EXPECT_TRUE(c.IsSatisfiedByCallCount(0));
  EXPECT_TRUE(c.IsSaturatedByCallCount(0));

  EXPECT_FALSE(c.IsSatisfiedByCallCount(1));
  EXPECT_TRUE(c.IsSaturatedByCallCount(1));

  stringstream ss;
  c.DescribeTo(&ss);
  EXPECT_PRED_FORMAT2(IsSubstring, "never called",
                      ss.str());
}

TEST(BetweenTest, OnZeroStartAndNonZeroEnd) {
  const Cardinality c = Between(0, 2);

  EXPECT_TRUE(c.IsSatisfiedByCallCount(0));
  EXPECT_FALSE(c.IsSaturatedByCallCount(0));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(2));
  EXPECT_TRUE(c.IsSaturatedByCallCount(2));

  EXPECT_FALSE(c.IsSatisfiedByCallCount(4));
  EXPECT_TRUE(c.IsSaturatedByCallCount(4));

  stringstream ss;
  c.DescribeTo(&ss);
  EXPECT_PRED_FORMAT2(IsSubstring, "called at most twice",
                      ss.str());
}

TEST(BetweenTest, OnSameStartAndEnd) {
  const Cardinality c = Between(3, 3);

  EXPECT_FALSE(c.IsSatisfiedByCallCount(2));
  EXPECT_FALSE(c.IsSaturatedByCallCount(2));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(3));
  EXPECT_TRUE(c.IsSaturatedByCallCount(3));

  EXPECT_FALSE(c.IsSatisfiedByCallCount(4));
  EXPECT_TRUE(c.IsSaturatedByCallCount(4));

  stringstream ss;
  c.DescribeTo(&ss);
  EXPECT_PRED_FORMAT2(IsSubstring, "called 3 times",
                      ss.str());
}

TEST(BetweenTest, OnDifferentStartAndEnd) {
  const Cardinality c = Between(3, 5);

  EXPECT_FALSE(c.IsSatisfiedByCallCount(2));
  EXPECT_FALSE(c.IsSaturatedByCallCount(2));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(3));
  EXPECT_FALSE(c.IsSaturatedByCallCount(3));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(5));
  EXPECT_TRUE(c.IsSaturatedByCallCount(5));

  EXPECT_FALSE(c.IsSatisfiedByCallCount(6));
  EXPECT_TRUE(c.IsSaturatedByCallCount(6));

  stringstream ss;
  c.DescribeTo(&ss);
  EXPECT_PRED_FORMAT2(IsSubstring, "called between 3 and 5 times",
                      ss.str());
}

TEST(BetweenTest, HasCorrectBounds) {
  const Cardinality c = Between(3, 5);
  EXPECT_EQ(3, c.ConservativeLowerBound());
  EXPECT_EQ(5, c.ConservativeUpperBound());
}

// Tests Exactly(n).

TEST(ExactlyTest, OnNegativeNumber) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    Exactly(-1);
  }, "The invocation lower bound must be >= 0");
}

TEST(ExactlyTest, OnZero) {
  const Cardinality c = Exactly(0);
  EXPECT_TRUE(c.IsSatisfiedByCallCount(0));
  EXPECT_TRUE(c.IsSaturatedByCallCount(0));

  EXPECT_FALSE(c.IsSatisfiedByCallCount(1));
  EXPECT_TRUE(c.IsSaturatedByCallCount(1));

  stringstream ss;
  c.DescribeTo(&ss);
  EXPECT_PRED_FORMAT2(IsSubstring, "never called",
                      ss.str());
}

TEST(ExactlyTest, OnPositiveNumber) {
  const Cardinality c = Exactly(2);
  EXPECT_FALSE(c.IsSatisfiedByCallCount(0));
  EXPECT_FALSE(c.IsSaturatedByCallCount(0));

  EXPECT_TRUE(c.IsSatisfiedByCallCount(2));
  EXPECT_TRUE(c.IsSaturatedByCallCount(2));

  stringstream ss1;
  Exactly(1).DescribeTo(&ss1);
  EXPECT_PRED_FORMAT2(IsSubstring, "called once",
                      ss1.str());

  stringstream ss2;
  c.DescribeTo(&ss2);
  EXPECT_PRED_FORMAT2(IsSubstring, "called twice",
                      ss2.str());

  stringstream ss3;
  Exactly(3).DescribeTo(&ss3);
  EXPECT_PRED_FORMAT2(IsSubstring, "called 3 times",
                      ss3.str());
}

TEST(ExactlyTest, HasCorrectBounds) {
  const Cardinality c = Exactly(3);
  EXPECT_EQ(3, c.ConservativeLowerBound());
  EXPECT_EQ(3, c.ConservativeUpperBound());
}

// Tests that a user can make their own cardinality by implementing
// CardinalityInterface and calling MakeCardinality().

class EvenCardinality : public CardinalityInterface {
 public:
  // Returns true if and only if call_count calls will satisfy this
  // cardinality.
  bool IsSatisfiedByCallCount(int call_count) const override {
    return (call_count % 2 == 0);
  }

  // Returns true if and only if call_count calls will saturate this
  // cardinality.
  bool IsSaturatedByCallCount(int /* call_count */) const override {
    return false;
  }

  // Describes self to an ostream.
  void DescribeTo(::std::ostream* ss) const override {
    *ss << "called even number of times";
  }
};

TEST(MakeCardinalityTest, ConstructsCardinalityFromInterface) {
  const Cardinality c = MakeCardinality(new EvenCardinality);

  EXPECT_TRUE(c.IsSatisfiedByCallCount(2));
  EXPECT_FALSE(c.IsSatisfiedByCallCount(3));

  EXPECT_FALSE(c.IsSaturatedByCallCount(10000));

  stringstream ss;
  c.DescribeTo(&ss);
  EXPECT_EQ("called even number of times", ss.str());
}

}  // Unnamed namespace
