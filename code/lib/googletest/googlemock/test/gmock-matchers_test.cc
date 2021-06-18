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
// This file tests some commonly used argument matchers.

// Silence warning C4244: 'initializing': conversion from 'int' to 'short',
// possible loss of data and C4100, unreferenced local parameter
#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable:4244)
# pragma warning(disable:4100)
#endif

#include "gmock/gmock-matchers.h"
#include "gmock/gmock-more-matchers.h"

#include <string.h>
#include <time.h>
#include <deque>
#include <forward_list>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>
#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "gtest/gtest-spi.h"

namespace testing {
namespace gmock_matchers_test {
namespace {

using std::greater;
using std::less;
using std::list;
using std::make_pair;
using std::map;
using std::multimap;
using std::multiset;
using std::ostream;
using std::pair;
using std::set;
using std::stringstream;
using std::vector;
using testing::internal::DummyMatchResultListener;
using testing::internal::ElementMatcherPair;
using testing::internal::ElementMatcherPairs;
using testing::internal::ExplainMatchFailureTupleTo;
using testing::internal::FloatingEqMatcher;
using testing::internal::FormatMatcherDescription;
using testing::internal::IsReadableTypeName;
using testing::internal::MatchMatrix;
using testing::internal::PredicateFormatterFromMatcher;
using testing::internal::RE;
using testing::internal::StreamMatchResultListener;
using testing::internal::Strings;

// Helper for testing container-valued matchers in mock method context. It is
// important to test matchers in this context, since it requires additional type
// deduction beyond what EXPECT_THAT does, thus making it more restrictive.
struct ContainerHelper {
  MOCK_METHOD1(Call, void(std::vector<std::unique_ptr<int>>));
};

std::vector<std::unique_ptr<int>> MakeUniquePtrs(const std::vector<int>& ints) {
  std::vector<std::unique_ptr<int>> pointers;
  for (int i : ints) pointers.emplace_back(new int(i));
  return pointers;
}

// For testing ExplainMatchResultTo().
class GreaterThanMatcher : public MatcherInterface<int> {
 public:
  explicit GreaterThanMatcher(int rhs) : rhs_(rhs) {}

  void DescribeTo(ostream* os) const override { *os << "is > " << rhs_; }

  bool MatchAndExplain(int lhs, MatchResultListener* listener) const override {
    const int diff = lhs - rhs_;
    if (diff > 0) {
      *listener << "which is " << diff << " more than " << rhs_;
    } else if (diff == 0) {
      *listener << "which is the same as " << rhs_;
    } else {
      *listener << "which is " << -diff << " less than " << rhs_;
    }

    return lhs > rhs_;
  }

 private:
  int rhs_;
};

Matcher<int> GreaterThan(int n) {
  return MakeMatcher(new GreaterThanMatcher(n));
}

std::string OfType(const std::string& type_name) {
#if GTEST_HAS_RTTI
  return " (of type " + type_name + ")";
#else
  return "";
#endif
}

// Returns the description of the given matcher.
template <typename T>
std::string Describe(const Matcher<T>& m) {
  return DescribeMatcher<T>(m);
}

// Returns the description of the negation of the given matcher.
template <typename T>
std::string DescribeNegation(const Matcher<T>& m) {
  return DescribeMatcher<T>(m, true);
}

// Returns the reason why x matches, or doesn't match, m.
template <typename MatcherType, typename Value>
std::string Explain(const MatcherType& m, const Value& x) {
  StringMatchResultListener listener;
  ExplainMatchResult(m, x, &listener);
  return listener.str();
}

TEST(MonotonicMatcherTest, IsPrintable) {
  stringstream ss;
  ss << GreaterThan(5);
  EXPECT_EQ("is > 5", ss.str());
}

TEST(MatchResultListenerTest, StreamingWorks) {
  StringMatchResultListener listener;
  listener << "hi" << 5;
  EXPECT_EQ("hi5", listener.str());

  listener.Clear();
  EXPECT_EQ("", listener.str());

  listener << 42;
  EXPECT_EQ("42", listener.str());

  // Streaming shouldn't crash when the underlying ostream is NULL.
  DummyMatchResultListener dummy;
  dummy << "hi" << 5;
}

TEST(MatchResultListenerTest, CanAccessUnderlyingStream) {
  EXPECT_TRUE(DummyMatchResultListener().stream() == nullptr);
  EXPECT_TRUE(StreamMatchResultListener(nullptr).stream() == nullptr);

  EXPECT_EQ(&std::cout, StreamMatchResultListener(&std::cout).stream());
}

TEST(MatchResultListenerTest, IsInterestedWorks) {
  EXPECT_TRUE(StringMatchResultListener().IsInterested());
  EXPECT_TRUE(StreamMatchResultListener(&std::cout).IsInterested());

  EXPECT_FALSE(DummyMatchResultListener().IsInterested());
  EXPECT_FALSE(StreamMatchResultListener(nullptr).IsInterested());
}

// Makes sure that the MatcherInterface<T> interface doesn't
// change.
class EvenMatcherImpl : public MatcherInterface<int> {
 public:
  bool MatchAndExplain(int x,
                       MatchResultListener* /* listener */) const override {
    return x % 2 == 0;
  }

  void DescribeTo(ostream* os) const override { *os << "is an even number"; }

  // We deliberately don't define DescribeNegationTo() and
  // ExplainMatchResultTo() here, to make sure the definition of these
  // two methods is optional.
};

// Makes sure that the MatcherInterface API doesn't change.
TEST(MatcherInterfaceTest, CanBeImplementedUsingPublishedAPI) {
  EvenMatcherImpl m;
}

// Tests implementing a monomorphic matcher using MatchAndExplain().

class NewEvenMatcherImpl : public MatcherInterface<int> {
 public:
  bool MatchAndExplain(int x, MatchResultListener* listener) const override {
    const bool match = x % 2 == 0;
    // Verifies that we can stream to a listener directly.
    *listener << "value % " << 2;
    if (listener->stream() != nullptr) {
      // Verifies that we can stream to a listener's underlying stream
      // too.
      *listener->stream() << " == " << (x % 2);
    }
    return match;
  }

  void DescribeTo(ostream* os) const override { *os << "is an even number"; }
};

TEST(MatcherInterfaceTest, CanBeImplementedUsingNewAPI) {
  Matcher<int> m = MakeMatcher(new NewEvenMatcherImpl);
  EXPECT_TRUE(m.Matches(2));
  EXPECT_FALSE(m.Matches(3));
  EXPECT_EQ("value % 2 == 0", Explain(m, 2));
  EXPECT_EQ("value % 2 == 1", Explain(m, 3));
}

// Tests default-constructing a matcher.
TEST(MatcherTest, CanBeDefaultConstructed) {
  Matcher<double> m;
}

// Tests that Matcher<T> can be constructed from a MatcherInterface<T>*.
TEST(MatcherTest, CanBeConstructedFromMatcherInterface) {
  const MatcherInterface<int>* impl = new EvenMatcherImpl;
  Matcher<int> m(impl);
  EXPECT_TRUE(m.Matches(4));
  EXPECT_FALSE(m.Matches(5));
}

// Tests that value can be used in place of Eq(value).
TEST(MatcherTest, CanBeImplicitlyConstructedFromValue) {
  Matcher<int> m1 = 5;
  EXPECT_TRUE(m1.Matches(5));
  EXPECT_FALSE(m1.Matches(6));
}

// Tests that NULL can be used in place of Eq(NULL).
TEST(MatcherTest, CanBeImplicitlyConstructedFromNULL) {
  Matcher<int*> m1 = nullptr;
  EXPECT_TRUE(m1.Matches(nullptr));
  int n = 0;
  EXPECT_FALSE(m1.Matches(&n));
}

// Tests that matchers can be constructed from a variable that is not properly
// defined. This should be illegal, but many users rely on this accidentally.
struct Undefined {
  virtual ~Undefined() = 0;
  static const int kInt = 1;
};

TEST(MatcherTest, CanBeConstructedFromUndefinedVariable) {
  Matcher<int> m1 = Undefined::kInt;
  EXPECT_TRUE(m1.Matches(1));
  EXPECT_FALSE(m1.Matches(2));
}

// Test that a matcher parameterized with an abstract class compiles.
TEST(MatcherTest, CanAcceptAbstractClass) { Matcher<const Undefined&> m = _; }

// Tests that matchers are copyable.
TEST(MatcherTest, IsCopyable) {
  // Tests the copy constructor.
  Matcher<bool> m1 = Eq(false);
  EXPECT_TRUE(m1.Matches(false));
  EXPECT_FALSE(m1.Matches(true));

  // Tests the assignment operator.
  m1 = Eq(true);
  EXPECT_TRUE(m1.Matches(true));
  EXPECT_FALSE(m1.Matches(false));
}

// Tests that Matcher<T>::DescribeTo() calls
// MatcherInterface<T>::DescribeTo().
TEST(MatcherTest, CanDescribeItself) {
  EXPECT_EQ("is an even number",
            Describe(Matcher<int>(new EvenMatcherImpl)));
}

// Tests Matcher<T>::MatchAndExplain().
TEST(MatcherTest, MatchAndExplain) {
  Matcher<int> m = GreaterThan(0);
  StringMatchResultListener listener1;
  EXPECT_TRUE(m.MatchAndExplain(42, &listener1));
  EXPECT_EQ("which is 42 more than 0", listener1.str());

  StringMatchResultListener listener2;
  EXPECT_FALSE(m.MatchAndExplain(-9, &listener2));
  EXPECT_EQ("which is 9 less than 0", listener2.str());
}

// Tests that a C-string literal can be implicitly converted to a
// Matcher<std::string> or Matcher<const std::string&>.
TEST(StringMatcherTest, CanBeImplicitlyConstructedFromCStringLiteral) {
  Matcher<std::string> m1 = "hi";
  EXPECT_TRUE(m1.Matches("hi"));
  EXPECT_FALSE(m1.Matches("hello"));

  Matcher<const std::string&> m2 = "hi";
  EXPECT_TRUE(m2.Matches("hi"));
  EXPECT_FALSE(m2.Matches("hello"));
}

// Tests that a string object can be implicitly converted to a
// Matcher<std::string> or Matcher<const std::string&>.
TEST(StringMatcherTest, CanBeImplicitlyConstructedFromString) {
  Matcher<std::string> m1 = std::string("hi");
  EXPECT_TRUE(m1.Matches("hi"));
  EXPECT_FALSE(m1.Matches("hello"));

  Matcher<const std::string&> m2 = std::string("hi");
  EXPECT_TRUE(m2.Matches("hi"));
  EXPECT_FALSE(m2.Matches("hello"));
}

#if GTEST_HAS_ABSL
// Tests that a C-string literal can be implicitly converted to a
// Matcher<absl::string_view> or Matcher<const absl::string_view&>.
TEST(StringViewMatcherTest, CanBeImplicitlyConstructedFromCStringLiteral) {
  Matcher<absl::string_view> m1 = "cats";
  EXPECT_TRUE(m1.Matches("cats"));
  EXPECT_FALSE(m1.Matches("dogs"));

  Matcher<const absl::string_view&> m2 = "cats";
  EXPECT_TRUE(m2.Matches("cats"));
  EXPECT_FALSE(m2.Matches("dogs"));
}

// Tests that a std::string object can be implicitly converted to a
// Matcher<absl::string_view> or Matcher<const absl::string_view&>.
TEST(StringViewMatcherTest, CanBeImplicitlyConstructedFromString) {
  Matcher<absl::string_view> m1 = std::string("cats");
  EXPECT_TRUE(m1.Matches("cats"));
  EXPECT_FALSE(m1.Matches("dogs"));

  Matcher<const absl::string_view&> m2 = std::string("cats");
  EXPECT_TRUE(m2.Matches("cats"));
  EXPECT_FALSE(m2.Matches("dogs"));
}

// Tests that a absl::string_view object can be implicitly converted to a
// Matcher<absl::string_view> or Matcher<const absl::string_view&>.
TEST(StringViewMatcherTest, CanBeImplicitlyConstructedFromStringView) {
  Matcher<absl::string_view> m1 = absl::string_view("cats");
  EXPECT_TRUE(m1.Matches("cats"));
  EXPECT_FALSE(m1.Matches("dogs"));

  Matcher<const absl::string_view&> m2 = absl::string_view("cats");
  EXPECT_TRUE(m2.Matches("cats"));
  EXPECT_FALSE(m2.Matches("dogs"));
}
#endif  // GTEST_HAS_ABSL

// Tests that a std::reference_wrapper<std::string> object can be implicitly
// converted to a Matcher<std::string> or Matcher<const std::string&> via Eq().
TEST(StringMatcherTest,
     CanBeImplicitlyConstructedFromEqReferenceWrapperString) {
  std::string value = "cats";
  Matcher<std::string> m1 = Eq(std::ref(value));
  EXPECT_TRUE(m1.Matches("cats"));
  EXPECT_FALSE(m1.Matches("dogs"));

  Matcher<const std::string&> m2 = Eq(std::ref(value));
  EXPECT_TRUE(m2.Matches("cats"));
  EXPECT_FALSE(m2.Matches("dogs"));
}

// Tests that MakeMatcher() constructs a Matcher<T> from a
// MatcherInterface* without requiring the user to explicitly
// write the type.
TEST(MakeMatcherTest, ConstructsMatcherFromMatcherInterface) {
  const MatcherInterface<int>* dummy_impl = nullptr;
  Matcher<int> m = MakeMatcher(dummy_impl);
}

// Tests that MakePolymorphicMatcher() can construct a polymorphic
// matcher from its implementation using the old API.
const int g_bar = 1;
class ReferencesBarOrIsZeroImpl {
 public:
  template <typename T>
  bool MatchAndExplain(const T& x,
                       MatchResultListener* /* listener */) const {
    const void* p = &x;
    return p == &g_bar || x == 0;
  }

  void DescribeTo(ostream* os) const { *os << "g_bar or zero"; }

  void DescribeNegationTo(ostream* os) const {
    *os << "doesn't reference g_bar and is not zero";
  }
};

// This function verifies that MakePolymorphicMatcher() returns a
// PolymorphicMatcher<T> where T is the argument's type.
PolymorphicMatcher<ReferencesBarOrIsZeroImpl> ReferencesBarOrIsZero() {
  return MakePolymorphicMatcher(ReferencesBarOrIsZeroImpl());
}

TEST(MakePolymorphicMatcherTest, ConstructsMatcherUsingOldAPI) {
  // Using a polymorphic matcher to match a reference type.
  Matcher<const int&> m1 = ReferencesBarOrIsZero();
  EXPECT_TRUE(m1.Matches(0));
  // Verifies that the identity of a by-reference argument is preserved.
  EXPECT_TRUE(m1.Matches(g_bar));
  EXPECT_FALSE(m1.Matches(1));
  EXPECT_EQ("g_bar or zero", Describe(m1));

  // Using a polymorphic matcher to match a value type.
  Matcher<double> m2 = ReferencesBarOrIsZero();
  EXPECT_TRUE(m2.Matches(0.0));
  EXPECT_FALSE(m2.Matches(0.1));
  EXPECT_EQ("g_bar or zero", Describe(m2));
}

// Tests implementing a polymorphic matcher using MatchAndExplain().

class PolymorphicIsEvenImpl {
 public:
  void DescribeTo(ostream* os) const { *os << "is even"; }

  void DescribeNegationTo(ostream* os) const {
    *os << "is odd";
  }

  template <typename T>
  bool MatchAndExplain(const T& x, MatchResultListener* listener) const {
    // Verifies that we can stream to the listener directly.
    *listener << "% " << 2;
    if (listener->stream() != nullptr) {
      // Verifies that we can stream to the listener's underlying stream
      // too.
      *listener->stream() << " == " << (x % 2);
    }
    return (x % 2) == 0;
  }
};

PolymorphicMatcher<PolymorphicIsEvenImpl> PolymorphicIsEven() {
  return MakePolymorphicMatcher(PolymorphicIsEvenImpl());
}

TEST(MakePolymorphicMatcherTest, ConstructsMatcherUsingNewAPI) {
  // Using PolymorphicIsEven() as a Matcher<int>.
  const Matcher<int> m1 = PolymorphicIsEven();
  EXPECT_TRUE(m1.Matches(42));
  EXPECT_FALSE(m1.Matches(43));
  EXPECT_EQ("is even", Describe(m1));

  const Matcher<int> not_m1 = Not(m1);
  EXPECT_EQ("is odd", Describe(not_m1));

  EXPECT_EQ("% 2 == 0", Explain(m1, 42));

  // Using PolymorphicIsEven() as a Matcher<char>.
  const Matcher<char> m2 = PolymorphicIsEven();
  EXPECT_TRUE(m2.Matches('\x42'));
  EXPECT_FALSE(m2.Matches('\x43'));
  EXPECT_EQ("is even", Describe(m2));

  const Matcher<char> not_m2 = Not(m2);
  EXPECT_EQ("is odd", Describe(not_m2));

  EXPECT_EQ("% 2 == 0", Explain(m2, '\x42'));
}

// Tests that MatcherCast<T>(m) works when m is a polymorphic matcher.
TEST(MatcherCastTest, FromPolymorphicMatcher) {
  Matcher<int> m = MatcherCast<int>(Eq(5));
  EXPECT_TRUE(m.Matches(5));
  EXPECT_FALSE(m.Matches(6));
}

// For testing casting matchers between compatible types.
class IntValue {
 public:
  // An int can be statically (although not implicitly) cast to a
  // IntValue.
  explicit IntValue(int a_value) : value_(a_value) {}

  int value() const { return value_; }
 private:
  int value_;
};

// For testing casting matchers between compatible types.
bool IsPositiveIntValue(const IntValue& foo) {
  return foo.value() > 0;
}

// Tests that MatcherCast<T>(m) works when m is a Matcher<U> where T
// can be statically converted to U.
TEST(MatcherCastTest, FromCompatibleType) {
  Matcher<double> m1 = Eq(2.0);
  Matcher<int> m2 = MatcherCast<int>(m1);
  EXPECT_TRUE(m2.Matches(2));
  EXPECT_FALSE(m2.Matches(3));

  Matcher<IntValue> m3 = Truly(IsPositiveIntValue);
  Matcher<int> m4 = MatcherCast<int>(m3);
  // In the following, the arguments 1 and 0 are statically converted
  // to IntValue objects, and then tested by the IsPositiveIntValue()
  // predicate.
  EXPECT_TRUE(m4.Matches(1));
  EXPECT_FALSE(m4.Matches(0));
}

// Tests that MatcherCast<T>(m) works when m is a Matcher<const T&>.
TEST(MatcherCastTest, FromConstReferenceToNonReference) {
  Matcher<const int&> m1 = Eq(0);
  Matcher<int> m2 = MatcherCast<int>(m1);
  EXPECT_TRUE(m2.Matches(0));
  EXPECT_FALSE(m2.Matches(1));
}

// Tests that MatcherCast<T>(m) works when m is a Matcher<T&>.
TEST(MatcherCastTest, FromReferenceToNonReference) {
  Matcher<int&> m1 = Eq(0);
  Matcher<int> m2 = MatcherCast<int>(m1);
  EXPECT_TRUE(m2.Matches(0));
  EXPECT_FALSE(m2.Matches(1));
}

// Tests that MatcherCast<const T&>(m) works when m is a Matcher<T>.
TEST(MatcherCastTest, FromNonReferenceToConstReference) {
  Matcher<int> m1 = Eq(0);
  Matcher<const int&> m2 = MatcherCast<const int&>(m1);
  EXPECT_TRUE(m2.Matches(0));
  EXPECT_FALSE(m2.Matches(1));
}

// Tests that MatcherCast<T&>(m) works when m is a Matcher<T>.
TEST(MatcherCastTest, FromNonReferenceToReference) {
  Matcher<int> m1 = Eq(0);
  Matcher<int&> m2 = MatcherCast<int&>(m1);
  int n = 0;
  EXPECT_TRUE(m2.Matches(n));
  n = 1;
  EXPECT_FALSE(m2.Matches(n));
}

// Tests that MatcherCast<T>(m) works when m is a Matcher<T>.
TEST(MatcherCastTest, FromSameType) {
  Matcher<int> m1 = Eq(0);
  Matcher<int> m2 = MatcherCast<int>(m1);
  EXPECT_TRUE(m2.Matches(0));
  EXPECT_FALSE(m2.Matches(1));
}

// Tests that MatcherCast<T>(m) works when m is a value of the same type as the
// value type of the Matcher.
TEST(MatcherCastTest, FromAValue) {
  Matcher<int> m = MatcherCast<int>(42);
  EXPECT_TRUE(m.Matches(42));
  EXPECT_FALSE(m.Matches(239));
}

// Tests that MatcherCast<T>(m) works when m is a value of the type implicitly
// convertible to the value type of the Matcher.
TEST(MatcherCastTest, FromAnImplicitlyConvertibleValue) {
  const int kExpected = 'c';
  Matcher<int> m = MatcherCast<int>('c');
  EXPECT_TRUE(m.Matches(kExpected));
  EXPECT_FALSE(m.Matches(kExpected + 1));
}

struct NonImplicitlyConstructibleTypeWithOperatorEq {
  friend bool operator==(
      const NonImplicitlyConstructibleTypeWithOperatorEq& /* ignored */,
      int rhs) {
    return 42 == rhs;
  }
  friend bool operator==(
      int lhs,
      const NonImplicitlyConstructibleTypeWithOperatorEq& /* ignored */) {
    return lhs == 42;
  }
};

// Tests that MatcherCast<T>(m) works when m is a neither a matcher nor
// implicitly convertible to the value type of the Matcher, but the value type
// of the matcher has operator==() overload accepting m.
TEST(MatcherCastTest, NonImplicitlyConstructibleTypeWithOperatorEq) {
  Matcher<NonImplicitlyConstructibleTypeWithOperatorEq> m1 =
      MatcherCast<NonImplicitlyConstructibleTypeWithOperatorEq>(42);
  EXPECT_TRUE(m1.Matches(NonImplicitlyConstructibleTypeWithOperatorEq()));

  Matcher<NonImplicitlyConstructibleTypeWithOperatorEq> m2 =
      MatcherCast<NonImplicitlyConstructibleTypeWithOperatorEq>(239);
  EXPECT_FALSE(m2.Matches(NonImplicitlyConstructibleTypeWithOperatorEq()));

  // When updating the following lines please also change the comment to
  // namespace convertible_from_any.
  Matcher<int> m3 =
      MatcherCast<int>(NonImplicitlyConstructibleTypeWithOperatorEq());
  EXPECT_TRUE(m3.Matches(42));
  EXPECT_FALSE(m3.Matches(239));
}

// ConvertibleFromAny does not work with MSVC. resulting in
// error C2440: 'initializing': cannot convert from 'Eq' to 'M'
// No constructor could take the source type, or constructor overload
// resolution was ambiguous

#if !defined _MSC_VER

// The below ConvertibleFromAny struct is implicitly constructible from anything
// and when in the same namespace can interact with other tests. In particular,
// if it is in the same namespace as other tests and one removes
//   NonImplicitlyConstructibleTypeWithOperatorEq::operator==(int lhs, ...);
// then the corresponding test still compiles (and it should not!) by implicitly
// converting NonImplicitlyConstructibleTypeWithOperatorEq to ConvertibleFromAny
// in m3.Matcher().
namespace convertible_from_any {
// Implicitly convertible from any type.
struct ConvertibleFromAny {
  ConvertibleFromAny(int a_value) : value(a_value) {}
  template <typename T>
  ConvertibleFromAny(const T& /*a_value*/) : value(-1) {
    ADD_FAILURE() << "Conversion constructor called";
  }
  int value;
};

bool operator==(const ConvertibleFromAny& a, const ConvertibleFromAny& b) {
  return a.value == b.value;
}

ostream& operator<<(ostream& os, const ConvertibleFromAny& a) {
  return os << a.value;
}

TEST(MatcherCastTest, ConversionConstructorIsUsed) {
  Matcher<ConvertibleFromAny> m = MatcherCast<ConvertibleFromAny>(1);
  EXPECT_TRUE(m.Matches(ConvertibleFromAny(1)));
  EXPECT_FALSE(m.Matches(ConvertibleFromAny(2)));
}

TEST(MatcherCastTest, FromConvertibleFromAny) {
  Matcher<ConvertibleFromAny> m =
      MatcherCast<ConvertibleFromAny>(Eq(ConvertibleFromAny(1)));
  EXPECT_TRUE(m.Matches(ConvertibleFromAny(1)));
  EXPECT_FALSE(m.Matches(ConvertibleFromAny(2)));
}
}  // namespace convertible_from_any

#endif  // !defined _MSC_VER

struct IntReferenceWrapper {
  IntReferenceWrapper(const int& a_value) : value(&a_value) {}
  const int* value;
};

bool operator==(const IntReferenceWrapper& a, const IntReferenceWrapper& b) {
  return a.value == b.value;
}

TEST(MatcherCastTest, ValueIsNotCopied) {
  int n = 42;
  Matcher<IntReferenceWrapper> m = MatcherCast<IntReferenceWrapper>(n);
  // Verify that the matcher holds a reference to n, not to its temporary copy.
  EXPECT_TRUE(m.Matches(n));
}

class Base {
 public:
  virtual ~Base() {}
  Base() {}
 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(Base);
};

class Derived : public Base {
 public:
  Derived() : Base() {}
  int i;
};

class OtherDerived : public Base {};

// Tests that SafeMatcherCast<T>(m) works when m is a polymorphic matcher.
TEST(SafeMatcherCastTest, FromPolymorphicMatcher) {
  Matcher<char> m2 = SafeMatcherCast<char>(Eq(32));
  EXPECT_TRUE(m2.Matches(' '));
  EXPECT_FALSE(m2.Matches('\n'));
}

// Tests that SafeMatcherCast<T>(m) works when m is a Matcher<U> where
// T and U are arithmetic types and T can be losslessly converted to
// U.
TEST(SafeMatcherCastTest, FromLosslesslyConvertibleArithmeticType) {
  Matcher<double> m1 = DoubleEq(1.0);
  Matcher<float> m2 = SafeMatcherCast<float>(m1);
  EXPECT_TRUE(m2.Matches(1.0f));
  EXPECT_FALSE(m2.Matches(2.0f));

  Matcher<char> m3 = SafeMatcherCast<char>(TypedEq<int>('a'));
  EXPECT_TRUE(m3.Matches('a'));
  EXPECT_FALSE(m3.Matches('b'));
}

// Tests that SafeMatcherCast<T>(m) works when m is a Matcher<U> where T and U
// are pointers or references to a derived and a base class, correspondingly.
TEST(SafeMatcherCastTest, FromBaseClass) {
  Derived d, d2;
  Matcher<Base*> m1 = Eq(&d);
  Matcher<Derived*> m2 = SafeMatcherCast<Derived*>(m1);
  EXPECT_TRUE(m2.Matches(&d));
  EXPECT_FALSE(m2.Matches(&d2));

  Matcher<Base&> m3 = Ref(d);
  Matcher<Derived&> m4 = SafeMatcherCast<Derived&>(m3);
  EXPECT_TRUE(m4.Matches(d));
  EXPECT_FALSE(m4.Matches(d2));
}

// Tests that SafeMatcherCast<T&>(m) works when m is a Matcher<const T&>.
TEST(SafeMatcherCastTest, FromConstReferenceToReference) {
  int n = 0;
  Matcher<const int&> m1 = Ref(n);
  Matcher<int&> m2 = SafeMatcherCast<int&>(m1);
  int n1 = 0;
  EXPECT_TRUE(m2.Matches(n));
  EXPECT_FALSE(m2.Matches(n1));
}

// Tests that MatcherCast<const T&>(m) works when m is a Matcher<T>.
TEST(SafeMatcherCastTest, FromNonReferenceToConstReference) {
  Matcher<int> m1 = Eq(0);
  Matcher<const int&> m2 = SafeMatcherCast<const int&>(m1);
  EXPECT_TRUE(m2.Matches(0));
  EXPECT_FALSE(m2.Matches(1));
}

// Tests that SafeMatcherCast<T&>(m) works when m is a Matcher<T>.
TEST(SafeMatcherCastTest, FromNonReferenceToReference) {
  Matcher<int> m1 = Eq(0);
  Matcher<int&> m2 = SafeMatcherCast<int&>(m1);
  int n = 0;
  EXPECT_TRUE(m2.Matches(n));
  n = 1;
  EXPECT_FALSE(m2.Matches(n));
}

// Tests that SafeMatcherCast<T>(m) works when m is a Matcher<T>.
TEST(SafeMatcherCastTest, FromSameType) {
  Matcher<int> m1 = Eq(0);
  Matcher<int> m2 = SafeMatcherCast<int>(m1);
  EXPECT_TRUE(m2.Matches(0));
  EXPECT_FALSE(m2.Matches(1));
}

#if !defined _MSC_VER

namespace convertible_from_any {
TEST(SafeMatcherCastTest, ConversionConstructorIsUsed) {
  Matcher<ConvertibleFromAny> m = SafeMatcherCast<ConvertibleFromAny>(1);
  EXPECT_TRUE(m.Matches(ConvertibleFromAny(1)));
  EXPECT_FALSE(m.Matches(ConvertibleFromAny(2)));
}

TEST(SafeMatcherCastTest, FromConvertibleFromAny) {
  Matcher<ConvertibleFromAny> m =
      SafeMatcherCast<ConvertibleFromAny>(Eq(ConvertibleFromAny(1)));
  EXPECT_TRUE(m.Matches(ConvertibleFromAny(1)));
  EXPECT_FALSE(m.Matches(ConvertibleFromAny(2)));
}
}  // namespace convertible_from_any

#endif  // !defined _MSC_VER

TEST(SafeMatcherCastTest, ValueIsNotCopied) {
  int n = 42;
  Matcher<IntReferenceWrapper> m = SafeMatcherCast<IntReferenceWrapper>(n);
  // Verify that the matcher holds a reference to n, not to its temporary copy.
  EXPECT_TRUE(m.Matches(n));
}

TEST(ExpectThat, TakesLiterals) {
  EXPECT_THAT(1, 1);
  EXPECT_THAT(1.0, 1.0);
  EXPECT_THAT(std::string(), "");
}

TEST(ExpectThat, TakesFunctions) {
  struct Helper {
    static void Func() {}
  };
  void (*func)() = Helper::Func;
  EXPECT_THAT(func, Helper::Func);
  EXPECT_THAT(func, &Helper::Func);
}

// Tests that A<T>() matches any value of type T.
TEST(ATest, MatchesAnyValue) {
  // Tests a matcher for a value type.
  Matcher<double> m1 = A<double>();
  EXPECT_TRUE(m1.Matches(91.43));
  EXPECT_TRUE(m1.Matches(-15.32));

  // Tests a matcher for a reference type.
  int a = 2;
  int b = -6;
  Matcher<int&> m2 = A<int&>();
  EXPECT_TRUE(m2.Matches(a));
  EXPECT_TRUE(m2.Matches(b));
}

TEST(ATest, WorksForDerivedClass) {
  Base base;
  Derived derived;
  EXPECT_THAT(&base, A<Base*>());
  // This shouldn't compile: EXPECT_THAT(&base, A<Derived*>());
  EXPECT_THAT(&derived, A<Base*>());
  EXPECT_THAT(&derived, A<Derived*>());
}

// Tests that A<T>() describes itself properly.
TEST(ATest, CanDescribeSelf) {
  EXPECT_EQ("is anything", Describe(A<bool>()));
}

// Tests that An<T>() matches any value of type T.
TEST(AnTest, MatchesAnyValue) {
  // Tests a matcher for a value type.
  Matcher<int> m1 = An<int>();
  EXPECT_TRUE(m1.Matches(9143));
  EXPECT_TRUE(m1.Matches(-1532));

  // Tests a matcher for a reference type.
  int a = 2;
  int b = -6;
  Matcher<int&> m2 = An<int&>();
  EXPECT_TRUE(m2.Matches(a));
  EXPECT_TRUE(m2.Matches(b));
}

// Tests that An<T>() describes itself properly.
TEST(AnTest, CanDescribeSelf) {
  EXPECT_EQ("is anything", Describe(An<int>()));
}

// Tests that _ can be used as a matcher for any type and matches any
// value of that type.
TEST(UnderscoreTest, MatchesAnyValue) {
  // Uses _ as a matcher for a value type.
  Matcher<int> m1 = _;
  EXPECT_TRUE(m1.Matches(123));
  EXPECT_TRUE(m1.Matches(-242));

  // Uses _ as a matcher for a reference type.
  bool a = false;
  const bool b = true;
  Matcher<const bool&> m2 = _;
  EXPECT_TRUE(m2.Matches(a));
  EXPECT_TRUE(m2.Matches(b));
}

// Tests that _ describes itself properly.
TEST(UnderscoreTest, CanDescribeSelf) {
  Matcher<int> m = _;
  EXPECT_EQ("is anything", Describe(m));
}

// Tests that Eq(x) matches any value equal to x.
TEST(EqTest, MatchesEqualValue) {
  // 2 C-strings with same content but different addresses.
  const char a1[] = "hi";
  const char a2[] = "hi";

  Matcher<const char*> m1 = Eq(a1);
  EXPECT_TRUE(m1.Matches(a1));
  EXPECT_FALSE(m1.Matches(a2));
}

// Tests that Eq(v) describes itself properly.

class Unprintable {
 public:
  Unprintable() : c_('a') {}

  bool operator==(const Unprintable& /* rhs */) const { return true; }
  // -Wunused-private-field: dummy accessor for `c_`.
  char dummy_c() { return c_; }
 private:
  char c_;
};

TEST(EqTest, CanDescribeSelf) {
  Matcher<Unprintable> m = Eq(Unprintable());
  EXPECT_EQ("is equal to 1-byte object <61>", Describe(m));
}

// Tests that Eq(v) can be used to match any type that supports
// comparing with type T, where T is v's type.
TEST(EqTest, IsPolymorphic) {
  Matcher<int> m1 = Eq(1);
  EXPECT_TRUE(m1.Matches(1));
  EXPECT_FALSE(m1.Matches(2));

  Matcher<char> m2 = Eq(1);
  EXPECT_TRUE(m2.Matches('\1'));
  EXPECT_FALSE(m2.Matches('a'));
}

// Tests that TypedEq<T>(v) matches values of type T that's equal to v.
TEST(TypedEqTest, ChecksEqualityForGivenType) {
  Matcher<char> m1 = TypedEq<char>('a');
  EXPECT_TRUE(m1.Matches('a'));
  EXPECT_FALSE(m1.Matches('b'));

  Matcher<int> m2 = TypedEq<int>(6);
  EXPECT_TRUE(m2.Matches(6));
  EXPECT_FALSE(m2.Matches(7));
}

// Tests that TypedEq(v) describes itself properly.
TEST(TypedEqTest, CanDescribeSelf) {
  EXPECT_EQ("is equal to 2", Describe(TypedEq<int>(2)));
}

// Tests that TypedEq<T>(v) has type Matcher<T>.

// Type<T>::IsTypeOf(v) compiles if and only if the type of value v is T, where
// T is a "bare" type (i.e. not in the form of const U or U&).  If v's type is
// not T, the compiler will generate a message about "undefined reference".
template <typename T>
struct Type {
  static bool IsTypeOf(const T& /* v */) { return true; }

  template <typename T2>
  static void IsTypeOf(T2 v);
};

TEST(TypedEqTest, HasSpecifiedType) {
  // Verfies that the type of TypedEq<T>(v) is Matcher<T>.
  Type<Matcher<int> >::IsTypeOf(TypedEq<int>(5));
  Type<Matcher<double> >::IsTypeOf(TypedEq<double>(5));
}

// Tests that Ge(v) matches anything >= v.
TEST(GeTest, ImplementsGreaterThanOrEqual) {
  Matcher<int> m1 = Ge(0);
  EXPECT_TRUE(m1.Matches(1));
  EXPECT_TRUE(m1.Matches(0));
  EXPECT_FALSE(m1.Matches(-1));
}

// Tests that Ge(v) describes itself properly.
TEST(GeTest, CanDescribeSelf) {
  Matcher<int> m = Ge(5);
  EXPECT_EQ("is >= 5", Describe(m));
}

// Tests that Gt(v) matches anything > v.
TEST(GtTest, ImplementsGreaterThan) {
  Matcher<double> m1 = Gt(0);
  EXPECT_TRUE(m1.Matches(1.0));
  EXPECT_FALSE(m1.Matches(0.0));
  EXPECT_FALSE(m1.Matches(-1.0));
}

// Tests that Gt(v) describes itself properly.
TEST(GtTest, CanDescribeSelf) {
  Matcher<int> m = Gt(5);
  EXPECT_EQ("is > 5", Describe(m));
}

// Tests that Le(v) matches anything <= v.
TEST(LeTest, ImplementsLessThanOrEqual) {
  Matcher<char> m1 = Le('b');
  EXPECT_TRUE(m1.Matches('a'));
  EXPECT_TRUE(m1.Matches('b'));
  EXPECT_FALSE(m1.Matches('c'));
}

// Tests that Le(v) describes itself properly.
TEST(LeTest, CanDescribeSelf) {
  Matcher<int> m = Le(5);
  EXPECT_EQ("is <= 5", Describe(m));
}

// Tests that Lt(v) matches anything < v.
TEST(LtTest, ImplementsLessThan) {
  Matcher<const std::string&> m1 = Lt("Hello");
  EXPECT_TRUE(m1.Matches("Abc"));
  EXPECT_FALSE(m1.Matches("Hello"));
  EXPECT_FALSE(m1.Matches("Hello, world!"));
}

// Tests that Lt(v) describes itself properly.
TEST(LtTest, CanDescribeSelf) {
  Matcher<int> m = Lt(5);
  EXPECT_EQ("is < 5", Describe(m));
}

// Tests that Ne(v) matches anything != v.
TEST(NeTest, ImplementsNotEqual) {
  Matcher<int> m1 = Ne(0);
  EXPECT_TRUE(m1.Matches(1));
  EXPECT_TRUE(m1.Matches(-1));
  EXPECT_FALSE(m1.Matches(0));
}

// Tests that Ne(v) describes itself properly.
TEST(NeTest, CanDescribeSelf) {
  Matcher<int> m = Ne(5);
  EXPECT_EQ("isn't equal to 5", Describe(m));
}

class MoveOnly {
 public:
  explicit MoveOnly(int i) : i_(i) {}
  MoveOnly(const MoveOnly&) = delete;
  MoveOnly(MoveOnly&&) = default;
  MoveOnly& operator=(const MoveOnly&) = delete;
  MoveOnly& operator=(MoveOnly&&) = default;

  bool operator==(const MoveOnly& other) const { return i_ == other.i_; }
  bool operator!=(const MoveOnly& other) const { return i_ != other.i_; }
  bool operator<(const MoveOnly& other) const { return i_ < other.i_; }
  bool operator<=(const MoveOnly& other) const { return i_ <= other.i_; }
  bool operator>(const MoveOnly& other) const { return i_ > other.i_; }
  bool operator>=(const MoveOnly& other) const { return i_ >= other.i_; }

 private:
  int i_;
};

struct MoveHelper {
  MOCK_METHOD1(Call, void(MoveOnly));
};

TEST(ComparisonBaseTest, WorksWithMoveOnly) {
  MoveOnly m{0};
  MoveHelper helper;

  EXPECT_CALL(helper, Call(Eq(ByRef(m))));
  helper.Call(MoveOnly(0));
  EXPECT_CALL(helper, Call(Ne(ByRef(m))));
  helper.Call(MoveOnly(1));
  EXPECT_CALL(helper, Call(Le(ByRef(m))));
  helper.Call(MoveOnly(0));
  EXPECT_CALL(helper, Call(Lt(ByRef(m))));
  helper.Call(MoveOnly(-1));
  EXPECT_CALL(helper, Call(Ge(ByRef(m))));
  helper.Call(MoveOnly(0));
  EXPECT_CALL(helper, Call(Gt(ByRef(m))));
  helper.Call(MoveOnly(1));
}

// Tests that IsNull() matches any NULL pointer of any type.
TEST(IsNullTest, MatchesNullPointer) {
  Matcher<int*> m1 = IsNull();
  int* p1 = nullptr;
  int n = 0;
  EXPECT_TRUE(m1.Matches(p1));
  EXPECT_FALSE(m1.Matches(&n));

  Matcher<const char*> m2 = IsNull();
  const char* p2 = nullptr;
  EXPECT_TRUE(m2.Matches(p2));
  EXPECT_FALSE(m2.Matches("hi"));

  Matcher<void*> m3 = IsNull();
  void* p3 = nullptr;
  EXPECT_TRUE(m3.Matches(p3));
  EXPECT_FALSE(m3.Matches(reinterpret_cast<void*>(0xbeef)));
}

TEST(IsNullTest, StdFunction) {
  const Matcher<std::function<void()>> m = IsNull();

  EXPECT_TRUE(m.Matches(std::function<void()>()));
  EXPECT_FALSE(m.Matches([]{}));
}

// Tests that IsNull() describes itself properly.
TEST(IsNullTest, CanDescribeSelf) {
  Matcher<int*> m = IsNull();
  EXPECT_EQ("is NULL", Describe(m));
  EXPECT_EQ("isn't NULL", DescribeNegation(m));
}

// Tests that NotNull() matches any non-NULL pointer of any type.
TEST(NotNullTest, MatchesNonNullPointer) {
  Matcher<int*> m1 = NotNull();
  int* p1 = nullptr;
  int n = 0;
  EXPECT_FALSE(m1.Matches(p1));
  EXPECT_TRUE(m1.Matches(&n));

  Matcher<const char*> m2 = NotNull();
  const char* p2 = nullptr;
  EXPECT_FALSE(m2.Matches(p2));
  EXPECT_TRUE(m2.Matches("hi"));
}

TEST(NotNullTest, LinkedPtr) {
  const Matcher<std::shared_ptr<int>> m = NotNull();
  const std::shared_ptr<int> null_p;
  const std::shared_ptr<int> non_null_p(new int);

  EXPECT_FALSE(m.Matches(null_p));
  EXPECT_TRUE(m.Matches(non_null_p));
}

TEST(NotNullTest, ReferenceToConstLinkedPtr) {
  const Matcher<const std::shared_ptr<double>&> m = NotNull();
  const std::shared_ptr<double> null_p;
  const std::shared_ptr<double> non_null_p(new double);

  EXPECT_FALSE(m.Matches(null_p));
  EXPECT_TRUE(m.Matches(non_null_p));
}

TEST(NotNullTest, StdFunction) {
  const Matcher<std::function<void()>> m = NotNull();

  EXPECT_TRUE(m.Matches([]{}));
  EXPECT_FALSE(m.Matches(std::function<void()>()));
}

// Tests that NotNull() describes itself properly.
TEST(NotNullTest, CanDescribeSelf) {
  Matcher<int*> m = NotNull();
  EXPECT_EQ("isn't NULL", Describe(m));
}

// Tests that Ref(variable) matches an argument that references
// 'variable'.
TEST(RefTest, MatchesSameVariable) {
  int a = 0;
  int b = 0;
  Matcher<int&> m = Ref(a);
  EXPECT_TRUE(m.Matches(a));
  EXPECT_FALSE(m.Matches(b));
}

// Tests that Ref(variable) describes itself properly.
TEST(RefTest, CanDescribeSelf) {
  int n = 5;
  Matcher<int&> m = Ref(n);
  stringstream ss;
  ss << "references the variable @" << &n << " 5";
  EXPECT_EQ(ss.str(), Describe(m));
}

// Test that Ref(non_const_varialbe) can be used as a matcher for a
// const reference.
TEST(RefTest, CanBeUsedAsMatcherForConstReference) {
  int a = 0;
  int b = 0;
  Matcher<const int&> m = Ref(a);
  EXPECT_TRUE(m.Matches(a));
  EXPECT_FALSE(m.Matches(b));
}

// Tests that Ref(variable) is covariant, i.e. Ref(derived) can be
// used wherever Ref(base) can be used (Ref(derived) is a sub-type
// of Ref(base), but not vice versa.

TEST(RefTest, IsCovariant) {
  Base base, base2;
  Derived derived;
  Matcher<const Base&> m1 = Ref(base);
  EXPECT_TRUE(m1.Matches(base));
  EXPECT_FALSE(m1.Matches(base2));
  EXPECT_FALSE(m1.Matches(derived));

  m1 = Ref(derived);
  EXPECT_TRUE(m1.Matches(derived));
  EXPECT_FALSE(m1.Matches(base));
  EXPECT_FALSE(m1.Matches(base2));
}

TEST(RefTest, ExplainsResult) {
  int n = 0;
  EXPECT_THAT(Explain(Matcher<const int&>(Ref(n)), n),
              StartsWith("which is located @"));

  int m = 0;
  EXPECT_THAT(Explain(Matcher<const int&>(Ref(n)), m),
              StartsWith("which is located @"));
}

// Tests string comparison matchers.

TEST(StrEqTest, MatchesEqualString) {
  Matcher<const char*> m = StrEq(std::string("Hello"));
  EXPECT_TRUE(m.Matches("Hello"));
  EXPECT_FALSE(m.Matches("hello"));
  EXPECT_FALSE(m.Matches(nullptr));

  Matcher<const std::string&> m2 = StrEq("Hello");
  EXPECT_TRUE(m2.Matches("Hello"));
  EXPECT_FALSE(m2.Matches("Hi"));

#if GTEST_HAS_ABSL
  Matcher<const absl::string_view&> m3 = StrEq("Hello");
  EXPECT_TRUE(m3.Matches(absl::string_view("Hello")));
  EXPECT_FALSE(m3.Matches(absl::string_view("hello")));
  EXPECT_FALSE(m3.Matches(absl::string_view()));

  Matcher<const absl::string_view&> m_empty = StrEq("");
  EXPECT_TRUE(m_empty.Matches(absl::string_view("")));
  EXPECT_TRUE(m_empty.Matches(absl::string_view()));
  EXPECT_FALSE(m_empty.Matches(absl::string_view("hello")));
#endif  // GTEST_HAS_ABSL
}

TEST(StrEqTest, CanDescribeSelf) {
  Matcher<std::string> m = StrEq("Hi-\'\"?\\\a\b\f\n\r\t\v\xD3");
  EXPECT_EQ("is equal to \"Hi-\'\\\"?\\\\\\a\\b\\f\\n\\r\\t\\v\\xD3\"",
      Describe(m));

  std::string str("01204500800");
  str[3] = '\0';
  Matcher<std::string> m2 = StrEq(str);
  EXPECT_EQ("is equal to \"012\\04500800\"", Describe(m2));
  str[0] = str[6] = str[7] = str[9] = str[10] = '\0';
  Matcher<std::string> m3 = StrEq(str);
  EXPECT_EQ("is equal to \"\\012\\045\\0\\08\\0\\0\"", Describe(m3));
}

TEST(StrNeTest, MatchesUnequalString) {
  Matcher<const char*> m = StrNe("Hello");
  EXPECT_TRUE(m.Matches(""));
  EXPECT_TRUE(m.Matches(nullptr));
  EXPECT_FALSE(m.Matches("Hello"));

  Matcher<std::string> m2 = StrNe(std::string("Hello"));
  EXPECT_TRUE(m2.Matches("hello"));
  EXPECT_FALSE(m2.Matches("Hello"));

#if GTEST_HAS_ABSL
  Matcher<const absl::string_view> m3 = StrNe("Hello");
  EXPECT_TRUE(m3.Matches(absl::string_view("")));
  EXPECT_TRUE(m3.Matches(absl::string_view()));
  EXPECT_FALSE(m3.Matches(absl::string_view("Hello")));
#endif  // GTEST_HAS_ABSL
}

TEST(StrNeTest, CanDescribeSelf) {
  Matcher<const char*> m = StrNe("Hi");
  EXPECT_EQ("isn't equal to \"Hi\"", Describe(m));
}

TEST(StrCaseEqTest, MatchesEqualStringIgnoringCase) {
  Matcher<const char*> m = StrCaseEq(std::string("Hello"));
  EXPECT_TRUE(m.Matches("Hello"));
  EXPECT_TRUE(m.Matches("hello"));
  EXPECT_FALSE(m.Matches("Hi"));
  EXPECT_FALSE(m.Matches(nullptr));

  Matcher<const std::string&> m2 = StrCaseEq("Hello");
  EXPECT_TRUE(m2.Matches("hello"));
  EXPECT_FALSE(m2.Matches("Hi"));

#if GTEST_HAS_ABSL
  Matcher<const absl::string_view&> m3 = StrCaseEq(std::string("Hello"));
  EXPECT_TRUE(m3.Matches(absl::string_view("Hello")));
  EXPECT_TRUE(m3.Matches(absl::string_view("hello")));
  EXPECT_FALSE(m3.Matches(absl::string_view("Hi")));
  EXPECT_FALSE(m3.Matches(absl::string_view()));
#endif  // GTEST_HAS_ABSL
}

TEST(StrCaseEqTest, MatchesEqualStringWith0IgnoringCase) {
  std::string str1("oabocdooeoo");
  std::string str2("OABOCDOOEOO");
  Matcher<const std::string&> m0 = StrCaseEq(str1);
  EXPECT_FALSE(m0.Matches(str2 + std::string(1, '\0')));

  str1[3] = str2[3] = '\0';
  Matcher<const std::string&> m1 = StrCaseEq(str1);
  EXPECT_TRUE(m1.Matches(str2));

  str1[0] = str1[6] = str1[7] = str1[10] = '\0';
  str2[0] = str2[6] = str2[7] = str2[10] = '\0';
  Matcher<const std::string&> m2 = StrCaseEq(str1);
  str1[9] = str2[9] = '\0';
  EXPECT_FALSE(m2.Matches(str2));

  Matcher<const std::string&> m3 = StrCaseEq(str1);
  EXPECT_TRUE(m3.Matches(str2));

  EXPECT_FALSE(m3.Matches(str2 + "x"));
  str2.append(1, '\0');
  EXPECT_FALSE(m3.Matches(str2));
  EXPECT_FALSE(m3.Matches(std::string(str2, 0, 9)));
}

TEST(StrCaseEqTest, CanDescribeSelf) {
  Matcher<std::string> m = StrCaseEq("Hi");
  EXPECT_EQ("is equal to (ignoring case) \"Hi\"", Describe(m));
}

TEST(StrCaseNeTest, MatchesUnequalStringIgnoringCase) {
  Matcher<const char*> m = StrCaseNe("Hello");
  EXPECT_TRUE(m.Matches("Hi"));
  EXPECT_TRUE(m.Matches(nullptr));
  EXPECT_FALSE(m.Matches("Hello"));
  EXPECT_FALSE(m.Matches("hello"));

  Matcher<std::string> m2 = StrCaseNe(std::string("Hello"));
  EXPECT_TRUE(m2.Matches(""));
  EXPECT_FALSE(m2.Matches("Hello"));

#if GTEST_HAS_ABSL
  Matcher<const absl::string_view> m3 = StrCaseNe("Hello");
  EXPECT_TRUE(m3.Matches(absl::string_view("Hi")));
  EXPECT_TRUE(m3.Matches(absl::string_view()));
  EXPECT_FALSE(m3.Matches(absl::string_view("Hello")));
  EXPECT_FALSE(m3.Matches(absl::string_view("hello")));
#endif  // GTEST_HAS_ABSL
}

TEST(StrCaseNeTest, CanDescribeSelf) {
  Matcher<const char*> m = StrCaseNe("Hi");
  EXPECT_EQ("isn't equal to (ignoring case) \"Hi\"", Describe(m));
}

// Tests that HasSubstr() works for matching string-typed values.
TEST(HasSubstrTest, WorksForStringClasses) {
  const Matcher<std::string> m1 = HasSubstr("foo");
  EXPECT_TRUE(m1.Matches(std::string("I love food.")));
  EXPECT_FALSE(m1.Matches(std::string("tofo")));

  const Matcher<const std::string&> m2 = HasSubstr("foo");
  EXPECT_TRUE(m2.Matches(std::string("I love food.")));
  EXPECT_FALSE(m2.Matches(std::string("tofo")));

  const Matcher<std::string> m_empty = HasSubstr("");
  EXPECT_TRUE(m_empty.Matches(std::string()));
  EXPECT_TRUE(m_empty.Matches(std::string("not empty")));
}

// Tests that HasSubstr() works for matching C-string-typed values.
TEST(HasSubstrTest, WorksForCStrings) {
  const Matcher<char*> m1 = HasSubstr("foo");
  EXPECT_TRUE(m1.Matches(const_cast<char*>("I love food.")));
  EXPECT_FALSE(m1.Matches(const_cast<char*>("tofo")));
  EXPECT_FALSE(m1.Matches(nullptr));

  const Matcher<const char*> m2 = HasSubstr("foo");
  EXPECT_TRUE(m2.Matches("I love food."));
  EXPECT_FALSE(m2.Matches("tofo"));
  EXPECT_FALSE(m2.Matches(nullptr));

  const Matcher<const char*> m_empty = HasSubstr("");
  EXPECT_TRUE(m_empty.Matches("not empty"));
  EXPECT_TRUE(m_empty.Matches(""));
  EXPECT_FALSE(m_empty.Matches(nullptr));
}

#if GTEST_HAS_ABSL
// Tests that HasSubstr() works for matching absl::string_view-typed values.
TEST(HasSubstrTest, WorksForStringViewClasses) {
  const Matcher<absl::string_view> m1 = HasSubstr("foo");
  EXPECT_TRUE(m1.Matches(absl::string_view("I love food.")));
  EXPECT_FALSE(m1.Matches(absl::string_view("tofo")));
  EXPECT_FALSE(m1.Matches(absl::string_view()));

  const Matcher<const absl::string_view&> m2 = HasSubstr("foo");
  EXPECT_TRUE(m2.Matches(absl::string_view("I love food.")));
  EXPECT_FALSE(m2.Matches(absl::string_view("tofo")));
  EXPECT_FALSE(m2.Matches(absl::string_view()));

  const Matcher<const absl::string_view&> m3 = HasSubstr("");
  EXPECT_TRUE(m3.Matches(absl::string_view("foo")));
  EXPECT_TRUE(m3.Matches(absl::string_view("")));
  EXPECT_TRUE(m3.Matches(absl::string_view()));
}
#endif  // GTEST_HAS_ABSL

// Tests that HasSubstr(s) describes itself properly.
TEST(HasSubstrTest, CanDescribeSelf) {
  Matcher<std::string> m = HasSubstr("foo\n\"");
  EXPECT_EQ("has substring \"foo\\n\\\"\"", Describe(m));
}

TEST(KeyTest, CanDescribeSelf) {
  Matcher<const pair<std::string, int>&> m = Key("foo");
  EXPECT_EQ("has a key that is equal to \"foo\"", Describe(m));
  EXPECT_EQ("doesn't have a key that is equal to \"foo\"", DescribeNegation(m));
}

TEST(KeyTest, ExplainsResult) {
  Matcher<pair<int, bool> > m = Key(GreaterThan(10));
  EXPECT_EQ("whose first field is a value which is 5 less than 10",
            Explain(m, make_pair(5, true)));
  EXPECT_EQ("whose first field is a value which is 5 more than 10",
            Explain(m, make_pair(15, true)));
}

TEST(KeyTest, MatchesCorrectly) {
  pair<int, std::string> p(25, "foo");
  EXPECT_THAT(p, Key(25));
  EXPECT_THAT(p, Not(Key(42)));
  EXPECT_THAT(p, Key(Ge(20)));
  EXPECT_THAT(p, Not(Key(Lt(25))));
}

TEST(KeyTest, WorksWithMoveOnly) {
  pair<std::unique_ptr<int>, std::unique_ptr<int>> p;
  EXPECT_THAT(p, Key(Eq(nullptr)));
}

template <size_t I>
struct Tag {};

struct PairWithGet {
  int member_1;
  std::string member_2;
  using first_type = int;
  using second_type = std::string;

  const int& GetImpl(Tag<0>) const { return member_1; }
  const std::string& GetImpl(Tag<1>) const { return member_2; }
};
template <size_t I>
auto get(const PairWithGet& value) -> decltype(value.GetImpl(Tag<I>())) {
  return value.GetImpl(Tag<I>());
}
TEST(PairTest, MatchesPairWithGetCorrectly) {
  PairWithGet p{25, "foo"};
  EXPECT_THAT(p, Key(25));
  EXPECT_THAT(p, Not(Key(42)));
  EXPECT_THAT(p, Key(Ge(20)));
  EXPECT_THAT(p, Not(Key(Lt(25))));

  std::vector<PairWithGet> v = {{11, "Foo"}, {29, "gMockIsBestMock"}};
  EXPECT_THAT(v, Contains(Key(29)));
}

TEST(KeyTest, SafelyCastsInnerMatcher) {
  Matcher<int> is_positive = Gt(0);
  Matcher<int> is_negative = Lt(0);
  pair<char, bool> p('a', true);
  EXPECT_THAT(p, Key(is_positive));
  EXPECT_THAT(p, Not(Key(is_negative)));
}

TEST(KeyTest, InsideContainsUsingMap) {
  map<int, char> container;
  container.insert(make_pair(1, 'a'));
  container.insert(make_pair(2, 'b'));
  container.insert(make_pair(4, 'c'));
  EXPECT_THAT(container, Contains(Key(1)));
  EXPECT_THAT(container, Not(Contains(Key(3))));
}

TEST(KeyTest, InsideContainsUsingMultimap) {
  multimap<int, char> container;
  container.insert(make_pair(1, 'a'));
  container.insert(make_pair(2, 'b'));
  container.insert(make_pair(4, 'c'));

  EXPECT_THAT(container, Not(Contains(Key(25))));
  container.insert(make_pair(25, 'd'));
  EXPECT_THAT(container, Contains(Key(25)));
  container.insert(make_pair(25, 'e'));
  EXPECT_THAT(container, Contains(Key(25)));

  EXPECT_THAT(container, Contains(Key(1)));
  EXPECT_THAT(container, Not(Contains(Key(3))));
}

TEST(PairTest, Typing) {
  // Test verifies the following type conversions can be compiled.
  Matcher<const pair<const char*, int>&> m1 = Pair("foo", 42);
  Matcher<const pair<const char*, int> > m2 = Pair("foo", 42);
  Matcher<pair<const char*, int> > m3 = Pair("foo", 42);

  Matcher<pair<int, const std::string> > m4 = Pair(25, "42");
  Matcher<pair<const std::string, int> > m5 = Pair("25", 42);
}

TEST(PairTest, CanDescribeSelf) {
  Matcher<const pair<std::string, int>&> m1 = Pair("foo", 42);
  EXPECT_EQ("has a first field that is equal to \"foo\""
            ", and has a second field that is equal to 42",
            Describe(m1));
  EXPECT_EQ("has a first field that isn't equal to \"foo\""
            ", or has a second field that isn't equal to 42",
            DescribeNegation(m1));
  // Double and triple negation (1 or 2 times not and description of negation).
  Matcher<const pair<int, int>&> m2 = Not(Pair(Not(13), 42));
  EXPECT_EQ("has a first field that isn't equal to 13"
            ", and has a second field that is equal to 42",
            DescribeNegation(m2));
}

TEST(PairTest, CanExplainMatchResultTo) {
  // If neither field matches, Pair() should explain about the first
  // field.
  const Matcher<pair<int, int> > m = Pair(GreaterThan(0), GreaterThan(0));
  EXPECT_EQ("whose first field does not match, which is 1 less than 0",
            Explain(m, make_pair(-1, -2)));

  // If the first field matches but the second doesn't, Pair() should
  // explain about the second field.
  EXPECT_EQ("whose second field does not match, which is 2 less than 0",
            Explain(m, make_pair(1, -2)));

  // If the first field doesn't match but the second does, Pair()
  // should explain about the first field.
  EXPECT_EQ("whose first field does not match, which is 1 less than 0",
            Explain(m, make_pair(-1, 2)));

  // If both fields match, Pair() should explain about them both.
  EXPECT_EQ("whose both fields match, where the first field is a value "
            "which is 1 more than 0, and the second field is a value "
            "which is 2 more than 0",
            Explain(m, make_pair(1, 2)));

  // If only the first match has an explanation, only this explanation should
  // be printed.
  const Matcher<pair<int, int> > explain_first = Pair(GreaterThan(0), 0);
  EXPECT_EQ("whose both fields match, where the first field is a value "
            "which is 1 more than 0",
            Explain(explain_first, make_pair(1, 0)));

  // If only the second match has an explanation, only this explanation should
  // be printed.
  const Matcher<pair<int, int> > explain_second = Pair(0, GreaterThan(0));
  EXPECT_EQ("whose both fields match, where the second field is a value "
            "which is 1 more than 0",
            Explain(explain_second, make_pair(0, 1)));
}

TEST(PairTest, MatchesCorrectly) {
  pair<int, std::string> p(25, "foo");

  // Both fields match.
  EXPECT_THAT(p, Pair(25, "foo"));
  EXPECT_THAT(p, Pair(Ge(20), HasSubstr("o")));

  // 'first' doesnt' match, but 'second' matches.
  EXPECT_THAT(p, Not(Pair(42, "foo")));
  EXPECT_THAT(p, Not(Pair(Lt(25), "foo")));

  // 'first' matches, but 'second' doesn't match.
  EXPECT_THAT(p, Not(Pair(25, "bar")));
  EXPECT_THAT(p, Not(Pair(25, Not("foo"))));

  // Neither field matches.
  EXPECT_THAT(p, Not(Pair(13, "bar")));
  EXPECT_THAT(p, Not(Pair(Lt(13), HasSubstr("a"))));
}

TEST(PairTest, WorksWithMoveOnly) {
  pair<std::unique_ptr<int>, std::unique_ptr<int>> p;
  p.second.reset(new int(7));
  EXPECT_THAT(p, Pair(Eq(nullptr), Ne(nullptr)));
}

TEST(PairTest, SafelyCastsInnerMatchers) {
  Matcher<int> is_positive = Gt(0);
  Matcher<int> is_negative = Lt(0);
  pair<char, bool> p('a', true);
  EXPECT_THAT(p, Pair(is_positive, _));
  EXPECT_THAT(p, Not(Pair(is_negative, _)));
  EXPECT_THAT(p, Pair(_, is_positive));
  EXPECT_THAT(p, Not(Pair(_, is_negative)));
}

TEST(PairTest, InsideContainsUsingMap) {
  map<int, char> container;
  container.insert(make_pair(1, 'a'));
  container.insert(make_pair(2, 'b'));
  container.insert(make_pair(4, 'c'));
  EXPECT_THAT(container, Contains(Pair(1, 'a')));
  EXPECT_THAT(container, Contains(Pair(1, _)));
  EXPECT_THAT(container, Contains(Pair(_, 'a')));
  EXPECT_THAT(container, Not(Contains(Pair(3, _))));
}

TEST(ContainsTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(Contains(Pointee(2))));
  helper.Call(MakeUniquePtrs({1, 2}));
}

TEST(PairTest, UseGetInsteadOfMembers) {
  PairWithGet pair{7, "ABC"};
  EXPECT_THAT(pair, Pair(7, "ABC"));
  EXPECT_THAT(pair, Pair(Ge(7), HasSubstr("AB")));
  EXPECT_THAT(pair, Not(Pair(Lt(7), "ABC")));

  std::vector<PairWithGet> v = {{11, "Foo"}, {29, "gMockIsBestMock"}};
  EXPECT_THAT(v,
              ElementsAre(Pair(11, std::string("Foo")), Pair(Ge(10), Not(""))));
}

// Tests StartsWith(s).

TEST(StartsWithTest, MatchesStringWithGivenPrefix) {
  const Matcher<const char*> m1 = StartsWith(std::string(""));
  EXPECT_TRUE(m1.Matches("Hi"));
  EXPECT_TRUE(m1.Matches(""));
  EXPECT_FALSE(m1.Matches(nullptr));

  const Matcher<const std::string&> m2 = StartsWith("Hi");
  EXPECT_TRUE(m2.Matches("Hi"));
  EXPECT_TRUE(m2.Matches("Hi Hi!"));
  EXPECT_TRUE(m2.Matches("High"));
  EXPECT_FALSE(m2.Matches("H"));
  EXPECT_FALSE(m2.Matches(" Hi"));

#if GTEST_HAS_ABSL
  const Matcher<absl::string_view> m_empty = StartsWith("");
  EXPECT_TRUE(m_empty.Matches(absl::string_view()));
  EXPECT_TRUE(m_empty.Matches(absl::string_view("")));
  EXPECT_TRUE(m_empty.Matches(absl::string_view("not empty")));
#endif  // GTEST_HAS_ABSL
}

TEST(StartsWithTest, CanDescribeSelf) {
  Matcher<const std::string> m = StartsWith("Hi");
  EXPECT_EQ("starts with \"Hi\"", Describe(m));
}

// Tests EndsWith(s).

TEST(EndsWithTest, MatchesStringWithGivenSuffix) {
  const Matcher<const char*> m1 = EndsWith("");
  EXPECT_TRUE(m1.Matches("Hi"));
  EXPECT_TRUE(m1.Matches(""));
  EXPECT_FALSE(m1.Matches(nullptr));

  const Matcher<const std::string&> m2 = EndsWith(std::string("Hi"));
  EXPECT_TRUE(m2.Matches("Hi"));
  EXPECT_TRUE(m2.Matches("Wow Hi Hi"));
  EXPECT_TRUE(m2.Matches("Super Hi"));
  EXPECT_FALSE(m2.Matches("i"));
  EXPECT_FALSE(m2.Matches("Hi "));

#if GTEST_HAS_ABSL
  const Matcher<const absl::string_view&> m4 = EndsWith("");
  EXPECT_TRUE(m4.Matches("Hi"));
  EXPECT_TRUE(m4.Matches(""));
  EXPECT_TRUE(m4.Matches(absl::string_view()));
  EXPECT_TRUE(m4.Matches(absl::string_view("")));
#endif  // GTEST_HAS_ABSL
}

TEST(EndsWithTest, CanDescribeSelf) {
  Matcher<const std::string> m = EndsWith("Hi");
  EXPECT_EQ("ends with \"Hi\"", Describe(m));
}

// Tests MatchesRegex().

TEST(MatchesRegexTest, MatchesStringMatchingGivenRegex) {
  const Matcher<const char*> m1 = MatchesRegex("a.*z");
  EXPECT_TRUE(m1.Matches("az"));
  EXPECT_TRUE(m1.Matches("abcz"));
  EXPECT_FALSE(m1.Matches(nullptr));

  const Matcher<const std::string&> m2 = MatchesRegex(new RE("a.*z"));
  EXPECT_TRUE(m2.Matches("azbz"));
  EXPECT_FALSE(m2.Matches("az1"));
  EXPECT_FALSE(m2.Matches("1az"));

#if GTEST_HAS_ABSL
  const Matcher<const absl::string_view&> m3 = MatchesRegex("a.*z");
  EXPECT_TRUE(m3.Matches(absl::string_view("az")));
  EXPECT_TRUE(m3.Matches(absl::string_view("abcz")));
  EXPECT_FALSE(m3.Matches(absl::string_view("1az")));
  EXPECT_FALSE(m3.Matches(absl::string_view()));
  const Matcher<const absl::string_view&> m4 = MatchesRegex("");
  EXPECT_TRUE(m4.Matches(absl::string_view("")));
  EXPECT_TRUE(m4.Matches(absl::string_view()));
#endif  // GTEST_HAS_ABSL
}

TEST(MatchesRegexTest, CanDescribeSelf) {
  Matcher<const std::string> m1 = MatchesRegex(std::string("Hi.*"));
  EXPECT_EQ("matches regular expression \"Hi.*\"", Describe(m1));

  Matcher<const char*> m2 = MatchesRegex(new RE("a.*"));
  EXPECT_EQ("matches regular expression \"a.*\"", Describe(m2));

#if GTEST_HAS_ABSL
  Matcher<const absl::string_view> m3 = MatchesRegex(new RE("0.*"));
  EXPECT_EQ("matches regular expression \"0.*\"", Describe(m3));
#endif  // GTEST_HAS_ABSL
}

// Tests ContainsRegex().

TEST(ContainsRegexTest, MatchesStringContainingGivenRegex) {
  const Matcher<const char*> m1 = ContainsRegex(std::string("a.*z"));
  EXPECT_TRUE(m1.Matches("az"));
  EXPECT_TRUE(m1.Matches("0abcz1"));
  EXPECT_FALSE(m1.Matches(nullptr));

  const Matcher<const std::string&> m2 = ContainsRegex(new RE("a.*z"));
  EXPECT_TRUE(m2.Matches("azbz"));
  EXPECT_TRUE(m2.Matches("az1"));
  EXPECT_FALSE(m2.Matches("1a"));

#if GTEST_HAS_ABSL
  const Matcher<const absl::string_view&> m3 = ContainsRegex(new RE("a.*z"));
  EXPECT_TRUE(m3.Matches(absl::string_view("azbz")));
  EXPECT_TRUE(m3.Matches(absl::string_view("az1")));
  EXPECT_FALSE(m3.Matches(absl::string_view("1a")));
  EXPECT_FALSE(m3.Matches(absl::string_view()));
  const Matcher<const absl::string_view&> m4 = ContainsRegex("");
  EXPECT_TRUE(m4.Matches(absl::string_view("")));
  EXPECT_TRUE(m4.Matches(absl::string_view()));
#endif  // GTEST_HAS_ABSL
}

TEST(ContainsRegexTest, CanDescribeSelf) {
  Matcher<const std::string> m1 = ContainsRegex("Hi.*");
  EXPECT_EQ("contains regular expression \"Hi.*\"", Describe(m1));

  Matcher<const char*> m2 = ContainsRegex(new RE("a.*"));
  EXPECT_EQ("contains regular expression \"a.*\"", Describe(m2));

#if GTEST_HAS_ABSL
  Matcher<const absl::string_view> m3 = ContainsRegex(new RE("0.*"));
  EXPECT_EQ("contains regular expression \"0.*\"", Describe(m3));
#endif  // GTEST_HAS_ABSL
}

// Tests for wide strings.
#if GTEST_HAS_STD_WSTRING
TEST(StdWideStrEqTest, MatchesEqual) {
  Matcher<const wchar_t*> m = StrEq(::std::wstring(L"Hello"));
  EXPECT_TRUE(m.Matches(L"Hello"));
  EXPECT_FALSE(m.Matches(L"hello"));
  EXPECT_FALSE(m.Matches(nullptr));

  Matcher<const ::std::wstring&> m2 = StrEq(L"Hello");
  EXPECT_TRUE(m2.Matches(L"Hello"));
  EXPECT_FALSE(m2.Matches(L"Hi"));

  Matcher<const ::std::wstring&> m3 = StrEq(L"\xD3\x576\x8D3\xC74D");
  EXPECT_TRUE(m3.Matches(L"\xD3\x576\x8D3\xC74D"));
  EXPECT_FALSE(m3.Matches(L"\xD3\x576\x8D3\xC74E"));

  ::std::wstring str(L"01204500800");
  str[3] = L'\0';
  Matcher<const ::std::wstring&> m4 = StrEq(str);
  EXPECT_TRUE(m4.Matches(str));
  str[0] = str[6] = str[7] = str[9] = str[10] = L'\0';
  Matcher<const ::std::wstring&> m5 = StrEq(str);
  EXPECT_TRUE(m5.Matches(str));
}

TEST(StdWideStrEqTest, CanDescribeSelf) {
  Matcher< ::std::wstring> m = StrEq(L"Hi-\'\"?\\\a\b\f\n\r\t\v");
  EXPECT_EQ("is equal to L\"Hi-\'\\\"?\\\\\\a\\b\\f\\n\\r\\t\\v\"",
    Describe(m));

  Matcher< ::std::wstring> m2 = StrEq(L"\xD3\x576\x8D3\xC74D");
  EXPECT_EQ("is equal to L\"\\xD3\\x576\\x8D3\\xC74D\"",
    Describe(m2));

  ::std::wstring str(L"01204500800");
  str[3] = L'\0';
  Matcher<const ::std::wstring&> m4 = StrEq(str);
  EXPECT_EQ("is equal to L\"012\\04500800\"", Describe(m4));
  str[0] = str[6] = str[7] = str[9] = str[10] = L'\0';
  Matcher<const ::std::wstring&> m5 = StrEq(str);
  EXPECT_EQ("is equal to L\"\\012\\045\\0\\08\\0\\0\"", Describe(m5));
}

TEST(StdWideStrNeTest, MatchesUnequalString) {
  Matcher<const wchar_t*> m = StrNe(L"Hello");
  EXPECT_TRUE(m.Matches(L""));
  EXPECT_TRUE(m.Matches(nullptr));
  EXPECT_FALSE(m.Matches(L"Hello"));

  Matcher< ::std::wstring> m2 = StrNe(::std::wstring(L"Hello"));
  EXPECT_TRUE(m2.Matches(L"hello"));
  EXPECT_FALSE(m2.Matches(L"Hello"));
}

TEST(StdWideStrNeTest, CanDescribeSelf) {
  Matcher<const wchar_t*> m = StrNe(L"Hi");
  EXPECT_EQ("isn't equal to L\"Hi\"", Describe(m));
}

TEST(StdWideStrCaseEqTest, MatchesEqualStringIgnoringCase) {
  Matcher<const wchar_t*> m = StrCaseEq(::std::wstring(L"Hello"));
  EXPECT_TRUE(m.Matches(L"Hello"));
  EXPECT_TRUE(m.Matches(L"hello"));
  EXPECT_FALSE(m.Matches(L"Hi"));
  EXPECT_FALSE(m.Matches(nullptr));

  Matcher<const ::std::wstring&> m2 = StrCaseEq(L"Hello");
  EXPECT_TRUE(m2.Matches(L"hello"));
  EXPECT_FALSE(m2.Matches(L"Hi"));
}

TEST(StdWideStrCaseEqTest, MatchesEqualStringWith0IgnoringCase) {
  ::std::wstring str1(L"oabocdooeoo");
  ::std::wstring str2(L"OABOCDOOEOO");
  Matcher<const ::std::wstring&> m0 = StrCaseEq(str1);
  EXPECT_FALSE(m0.Matches(str2 + ::std::wstring(1, L'\0')));

  str1[3] = str2[3] = L'\0';
  Matcher<const ::std::wstring&> m1 = StrCaseEq(str1);
  EXPECT_TRUE(m1.Matches(str2));

  str1[0] = str1[6] = str1[7] = str1[10] = L'\0';
  str2[0] = str2[6] = str2[7] = str2[10] = L'\0';
  Matcher<const ::std::wstring&> m2 = StrCaseEq(str1);
  str1[9] = str2[9] = L'\0';
  EXPECT_FALSE(m2.Matches(str2));

  Matcher<const ::std::wstring&> m3 = StrCaseEq(str1);
  EXPECT_TRUE(m3.Matches(str2));

  EXPECT_FALSE(m3.Matches(str2 + L"x"));
  str2.append(1, L'\0');
  EXPECT_FALSE(m3.Matches(str2));
  EXPECT_FALSE(m3.Matches(::std::wstring(str2, 0, 9)));
}

TEST(StdWideStrCaseEqTest, CanDescribeSelf) {
  Matcher< ::std::wstring> m = StrCaseEq(L"Hi");
  EXPECT_EQ("is equal to (ignoring case) L\"Hi\"", Describe(m));
}

TEST(StdWideStrCaseNeTest, MatchesUnequalStringIgnoringCase) {
  Matcher<const wchar_t*> m = StrCaseNe(L"Hello");
  EXPECT_TRUE(m.Matches(L"Hi"));
  EXPECT_TRUE(m.Matches(nullptr));
  EXPECT_FALSE(m.Matches(L"Hello"));
  EXPECT_FALSE(m.Matches(L"hello"));

  Matcher< ::std::wstring> m2 = StrCaseNe(::std::wstring(L"Hello"));
  EXPECT_TRUE(m2.Matches(L""));
  EXPECT_FALSE(m2.Matches(L"Hello"));
}

TEST(StdWideStrCaseNeTest, CanDescribeSelf) {
  Matcher<const wchar_t*> m = StrCaseNe(L"Hi");
  EXPECT_EQ("isn't equal to (ignoring case) L\"Hi\"", Describe(m));
}

// Tests that HasSubstr() works for matching wstring-typed values.
TEST(StdWideHasSubstrTest, WorksForStringClasses) {
  const Matcher< ::std::wstring> m1 = HasSubstr(L"foo");
  EXPECT_TRUE(m1.Matches(::std::wstring(L"I love food.")));
  EXPECT_FALSE(m1.Matches(::std::wstring(L"tofo")));

  const Matcher<const ::std::wstring&> m2 = HasSubstr(L"foo");
  EXPECT_TRUE(m2.Matches(::std::wstring(L"I love food.")));
  EXPECT_FALSE(m2.Matches(::std::wstring(L"tofo")));
}

// Tests that HasSubstr() works for matching C-wide-string-typed values.
TEST(StdWideHasSubstrTest, WorksForCStrings) {
  const Matcher<wchar_t*> m1 = HasSubstr(L"foo");
  EXPECT_TRUE(m1.Matches(const_cast<wchar_t*>(L"I love food.")));
  EXPECT_FALSE(m1.Matches(const_cast<wchar_t*>(L"tofo")));
  EXPECT_FALSE(m1.Matches(nullptr));

  const Matcher<const wchar_t*> m2 = HasSubstr(L"foo");
  EXPECT_TRUE(m2.Matches(L"I love food."));
  EXPECT_FALSE(m2.Matches(L"tofo"));
  EXPECT_FALSE(m2.Matches(nullptr));
}

// Tests that HasSubstr(s) describes itself properly.
TEST(StdWideHasSubstrTest, CanDescribeSelf) {
  Matcher< ::std::wstring> m = HasSubstr(L"foo\n\"");
  EXPECT_EQ("has substring L\"foo\\n\\\"\"", Describe(m));
}

// Tests StartsWith(s).

TEST(StdWideStartsWithTest, MatchesStringWithGivenPrefix) {
  const Matcher<const wchar_t*> m1 = StartsWith(::std::wstring(L""));
  EXPECT_TRUE(m1.Matches(L"Hi"));
  EXPECT_TRUE(m1.Matches(L""));
  EXPECT_FALSE(m1.Matches(nullptr));

  const Matcher<const ::std::wstring&> m2 = StartsWith(L"Hi");
  EXPECT_TRUE(m2.Matches(L"Hi"));
  EXPECT_TRUE(m2.Matches(L"Hi Hi!"));
  EXPECT_TRUE(m2.Matches(L"High"));
  EXPECT_FALSE(m2.Matches(L"H"));
  EXPECT_FALSE(m2.Matches(L" Hi"));
}

TEST(StdWideStartsWithTest, CanDescribeSelf) {
  Matcher<const ::std::wstring> m = StartsWith(L"Hi");
  EXPECT_EQ("starts with L\"Hi\"", Describe(m));
}

// Tests EndsWith(s).

TEST(StdWideEndsWithTest, MatchesStringWithGivenSuffix) {
  const Matcher<const wchar_t*> m1 = EndsWith(L"");
  EXPECT_TRUE(m1.Matches(L"Hi"));
  EXPECT_TRUE(m1.Matches(L""));
  EXPECT_FALSE(m1.Matches(nullptr));

  const Matcher<const ::std::wstring&> m2 = EndsWith(::std::wstring(L"Hi"));
  EXPECT_TRUE(m2.Matches(L"Hi"));
  EXPECT_TRUE(m2.Matches(L"Wow Hi Hi"));
  EXPECT_TRUE(m2.Matches(L"Super Hi"));
  EXPECT_FALSE(m2.Matches(L"i"));
  EXPECT_FALSE(m2.Matches(L"Hi "));
}

TEST(StdWideEndsWithTest, CanDescribeSelf) {
  Matcher<const ::std::wstring> m = EndsWith(L"Hi");
  EXPECT_EQ("ends with L\"Hi\"", Describe(m));
}

#endif  // GTEST_HAS_STD_WSTRING

typedef ::std::tuple<long, int> Tuple2;  // NOLINT

// Tests that Eq() matches a 2-tuple where the first field == the
// second field.
TEST(Eq2Test, MatchesEqualArguments) {
  Matcher<const Tuple2&> m = Eq();
  EXPECT_TRUE(m.Matches(Tuple2(5L, 5)));
  EXPECT_FALSE(m.Matches(Tuple2(5L, 6)));
}

// Tests that Eq() describes itself properly.
TEST(Eq2Test, CanDescribeSelf) {
  Matcher<const Tuple2&> m = Eq();
  EXPECT_EQ("are an equal pair", Describe(m));
}

// Tests that Ge() matches a 2-tuple where the first field >= the
// second field.
TEST(Ge2Test, MatchesGreaterThanOrEqualArguments) {
  Matcher<const Tuple2&> m = Ge();
  EXPECT_TRUE(m.Matches(Tuple2(5L, 4)));
  EXPECT_TRUE(m.Matches(Tuple2(5L, 5)));
  EXPECT_FALSE(m.Matches(Tuple2(5L, 6)));
}

// Tests that Ge() describes itself properly.
TEST(Ge2Test, CanDescribeSelf) {
  Matcher<const Tuple2&> m = Ge();
  EXPECT_EQ("are a pair where the first >= the second", Describe(m));
}

// Tests that Gt() matches a 2-tuple where the first field > the
// second field.
TEST(Gt2Test, MatchesGreaterThanArguments) {
  Matcher<const Tuple2&> m = Gt();
  EXPECT_TRUE(m.Matches(Tuple2(5L, 4)));
  EXPECT_FALSE(m.Matches(Tuple2(5L, 5)));
  EXPECT_FALSE(m.Matches(Tuple2(5L, 6)));
}

// Tests that Gt() describes itself properly.
TEST(Gt2Test, CanDescribeSelf) {
  Matcher<const Tuple2&> m = Gt();
  EXPECT_EQ("are a pair where the first > the second", Describe(m));
}

// Tests that Le() matches a 2-tuple where the first field <= the
// second field.
TEST(Le2Test, MatchesLessThanOrEqualArguments) {
  Matcher<const Tuple2&> m = Le();
  EXPECT_TRUE(m.Matches(Tuple2(5L, 6)));
  EXPECT_TRUE(m.Matches(Tuple2(5L, 5)));
  EXPECT_FALSE(m.Matches(Tuple2(5L, 4)));
}

// Tests that Le() describes itself properly.
TEST(Le2Test, CanDescribeSelf) {
  Matcher<const Tuple2&> m = Le();
  EXPECT_EQ("are a pair where the first <= the second", Describe(m));
}

// Tests that Lt() matches a 2-tuple where the first field < the
// second field.
TEST(Lt2Test, MatchesLessThanArguments) {
  Matcher<const Tuple2&> m = Lt();
  EXPECT_TRUE(m.Matches(Tuple2(5L, 6)));
  EXPECT_FALSE(m.Matches(Tuple2(5L, 5)));
  EXPECT_FALSE(m.Matches(Tuple2(5L, 4)));
}

// Tests that Lt() describes itself properly.
TEST(Lt2Test, CanDescribeSelf) {
  Matcher<const Tuple2&> m = Lt();
  EXPECT_EQ("are a pair where the first < the second", Describe(m));
}

// Tests that Ne() matches a 2-tuple where the first field != the
// second field.
TEST(Ne2Test, MatchesUnequalArguments) {
  Matcher<const Tuple2&> m = Ne();
  EXPECT_TRUE(m.Matches(Tuple2(5L, 6)));
  EXPECT_TRUE(m.Matches(Tuple2(5L, 4)));
  EXPECT_FALSE(m.Matches(Tuple2(5L, 5)));
}

// Tests that Ne() describes itself properly.
TEST(Ne2Test, CanDescribeSelf) {
  Matcher<const Tuple2&> m = Ne();
  EXPECT_EQ("are an unequal pair", Describe(m));
}

TEST(PairMatchBaseTest, WorksWithMoveOnly) {
  using Pointers = std::tuple<std::unique_ptr<int>, std::unique_ptr<int>>;
  Matcher<Pointers> matcher = Eq();
  Pointers pointers;
  // Tested values don't matter; the point is that matcher does not copy the
  // matched values.
  EXPECT_TRUE(matcher.Matches(pointers));
}

// Tests that FloatEq() matches a 2-tuple where
// FloatEq(first field) matches the second field.
TEST(FloatEq2Test, MatchesEqualArguments) {
  typedef ::std::tuple<float, float> Tpl;
  Matcher<const Tpl&> m = FloatEq();
  EXPECT_TRUE(m.Matches(Tpl(1.0f, 1.0f)));
  EXPECT_TRUE(m.Matches(Tpl(0.3f, 0.1f + 0.1f + 0.1f)));
  EXPECT_FALSE(m.Matches(Tpl(1.1f, 1.0f)));
}

// Tests that FloatEq() describes itself properly.
TEST(FloatEq2Test, CanDescribeSelf) {
  Matcher<const ::std::tuple<float, float>&> m = FloatEq();
  EXPECT_EQ("are an almost-equal pair", Describe(m));
}

// Tests that NanSensitiveFloatEq() matches a 2-tuple where
// NanSensitiveFloatEq(first field) matches the second field.
TEST(NanSensitiveFloatEqTest, MatchesEqualArgumentsWithNaN) {
  typedef ::std::tuple<float, float> Tpl;
  Matcher<const Tpl&> m = NanSensitiveFloatEq();
  EXPECT_TRUE(m.Matches(Tpl(1.0f, 1.0f)));
  EXPECT_TRUE(m.Matches(Tpl(std::numeric_limits<float>::quiet_NaN(),
                            std::numeric_limits<float>::quiet_NaN())));
  EXPECT_FALSE(m.Matches(Tpl(1.1f, 1.0f)));
  EXPECT_FALSE(m.Matches(Tpl(1.0f, std::numeric_limits<float>::quiet_NaN())));
  EXPECT_FALSE(m.Matches(Tpl(std::numeric_limits<float>::quiet_NaN(), 1.0f)));
}

// Tests that NanSensitiveFloatEq() describes itself properly.
TEST(NanSensitiveFloatEqTest, CanDescribeSelfWithNaNs) {
  Matcher<const ::std::tuple<float, float>&> m = NanSensitiveFloatEq();
  EXPECT_EQ("are an almost-equal pair", Describe(m));
}

// Tests that DoubleEq() matches a 2-tuple where
// DoubleEq(first field) matches the second field.
TEST(DoubleEq2Test, MatchesEqualArguments) {
  typedef ::std::tuple<double, double> Tpl;
  Matcher<const Tpl&> m = DoubleEq();
  EXPECT_TRUE(m.Matches(Tpl(1.0, 1.0)));
  EXPECT_TRUE(m.Matches(Tpl(0.3, 0.1 + 0.1 + 0.1)));
  EXPECT_FALSE(m.Matches(Tpl(1.1, 1.0)));
}

// Tests that DoubleEq() describes itself properly.
TEST(DoubleEq2Test, CanDescribeSelf) {
  Matcher<const ::std::tuple<double, double>&> m = DoubleEq();
  EXPECT_EQ("are an almost-equal pair", Describe(m));
}

// Tests that NanSensitiveDoubleEq() matches a 2-tuple where
// NanSensitiveDoubleEq(first field) matches the second field.
TEST(NanSensitiveDoubleEqTest, MatchesEqualArgumentsWithNaN) {
  typedef ::std::tuple<double, double> Tpl;
  Matcher<const Tpl&> m = NanSensitiveDoubleEq();
  EXPECT_TRUE(m.Matches(Tpl(1.0f, 1.0f)));
  EXPECT_TRUE(m.Matches(Tpl(std::numeric_limits<double>::quiet_NaN(),
                            std::numeric_limits<double>::quiet_NaN())));
  EXPECT_FALSE(m.Matches(Tpl(1.1f, 1.0f)));
  EXPECT_FALSE(m.Matches(Tpl(1.0f, std::numeric_limits<double>::quiet_NaN())));
  EXPECT_FALSE(m.Matches(Tpl(std::numeric_limits<double>::quiet_NaN(), 1.0f)));
}

// Tests that DoubleEq() describes itself properly.
TEST(NanSensitiveDoubleEqTest, CanDescribeSelfWithNaNs) {
  Matcher<const ::std::tuple<double, double>&> m = NanSensitiveDoubleEq();
  EXPECT_EQ("are an almost-equal pair", Describe(m));
}

// Tests that FloatEq() matches a 2-tuple where
// FloatNear(first field, max_abs_error) matches the second field.
TEST(FloatNear2Test, MatchesEqualArguments) {
  typedef ::std::tuple<float, float> Tpl;
  Matcher<const Tpl&> m = FloatNear(0.5f);
  EXPECT_TRUE(m.Matches(Tpl(1.0f, 1.0f)));
  EXPECT_TRUE(m.Matches(Tpl(1.3f, 1.0f)));
  EXPECT_FALSE(m.Matches(Tpl(1.8f, 1.0f)));
}

// Tests that FloatNear() describes itself properly.
TEST(FloatNear2Test, CanDescribeSelf) {
  Matcher<const ::std::tuple<float, float>&> m = FloatNear(0.5f);
  EXPECT_EQ("are an almost-equal pair", Describe(m));
}

// Tests that NanSensitiveFloatNear() matches a 2-tuple where
// NanSensitiveFloatNear(first field) matches the second field.
TEST(NanSensitiveFloatNearTest, MatchesNearbyArgumentsWithNaN) {
  typedef ::std::tuple<float, float> Tpl;
  Matcher<const Tpl&> m = NanSensitiveFloatNear(0.5f);
  EXPECT_TRUE(m.Matches(Tpl(1.0f, 1.0f)));
  EXPECT_TRUE(m.Matches(Tpl(1.1f, 1.0f)));
  EXPECT_TRUE(m.Matches(Tpl(std::numeric_limits<float>::quiet_NaN(),
                            std::numeric_limits<float>::quiet_NaN())));
  EXPECT_FALSE(m.Matches(Tpl(1.6f, 1.0f)));
  EXPECT_FALSE(m.Matches(Tpl(1.0f, std::numeric_limits<float>::quiet_NaN())));
  EXPECT_FALSE(m.Matches(Tpl(std::numeric_limits<float>::quiet_NaN(), 1.0f)));
}

// Tests that NanSensitiveFloatNear() describes itself properly.
TEST(NanSensitiveFloatNearTest, CanDescribeSelfWithNaNs) {
  Matcher<const ::std::tuple<float, float>&> m = NanSensitiveFloatNear(0.5f);
  EXPECT_EQ("are an almost-equal pair", Describe(m));
}

// Tests that FloatEq() matches a 2-tuple where
// DoubleNear(first field, max_abs_error) matches the second field.
TEST(DoubleNear2Test, MatchesEqualArguments) {
  typedef ::std::tuple<double, double> Tpl;
  Matcher<const Tpl&> m = DoubleNear(0.5);
  EXPECT_TRUE(m.Matches(Tpl(1.0, 1.0)));
  EXPECT_TRUE(m.Matches(Tpl(1.3, 1.0)));
  EXPECT_FALSE(m.Matches(Tpl(1.8, 1.0)));
}

// Tests that DoubleNear() describes itself properly.
TEST(DoubleNear2Test, CanDescribeSelf) {
  Matcher<const ::std::tuple<double, double>&> m = DoubleNear(0.5);
  EXPECT_EQ("are an almost-equal pair", Describe(m));
}

// Tests that NanSensitiveDoubleNear() matches a 2-tuple where
// NanSensitiveDoubleNear(first field) matches the second field.
TEST(NanSensitiveDoubleNearTest, MatchesNearbyArgumentsWithNaN) {
  typedef ::std::tuple<double, double> Tpl;
  Matcher<const Tpl&> m = NanSensitiveDoubleNear(0.5f);
  EXPECT_TRUE(m.Matches(Tpl(1.0f, 1.0f)));
  EXPECT_TRUE(m.Matches(Tpl(1.1f, 1.0f)));
  EXPECT_TRUE(m.Matches(Tpl(std::numeric_limits<double>::quiet_NaN(),
                            std::numeric_limits<double>::quiet_NaN())));
  EXPECT_FALSE(m.Matches(Tpl(1.6f, 1.0f)));
  EXPECT_FALSE(m.Matches(Tpl(1.0f, std::numeric_limits<double>::quiet_NaN())));
  EXPECT_FALSE(m.Matches(Tpl(std::numeric_limits<double>::quiet_NaN(), 1.0f)));
}

// Tests that NanSensitiveDoubleNear() describes itself properly.
TEST(NanSensitiveDoubleNearTest, CanDescribeSelfWithNaNs) {
  Matcher<const ::std::tuple<double, double>&> m = NanSensitiveDoubleNear(0.5f);
  EXPECT_EQ("are an almost-equal pair", Describe(m));
}

// Tests that Not(m) matches any value that doesn't match m.
TEST(NotTest, NegatesMatcher) {
  Matcher<int> m;
  m = Not(Eq(2));
  EXPECT_TRUE(m.Matches(3));
  EXPECT_FALSE(m.Matches(2));
}

// Tests that Not(m) describes itself properly.
TEST(NotTest, CanDescribeSelf) {
  Matcher<int> m = Not(Eq(5));
  EXPECT_EQ("isn't equal to 5", Describe(m));
}

// Tests that monomorphic matchers are safely cast by the Not matcher.
TEST(NotTest, NotMatcherSafelyCastsMonomorphicMatchers) {
  // greater_than_5 is a monomorphic matcher.
  Matcher<int> greater_than_5 = Gt(5);

  Matcher<const int&> m = Not(greater_than_5);
  Matcher<int&> m2 = Not(greater_than_5);
  Matcher<int&> m3 = Not(m);
}

// Helper to allow easy testing of AllOf matchers with num parameters.
void AllOfMatches(int num, const Matcher<int>& m) {
  SCOPED_TRACE(Describe(m));
  EXPECT_TRUE(m.Matches(0));
  for (int i = 1; i <= num; ++i) {
    EXPECT_FALSE(m.Matches(i));
  }
  EXPECT_TRUE(m.Matches(num + 1));
}

// Tests that AllOf(m1, ..., mn) matches any value that matches all of
// the given matchers.
TEST(AllOfTest, MatchesWhenAllMatch) {
  Matcher<int> m;
  m = AllOf(Le(2), Ge(1));
  EXPECT_TRUE(m.Matches(1));
  EXPECT_TRUE(m.Matches(2));
  EXPECT_FALSE(m.Matches(0));
  EXPECT_FALSE(m.Matches(3));

  m = AllOf(Gt(0), Ne(1), Ne(2));
  EXPECT_TRUE(m.Matches(3));
  EXPECT_FALSE(m.Matches(2));
  EXPECT_FALSE(m.Matches(1));
  EXPECT_FALSE(m.Matches(0));

  m = AllOf(Gt(0), Ne(1), Ne(2), Ne(3));
  EXPECT_TRUE(m.Matches(4));
  EXPECT_FALSE(m.Matches(3));
  EXPECT_FALSE(m.Matches(2));
  EXPECT_FALSE(m.Matches(1));
  EXPECT_FALSE(m.Matches(0));

  m = AllOf(Ge(0), Lt(10), Ne(3), Ne(5), Ne(7));
  EXPECT_TRUE(m.Matches(0));
  EXPECT_TRUE(m.Matches(1));
  EXPECT_FALSE(m.Matches(3));

  // The following tests for varying number of sub-matchers. Due to the way
  // the sub-matchers are handled it is enough to test every sub-matcher once
  // with sub-matchers using the same matcher type. Varying matcher types are
  // checked for above.
  AllOfMatches(2, AllOf(Ne(1), Ne(2)));
  AllOfMatches(3, AllOf(Ne(1), Ne(2), Ne(3)));
  AllOfMatches(4, AllOf(Ne(1), Ne(2), Ne(3), Ne(4)));
  AllOfMatches(5, AllOf(Ne(1), Ne(2), Ne(3), Ne(4), Ne(5)));
  AllOfMatches(6, AllOf(Ne(1), Ne(2), Ne(3), Ne(4), Ne(5), Ne(6)));
  AllOfMatches(7, AllOf(Ne(1), Ne(2), Ne(3), Ne(4), Ne(5), Ne(6), Ne(7)));
  AllOfMatches(8, AllOf(Ne(1), Ne(2), Ne(3), Ne(4), Ne(5), Ne(6), Ne(7),
                        Ne(8)));
  AllOfMatches(9, AllOf(Ne(1), Ne(2), Ne(3), Ne(4), Ne(5), Ne(6), Ne(7),
                        Ne(8), Ne(9)));
  AllOfMatches(10, AllOf(Ne(1), Ne(2), Ne(3), Ne(4), Ne(5), Ne(6), Ne(7), Ne(8),
                         Ne(9), Ne(10)));
  AllOfMatches(
      50, AllOf(Ne(1), Ne(2), Ne(3), Ne(4), Ne(5), Ne(6), Ne(7), Ne(8), Ne(9),
                Ne(10), Ne(11), Ne(12), Ne(13), Ne(14), Ne(15), Ne(16), Ne(17),
                Ne(18), Ne(19), Ne(20), Ne(21), Ne(22), Ne(23), Ne(24), Ne(25),
                Ne(26), Ne(27), Ne(28), Ne(29), Ne(30), Ne(31), Ne(32), Ne(33),
                Ne(34), Ne(35), Ne(36), Ne(37), Ne(38), Ne(39), Ne(40), Ne(41),
                Ne(42), Ne(43), Ne(44), Ne(45), Ne(46), Ne(47), Ne(48), Ne(49),
                Ne(50)));
}


// Tests that AllOf(m1, ..., mn) describes itself properly.
TEST(AllOfTest, CanDescribeSelf) {
  Matcher<int> m;
  m = AllOf(Le(2), Ge(1));
  EXPECT_EQ("(is <= 2) and (is >= 1)", Describe(m));

  m = AllOf(Gt(0), Ne(1), Ne(2));
  std::string expected_descr1 =
      "(is > 0) and (isn't equal to 1) and (isn't equal to 2)";
  EXPECT_EQ(expected_descr1, Describe(m));

  m = AllOf(Gt(0), Ne(1), Ne(2), Ne(3));
  std::string expected_descr2 =
      "(is > 0) and (isn't equal to 1) and (isn't equal to 2) and (isn't equal "
      "to 3)";
  EXPECT_EQ(expected_descr2, Describe(m));

  m = AllOf(Ge(0), Lt(10), Ne(3), Ne(5), Ne(7));
  std::string expected_descr3 =
      "(is >= 0) and (is < 10) and (isn't equal to 3) and (isn't equal to 5) "
      "and (isn't equal to 7)";
  EXPECT_EQ(expected_descr3, Describe(m));
}

// Tests that AllOf(m1, ..., mn) describes its negation properly.
TEST(AllOfTest, CanDescribeNegation) {
  Matcher<int> m;
  m = AllOf(Le(2), Ge(1));
  std::string expected_descr4 = "(isn't <= 2) or (isn't >= 1)";
  EXPECT_EQ(expected_descr4, DescribeNegation(m));

  m = AllOf(Gt(0), Ne(1), Ne(2));
  std::string expected_descr5 =
      "(isn't > 0) or (is equal to 1) or (is equal to 2)";
  EXPECT_EQ(expected_descr5, DescribeNegation(m));

  m = AllOf(Gt(0), Ne(1), Ne(2), Ne(3));
  std::string expected_descr6 =
      "(isn't > 0) or (is equal to 1) or (is equal to 2) or (is equal to 3)";
  EXPECT_EQ(expected_descr6, DescribeNegation(m));

  m = AllOf(Ge(0), Lt(10), Ne(3), Ne(5), Ne(7));
  std::string expected_desr7 =
      "(isn't >= 0) or (isn't < 10) or (is equal to 3) or (is equal to 5) or "
      "(is equal to 7)";
  EXPECT_EQ(expected_desr7, DescribeNegation(m));

  m = AllOf(Ne(1), Ne(2), Ne(3), Ne(4), Ne(5), Ne(6), Ne(7), Ne(8), Ne(9),
            Ne(10), Ne(11));
  AllOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
  EXPECT_THAT(Describe(m), EndsWith("and (isn't equal to 11)"));
  AllOfMatches(11, m);
}

// Tests that monomorphic matchers are safely cast by the AllOf matcher.
TEST(AllOfTest, AllOfMatcherSafelyCastsMonomorphicMatchers) {
  // greater_than_5 and less_than_10 are monomorphic matchers.
  Matcher<int> greater_than_5 = Gt(5);
  Matcher<int> less_than_10 = Lt(10);

  Matcher<const int&> m = AllOf(greater_than_5, less_than_10);
  Matcher<int&> m2 = AllOf(greater_than_5, less_than_10);
  Matcher<int&> m3 = AllOf(greater_than_5, m2);

  // Tests that BothOf works when composing itself.
  Matcher<const int&> m4 = AllOf(greater_than_5, less_than_10, less_than_10);
  Matcher<int&> m5 = AllOf(greater_than_5, less_than_10, less_than_10);
}

TEST(AllOfTest, ExplainsResult) {
  Matcher<int> m;

  // Successful match.  Both matchers need to explain.  The second
  // matcher doesn't give an explanation, so only the first matcher's
  // explanation is printed.
  m = AllOf(GreaterThan(10), Lt(30));
  EXPECT_EQ("which is 15 more than 10", Explain(m, 25));

  // Successful match.  Both matchers need to explain.
  m = AllOf(GreaterThan(10), GreaterThan(20));
  EXPECT_EQ("which is 20 more than 10, and which is 10 more than 20",
            Explain(m, 30));

  // Successful match.  All matchers need to explain.  The second
  // matcher doesn't given an explanation.
  m = AllOf(GreaterThan(10), Lt(30), GreaterThan(20));
  EXPECT_EQ("which is 15 more than 10, and which is 5 more than 20",
            Explain(m, 25));

  // Successful match.  All matchers need to explain.
  m = AllOf(GreaterThan(10), GreaterThan(20), GreaterThan(30));
  EXPECT_EQ("which is 30 more than 10, and which is 20 more than 20, "
            "and which is 10 more than 30",
            Explain(m, 40));

  // Failed match.  The first matcher, which failed, needs to
  // explain.
  m = AllOf(GreaterThan(10), GreaterThan(20));
  EXPECT_EQ("which is 5 less than 10", Explain(m, 5));

  // Failed match.  The second matcher, which failed, needs to
  // explain.  Since it doesn't given an explanation, nothing is
  // printed.
  m = AllOf(GreaterThan(10), Lt(30));
  EXPECT_EQ("", Explain(m, 40));

  // Failed match.  The second matcher, which failed, needs to
  // explain.
  m = AllOf(GreaterThan(10), GreaterThan(20));
  EXPECT_EQ("which is 5 less than 20", Explain(m, 15));
}

// Helper to allow easy testing of AnyOf matchers with num parameters.
static void AnyOfMatches(int num, const Matcher<int>& m) {
  SCOPED_TRACE(Describe(m));
  EXPECT_FALSE(m.Matches(0));
  for (int i = 1; i <= num; ++i) {
    EXPECT_TRUE(m.Matches(i));
  }
  EXPECT_FALSE(m.Matches(num + 1));
}

static void AnyOfStringMatches(int num, const Matcher<std::string>& m) {
  SCOPED_TRACE(Describe(m));
  EXPECT_FALSE(m.Matches(std::to_string(0)));

  for (int i = 1; i <= num; ++i) {
    EXPECT_TRUE(m.Matches(std::to_string(i)));
  }
  EXPECT_FALSE(m.Matches(std::to_string(num + 1)));
}

// Tests that AnyOf(m1, ..., mn) matches any value that matches at
// least one of the given matchers.
TEST(AnyOfTest, MatchesWhenAnyMatches) {
  Matcher<int> m;
  m = AnyOf(Le(1), Ge(3));
  EXPECT_TRUE(m.Matches(1));
  EXPECT_TRUE(m.Matches(4));
  EXPECT_FALSE(m.Matches(2));

  m = AnyOf(Lt(0), Eq(1), Eq(2));
  EXPECT_TRUE(m.Matches(-1));
  EXPECT_TRUE(m.Matches(1));
  EXPECT_TRUE(m.Matches(2));
  EXPECT_FALSE(m.Matches(0));

  m = AnyOf(Lt(0), Eq(1), Eq(2), Eq(3));
  EXPECT_TRUE(m.Matches(-1));
  EXPECT_TRUE(m.Matches(1));
  EXPECT_TRUE(m.Matches(2));
  EXPECT_TRUE(m.Matches(3));
  EXPECT_FALSE(m.Matches(0));

  m = AnyOf(Le(0), Gt(10), 3, 5, 7);
  EXPECT_TRUE(m.Matches(0));
  EXPECT_TRUE(m.Matches(11));
  EXPECT_TRUE(m.Matches(3));
  EXPECT_FALSE(m.Matches(2));

  // The following tests for varying number of sub-matchers. Due to the way
  // the sub-matchers are handled it is enough to test every sub-matcher once
  // with sub-matchers using the same matcher type. Varying matcher types are
  // checked for above.
  AnyOfMatches(2, AnyOf(1, 2));
  AnyOfMatches(3, AnyOf(1, 2, 3));
  AnyOfMatches(4, AnyOf(1, 2, 3, 4));
  AnyOfMatches(5, AnyOf(1, 2, 3, 4, 5));
  AnyOfMatches(6, AnyOf(1, 2, 3, 4, 5, 6));
  AnyOfMatches(7, AnyOf(1, 2, 3, 4, 5, 6, 7));
  AnyOfMatches(8, AnyOf(1, 2, 3, 4, 5, 6, 7, 8));
  AnyOfMatches(9, AnyOf(1, 2, 3, 4, 5, 6, 7, 8, 9));
  AnyOfMatches(10, AnyOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
}

// Tests the variadic version of the AnyOfMatcher.
TEST(AnyOfTest, VariadicMatchesWhenAnyMatches) {
  // Also make sure AnyOf is defined in the right namespace and does not depend
  // on ADL.
  Matcher<int> m = ::testing::AnyOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);

  EXPECT_THAT(Describe(m), EndsWith("or (is equal to 11)"));
  AnyOfMatches(11, m);
  AnyOfMatches(50, AnyOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                         11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                         21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                         31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                         41, 42, 43, 44, 45, 46, 47, 48, 49, 50));
  AnyOfStringMatches(
      50, AnyOf("1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12",
                "13", "14", "15", "16", "17", "18", "19", "20", "21", "22",
                "23", "24", "25", "26", "27", "28", "29", "30", "31", "32",
                "33", "34", "35", "36", "37", "38", "39", "40", "41", "42",
                "43", "44", "45", "46", "47", "48", "49", "50"));
}

// Tests the variadic version of the ElementsAreMatcher
TEST(ElementsAreTest, HugeMatcher) {
  vector<int> test_vector{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  EXPECT_THAT(test_vector,
              ElementsAre(Eq(1), Eq(2), Lt(13), Eq(4), Eq(5), Eq(6), Eq(7),
                          Eq(8), Eq(9), Eq(10), Gt(1), Eq(12)));
}

// Tests the variadic version of the UnorderedElementsAreMatcher
TEST(ElementsAreTest, HugeMatcherStr) {
  vector<std::string> test_vector{
      "literal_string", "", "", "", "", "", "", "", "", "", "", ""};

  EXPECT_THAT(test_vector, UnorderedElementsAre("literal_string", _, _, _, _, _,
                                                _, _, _, _, _, _));
}

// Tests the variadic version of the UnorderedElementsAreMatcher
TEST(ElementsAreTest, HugeMatcherUnordered) {
  vector<int> test_vector{2, 1, 8, 5, 4, 6, 7, 3, 9, 12, 11, 10};

  EXPECT_THAT(test_vector, UnorderedElementsAre(
                               Eq(2), Eq(1), Gt(7), Eq(5), Eq(4), Eq(6), Eq(7),
                               Eq(3), Eq(9), Eq(12), Eq(11), Ne(122)));
}


// Tests that AnyOf(m1, ..., mn) describes itself properly.
TEST(AnyOfTest, CanDescribeSelf) {
  Matcher<int> m;
  m = AnyOf(Le(1), Ge(3));

  EXPECT_EQ("(is <= 1) or (is >= 3)",
            Describe(m));

  m = AnyOf(Lt(0), Eq(1), Eq(2));
  EXPECT_EQ("(is < 0) or (is equal to 1) or (is equal to 2)", Describe(m));

  m = AnyOf(Lt(0), Eq(1), Eq(2), Eq(3));
  EXPECT_EQ("(is < 0) or (is equal to 1) or (is equal to 2) or (is equal to 3)",
            Describe(m));

  m = AnyOf(Le(0), Gt(10), 3, 5, 7);
  EXPECT_EQ(
      "(is <= 0) or (is > 10) or (is equal to 3) or (is equal to 5) or (is "
      "equal to 7)",
      Describe(m));
}

// Tests that AnyOf(m1, ..., mn) describes its negation properly.
TEST(AnyOfTest, CanDescribeNegation) {
  Matcher<int> m;
  m = AnyOf(Le(1), Ge(3));
  EXPECT_EQ("(isn't <= 1) and (isn't >= 3)",
            DescribeNegation(m));

  m = AnyOf(Lt(0), Eq(1), Eq(2));
  EXPECT_EQ("(isn't < 0) and (isn't equal to 1) and (isn't equal to 2)",
            DescribeNegation(m));

  m = AnyOf(Lt(0), Eq(1), Eq(2), Eq(3));
  EXPECT_EQ(
      "(isn't < 0) and (isn't equal to 1) and (isn't equal to 2) and (isn't "
      "equal to 3)",
      DescribeNegation(m));

  m = AnyOf(Le(0), Gt(10), 3, 5, 7);
  EXPECT_EQ(
      "(isn't <= 0) and (isn't > 10) and (isn't equal to 3) and (isn't equal "
      "to 5) and (isn't equal to 7)",
      DescribeNegation(m));
}

// Tests that monomorphic matchers are safely cast by the AnyOf matcher.
TEST(AnyOfTest, AnyOfMatcherSafelyCastsMonomorphicMatchers) {
  // greater_than_5 and less_than_10 are monomorphic matchers.
  Matcher<int> greater_than_5 = Gt(5);
  Matcher<int> less_than_10 = Lt(10);

  Matcher<const int&> m = AnyOf(greater_than_5, less_than_10);
  Matcher<int&> m2 = AnyOf(greater_than_5, less_than_10);
  Matcher<int&> m3 = AnyOf(greater_than_5, m2);

  // Tests that EitherOf works when composing itself.
  Matcher<const int&> m4 = AnyOf(greater_than_5, less_than_10, less_than_10);
  Matcher<int&> m5 = AnyOf(greater_than_5, less_than_10, less_than_10);
}

TEST(AnyOfTest, ExplainsResult) {
  Matcher<int> m;

  // Failed match.  Both matchers need to explain.  The second
  // matcher doesn't give an explanation, so only the first matcher's
  // explanation is printed.
  m = AnyOf(GreaterThan(10), Lt(0));
  EXPECT_EQ("which is 5 less than 10", Explain(m, 5));

  // Failed match.  Both matchers need to explain.
  m = AnyOf(GreaterThan(10), GreaterThan(20));
  EXPECT_EQ("which is 5 less than 10, and which is 15 less than 20",
            Explain(m, 5));

  // Failed match.  All matchers need to explain.  The second
  // matcher doesn't given an explanation.
  m = AnyOf(GreaterThan(10), Gt(20), GreaterThan(30));
  EXPECT_EQ("which is 5 less than 10, and which is 25 less than 30",
            Explain(m, 5));

  // Failed match.  All matchers need to explain.
  m = AnyOf(GreaterThan(10), GreaterThan(20), GreaterThan(30));
  EXPECT_EQ("which is 5 less than 10, and which is 15 less than 20, "
            "and which is 25 less than 30",
            Explain(m, 5));

  // Successful match.  The first matcher, which succeeded, needs to
  // explain.
  m = AnyOf(GreaterThan(10), GreaterThan(20));
  EXPECT_EQ("which is 5 more than 10", Explain(m, 15));

  // Successful match.  The second matcher, which succeeded, needs to
  // explain.  Since it doesn't given an explanation, nothing is
  // printed.
  m = AnyOf(GreaterThan(10), Lt(30));
  EXPECT_EQ("", Explain(m, 0));

  // Successful match.  The second matcher, which succeeded, needs to
  // explain.
  m = AnyOf(GreaterThan(30), GreaterThan(20));
  EXPECT_EQ("which is 5 more than 20", Explain(m, 25));
}

// The following predicate function and predicate functor are for
// testing the Truly(predicate) matcher.

// Returns non-zero if the input is positive.  Note that the return
// type of this function is not bool.  It's OK as Truly() accepts any
// unary function or functor whose return type can be implicitly
// converted to bool.
int IsPositive(double x) {
  return x > 0 ? 1 : 0;
}

// This functor returns true if the input is greater than the given
// number.
class IsGreaterThan {
 public:
  explicit IsGreaterThan(int threshold) : threshold_(threshold) {}

  bool operator()(int n) const { return n > threshold_; }

 private:
  int threshold_;
};

// For testing Truly().
const int foo = 0;

// This predicate returns true if and only if the argument references foo and
// has a zero value.
bool ReferencesFooAndIsZero(const int& n) {
  return (&n == &foo) && (n == 0);
}

// Tests that Truly(predicate) matches what satisfies the given
// predicate.
TEST(TrulyTest, MatchesWhatSatisfiesThePredicate) {
  Matcher<double> m = Truly(IsPositive);
  EXPECT_TRUE(m.Matches(2.0));
  EXPECT_FALSE(m.Matches(-1.5));
}

// Tests that Truly(predicate_functor) works too.
TEST(TrulyTest, CanBeUsedWithFunctor) {
  Matcher<int> m = Truly(IsGreaterThan(5));
  EXPECT_TRUE(m.Matches(6));
  EXPECT_FALSE(m.Matches(4));
}

// A class that can be implicitly converted to bool.
class ConvertibleToBool {
 public:
  explicit ConvertibleToBool(int number) : number_(number) {}
  operator bool() const { return number_ != 0; }

 private:
  int number_;
};

ConvertibleToBool IsNotZero(int number) {
  return ConvertibleToBool(number);
}

// Tests that the predicate used in Truly() may return a class that's
// implicitly convertible to bool, even when the class has no
// operator!().
TEST(TrulyTest, PredicateCanReturnAClassConvertibleToBool) {
  Matcher<int> m = Truly(IsNotZero);
  EXPECT_TRUE(m.Matches(1));
  EXPECT_FALSE(m.Matches(0));
}

// Tests that Truly(predicate) can describe itself properly.
TEST(TrulyTest, CanDescribeSelf) {
  Matcher<double> m = Truly(IsPositive);
  EXPECT_EQ("satisfies the given predicate",
            Describe(m));
}

// Tests that Truly(predicate) works when the matcher takes its
// argument by reference.
TEST(TrulyTest, WorksForByRefArguments) {
  Matcher<const int&> m = Truly(ReferencesFooAndIsZero);
  EXPECT_TRUE(m.Matches(foo));
  int n = 0;
  EXPECT_FALSE(m.Matches(n));
}

// Tests that Matches(m) is a predicate satisfied by whatever that
// matches matcher m.
TEST(MatchesTest, IsSatisfiedByWhatMatchesTheMatcher) {
  EXPECT_TRUE(Matches(Ge(0))(1));
  EXPECT_FALSE(Matches(Eq('a'))('b'));
}

// Tests that Matches(m) works when the matcher takes its argument by
// reference.
TEST(MatchesTest, WorksOnByRefArguments) {
  int m = 0, n = 0;
  EXPECT_TRUE(Matches(AllOf(Ref(n), Eq(0)))(n));
  EXPECT_FALSE(Matches(Ref(m))(n));
}

// Tests that a Matcher on non-reference type can be used in
// Matches().
TEST(MatchesTest, WorksWithMatcherOnNonRefType) {
  Matcher<int> eq5 = Eq(5);
  EXPECT_TRUE(Matches(eq5)(5));
  EXPECT_FALSE(Matches(eq5)(2));
}

// Tests Value(value, matcher).  Since Value() is a simple wrapper for
// Matches(), which has been tested already, we don't spend a lot of
// effort on testing Value().
TEST(ValueTest, WorksWithPolymorphicMatcher) {
  EXPECT_TRUE(Value("hi", StartsWith("h")));
  EXPECT_FALSE(Value(5, Gt(10)));
}

TEST(ValueTest, WorksWithMonomorphicMatcher) {
  const Matcher<int> is_zero = Eq(0);
  EXPECT_TRUE(Value(0, is_zero));
  EXPECT_FALSE(Value('a', is_zero));

  int n = 0;
  const Matcher<const int&> ref_n = Ref(n);
  EXPECT_TRUE(Value(n, ref_n));
  EXPECT_FALSE(Value(1, ref_n));
}

TEST(ExplainMatchResultTest, WorksWithPolymorphicMatcher) {
  StringMatchResultListener listener1;
  EXPECT_TRUE(ExplainMatchResult(PolymorphicIsEven(), 42, &listener1));
  EXPECT_EQ("% 2 == 0", listener1.str());

  StringMatchResultListener listener2;
  EXPECT_FALSE(ExplainMatchResult(Ge(42), 1.5, &listener2));
  EXPECT_EQ("", listener2.str());
}

TEST(ExplainMatchResultTest, WorksWithMonomorphicMatcher) {
  const Matcher<int> is_even = PolymorphicIsEven();
  StringMatchResultListener listener1;
  EXPECT_TRUE(ExplainMatchResult(is_even, 42, &listener1));
  EXPECT_EQ("% 2 == 0", listener1.str());

  const Matcher<const double&> is_zero = Eq(0);
  StringMatchResultListener listener2;
  EXPECT_FALSE(ExplainMatchResult(is_zero, 1.5, &listener2));
  EXPECT_EQ("", listener2.str());
}

MATCHER_P(Really, inner_matcher, "") {
  return ExplainMatchResult(inner_matcher, arg, result_listener);
}

TEST(ExplainMatchResultTest, WorksInsideMATCHER) {
  EXPECT_THAT(0, Really(Eq(0)));
}

TEST(DescribeMatcherTest, WorksWithValue) {
  EXPECT_EQ("is equal to 42", DescribeMatcher<int>(42));
  EXPECT_EQ("isn't equal to 42", DescribeMatcher<int>(42, true));
}

TEST(DescribeMatcherTest, WorksWithMonomorphicMatcher) {
  const Matcher<int> monomorphic = Le(0);
  EXPECT_EQ("is <= 0", DescribeMatcher<int>(monomorphic));
  EXPECT_EQ("isn't <= 0", DescribeMatcher<int>(monomorphic, true));
}

TEST(DescribeMatcherTest, WorksWithPolymorphicMatcher) {
  EXPECT_EQ("is even", DescribeMatcher<int>(PolymorphicIsEven()));
  EXPECT_EQ("is odd", DescribeMatcher<int>(PolymorphicIsEven(), true));
}

TEST(AllArgsTest, WorksForTuple) {
  EXPECT_THAT(std::make_tuple(1, 2L), AllArgs(Lt()));
  EXPECT_THAT(std::make_tuple(2L, 1), Not(AllArgs(Lt())));
}

TEST(AllArgsTest, WorksForNonTuple) {
  EXPECT_THAT(42, AllArgs(Gt(0)));
  EXPECT_THAT('a', Not(AllArgs(Eq('b'))));
}

class AllArgsHelper {
 public:
  AllArgsHelper() {}

  MOCK_METHOD2(Helper, int(char x, int y));

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(AllArgsHelper);
};

TEST(AllArgsTest, WorksInWithClause) {
  AllArgsHelper helper;
  ON_CALL(helper, Helper(_, _))
      .With(AllArgs(Lt()))
      .WillByDefault(Return(1));
  EXPECT_CALL(helper, Helper(_, _));
  EXPECT_CALL(helper, Helper(_, _))
      .With(AllArgs(Gt()))
      .WillOnce(Return(2));

  EXPECT_EQ(1, helper.Helper('\1', 2));
  EXPECT_EQ(2, helper.Helper('a', 1));
}

class OptionalMatchersHelper {
 public:
  OptionalMatchersHelper() {}

  MOCK_METHOD0(NoArgs, int());

  MOCK_METHOD1(OneArg, int(int y));

  MOCK_METHOD2(TwoArgs, int(char x, int y));

  MOCK_METHOD1(Overloaded, int(char x));
  MOCK_METHOD2(Overloaded, int(char x, int y));

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(OptionalMatchersHelper);
};

TEST(AllArgsTest, WorksWithoutMatchers) {
  OptionalMatchersHelper helper;

  ON_CALL(helper, NoArgs).WillByDefault(Return(10));
  ON_CALL(helper, OneArg).WillByDefault(Return(20));
  ON_CALL(helper, TwoArgs).WillByDefault(Return(30));

  EXPECT_EQ(10, helper.NoArgs());
  EXPECT_EQ(20, helper.OneArg(1));
  EXPECT_EQ(30, helper.TwoArgs('\1', 2));

  EXPECT_CALL(helper, NoArgs).Times(1);
  EXPECT_CALL(helper, OneArg).WillOnce(Return(100));
  EXPECT_CALL(helper, OneArg(17)).WillOnce(Return(200));
  EXPECT_CALL(helper, TwoArgs).Times(0);

  EXPECT_EQ(10, helper.NoArgs());
  EXPECT_EQ(100, helper.OneArg(1));
  EXPECT_EQ(200, helper.OneArg(17));
}

// Tests that ASSERT_THAT() and EXPECT_THAT() work when the value
// matches the matcher.
TEST(MatcherAssertionTest, WorksWhenMatcherIsSatisfied) {
  ASSERT_THAT(5, Ge(2)) << "This should succeed.";
  ASSERT_THAT("Foo", EndsWith("oo"));
  EXPECT_THAT(2, AllOf(Le(7), Ge(0))) << "This should succeed too.";
  EXPECT_THAT("Hello", StartsWith("Hell"));
}

// Tests that ASSERT_THAT() and EXPECT_THAT() work when the value
// doesn't match the matcher.
TEST(MatcherAssertionTest, WorksWhenMatcherIsNotSatisfied) {
  // 'n' must be static as it is used in an EXPECT_FATAL_FAILURE(),
  // which cannot reference auto variables.
  static unsigned short n;  // NOLINT
  n = 5;

  // VC++ prior to version 8.0 SP1 has a bug where it will not see any
  // functions declared in the namespace scope from within nested classes.
  // EXPECT/ASSERT_(NON)FATAL_FAILURE macros use nested classes so that all
  // namespace-level functions invoked inside them need to be explicitly
  // resolved.
  EXPECT_FATAL_FAILURE(ASSERT_THAT(n, ::testing::Gt(10)),
                       "Value of: n\n"
                       "Expected: is > 10\n"
                       "  Actual: 5" + OfType("unsigned short"));
  n = 0;
  EXPECT_NONFATAL_FAILURE(
      EXPECT_THAT(n, ::testing::AllOf(::testing::Le(7), ::testing::Ge(5))),
      "Value of: n\n"
      "Expected: (is <= 7) and (is >= 5)\n"
      "  Actual: 0" + OfType("unsigned short"));
}

// Tests that ASSERT_THAT() and EXPECT_THAT() work when the argument
// has a reference type.
TEST(MatcherAssertionTest, WorksForByRefArguments) {
  // We use a static variable here as EXPECT_FATAL_FAILURE() cannot
  // reference auto variables.
  static int n;
  n = 0;
  EXPECT_THAT(n, AllOf(Le(7), Ref(n)));
  EXPECT_FATAL_FAILURE(ASSERT_THAT(n, ::testing::Not(::testing::Ref(n))),
                       "Value of: n\n"
                       "Expected: does not reference the variable @");
  // Tests the "Actual" part.
  EXPECT_FATAL_FAILURE(ASSERT_THAT(n, ::testing::Not(::testing::Ref(n))),
                       "Actual: 0" + OfType("int") + ", which is located @");
}

// Tests that ASSERT_THAT() and EXPECT_THAT() work when the matcher is
// monomorphic.
TEST(MatcherAssertionTest, WorksForMonomorphicMatcher) {
  Matcher<const char*> starts_with_he = StartsWith("he");
  ASSERT_THAT("hello", starts_with_he);

  Matcher<const std::string&> ends_with_ok = EndsWith("ok");
  ASSERT_THAT("book", ends_with_ok);
  const std::string bad = "bad";
  EXPECT_NONFATAL_FAILURE(EXPECT_THAT(bad, ends_with_ok),
                          "Value of: bad\n"
                          "Expected: ends with \"ok\"\n"
                          "  Actual: \"bad\"");
  Matcher<int> is_greater_than_5 = Gt(5);
  EXPECT_NONFATAL_FAILURE(EXPECT_THAT(5, is_greater_than_5),
                          "Value of: 5\n"
                          "Expected: is > 5\n"
                          "  Actual: 5" + OfType("int"));
}

// Tests floating-point matchers.
template <typename RawType>
class FloatingPointTest : public testing::Test {
 protected:
  typedef testing::internal::FloatingPoint<RawType> Floating;
  typedef typename Floating::Bits Bits;

  FloatingPointTest()
      : max_ulps_(Floating::kMaxUlps),
        zero_bits_(Floating(0).bits()),
        one_bits_(Floating(1).bits()),
        infinity_bits_(Floating(Floating::Infinity()).bits()),
        close_to_positive_zero_(
            Floating::ReinterpretBits(zero_bits_ + max_ulps_/2)),
        close_to_negative_zero_(
            -Floating::ReinterpretBits(zero_bits_ + max_ulps_ - max_ulps_/2)),
        further_from_negative_zero_(-Floating::ReinterpretBits(
            zero_bits_ + max_ulps_ + 1 - max_ulps_/2)),
        close_to_one_(Floating::ReinterpretBits(one_bits_ + max_ulps_)),
        further_from_one_(Floating::ReinterpretBits(one_bits_ + max_ulps_ + 1)),
        infinity_(Floating::Infinity()),
        close_to_infinity_(
            Floating::ReinterpretBits(infinity_bits_ - max_ulps_)),
        further_from_infinity_(
            Floating::ReinterpretBits(infinity_bits_ - max_ulps_ - 1)),
        max_(Floating::Max()),
        nan1_(Floating::ReinterpretBits(Floating::kExponentBitMask | 1)),
        nan2_(Floating::ReinterpretBits(Floating::kExponentBitMask | 200)) {
  }

  void TestSize() {
    EXPECT_EQ(sizeof(RawType), sizeof(Bits));
  }

  // A battery of tests for FloatingEqMatcher::Matches.
  // matcher_maker is a pointer to a function which creates a FloatingEqMatcher.
  void TestMatches(
      testing::internal::FloatingEqMatcher<RawType> (*matcher_maker)(RawType)) {
    Matcher<RawType> m1 = matcher_maker(0.0);
    EXPECT_TRUE(m1.Matches(-0.0));
    EXPECT_TRUE(m1.Matches(close_to_positive_zero_));
    EXPECT_TRUE(m1.Matches(close_to_negative_zero_));
    EXPECT_FALSE(m1.Matches(1.0));

    Matcher<RawType> m2 = matcher_maker(close_to_positive_zero_);
    EXPECT_FALSE(m2.Matches(further_from_negative_zero_));

    Matcher<RawType> m3 = matcher_maker(1.0);
    EXPECT_TRUE(m3.Matches(close_to_one_));
    EXPECT_FALSE(m3.Matches(further_from_one_));

    // Test commutativity: matcher_maker(0.0).Matches(1.0) was tested above.
    EXPECT_FALSE(m3.Matches(0.0));

    Matcher<RawType> m4 = matcher_maker(-infinity_);
    EXPECT_TRUE(m4.Matches(-close_to_infinity_));

    Matcher<RawType> m5 = matcher_maker(infinity_);
    EXPECT_TRUE(m5.Matches(close_to_infinity_));

    // This is interesting as the representations of infinity_ and nan1_
    // are only 1 DLP apart.
    EXPECT_FALSE(m5.Matches(nan1_));

    // matcher_maker can produce a Matcher<const RawType&>, which is needed in
    // some cases.
    Matcher<const RawType&> m6 = matcher_maker(0.0);
    EXPECT_TRUE(m6.Matches(-0.0));
    EXPECT_TRUE(m6.Matches(close_to_positive_zero_));
    EXPECT_FALSE(m6.Matches(1.0));

    // matcher_maker can produce a Matcher<RawType&>, which is needed in some
    // cases.
    Matcher<RawType&> m7 = matcher_maker(0.0);
    RawType x = 0.0;
    EXPECT_TRUE(m7.Matches(x));
    x = 0.01f;
    EXPECT_FALSE(m7.Matches(x));
  }

  // Pre-calculated numbers to be used by the tests.

  const Bits max_ulps_;

  const Bits zero_bits_;  // The bits that represent 0.0.
  const Bits one_bits_;  // The bits that represent 1.0.
  const Bits infinity_bits_;  // The bits that represent +infinity.

  // Some numbers close to 0.0.
  const RawType close_to_positive_zero_;
  const RawType close_to_negative_zero_;
  const RawType further_from_negative_zero_;

  // Some numbers close to 1.0.
  const RawType close_to_one_;
  const RawType further_from_one_;

  // Some numbers close to +infinity.
  const RawType infinity_;
  const RawType close_to_infinity_;
  const RawType further_from_infinity_;

  // Maximum representable value that's not infinity.
  const RawType max_;

  // Some NaNs.
  const RawType nan1_;
  const RawType nan2_;
};

// Tests floating-point matchers with fixed epsilons.
template <typename RawType>
class FloatingPointNearTest : public FloatingPointTest<RawType> {
 protected:
  typedef FloatingPointTest<RawType> ParentType;

  // A battery of tests for FloatingEqMatcher::Matches with a fixed epsilon.
  // matcher_maker is a pointer to a function which creates a FloatingEqMatcher.
  void TestNearMatches(
      testing::internal::FloatingEqMatcher<RawType>
          (*matcher_maker)(RawType, RawType)) {
    Matcher<RawType> m1 = matcher_maker(0.0, 0.0);
    EXPECT_TRUE(m1.Matches(0.0));
    EXPECT_TRUE(m1.Matches(-0.0));
    EXPECT_FALSE(m1.Matches(ParentType::close_to_positive_zero_));
    EXPECT_FALSE(m1.Matches(ParentType::close_to_negative_zero_));
    EXPECT_FALSE(m1.Matches(1.0));

    Matcher<RawType> m2 = matcher_maker(0.0, 1.0);
    EXPECT_TRUE(m2.Matches(0.0));
    EXPECT_TRUE(m2.Matches(-0.0));
    EXPECT_TRUE(m2.Matches(1.0));
    EXPECT_TRUE(m2.Matches(-1.0));
    EXPECT_FALSE(m2.Matches(ParentType::close_to_one_));
    EXPECT_FALSE(m2.Matches(-ParentType::close_to_one_));

    // Check that inf matches inf, regardless of the of the specified max
    // absolute error.
    Matcher<RawType> m3 = matcher_maker(ParentType::infinity_, 0.0);
    EXPECT_TRUE(m3.Matches(ParentType::infinity_));
    EXPECT_FALSE(m3.Matches(ParentType::close_to_infinity_));
    EXPECT_FALSE(m3.Matches(-ParentType::infinity_));

    Matcher<RawType> m4 = matcher_maker(-ParentType::infinity_, 0.0);
    EXPECT_TRUE(m4.Matches(-ParentType::infinity_));
    EXPECT_FALSE(m4.Matches(-ParentType::close_to_infinity_));
    EXPECT_FALSE(m4.Matches(ParentType::infinity_));

    // Test various overflow scenarios.
    Matcher<RawType> m5 = matcher_maker(ParentType::max_, ParentType::max_);
    EXPECT_TRUE(m5.Matches(ParentType::max_));
    EXPECT_FALSE(m5.Matches(-ParentType::max_));

    Matcher<RawType> m6 = matcher_maker(-ParentType::max_, ParentType::max_);
    EXPECT_FALSE(m6.Matches(ParentType::max_));
    EXPECT_TRUE(m6.Matches(-ParentType::max_));

    Matcher<RawType> m7 = matcher_maker(ParentType::max_, 0);
    EXPECT_TRUE(m7.Matches(ParentType::max_));
    EXPECT_FALSE(m7.Matches(-ParentType::max_));

    Matcher<RawType> m8 = matcher_maker(-ParentType::max_, 0);
    EXPECT_FALSE(m8.Matches(ParentType::max_));
    EXPECT_TRUE(m8.Matches(-ParentType::max_));

    // The difference between max() and -max() normally overflows to infinity,
    // but it should still match if the max_abs_error is also infinity.
    Matcher<RawType> m9 = matcher_maker(
        ParentType::max_, ParentType::infinity_);
    EXPECT_TRUE(m8.Matches(-ParentType::max_));

    // matcher_maker can produce a Matcher<const RawType&>, which is needed in
    // some cases.
    Matcher<const RawType&> m10 = matcher_maker(0.0, 1.0);
    EXPECT_TRUE(m10.Matches(-0.0));
    EXPECT_TRUE(m10.Matches(ParentType::close_to_positive_zero_));
    EXPECT_FALSE(m10.Matches(ParentType::close_to_one_));

    // matcher_maker can produce a Matcher<RawType&>, which is needed in some
    // cases.
    Matcher<RawType&> m11 = matcher_maker(0.0, 1.0);
    RawType x = 0.0;
    EXPECT_TRUE(m11.Matches(x));
    x = 1.0f;
    EXPECT_TRUE(m11.Matches(x));
    x = -1.0f;
    EXPECT_TRUE(m11.Matches(x));
    x = 1.1f;
    EXPECT_FALSE(m11.Matches(x));
    x = -1.1f;
    EXPECT_FALSE(m11.Matches(x));
  }
};

// Instantiate FloatingPointTest for testing floats.
typedef FloatingPointTest<float> FloatTest;

TEST_F(FloatTest, FloatEqApproximatelyMatchesFloats) {
  TestMatches(&FloatEq);
}

TEST_F(FloatTest, NanSensitiveFloatEqApproximatelyMatchesFloats) {
  TestMatches(&NanSensitiveFloatEq);
}

TEST_F(FloatTest, FloatEqCannotMatchNaN) {
  // FloatEq never matches NaN.
  Matcher<float> m = FloatEq(nan1_);
  EXPECT_FALSE(m.Matches(nan1_));
  EXPECT_FALSE(m.Matches(nan2_));
  EXPECT_FALSE(m.Matches(1.0));
}

TEST_F(FloatTest, NanSensitiveFloatEqCanMatchNaN) {
  // NanSensitiveFloatEq will match NaN.
  Matcher<float> m = NanSensitiveFloatEq(nan1_);
  EXPECT_TRUE(m.Matches(nan1_));
  EXPECT_TRUE(m.Matches(nan2_));
  EXPECT_FALSE(m.Matches(1.0));
}

TEST_F(FloatTest, FloatEqCanDescribeSelf) {
  Matcher<float> m1 = FloatEq(2.0f);
  EXPECT_EQ("is approximately 2", Describe(m1));
  EXPECT_EQ("isn't approximately 2", DescribeNegation(m1));

  Matcher<float> m2 = FloatEq(0.5f);
  EXPECT_EQ("is approximately 0.5", Describe(m2));
  EXPECT_EQ("isn't approximately 0.5", DescribeNegation(m2));

  Matcher<float> m3 = FloatEq(nan1_);
  EXPECT_EQ("never matches", Describe(m3));
  EXPECT_EQ("is anything", DescribeNegation(m3));
}

TEST_F(FloatTest, NanSensitiveFloatEqCanDescribeSelf) {
  Matcher<float> m1 = NanSensitiveFloatEq(2.0f);
  EXPECT_EQ("is approximately 2", Describe(m1));
  EXPECT_EQ("isn't approximately 2", DescribeNegation(m1));

  Matcher<float> m2 = NanSensitiveFloatEq(0.5f);
  EXPECT_EQ("is approximately 0.5", Describe(m2));
  EXPECT_EQ("isn't approximately 0.5", DescribeNegation(m2));

  Matcher<float> m3 = NanSensitiveFloatEq(nan1_);
  EXPECT_EQ("is NaN", Describe(m3));
  EXPECT_EQ("isn't NaN", DescribeNegation(m3));
}

// Instantiate FloatingPointTest for testing floats with a user-specified
// max absolute error.
typedef FloatingPointNearTest<float> FloatNearTest;

TEST_F(FloatNearTest, FloatNearMatches) {
  TestNearMatches(&FloatNear);
}

TEST_F(FloatNearTest, NanSensitiveFloatNearApproximatelyMatchesFloats) {
  TestNearMatches(&NanSensitiveFloatNear);
}

TEST_F(FloatNearTest, FloatNearCanDescribeSelf) {
  Matcher<float> m1 = FloatNear(2.0f, 0.5f);
  EXPECT_EQ("is approximately 2 (absolute error <= 0.5)", Describe(m1));
  EXPECT_EQ(
      "isn't approximately 2 (absolute error > 0.5)", DescribeNegation(m1));

  Matcher<float> m2 = FloatNear(0.5f, 0.5f);
  EXPECT_EQ("is approximately 0.5 (absolute error <= 0.5)", Describe(m2));
  EXPECT_EQ(
      "isn't approximately 0.5 (absolute error > 0.5)", DescribeNegation(m2));

  Matcher<float> m3 = FloatNear(nan1_, 0.0);
  EXPECT_EQ("never matches", Describe(m3));
  EXPECT_EQ("is anything", DescribeNegation(m3));
}

TEST_F(FloatNearTest, NanSensitiveFloatNearCanDescribeSelf) {
  Matcher<float> m1 = NanSensitiveFloatNear(2.0f, 0.5f);
  EXPECT_EQ("is approximately 2 (absolute error <= 0.5)", Describe(m1));
  EXPECT_EQ(
      "isn't approximately 2 (absolute error > 0.5)", DescribeNegation(m1));

  Matcher<float> m2 = NanSensitiveFloatNear(0.5f, 0.5f);
  EXPECT_EQ("is approximately 0.5 (absolute error <= 0.5)", Describe(m2));
  EXPECT_EQ(
      "isn't approximately 0.5 (absolute error > 0.5)", DescribeNegation(m2));

  Matcher<float> m3 = NanSensitiveFloatNear(nan1_, 0.1f);
  EXPECT_EQ("is NaN", Describe(m3));
  EXPECT_EQ("isn't NaN", DescribeNegation(m3));
}

TEST_F(FloatNearTest, FloatNearCannotMatchNaN) {
  // FloatNear never matches NaN.
  Matcher<float> m = FloatNear(ParentType::nan1_, 0.1f);
  EXPECT_FALSE(m.Matches(nan1_));
  EXPECT_FALSE(m.Matches(nan2_));
  EXPECT_FALSE(m.Matches(1.0));
}

TEST_F(FloatNearTest, NanSensitiveFloatNearCanMatchNaN) {
  // NanSensitiveFloatNear will match NaN.
  Matcher<float> m = NanSensitiveFloatNear(nan1_, 0.1f);
  EXPECT_TRUE(m.Matches(nan1_));
  EXPECT_TRUE(m.Matches(nan2_));
  EXPECT_FALSE(m.Matches(1.0));
}

// Instantiate FloatingPointTest for testing doubles.
typedef FloatingPointTest<double> DoubleTest;

TEST_F(DoubleTest, DoubleEqApproximatelyMatchesDoubles) {
  TestMatches(&DoubleEq);
}

TEST_F(DoubleTest, NanSensitiveDoubleEqApproximatelyMatchesDoubles) {
  TestMatches(&NanSensitiveDoubleEq);
}

TEST_F(DoubleTest, DoubleEqCannotMatchNaN) {
  // DoubleEq never matches NaN.
  Matcher<double> m = DoubleEq(nan1_);
  EXPECT_FALSE(m.Matches(nan1_));
  EXPECT_FALSE(m.Matches(nan2_));
  EXPECT_FALSE(m.Matches(1.0));
}

TEST_F(DoubleTest, NanSensitiveDoubleEqCanMatchNaN) {
  // NanSensitiveDoubleEq will match NaN.
  Matcher<double> m = NanSensitiveDoubleEq(nan1_);
  EXPECT_TRUE(m.Matches(nan1_));
  EXPECT_TRUE(m.Matches(nan2_));
  EXPECT_FALSE(m.Matches(1.0));
}

TEST_F(DoubleTest, DoubleEqCanDescribeSelf) {
  Matcher<double> m1 = DoubleEq(2.0);
  EXPECT_EQ("is approximately 2", Describe(m1));
  EXPECT_EQ("isn't approximately 2", DescribeNegation(m1));

  Matcher<double> m2 = DoubleEq(0.5);
  EXPECT_EQ("is approximately 0.5", Describe(m2));
  EXPECT_EQ("isn't approximately 0.5", DescribeNegation(m2));

  Matcher<double> m3 = DoubleEq(nan1_);
  EXPECT_EQ("never matches", Describe(m3));
  EXPECT_EQ("is anything", DescribeNegation(m3));
}

TEST_F(DoubleTest, NanSensitiveDoubleEqCanDescribeSelf) {
  Matcher<double> m1 = NanSensitiveDoubleEq(2.0);
  EXPECT_EQ("is approximately 2", Describe(m1));
  EXPECT_EQ("isn't approximately 2", DescribeNegation(m1));

  Matcher<double> m2 = NanSensitiveDoubleEq(0.5);
  EXPECT_EQ("is approximately 0.5", Describe(m2));
  EXPECT_EQ("isn't approximately 0.5", DescribeNegation(m2));

  Matcher<double> m3 = NanSensitiveDoubleEq(nan1_);
  EXPECT_EQ("is NaN", Describe(m3));
  EXPECT_EQ("isn't NaN", DescribeNegation(m3));
}

// Instantiate FloatingPointTest for testing floats with a user-specified
// max absolute error.
typedef FloatingPointNearTest<double> DoubleNearTest;

TEST_F(DoubleNearTest, DoubleNearMatches) {
  TestNearMatches(&DoubleNear);
}

TEST_F(DoubleNearTest, NanSensitiveDoubleNearApproximatelyMatchesDoubles) {
  TestNearMatches(&NanSensitiveDoubleNear);
}

TEST_F(DoubleNearTest, DoubleNearCanDescribeSelf) {
  Matcher<double> m1 = DoubleNear(2.0, 0.5);
  EXPECT_EQ("is approximately 2 (absolute error <= 0.5)", Describe(m1));
  EXPECT_EQ(
      "isn't approximately 2 (absolute error > 0.5)", DescribeNegation(m1));

  Matcher<double> m2 = DoubleNear(0.5, 0.5);
  EXPECT_EQ("is approximately 0.5 (absolute error <= 0.5)", Describe(m2));
  EXPECT_EQ(
      "isn't approximately 0.5 (absolute error > 0.5)", DescribeNegation(m2));

  Matcher<double> m3 = DoubleNear(nan1_, 0.0);
  EXPECT_EQ("never matches", Describe(m3));
  EXPECT_EQ("is anything", DescribeNegation(m3));
}

TEST_F(DoubleNearTest, ExplainsResultWhenMatchFails) {
  EXPECT_EQ("", Explain(DoubleNear(2.0, 0.1), 2.05));
  EXPECT_EQ("which is 0.2 from 2", Explain(DoubleNear(2.0, 0.1), 2.2));
  EXPECT_EQ("which is -0.3 from 2", Explain(DoubleNear(2.0, 0.1), 1.7));

  const std::string explanation =
      Explain(DoubleNear(2.1, 1e-10), 2.1 + 1.2e-10);
  // Different C++ implementations may print floating-point numbers
  // slightly differently.
  EXPECT_TRUE(explanation == "which is 1.2e-10 from 2.1" ||  // GCC
              explanation == "which is 1.2e-010 from 2.1")   // MSVC
      << " where explanation is \"" << explanation << "\".";
}

TEST_F(DoubleNearTest, NanSensitiveDoubleNearCanDescribeSelf) {
  Matcher<double> m1 = NanSensitiveDoubleNear(2.0, 0.5);
  EXPECT_EQ("is approximately 2 (absolute error <= 0.5)", Describe(m1));
  EXPECT_EQ(
      "isn't approximately 2 (absolute error > 0.5)", DescribeNegation(m1));

  Matcher<double> m2 = NanSensitiveDoubleNear(0.5, 0.5);
  EXPECT_EQ("is approximately 0.5 (absolute error <= 0.5)", Describe(m2));
  EXPECT_EQ(
      "isn't approximately 0.5 (absolute error > 0.5)", DescribeNegation(m2));

  Matcher<double> m3 = NanSensitiveDoubleNear(nan1_, 0.1);
  EXPECT_EQ("is NaN", Describe(m3));
  EXPECT_EQ("isn't NaN", DescribeNegation(m3));
}

TEST_F(DoubleNearTest, DoubleNearCannotMatchNaN) {
  // DoubleNear never matches NaN.
  Matcher<double> m = DoubleNear(ParentType::nan1_, 0.1);
  EXPECT_FALSE(m.Matches(nan1_));
  EXPECT_FALSE(m.Matches(nan2_));
  EXPECT_FALSE(m.Matches(1.0));
}

TEST_F(DoubleNearTest, NanSensitiveDoubleNearCanMatchNaN) {
  // NanSensitiveDoubleNear will match NaN.
  Matcher<double> m = NanSensitiveDoubleNear(nan1_, 0.1);
  EXPECT_TRUE(m.Matches(nan1_));
  EXPECT_TRUE(m.Matches(nan2_));
  EXPECT_FALSE(m.Matches(1.0));
}

TEST(PointeeTest, RawPointer) {
  const Matcher<int*> m = Pointee(Ge(0));

  int n = 1;
  EXPECT_TRUE(m.Matches(&n));
  n = -1;
  EXPECT_FALSE(m.Matches(&n));
  EXPECT_FALSE(m.Matches(nullptr));
}

TEST(PointeeTest, RawPointerToConst) {
  const Matcher<const double*> m = Pointee(Ge(0));

  double x = 1;
  EXPECT_TRUE(m.Matches(&x));
  x = -1;
  EXPECT_FALSE(m.Matches(&x));
  EXPECT_FALSE(m.Matches(nullptr));
}

TEST(PointeeTest, ReferenceToConstRawPointer) {
  const Matcher<int* const &> m = Pointee(Ge(0));

  int n = 1;
  EXPECT_TRUE(m.Matches(&n));
  n = -1;
  EXPECT_FALSE(m.Matches(&n));
  EXPECT_FALSE(m.Matches(nullptr));
}

TEST(PointeeTest, ReferenceToNonConstRawPointer) {
  const Matcher<double* &> m = Pointee(Ge(0));

  double x = 1.0;
  double* p = &x;
  EXPECT_TRUE(m.Matches(p));
  x = -1;
  EXPECT_FALSE(m.Matches(p));
  p = nullptr;
  EXPECT_FALSE(m.Matches(p));
}

MATCHER_P(FieldIIs, inner_matcher, "") {
  return ExplainMatchResult(inner_matcher, arg.i, result_listener);
}

#if GTEST_HAS_RTTI
TEST(WhenDynamicCastToTest, SameType) {
  Derived derived;
  derived.i = 4;

  // Right type. A pointer is passed down.
  Base* as_base_ptr = &derived;
  EXPECT_THAT(as_base_ptr, WhenDynamicCastTo<Derived*>(Not(IsNull())));
  EXPECT_THAT(as_base_ptr, WhenDynamicCastTo<Derived*>(Pointee(FieldIIs(4))));
  EXPECT_THAT(as_base_ptr,
              Not(WhenDynamicCastTo<Derived*>(Pointee(FieldIIs(5)))));
}

TEST(WhenDynamicCastToTest, WrongTypes) {
  Base base;
  Derived derived;
  OtherDerived other_derived;

  // Wrong types. NULL is passed.
  EXPECT_THAT(&base, Not(WhenDynamicCastTo<Derived*>(Pointee(_))));
  EXPECT_THAT(&base, WhenDynamicCastTo<Derived*>(IsNull()));
  Base* as_base_ptr = &derived;
  EXPECT_THAT(as_base_ptr, Not(WhenDynamicCastTo<OtherDerived*>(Pointee(_))));
  EXPECT_THAT(as_base_ptr, WhenDynamicCastTo<OtherDerived*>(IsNull()));
  as_base_ptr = &other_derived;
  EXPECT_THAT(as_base_ptr, Not(WhenDynamicCastTo<Derived*>(Pointee(_))));
  EXPECT_THAT(as_base_ptr, WhenDynamicCastTo<Derived*>(IsNull()));
}

TEST(WhenDynamicCastToTest, AlreadyNull) {
  // Already NULL.
  Base* as_base_ptr = nullptr;
  EXPECT_THAT(as_base_ptr, WhenDynamicCastTo<Derived*>(IsNull()));
}

struct AmbiguousCastTypes {
  class VirtualDerived : public virtual Base {};
  class DerivedSub1 : public VirtualDerived {};
  class DerivedSub2 : public VirtualDerived {};
  class ManyDerivedInHierarchy : public DerivedSub1, public DerivedSub2 {};
};

TEST(WhenDynamicCastToTest, AmbiguousCast) {
  AmbiguousCastTypes::DerivedSub1 sub1;
  AmbiguousCastTypes::ManyDerivedInHierarchy many_derived;
  // Multiply derived from Base. dynamic_cast<> returns NULL.
  Base* as_base_ptr =
      static_cast<AmbiguousCastTypes::DerivedSub1*>(&many_derived);
  EXPECT_THAT(as_base_ptr,
              WhenDynamicCastTo<AmbiguousCastTypes::VirtualDerived*>(IsNull()));
  as_base_ptr = &sub1;
  EXPECT_THAT(
      as_base_ptr,
      WhenDynamicCastTo<AmbiguousCastTypes::VirtualDerived*>(Not(IsNull())));
}

TEST(WhenDynamicCastToTest, Describe) {
  Matcher<Base*> matcher = WhenDynamicCastTo<Derived*>(Pointee(_));
  const std::string prefix =
      "when dynamic_cast to " + internal::GetTypeName<Derived*>() + ", ";
  EXPECT_EQ(prefix + "points to a value that is anything", Describe(matcher));
  EXPECT_EQ(prefix + "does not point to a value that is anything",
            DescribeNegation(matcher));
}

TEST(WhenDynamicCastToTest, Explain) {
  Matcher<Base*> matcher = WhenDynamicCastTo<Derived*>(Pointee(_));
  Base* null = nullptr;
  EXPECT_THAT(Explain(matcher, null), HasSubstr("NULL"));
  Derived derived;
  EXPECT_TRUE(matcher.Matches(&derived));
  EXPECT_THAT(Explain(matcher, &derived), HasSubstr("which points to "));

  // With references, the matcher itself can fail. Test for that one.
  Matcher<const Base&> ref_matcher = WhenDynamicCastTo<const OtherDerived&>(_);
  EXPECT_THAT(Explain(ref_matcher, derived),
              HasSubstr("which cannot be dynamic_cast"));
}

TEST(WhenDynamicCastToTest, GoodReference) {
  Derived derived;
  derived.i = 4;
  Base& as_base_ref = derived;
  EXPECT_THAT(as_base_ref, WhenDynamicCastTo<const Derived&>(FieldIIs(4)));
  EXPECT_THAT(as_base_ref, WhenDynamicCastTo<const Derived&>(Not(FieldIIs(5))));
}

TEST(WhenDynamicCastToTest, BadReference) {
  Derived derived;
  Base& as_base_ref = derived;
  EXPECT_THAT(as_base_ref, Not(WhenDynamicCastTo<const OtherDerived&>(_)));
}
#endif  // GTEST_HAS_RTTI

// Minimal const-propagating pointer.
template <typename T>
class ConstPropagatingPtr {
 public:
  typedef T element_type;

  ConstPropagatingPtr() : val_() {}
  explicit ConstPropagatingPtr(T* t) : val_(t) {}
  ConstPropagatingPtr(const ConstPropagatingPtr& other) : val_(other.val_) {}

  T* get() { return val_; }
  T& operator*() { return *val_; }
  // Most smart pointers return non-const T* and T& from the next methods.
  const T* get() const { return val_; }
  const T& operator*() const { return *val_; }

 private:
  T* val_;
};

TEST(PointeeTest, WorksWithConstPropagatingPointers) {
  const Matcher< ConstPropagatingPtr<int> > m = Pointee(Lt(5));
  int three = 3;
  const ConstPropagatingPtr<int> co(&three);
  ConstPropagatingPtr<int> o(&three);
  EXPECT_TRUE(m.Matches(o));
  EXPECT_TRUE(m.Matches(co));
  *o = 6;
  EXPECT_FALSE(m.Matches(o));
  EXPECT_FALSE(m.Matches(ConstPropagatingPtr<int>()));
}

TEST(PointeeTest, NeverMatchesNull) {
  const Matcher<const char*> m = Pointee(_);
  EXPECT_FALSE(m.Matches(nullptr));
}

// Tests that we can write Pointee(value) instead of Pointee(Eq(value)).
TEST(PointeeTest, MatchesAgainstAValue) {
  const Matcher<int*> m = Pointee(5);

  int n = 5;
  EXPECT_TRUE(m.Matches(&n));
  n = -1;
  EXPECT_FALSE(m.Matches(&n));
  EXPECT_FALSE(m.Matches(nullptr));
}

TEST(PointeeTest, CanDescribeSelf) {
  const Matcher<int*> m = Pointee(Gt(3));
  EXPECT_EQ("points to a value that is > 3", Describe(m));
  EXPECT_EQ("does not point to a value that is > 3",
            DescribeNegation(m));
}

TEST(PointeeTest, CanExplainMatchResult) {
  const Matcher<const std::string*> m = Pointee(StartsWith("Hi"));

  EXPECT_EQ("", Explain(m, static_cast<const std::string*>(nullptr)));

  const Matcher<long*> m2 = Pointee(GreaterThan(1));  // NOLINT
  long n = 3;  // NOLINT
  EXPECT_EQ("which points to 3" + OfType("long") + ", which is 2 more than 1",
            Explain(m2, &n));
}

TEST(PointeeTest, AlwaysExplainsPointee) {
  const Matcher<int*> m = Pointee(0);
  int n = 42;
  EXPECT_EQ("which points to 42" + OfType("int"), Explain(m, &n));
}

// An uncopyable class.
class Uncopyable {
 public:
  Uncopyable() : value_(-1) {}
  explicit Uncopyable(int a_value) : value_(a_value) {}

  int value() const { return value_; }
  void set_value(int i) { value_ = i; }

 private:
  int value_;
  GTEST_DISALLOW_COPY_AND_ASSIGN_(Uncopyable);
};

// Returns true if and only if x.value() is positive.
bool ValueIsPositive(const Uncopyable& x) { return x.value() > 0; }

MATCHER_P(UncopyableIs, inner_matcher, "") {
  return ExplainMatchResult(inner_matcher, arg.value(), result_listener);
}

// A user-defined struct for testing Field().
struct AStruct {
  AStruct() : x(0), y(1.0), z(5), p(nullptr) {}
  AStruct(const AStruct& rhs)
      : x(rhs.x), y(rhs.y), z(rhs.z.value()), p(rhs.p) {}

  int x;           // A non-const field.
  const double y;  // A const field.
  Uncopyable z;    // An uncopyable field.
  const char* p;   // A pointer field.

 private:
  GTEST_DISALLOW_ASSIGN_(AStruct);
};

// A derived struct for testing Field().
struct DerivedStruct : public AStruct {
  char ch;

 private:
  GTEST_DISALLOW_ASSIGN_(DerivedStruct);
};

// Tests that Field(&Foo::field, ...) works when field is non-const.
TEST(FieldTest, WorksForNonConstField) {
  Matcher<AStruct> m = Field(&AStruct::x, Ge(0));
  Matcher<AStruct> m_with_name = Field("x", &AStruct::x, Ge(0));

  AStruct a;
  EXPECT_TRUE(m.Matches(a));
  EXPECT_TRUE(m_with_name.Matches(a));
  a.x = -1;
  EXPECT_FALSE(m.Matches(a));
  EXPECT_FALSE(m_with_name.Matches(a));
}

// Tests that Field(&Foo::field, ...) works when field is const.
TEST(FieldTest, WorksForConstField) {
  AStruct a;

  Matcher<AStruct> m = Field(&AStruct::y, Ge(0.0));
  Matcher<AStruct> m_with_name = Field("y", &AStruct::y, Ge(0.0));
  EXPECT_TRUE(m.Matches(a));
  EXPECT_TRUE(m_with_name.Matches(a));
  m = Field(&AStruct::y, Le(0.0));
  m_with_name = Field("y", &AStruct::y, Le(0.0));
  EXPECT_FALSE(m.Matches(a));
  EXPECT_FALSE(m_with_name.Matches(a));
}

// Tests that Field(&Foo::field, ...) works when field is not copyable.
TEST(FieldTest, WorksForUncopyableField) {
  AStruct a;

  Matcher<AStruct> m = Field(&AStruct::z, Truly(ValueIsPositive));
  EXPECT_TRUE(m.Matches(a));
  m = Field(&AStruct::z, Not(Truly(ValueIsPositive)));
  EXPECT_FALSE(m.Matches(a));
}

// Tests that Field(&Foo::field, ...) works when field is a pointer.
TEST(FieldTest, WorksForPointerField) {
  // Matching against NULL.
  Matcher<AStruct> m = Field(&AStruct::p, static_cast<const char*>(nullptr));
  AStruct a;
  EXPECT_TRUE(m.Matches(a));
  a.p = "hi";
  EXPECT_FALSE(m.Matches(a));

  // Matching a pointer that is not NULL.
  m = Field(&AStruct::p, StartsWith("hi"));
  a.p = "hill";
  EXPECT_TRUE(m.Matches(a));
  a.p = "hole";
  EXPECT_FALSE(m.Matches(a));
}

// Tests that Field() works when the object is passed by reference.
TEST(FieldTest, WorksForByRefArgument) {
  Matcher<const AStruct&> m = Field(&AStruct::x, Ge(0));

  AStruct a;
  EXPECT_TRUE(m.Matches(a));
  a.x = -1;
  EXPECT_FALSE(m.Matches(a));
}

// Tests that Field(&Foo::field, ...) works when the argument's type
// is a sub-type of Foo.
TEST(FieldTest, WorksForArgumentOfSubType) {
  // Note that the matcher expects DerivedStruct but we say AStruct
  // inside Field().
  Matcher<const DerivedStruct&> m = Field(&AStruct::x, Ge(0));

  DerivedStruct d;
  EXPECT_TRUE(m.Matches(d));
  d.x = -1;
  EXPECT_FALSE(m.Matches(d));
}

// Tests that Field(&Foo::field, m) works when field's type and m's
// argument type are compatible but not the same.
TEST(FieldTest, WorksForCompatibleMatcherType) {
  // The field is an int, but the inner matcher expects a signed char.
  Matcher<const AStruct&> m = Field(&AStruct::x,
                                    Matcher<signed char>(Ge(0)));

  AStruct a;
  EXPECT_TRUE(m.Matches(a));
  a.x = -1;
  EXPECT_FALSE(m.Matches(a));
}

// Tests that Field() can describe itself.
TEST(FieldTest, CanDescribeSelf) {
  Matcher<const AStruct&> m = Field(&AStruct::x, Ge(0));

  EXPECT_EQ("is an object whose given field is >= 0", Describe(m));
  EXPECT_EQ("is an object whose given field isn't >= 0", DescribeNegation(m));
}

TEST(FieldTest, CanDescribeSelfWithFieldName) {
  Matcher<const AStruct&> m = Field("field_name", &AStruct::x, Ge(0));

  EXPECT_EQ("is an object whose field `field_name` is >= 0", Describe(m));
  EXPECT_EQ("is an object whose field `field_name` isn't >= 0",
            DescribeNegation(m));
}

// Tests that Field() can explain the match result.
TEST(FieldTest, CanExplainMatchResult) {
  Matcher<const AStruct&> m = Field(&AStruct::x, Ge(0));

  AStruct a;
  a.x = 1;
  EXPECT_EQ("whose given field is 1" + OfType("int"), Explain(m, a));

  m = Field(&AStruct::x, GreaterThan(0));
  EXPECT_EQ(
      "whose given field is 1" + OfType("int") + ", which is 1 more than 0",
      Explain(m, a));
}

TEST(FieldTest, CanExplainMatchResultWithFieldName) {
  Matcher<const AStruct&> m = Field("field_name", &AStruct::x, Ge(0));

  AStruct a;
  a.x = 1;
  EXPECT_EQ("whose field `field_name` is 1" + OfType("int"), Explain(m, a));

  m = Field("field_name", &AStruct::x, GreaterThan(0));
  EXPECT_EQ("whose field `field_name` is 1" + OfType("int") +
                ", which is 1 more than 0",
            Explain(m, a));
}

// Tests that Field() works when the argument is a pointer to const.
TEST(FieldForPointerTest, WorksForPointerToConst) {
  Matcher<const AStruct*> m = Field(&AStruct::x, Ge(0));

  AStruct a;
  EXPECT_TRUE(m.Matches(&a));
  a.x = -1;
  EXPECT_FALSE(m.Matches(&a));
}

// Tests that Field() works when the argument is a pointer to non-const.
TEST(FieldForPointerTest, WorksForPointerToNonConst) {
  Matcher<AStruct*> m = Field(&AStruct::x, Ge(0));

  AStruct a;
  EXPECT_TRUE(m.Matches(&a));
  a.x = -1;
  EXPECT_FALSE(m.Matches(&a));
}

// Tests that Field() works when the argument is a reference to a const pointer.
TEST(FieldForPointerTest, WorksForReferenceToConstPointer) {
  Matcher<AStruct* const&> m = Field(&AStruct::x, Ge(0));

  AStruct a;
  EXPECT_TRUE(m.Matches(&a));
  a.x = -1;
  EXPECT_FALSE(m.Matches(&a));
}

// Tests that Field() does not match the NULL pointer.
TEST(FieldForPointerTest, DoesNotMatchNull) {
  Matcher<const AStruct*> m = Field(&AStruct::x, _);
  EXPECT_FALSE(m.Matches(nullptr));
}

// Tests that Field(&Foo::field, ...) works when the argument's type
// is a sub-type of const Foo*.
TEST(FieldForPointerTest, WorksForArgumentOfSubType) {
  // Note that the matcher expects DerivedStruct but we say AStruct
  // inside Field().
  Matcher<DerivedStruct*> m = Field(&AStruct::x, Ge(0));

  DerivedStruct d;
  EXPECT_TRUE(m.Matches(&d));
  d.x = -1;
  EXPECT_FALSE(m.Matches(&d));
}

// Tests that Field() can describe itself when used to match a pointer.
TEST(FieldForPointerTest, CanDescribeSelf) {
  Matcher<const AStruct*> m = Field(&AStruct::x, Ge(0));

  EXPECT_EQ("is an object whose given field is >= 0", Describe(m));
  EXPECT_EQ("is an object whose given field isn't >= 0", DescribeNegation(m));
}

TEST(FieldForPointerTest, CanDescribeSelfWithFieldName) {
  Matcher<const AStruct*> m = Field("field_name", &AStruct::x, Ge(0));

  EXPECT_EQ("is an object whose field `field_name` is >= 0", Describe(m));
  EXPECT_EQ("is an object whose field `field_name` isn't >= 0",
            DescribeNegation(m));
}

// Tests that Field() can explain the result of matching a pointer.
TEST(FieldForPointerTest, CanExplainMatchResult) {
  Matcher<const AStruct*> m = Field(&AStruct::x, Ge(0));

  AStruct a;
  a.x = 1;
  EXPECT_EQ("", Explain(m, static_cast<const AStruct*>(nullptr)));
  EXPECT_EQ("which points to an object whose given field is 1" + OfType("int"),
            Explain(m, &a));

  m = Field(&AStruct::x, GreaterThan(0));
  EXPECT_EQ("which points to an object whose given field is 1" + OfType("int") +
            ", which is 1 more than 0", Explain(m, &a));
}

TEST(FieldForPointerTest, CanExplainMatchResultWithFieldName) {
  Matcher<const AStruct*> m = Field("field_name", &AStruct::x, Ge(0));

  AStruct a;
  a.x = 1;
  EXPECT_EQ("", Explain(m, static_cast<const AStruct*>(nullptr)));
  EXPECT_EQ(
      "which points to an object whose field `field_name` is 1" + OfType("int"),
      Explain(m, &a));

  m = Field("field_name", &AStruct::x, GreaterThan(0));
  EXPECT_EQ("which points to an object whose field `field_name` is 1" +
                OfType("int") + ", which is 1 more than 0",
            Explain(m, &a));
}

// A user-defined class for testing Property().
class AClass {
 public:
  AClass() : n_(0) {}

  // A getter that returns a non-reference.
  int n() const { return n_; }

  void set_n(int new_n) { n_ = new_n; }

  // A getter that returns a reference to const.
  const std::string& s() const { return s_; }

  const std::string& s_ref() const & { return s_; }

  void set_s(const std::string& new_s) { s_ = new_s; }

  // A getter that returns a reference to non-const.
  double& x() const { return x_; }

 private:
  int n_;
  std::string s_;

  static double x_;
};

double AClass::x_ = 0.0;

// A derived class for testing Property().
class DerivedClass : public AClass {
 public:
  int k() const { return k_; }
 private:
  int k_;
};

// Tests that Property(&Foo::property, ...) works when property()
// returns a non-reference.
TEST(PropertyTest, WorksForNonReferenceProperty) {
  Matcher<const AClass&> m = Property(&AClass::n, Ge(0));
  Matcher<const AClass&> m_with_name = Property("n", &AClass::n, Ge(0));

  AClass a;
  a.set_n(1);
  EXPECT_TRUE(m.Matches(a));
  EXPECT_TRUE(m_with_name.Matches(a));

  a.set_n(-1);
  EXPECT_FALSE(m.Matches(a));
  EXPECT_FALSE(m_with_name.Matches(a));
}

// Tests that Property(&Foo::property, ...) works when property()
// returns a reference to const.
TEST(PropertyTest, WorksForReferenceToConstProperty) {
  Matcher<const AClass&> m = Property(&AClass::s, StartsWith("hi"));
  Matcher<const AClass&> m_with_name =
      Property("s", &AClass::s, StartsWith("hi"));

  AClass a;
  a.set_s("hill");
  EXPECT_TRUE(m.Matches(a));
  EXPECT_TRUE(m_with_name.Matches(a));

  a.set_s("hole");
  EXPECT_FALSE(m.Matches(a));
  EXPECT_FALSE(m_with_name.Matches(a));
}

// Tests that Property(&Foo::property, ...) works when property() is
// ref-qualified.
TEST(PropertyTest, WorksForRefQualifiedProperty) {
  Matcher<const AClass&> m = Property(&AClass::s_ref, StartsWith("hi"));
  Matcher<const AClass&> m_with_name =
      Property("s", &AClass::s_ref, StartsWith("hi"));

  AClass a;
  a.set_s("hill");
  EXPECT_TRUE(m.Matches(a));
  EXPECT_TRUE(m_with_name.Matches(a));

  a.set_s("hole");
  EXPECT_FALSE(m.Matches(a));
  EXPECT_FALSE(m_with_name.Matches(a));
}

// Tests that Property(&Foo::property, ...) works when property()
// returns a reference to non-const.
TEST(PropertyTest, WorksForReferenceToNonConstProperty) {
  double x = 0.0;
  AClass a;

  Matcher<const AClass&> m = Property(&AClass::x, Ref(x));
  EXPECT_FALSE(m.Matches(a));

  m = Property(&AClass::x, Not(Ref(x)));
  EXPECT_TRUE(m.Matches(a));
}

// Tests that Property(&Foo::property, ...) works when the argument is
// passed by value.
TEST(PropertyTest, WorksForByValueArgument) {
  Matcher<AClass> m = Property(&AClass::s, StartsWith("hi"));

  AClass a;
  a.set_s("hill");
  EXPECT_TRUE(m.Matches(a));

  a.set_s("hole");
  EXPECT_FALSE(m.Matches(a));
}

// Tests that Property(&Foo::property, ...) works when the argument's
// type is a sub-type of Foo.
TEST(PropertyTest, WorksForArgumentOfSubType) {
  // The matcher expects a DerivedClass, but inside the Property() we
  // say AClass.
  Matcher<const DerivedClass&> m = Property(&AClass::n, Ge(0));

  DerivedClass d;
  d.set_n(1);
  EXPECT_TRUE(m.Matches(d));

  d.set_n(-1);
  EXPECT_FALSE(m.Matches(d));
}

// Tests that Property(&Foo::property, m) works when property()'s type
// and m's argument type are compatible but different.
TEST(PropertyTest, WorksForCompatibleMatcherType) {
  // n() returns an int but the inner matcher expects a signed char.
  Matcher<const AClass&> m = Property(&AClass::n,
                                      Matcher<signed char>(Ge(0)));

  Matcher<const AClass&> m_with_name =
      Property("n", &AClass::n, Matcher<signed char>(Ge(0)));

  AClass a;
  EXPECT_TRUE(m.Matches(a));
  EXPECT_TRUE(m_with_name.Matches(a));
  a.set_n(-1);
  EXPECT_FALSE(m.Matches(a));
  EXPECT_FALSE(m_with_name.Matches(a));
}

// Tests that Property() can describe itself.
TEST(PropertyTest, CanDescribeSelf) {
  Matcher<const AClass&> m = Property(&AClass::n, Ge(0));

  EXPECT_EQ("is an object whose given property is >= 0", Describe(m));
  EXPECT_EQ("is an object whose given property isn't >= 0",
            DescribeNegation(m));
}

TEST(PropertyTest, CanDescribeSelfWithPropertyName) {
  Matcher<const AClass&> m = Property("fancy_name", &AClass::n, Ge(0));

  EXPECT_EQ("is an object whose property `fancy_name` is >= 0", Describe(m));
  EXPECT_EQ("is an object whose property `fancy_name` isn't >= 0",
            DescribeNegation(m));
}

// Tests that Property() can explain the match result.
TEST(PropertyTest, CanExplainMatchResult) {
  Matcher<const AClass&> m = Property(&AClass::n, Ge(0));

  AClass a;
  a.set_n(1);
  EXPECT_EQ("whose given property is 1" + OfType("int"), Explain(m, a));

  m = Property(&AClass::n, GreaterThan(0));
  EXPECT_EQ(
      "whose given property is 1" + OfType("int") + ", which is 1 more than 0",
      Explain(m, a));
}

TEST(PropertyTest, CanExplainMatchResultWithPropertyName) {
  Matcher<const AClass&> m = Property("fancy_name", &AClass::n, Ge(0));

  AClass a;
  a.set_n(1);
  EXPECT_EQ("whose property `fancy_name` is 1" + OfType("int"), Explain(m, a));

  m = Property("fancy_name", &AClass::n, GreaterThan(0));
  EXPECT_EQ("whose property `fancy_name` is 1" + OfType("int") +
                ", which is 1 more than 0",
            Explain(m, a));
}

// Tests that Property() works when the argument is a pointer to const.
TEST(PropertyForPointerTest, WorksForPointerToConst) {
  Matcher<const AClass*> m = Property(&AClass::n, Ge(0));

  AClass a;
  a.set_n(1);
  EXPECT_TRUE(m.Matches(&a));

  a.set_n(-1);
  EXPECT_FALSE(m.Matches(&a));
}

// Tests that Property() works when the argument is a pointer to non-const.
TEST(PropertyForPointerTest, WorksForPointerToNonConst) {
  Matcher<AClass*> m = Property(&AClass::s, StartsWith("hi"));

  AClass a;
  a.set_s("hill");
  EXPECT_TRUE(m.Matches(&a));

  a.set_s("hole");
  EXPECT_FALSE(m.Matches(&a));
}

// Tests that Property() works when the argument is a reference to a
// const pointer.
TEST(PropertyForPointerTest, WorksForReferenceToConstPointer) {
  Matcher<AClass* const&> m = Property(&AClass::s, StartsWith("hi"));

  AClass a;
  a.set_s("hill");
  EXPECT_TRUE(m.Matches(&a));

  a.set_s("hole");
  EXPECT_FALSE(m.Matches(&a));
}

// Tests that Property() does not match the NULL pointer.
TEST(PropertyForPointerTest, WorksForReferenceToNonConstProperty) {
  Matcher<const AClass*> m = Property(&AClass::x, _);
  EXPECT_FALSE(m.Matches(nullptr));
}

// Tests that Property(&Foo::property, ...) works when the argument's
// type is a sub-type of const Foo*.
TEST(PropertyForPointerTest, WorksForArgumentOfSubType) {
  // The matcher expects a DerivedClass, but inside the Property() we
  // say AClass.
  Matcher<const DerivedClass*> m = Property(&AClass::n, Ge(0));

  DerivedClass d;
  d.set_n(1);
  EXPECT_TRUE(m.Matches(&d));

  d.set_n(-1);
  EXPECT_FALSE(m.Matches(&d));
}

// Tests that Property() can describe itself when used to match a pointer.
TEST(PropertyForPointerTest, CanDescribeSelf) {
  Matcher<const AClass*> m = Property(&AClass::n, Ge(0));

  EXPECT_EQ("is an object whose given property is >= 0", Describe(m));
  EXPECT_EQ("is an object whose given property isn't >= 0",
            DescribeNegation(m));
}

TEST(PropertyForPointerTest, CanDescribeSelfWithPropertyDescription) {
  Matcher<const AClass*> m = Property("fancy_name", &AClass::n, Ge(0));

  EXPECT_EQ("is an object whose property `fancy_name` is >= 0", Describe(m));
  EXPECT_EQ("is an object whose property `fancy_name` isn't >= 0",
            DescribeNegation(m));
}

// Tests that Property() can explain the result of matching a pointer.
TEST(PropertyForPointerTest, CanExplainMatchResult) {
  Matcher<const AClass*> m = Property(&AClass::n, Ge(0));

  AClass a;
  a.set_n(1);
  EXPECT_EQ("", Explain(m, static_cast<const AClass*>(nullptr)));
  EXPECT_EQ(
      "which points to an object whose given property is 1" + OfType("int"),
      Explain(m, &a));

  m = Property(&AClass::n, GreaterThan(0));
  EXPECT_EQ("which points to an object whose given property is 1" +
            OfType("int") + ", which is 1 more than 0",
            Explain(m, &a));
}

TEST(PropertyForPointerTest, CanExplainMatchResultWithPropertyName) {
  Matcher<const AClass*> m = Property("fancy_name", &AClass::n, Ge(0));

  AClass a;
  a.set_n(1);
  EXPECT_EQ("", Explain(m, static_cast<const AClass*>(nullptr)));
  EXPECT_EQ("which points to an object whose property `fancy_name` is 1" +
                OfType("int"),
            Explain(m, &a));

  m = Property("fancy_name", &AClass::n, GreaterThan(0));
  EXPECT_EQ("which points to an object whose property `fancy_name` is 1" +
                OfType("int") + ", which is 1 more than 0",
            Explain(m, &a));
}

// Tests ResultOf.

// Tests that ResultOf(f, ...) compiles and works as expected when f is a
// function pointer.
std::string IntToStringFunction(int input) {
  return input == 1 ? "foo" : "bar";
}

TEST(ResultOfTest, WorksForFunctionPointers) {
  Matcher<int> matcher = ResultOf(&IntToStringFunction, Eq(std::string("foo")));

  EXPECT_TRUE(matcher.Matches(1));
  EXPECT_FALSE(matcher.Matches(2));
}

// Tests that ResultOf() can describe itself.
TEST(ResultOfTest, CanDescribeItself) {
  Matcher<int> matcher = ResultOf(&IntToStringFunction, StrEq("foo"));

  EXPECT_EQ("is mapped by the given callable to a value that "
            "is equal to \"foo\"", Describe(matcher));
  EXPECT_EQ("is mapped by the given callable to a value that "
            "isn't equal to \"foo\"", DescribeNegation(matcher));
}

// Tests that ResultOf() can explain the match result.
int IntFunction(int input) { return input == 42 ? 80 : 90; }

TEST(ResultOfTest, CanExplainMatchResult) {
  Matcher<int> matcher = ResultOf(&IntFunction, Ge(85));
  EXPECT_EQ("which is mapped by the given callable to 90" + OfType("int"),
            Explain(matcher, 36));

  matcher = ResultOf(&IntFunction, GreaterThan(85));
  EXPECT_EQ("which is mapped by the given callable to 90" + OfType("int") +
            ", which is 5 more than 85", Explain(matcher, 36));
}

// Tests that ResultOf(f, ...) compiles and works as expected when f(x)
// returns a non-reference.
TEST(ResultOfTest, WorksForNonReferenceResults) {
  Matcher<int> matcher = ResultOf(&IntFunction, Eq(80));

  EXPECT_TRUE(matcher.Matches(42));
  EXPECT_FALSE(matcher.Matches(36));
}

// Tests that ResultOf(f, ...) compiles and works as expected when f(x)
// returns a reference to non-const.
double& DoubleFunction(double& input) { return input; }  // NOLINT

Uncopyable& RefUncopyableFunction(Uncopyable& obj) {  // NOLINT
  return obj;
}

TEST(ResultOfTest, WorksForReferenceToNonConstResults) {
  double x = 3.14;
  double x2 = x;
  Matcher<double&> matcher = ResultOf(&DoubleFunction, Ref(x));

  EXPECT_TRUE(matcher.Matches(x));
  EXPECT_FALSE(matcher.Matches(x2));

  // Test that ResultOf works with uncopyable objects
  Uncopyable obj(0);
  Uncopyable obj2(0);
  Matcher<Uncopyable&> matcher2 =
      ResultOf(&RefUncopyableFunction, Ref(obj));

  EXPECT_TRUE(matcher2.Matches(obj));
  EXPECT_FALSE(matcher2.Matches(obj2));
}

// Tests that ResultOf(f, ...) compiles and works as expected when f(x)
// returns a reference to const.
const std::string& StringFunction(const std::string& input) { return input; }

TEST(ResultOfTest, WorksForReferenceToConstResults) {
  std::string s = "foo";
  std::string s2 = s;
  Matcher<const std::string&> matcher = ResultOf(&StringFunction, Ref(s));

  EXPECT_TRUE(matcher.Matches(s));
  EXPECT_FALSE(matcher.Matches(s2));
}

// Tests that ResultOf(f, m) works when f(x) and m's
// argument types are compatible but different.
TEST(ResultOfTest, WorksForCompatibleMatcherTypes) {
  // IntFunction() returns int but the inner matcher expects a signed char.
  Matcher<int> matcher = ResultOf(IntFunction, Matcher<signed char>(Ge(85)));

  EXPECT_TRUE(matcher.Matches(36));
  EXPECT_FALSE(matcher.Matches(42));
}

// Tests that the program aborts when ResultOf is passed
// a NULL function pointer.
TEST(ResultOfDeathTest, DiesOnNullFunctionPointers) {
  EXPECT_DEATH_IF_SUPPORTED(
      ResultOf(static_cast<std::string (*)(int dummy)>(nullptr),
               Eq(std::string("foo"))),
      "NULL function pointer is passed into ResultOf\\(\\)\\.");
}

// Tests that ResultOf(f, ...) compiles and works as expected when f is a
// function reference.
TEST(ResultOfTest, WorksForFunctionReferences) {
  Matcher<int> matcher = ResultOf(IntToStringFunction, StrEq("foo"));
  EXPECT_TRUE(matcher.Matches(1));
  EXPECT_FALSE(matcher.Matches(2));
}

// Tests that ResultOf(f, ...) compiles and works as expected when f is a
// function object.
struct Functor {
  std::string operator()(int input) const {
    return IntToStringFunction(input);
  }
};

TEST(ResultOfTest, WorksForFunctors) {
  Matcher<int> matcher = ResultOf(Functor(), Eq(std::string("foo")));

  EXPECT_TRUE(matcher.Matches(1));
  EXPECT_FALSE(matcher.Matches(2));
}

// Tests that ResultOf(f, ...) compiles and works as expected when f is a
// functor with more than one operator() defined. ResultOf() must work
// for each defined operator().
struct PolymorphicFunctor {
  typedef int result_type;
  int operator()(int n) { return n; }
  int operator()(const char* s) { return static_cast<int>(strlen(s)); }
  std::string operator()(int *p) { return p ? "good ptr" : "null"; }
};

TEST(ResultOfTest, WorksForPolymorphicFunctors) {
  Matcher<int> matcher_int = ResultOf(PolymorphicFunctor(), Ge(5));

  EXPECT_TRUE(matcher_int.Matches(10));
  EXPECT_FALSE(matcher_int.Matches(2));

  Matcher<const char*> matcher_string = ResultOf(PolymorphicFunctor(), Ge(5));

  EXPECT_TRUE(matcher_string.Matches("long string"));
  EXPECT_FALSE(matcher_string.Matches("shrt"));
}

TEST(ResultOfTest, WorksForPolymorphicFunctorsIgnoringResultType) {
  Matcher<int*> matcher = ResultOf(PolymorphicFunctor(), "good ptr");

  int n = 0;
  EXPECT_TRUE(matcher.Matches(&n));
  EXPECT_FALSE(matcher.Matches(nullptr));
}

TEST(ResultOfTest, WorksForLambdas) {
  Matcher<int> matcher = ResultOf(
      [](int str_len) {
        return std::string(static_cast<size_t>(str_len), 'x');
      },
      "xxx");
  EXPECT_TRUE(matcher.Matches(3));
  EXPECT_FALSE(matcher.Matches(1));
}

TEST(ResultOfTest, WorksForNonCopyableArguments) {
  Matcher<std::unique_ptr<int>> matcher = ResultOf(
      [](const std::unique_ptr<int>& str_len) {
        return std::string(static_cast<size_t>(*str_len), 'x');
      },
      "xxx");
  EXPECT_TRUE(matcher.Matches(std::unique_ptr<int>(new int(3))));
  EXPECT_FALSE(matcher.Matches(std::unique_ptr<int>(new int(1))));
}

const int* ReferencingFunction(const int& n) { return &n; }

struct ReferencingFunctor {
  typedef const int* result_type;
  result_type operator()(const int& n) { return &n; }
};

TEST(ResultOfTest, WorksForReferencingCallables) {
  const int n = 1;
  const int n2 = 1;
  Matcher<const int&> matcher2 = ResultOf(ReferencingFunction, Eq(&n));
  EXPECT_TRUE(matcher2.Matches(n));
  EXPECT_FALSE(matcher2.Matches(n2));

  Matcher<const int&> matcher3 = ResultOf(ReferencingFunctor(), Eq(&n));
  EXPECT_TRUE(matcher3.Matches(n));
  EXPECT_FALSE(matcher3.Matches(n2));
}

class DivisibleByImpl {
 public:
  explicit DivisibleByImpl(int a_divider) : divider_(a_divider) {}

  // For testing using ExplainMatchResultTo() with polymorphic matchers.
  template <typename T>
  bool MatchAndExplain(const T& n, MatchResultListener* listener) const {
    *listener << "which is " << (n % divider_) << " modulo "
              << divider_;
    return (n % divider_) == 0;
  }

  void DescribeTo(ostream* os) const {
    *os << "is divisible by " << divider_;
  }

  void DescribeNegationTo(ostream* os) const {
    *os << "is not divisible by " << divider_;
  }

  void set_divider(int a_divider) { divider_ = a_divider; }
  int divider() const { return divider_; }

 private:
  int divider_;
};

PolymorphicMatcher<DivisibleByImpl> DivisibleBy(int n) {
  return MakePolymorphicMatcher(DivisibleByImpl(n));
}

// Tests that when AllOf() fails, only the first failing matcher is
// asked to explain why.
TEST(ExplainMatchResultTest, AllOf_False_False) {
  const Matcher<int> m = AllOf(DivisibleBy(4), DivisibleBy(3));
  EXPECT_EQ("which is 1 modulo 4", Explain(m, 5));
}

// Tests that when AllOf() fails, only the first failing matcher is
// asked to explain why.
TEST(ExplainMatchResultTest, AllOf_False_True) {
  const Matcher<int> m = AllOf(DivisibleBy(4), DivisibleBy(3));
  EXPECT_EQ("which is 2 modulo 4", Explain(m, 6));
}

// Tests that when AllOf() fails, only the first failing matcher is
// asked to explain why.
TEST(ExplainMatchResultTest, AllOf_True_False) {
  const Matcher<int> m = AllOf(Ge(1), DivisibleBy(3));
  EXPECT_EQ("which is 2 modulo 3", Explain(m, 5));
}

// Tests that when AllOf() succeeds, all matchers are asked to explain
// why.
TEST(ExplainMatchResultTest, AllOf_True_True) {
  const Matcher<int> m = AllOf(DivisibleBy(2), DivisibleBy(3));
  EXPECT_EQ("which is 0 modulo 2, and which is 0 modulo 3", Explain(m, 6));
}

TEST(ExplainMatchResultTest, AllOf_True_True_2) {
  const Matcher<int> m = AllOf(Ge(2), Le(3));
  EXPECT_EQ("", Explain(m, 2));
}

TEST(ExplainmatcherResultTest, MonomorphicMatcher) {
  const Matcher<int> m = GreaterThan(5);
  EXPECT_EQ("which is 1 more than 5", Explain(m, 6));
}

// The following two tests verify that values without a public copy
// ctor can be used as arguments to matchers like Eq(), Ge(), and etc
// with the help of ByRef().

class NotCopyable {
 public:
  explicit NotCopyable(int a_value) : value_(a_value) {}

  int value() const { return value_; }

  bool operator==(const NotCopyable& rhs) const {
    return value() == rhs.value();
  }

  bool operator>=(const NotCopyable& rhs) const {
    return value() >= rhs.value();
  }
 private:
  int value_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(NotCopyable);
};

TEST(ByRefTest, AllowsNotCopyableConstValueInMatchers) {
  const NotCopyable const_value1(1);
  const Matcher<const NotCopyable&> m = Eq(ByRef(const_value1));

  const NotCopyable n1(1), n2(2);
  EXPECT_TRUE(m.Matches(n1));
  EXPECT_FALSE(m.Matches(n2));
}

TEST(ByRefTest, AllowsNotCopyableValueInMatchers) {
  NotCopyable value2(2);
  const Matcher<NotCopyable&> m = Ge(ByRef(value2));

  NotCopyable n1(1), n2(2);
  EXPECT_FALSE(m.Matches(n1));
  EXPECT_TRUE(m.Matches(n2));
}

TEST(IsEmptyTest, ImplementsIsEmpty) {
  vector<int> container;
  EXPECT_THAT(container, IsEmpty());
  container.push_back(0);
  EXPECT_THAT(container, Not(IsEmpty()));
  container.push_back(1);
  EXPECT_THAT(container, Not(IsEmpty()));
}

TEST(IsEmptyTest, WorksWithString) {
  std::string text;
  EXPECT_THAT(text, IsEmpty());
  text = "foo";
  EXPECT_THAT(text, Not(IsEmpty()));
  text = std::string("\0", 1);
  EXPECT_THAT(text, Not(IsEmpty()));
}

TEST(IsEmptyTest, CanDescribeSelf) {
  Matcher<vector<int> > m = IsEmpty();
  EXPECT_EQ("is empty", Describe(m));
  EXPECT_EQ("isn't empty", DescribeNegation(m));
}

TEST(IsEmptyTest, ExplainsResult) {
  Matcher<vector<int> > m = IsEmpty();
  vector<int> container;
  EXPECT_EQ("", Explain(m, container));
  container.push_back(0);
  EXPECT_EQ("whose size is 1", Explain(m, container));
}

TEST(IsEmptyTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(IsEmpty()));
  helper.Call({});
}

TEST(IsTrueTest, IsTrueIsFalse) {
  EXPECT_THAT(true, IsTrue());
  EXPECT_THAT(false, IsFalse());
  EXPECT_THAT(true, Not(IsFalse()));
  EXPECT_THAT(false, Not(IsTrue()));
  EXPECT_THAT(0, Not(IsTrue()));
  EXPECT_THAT(0, IsFalse());
  EXPECT_THAT(nullptr, Not(IsTrue()));
  EXPECT_THAT(nullptr, IsFalse());
  EXPECT_THAT(-1, IsTrue());
  EXPECT_THAT(-1, Not(IsFalse()));
  EXPECT_THAT(1, IsTrue());
  EXPECT_THAT(1, Not(IsFalse()));
  EXPECT_THAT(2, IsTrue());
  EXPECT_THAT(2, Not(IsFalse()));
  int a = 42;
  EXPECT_THAT(a, IsTrue());
  EXPECT_THAT(a, Not(IsFalse()));
  EXPECT_THAT(&a, IsTrue());
  EXPECT_THAT(&a, Not(IsFalse()));
  EXPECT_THAT(false, Not(IsTrue()));
  EXPECT_THAT(true, Not(IsFalse()));
  EXPECT_THAT(std::true_type(), IsTrue());
  EXPECT_THAT(std::true_type(), Not(IsFalse()));
  EXPECT_THAT(std::false_type(), IsFalse());
  EXPECT_THAT(std::false_type(), Not(IsTrue()));
  EXPECT_THAT(nullptr, Not(IsTrue()));
  EXPECT_THAT(nullptr, IsFalse());
  std::unique_ptr<int> null_unique;
  std::unique_ptr<int> nonnull_unique(new int(0));
  EXPECT_THAT(null_unique, Not(IsTrue()));
  EXPECT_THAT(null_unique, IsFalse());
  EXPECT_THAT(nonnull_unique, IsTrue());
  EXPECT_THAT(nonnull_unique, Not(IsFalse()));
}

TEST(SizeIsTest, ImplementsSizeIs) {
  vector<int> container;
  EXPECT_THAT(container, SizeIs(0));
  EXPECT_THAT(container, Not(SizeIs(1)));
  container.push_back(0);
  EXPECT_THAT(container, Not(SizeIs(0)));
  EXPECT_THAT(container, SizeIs(1));
  container.push_back(0);
  EXPECT_THAT(container, Not(SizeIs(0)));
  EXPECT_THAT(container, SizeIs(2));
}

TEST(SizeIsTest, WorksWithMap) {
  map<std::string, int> container;
  EXPECT_THAT(container, SizeIs(0));
  EXPECT_THAT(container, Not(SizeIs(1)));
  container.insert(make_pair("foo", 1));
  EXPECT_THAT(container, Not(SizeIs(0)));
  EXPECT_THAT(container, SizeIs(1));
  container.insert(make_pair("bar", 2));
  EXPECT_THAT(container, Not(SizeIs(0)));
  EXPECT_THAT(container, SizeIs(2));
}

TEST(SizeIsTest, WorksWithReferences) {
  vector<int> container;
  Matcher<const vector<int>&> m = SizeIs(1);
  EXPECT_THAT(container, Not(m));
  container.push_back(0);
  EXPECT_THAT(container, m);
}

TEST(SizeIsTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(SizeIs(3)));
  helper.Call(MakeUniquePtrs({1, 2, 3}));
}

// SizeIs should work for any type that provides a size() member function.
// For example, a size_type member type should not need to be provided.
struct MinimalistCustomType {
  int size() const { return 1; }
};
TEST(SizeIsTest, WorksWithMinimalistCustomType) {
  MinimalistCustomType container;
  EXPECT_THAT(container, SizeIs(1));
  EXPECT_THAT(container, Not(SizeIs(0)));
}

TEST(SizeIsTest, CanDescribeSelf) {
  Matcher<vector<int> > m = SizeIs(2);
  EXPECT_EQ("size is equal to 2", Describe(m));
  EXPECT_EQ("size isn't equal to 2", DescribeNegation(m));
}

TEST(SizeIsTest, ExplainsResult) {
  Matcher<vector<int> > m1 = SizeIs(2);
  Matcher<vector<int> > m2 = SizeIs(Lt(2u));
  Matcher<vector<int> > m3 = SizeIs(AnyOf(0, 3));
  Matcher<vector<int> > m4 = SizeIs(GreaterThan(1));
  vector<int> container;
  EXPECT_EQ("whose size 0 doesn't match", Explain(m1, container));
  EXPECT_EQ("whose size 0 matches", Explain(m2, container));
  EXPECT_EQ("whose size 0 matches", Explain(m3, container));
  EXPECT_EQ("whose size 0 doesn't match, which is 1 less than 1",
            Explain(m4, container));
  container.push_back(0);
  container.push_back(0);
  EXPECT_EQ("whose size 2 matches", Explain(m1, container));
  EXPECT_EQ("whose size 2 doesn't match", Explain(m2, container));
  EXPECT_EQ("whose size 2 doesn't match", Explain(m3, container));
  EXPECT_EQ("whose size 2 matches, which is 1 more than 1",
            Explain(m4, container));
}

#if GTEST_HAS_TYPED_TEST
// Tests ContainerEq with different container types, and
// different element types.

template <typename T>
class ContainerEqTest : public testing::Test {};

typedef testing::Types<
    set<int>,
    vector<size_t>,
    multiset<size_t>,
    list<int> >
    ContainerEqTestTypes;

TYPED_TEST_SUITE(ContainerEqTest, ContainerEqTestTypes);

// Tests that the filled container is equal to itself.
TYPED_TEST(ContainerEqTest, EqualsSelf) {
  static const int vals[] = {1, 1, 2, 3, 5, 8};
  TypeParam my_set(vals, vals + 6);
  const Matcher<TypeParam> m = ContainerEq(my_set);
  EXPECT_TRUE(m.Matches(my_set));
  EXPECT_EQ("", Explain(m, my_set));
}

// Tests that missing values are reported.
TYPED_TEST(ContainerEqTest, ValueMissing) {
  static const int vals[] = {1, 1, 2, 3, 5, 8};
  static const int test_vals[] = {2, 1, 8, 5};
  TypeParam my_set(vals, vals + 6);
  TypeParam test_set(test_vals, test_vals + 4);
  const Matcher<TypeParam> m = ContainerEq(my_set);
  EXPECT_FALSE(m.Matches(test_set));
  EXPECT_EQ("which doesn't have these expected elements: 3",
            Explain(m, test_set));
}

// Tests that added values are reported.
TYPED_TEST(ContainerEqTest, ValueAdded) {
  static const int vals[] = {1, 1, 2, 3, 5, 8};
  static const int test_vals[] = {1, 2, 3, 5, 8, 46};
  TypeParam my_set(vals, vals + 6);
  TypeParam test_set(test_vals, test_vals + 6);
  const Matcher<const TypeParam&> m = ContainerEq(my_set);
  EXPECT_FALSE(m.Matches(test_set));
  EXPECT_EQ("which has these unexpected elements: 46", Explain(m, test_set));
}

// Tests that added and missing values are reported together.
TYPED_TEST(ContainerEqTest, ValueAddedAndRemoved) {
  static const int vals[] = {1, 1, 2, 3, 5, 8};
  static const int test_vals[] = {1, 2, 3, 8, 46};
  TypeParam my_set(vals, vals + 6);
  TypeParam test_set(test_vals, test_vals + 5);
  const Matcher<TypeParam> m = ContainerEq(my_set);
  EXPECT_FALSE(m.Matches(test_set));
  EXPECT_EQ("which has these unexpected elements: 46,\n"
            "and doesn't have these expected elements: 5",
            Explain(m, test_set));
}

// Tests duplicated value -- expect no explanation.
TYPED_TEST(ContainerEqTest, DuplicateDifference) {
  static const int vals[] = {1, 1, 2, 3, 5, 8};
  static const int test_vals[] = {1, 2, 3, 5, 8};
  TypeParam my_set(vals, vals + 6);
  TypeParam test_set(test_vals, test_vals + 5);
  const Matcher<const TypeParam&> m = ContainerEq(my_set);
  // Depending on the container, match may be true or false
  // But in any case there should be no explanation.
  EXPECT_EQ("", Explain(m, test_set));
}
#endif  // GTEST_HAS_TYPED_TEST

// Tests that multiple missing values are reported.
// Using just vector here, so order is predictable.
TEST(ContainerEqExtraTest, MultipleValuesMissing) {
  static const int vals[] = {1, 1, 2, 3, 5, 8};
  static const int test_vals[] = {2, 1, 5};
  vector<int> my_set(vals, vals + 6);
  vector<int> test_set(test_vals, test_vals + 3);
  const Matcher<vector<int> > m = ContainerEq(my_set);
  EXPECT_FALSE(m.Matches(test_set));
  EXPECT_EQ("which doesn't have these expected elements: 3, 8",
            Explain(m, test_set));
}

// Tests that added values are reported.
// Using just vector here, so order is predictable.
TEST(ContainerEqExtraTest, MultipleValuesAdded) {
  static const int vals[] = {1, 1, 2, 3, 5, 8};
  static const int test_vals[] = {1, 2, 92, 3, 5, 8, 46};
  list<size_t> my_set(vals, vals + 6);
  list<size_t> test_set(test_vals, test_vals + 7);
  const Matcher<const list<size_t>&> m = ContainerEq(my_set);
  EXPECT_FALSE(m.Matches(test_set));
  EXPECT_EQ("which has these unexpected elements: 92, 46",
            Explain(m, test_set));
}

// Tests that added and missing values are reported together.
TEST(ContainerEqExtraTest, MultipleValuesAddedAndRemoved) {
  static const int vals[] = {1, 1, 2, 3, 5, 8};
  static const int test_vals[] = {1, 2, 3, 92, 46};
  list<size_t> my_set(vals, vals + 6);
  list<size_t> test_set(test_vals, test_vals + 5);
  const Matcher<const list<size_t> > m = ContainerEq(my_set);
  EXPECT_FALSE(m.Matches(test_set));
  EXPECT_EQ("which has these unexpected elements: 92, 46,\n"
            "and doesn't have these expected elements: 5, 8",
            Explain(m, test_set));
}

// Tests to see that duplicate elements are detected,
// but (as above) not reported in the explanation.
TEST(ContainerEqExtraTest, MultiSetOfIntDuplicateDifference) {
  static const int vals[] = {1, 1, 2, 3, 5, 8};
  static const int test_vals[] = {1, 2, 3, 5, 8};
  vector<int> my_set(vals, vals + 6);
  vector<int> test_set(test_vals, test_vals + 5);
  const Matcher<vector<int> > m = ContainerEq(my_set);
  EXPECT_TRUE(m.Matches(my_set));
  EXPECT_FALSE(m.Matches(test_set));
  // There is nothing to report when both sets contain all the same values.
  EXPECT_EQ("", Explain(m, test_set));
}

// Tests that ContainerEq works for non-trivial associative containers,
// like maps.
TEST(ContainerEqExtraTest, WorksForMaps) {
  map<int, std::string> my_map;
  my_map[0] = "a";
  my_map[1] = "b";

  map<int, std::string> test_map;
  test_map[0] = "aa";
  test_map[1] = "b";

  const Matcher<const map<int, std::string>&> m = ContainerEq(my_map);
  EXPECT_TRUE(m.Matches(my_map));
  EXPECT_FALSE(m.Matches(test_map));

  EXPECT_EQ("which has these unexpected elements: (0, \"aa\"),\n"
            "and doesn't have these expected elements: (0, \"a\")",
            Explain(m, test_map));
}

TEST(ContainerEqExtraTest, WorksForNativeArray) {
  int a1[] = {1, 2, 3};
  int a2[] = {1, 2, 3};
  int b[] = {1, 2, 4};

  EXPECT_THAT(a1, ContainerEq(a2));
  EXPECT_THAT(a1, Not(ContainerEq(b)));
}

TEST(ContainerEqExtraTest, WorksForTwoDimensionalNativeArray) {
  const char a1[][3] = {"hi", "lo"};
  const char a2[][3] = {"hi", "lo"};
  const char b[][3] = {"lo", "hi"};

  // Tests using ContainerEq() in the first dimension.
  EXPECT_THAT(a1, ContainerEq(a2));
  EXPECT_THAT(a1, Not(ContainerEq(b)));

  // Tests using ContainerEq() in the second dimension.
  EXPECT_THAT(a1, ElementsAre(ContainerEq(a2[0]), ContainerEq(a2[1])));
  EXPECT_THAT(a1, ElementsAre(Not(ContainerEq(b[0])), ContainerEq(a2[1])));
}

TEST(ContainerEqExtraTest, WorksForNativeArrayAsTuple) {
  const int a1[] = {1, 2, 3};
  const int a2[] = {1, 2, 3};
  const int b[] = {1, 2, 3, 4};

  const int* const p1 = a1;
  EXPECT_THAT(std::make_tuple(p1, 3), ContainerEq(a2));
  EXPECT_THAT(std::make_tuple(p1, 3), Not(ContainerEq(b)));

  const int c[] = {1, 3, 2};
  EXPECT_THAT(std::make_tuple(p1, 3), Not(ContainerEq(c)));
}

TEST(ContainerEqExtraTest, CopiesNativeArrayParameter) {
  std::string a1[][3] = {
    {"hi", "hello", "ciao"},
    {"bye", "see you", "ciao"}
  };

  std::string a2[][3] = {
    {"hi", "hello", "ciao"},
    {"bye", "see you", "ciao"}
  };

  const Matcher<const std::string(&)[2][3]> m = ContainerEq(a2);
  EXPECT_THAT(a1, m);

  a2[0][0] = "ha";
  EXPECT_THAT(a1, m);
}

TEST(WhenSortedByTest, WorksForEmptyContainer) {
  const vector<int> numbers;
  EXPECT_THAT(numbers, WhenSortedBy(less<int>(), ElementsAre()));
  EXPECT_THAT(numbers, Not(WhenSortedBy(less<int>(), ElementsAre(1))));
}

TEST(WhenSortedByTest, WorksForNonEmptyContainer) {
  vector<unsigned> numbers;
  numbers.push_back(3);
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(2);
  EXPECT_THAT(numbers, WhenSortedBy(greater<unsigned>(),
                                    ElementsAre(3, 2, 2, 1)));
  EXPECT_THAT(numbers, Not(WhenSortedBy(greater<unsigned>(),
                                        ElementsAre(1, 2, 2, 3))));
}

TEST(WhenSortedByTest, WorksForNonVectorContainer) {
  list<std::string> words;
  words.push_back("say");
  words.push_back("hello");
  words.push_back("world");
  EXPECT_THAT(words, WhenSortedBy(less<std::string>(),
                                  ElementsAre("hello", "say", "world")));
  EXPECT_THAT(words, Not(WhenSortedBy(less<std::string>(),
                                      ElementsAre("say", "hello", "world"))));
}

TEST(WhenSortedByTest, WorksForNativeArray) {
  const int numbers[] = {1, 3, 2, 4};
  const int sorted_numbers[] = {1, 2, 3, 4};
  EXPECT_THAT(numbers, WhenSortedBy(less<int>(), ElementsAre(1, 2, 3, 4)));
  EXPECT_THAT(numbers, WhenSortedBy(less<int>(),
                                    ElementsAreArray(sorted_numbers)));
  EXPECT_THAT(numbers, Not(WhenSortedBy(less<int>(), ElementsAre(1, 3, 2, 4))));
}

TEST(WhenSortedByTest, CanDescribeSelf) {
  const Matcher<vector<int> > m = WhenSortedBy(less<int>(), ElementsAre(1, 2));
  EXPECT_EQ("(when sorted) has 2 elements where\n"
            "element #0 is equal to 1,\n"
            "element #1 is equal to 2",
            Describe(m));
  EXPECT_EQ("(when sorted) doesn't have 2 elements, or\n"
            "element #0 isn't equal to 1, or\n"
            "element #1 isn't equal to 2",
            DescribeNegation(m));
}

TEST(WhenSortedByTest, ExplainsMatchResult) {
  const int a[] = {2, 1};
  EXPECT_EQ("which is { 1, 2 } when sorted, whose element #0 doesn't match",
            Explain(WhenSortedBy(less<int>(), ElementsAre(2, 3)), a));
  EXPECT_EQ("which is { 1, 2 } when sorted",
            Explain(WhenSortedBy(less<int>(), ElementsAre(1, 2)), a));
}

// WhenSorted() is a simple wrapper on WhenSortedBy().  Hence we don't
// need to test it as exhaustively as we test the latter.

TEST(WhenSortedTest, WorksForEmptyContainer) {
  const vector<int> numbers;
  EXPECT_THAT(numbers, WhenSorted(ElementsAre()));
  EXPECT_THAT(numbers, Not(WhenSorted(ElementsAre(1))));
}

TEST(WhenSortedTest, WorksForNonEmptyContainer) {
  list<std::string> words;
  words.push_back("3");
  words.push_back("1");
  words.push_back("2");
  words.push_back("2");
  EXPECT_THAT(words, WhenSorted(ElementsAre("1", "2", "2", "3")));
  EXPECT_THAT(words, Not(WhenSorted(ElementsAre("3", "1", "2", "2"))));
}

TEST(WhenSortedTest, WorksForMapTypes) {
  map<std::string, int> word_counts;
  word_counts["and"] = 1;
  word_counts["the"] = 1;
  word_counts["buffalo"] = 2;
  EXPECT_THAT(word_counts,
              WhenSorted(ElementsAre(Pair("and", 1), Pair("buffalo", 2),
                                     Pair("the", 1))));
  EXPECT_THAT(word_counts,
              Not(WhenSorted(ElementsAre(Pair("and", 1), Pair("the", 1),
                                         Pair("buffalo", 2)))));
}

TEST(WhenSortedTest, WorksForMultiMapTypes) {
    multimap<int, int> ifib;
    ifib.insert(make_pair(8, 6));
    ifib.insert(make_pair(2, 3));
    ifib.insert(make_pair(1, 1));
    ifib.insert(make_pair(3, 4));
    ifib.insert(make_pair(1, 2));
    ifib.insert(make_pair(5, 5));
    EXPECT_THAT(ifib, WhenSorted(ElementsAre(Pair(1, 1),
                                             Pair(1, 2),
                                             Pair(2, 3),
                                             Pair(3, 4),
                                             Pair(5, 5),
                                             Pair(8, 6))));
    EXPECT_THAT(ifib, Not(WhenSorted(ElementsAre(Pair(8, 6),
                                                 Pair(2, 3),
                                                 Pair(1, 1),
                                                 Pair(3, 4),
                                                 Pair(1, 2),
                                                 Pair(5, 5)))));
}

TEST(WhenSortedTest, WorksForPolymorphicMatcher) {
    std::deque<int> d;
    d.push_back(2);
    d.push_back(1);
    EXPECT_THAT(d, WhenSorted(ElementsAre(1, 2)));
    EXPECT_THAT(d, Not(WhenSorted(ElementsAre(2, 1))));
}

TEST(WhenSortedTest, WorksForVectorConstRefMatcher) {
    std::deque<int> d;
    d.push_back(2);
    d.push_back(1);
    Matcher<const std::vector<int>&> vector_match = ElementsAre(1, 2);
    EXPECT_THAT(d, WhenSorted(vector_match));
    Matcher<const std::vector<int>&> not_vector_match = ElementsAre(2, 1);
    EXPECT_THAT(d, Not(WhenSorted(not_vector_match)));
}

// Deliberately bare pseudo-container.
// Offers only begin() and end() accessors, yielding InputIterator.
template <typename T>
class Streamlike {
 private:
  class ConstIter;
 public:
  typedef ConstIter const_iterator;
  typedef T value_type;

  template <typename InIter>
  Streamlike(InIter first, InIter last) : remainder_(first, last) {}

  const_iterator begin() const {
    return const_iterator(this, remainder_.begin());
  }
  const_iterator end() const {
    return const_iterator(this, remainder_.end());
  }

 private:
  class ConstIter : public std::iterator<std::input_iterator_tag,
                                         value_type,
                                         ptrdiff_t,
                                         const value_type*,
                                         const value_type&> {
   public:
    ConstIter(const Streamlike* s,
              typename std::list<value_type>::iterator pos)
        : s_(s), pos_(pos) {}

    const value_type& operator*() const { return *pos_; }
    const value_type* operator->() const { return &*pos_; }
    ConstIter& operator++() {
      s_->remainder_.erase(pos_++);
      return *this;
    }

    // *iter++ is required to work (see std::istreambuf_iterator).
    // (void)iter++ is also required to work.
    class PostIncrProxy {
     public:
      explicit PostIncrProxy(const value_type& value) : value_(value) {}
      value_type operator*() const { return value_; }
     private:
      value_type value_;
    };
    PostIncrProxy operator++(int) {
      PostIncrProxy proxy(**this);
      ++(*this);
      return proxy;
    }

    friend bool operator==(const ConstIter& a, const ConstIter& b) {
      return a.s_ == b.s_ && a.pos_ == b.pos_;
    }
    friend bool operator!=(const ConstIter& a, const ConstIter& b) {
      return !(a == b);
    }

   private:
    const Streamlike* s_;
    typename std::list<value_type>::iterator pos_;
  };

  friend std::ostream& operator<<(std::ostream& os, const Streamlike& s) {
    os << "[";
    typedef typename std::list<value_type>::const_iterator Iter;
    const char* sep = "";
    for (Iter it = s.remainder_.begin(); it != s.remainder_.end(); ++it) {
      os << sep << *it;
      sep = ",";
    }
    os << "]";
    return os;
  }

  mutable std::list<value_type> remainder_;  // modified by iteration
};

TEST(StreamlikeTest, Iteration) {
  const int a[5] = {2, 1, 4, 5, 3};
  Streamlike<int> s(a, a + 5);
  Streamlike<int>::const_iterator it = s.begin();
  const int* ip = a;
  while (it != s.end()) {
    SCOPED_TRACE(ip - a);
    EXPECT_EQ(*ip++, *it++);
  }
}

TEST(BeginEndDistanceIsTest, WorksWithForwardList) {
  std::forward_list<int> container;
  EXPECT_THAT(container, BeginEndDistanceIs(0));
  EXPECT_THAT(container, Not(BeginEndDistanceIs(1)));
  container.push_front(0);
  EXPECT_THAT(container, Not(BeginEndDistanceIs(0)));
  EXPECT_THAT(container, BeginEndDistanceIs(1));
  container.push_front(0);
  EXPECT_THAT(container, Not(BeginEndDistanceIs(0)));
  EXPECT_THAT(container, BeginEndDistanceIs(2));
}

TEST(BeginEndDistanceIsTest, WorksWithNonStdList) {
  const int a[5] = {1, 2, 3, 4, 5};
  Streamlike<int> s(a, a + 5);
  EXPECT_THAT(s, BeginEndDistanceIs(5));
}

TEST(BeginEndDistanceIsTest, CanDescribeSelf) {
  Matcher<vector<int> > m = BeginEndDistanceIs(2);
  EXPECT_EQ("distance between begin() and end() is equal to 2", Describe(m));
  EXPECT_EQ("distance between begin() and end() isn't equal to 2",
            DescribeNegation(m));
}

TEST(BeginEndDistanceIsTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(BeginEndDistanceIs(2)));
  helper.Call(MakeUniquePtrs({1, 2}));
}

TEST(BeginEndDistanceIsTest, ExplainsResult) {
  Matcher<vector<int> > m1 = BeginEndDistanceIs(2);
  Matcher<vector<int> > m2 = BeginEndDistanceIs(Lt(2));
  Matcher<vector<int> > m3 = BeginEndDistanceIs(AnyOf(0, 3));
  Matcher<vector<int> > m4 = BeginEndDistanceIs(GreaterThan(1));
  vector<int> container;
  EXPECT_EQ("whose distance between begin() and end() 0 doesn't match",
            Explain(m1, container));
  EXPECT_EQ("whose distance between begin() and end() 0 matches",
            Explain(m2, container));
  EXPECT_EQ("whose distance between begin() and end() 0 matches",
            Explain(m3, container));
  EXPECT_EQ(
      "whose distance between begin() and end() 0 doesn't match, which is 1 "
      "less than 1",
      Explain(m4, container));
  container.push_back(0);
  container.push_back(0);
  EXPECT_EQ("whose distance between begin() and end() 2 matches",
            Explain(m1, container));
  EXPECT_EQ("whose distance between begin() and end() 2 doesn't match",
            Explain(m2, container));
  EXPECT_EQ("whose distance between begin() and end() 2 doesn't match",
            Explain(m3, container));
  EXPECT_EQ(
      "whose distance between begin() and end() 2 matches, which is 1 more "
      "than 1",
      Explain(m4, container));
}

TEST(WhenSortedTest, WorksForStreamlike) {
  // Streamlike 'container' provides only minimal iterator support.
  // Its iterators are tagged with input_iterator_tag.
  const int a[5] = {2, 1, 4, 5, 3};
  Streamlike<int> s(a, a + GTEST_ARRAY_SIZE_(a));
  EXPECT_THAT(s, WhenSorted(ElementsAre(1, 2, 3, 4, 5)));
  EXPECT_THAT(s, Not(WhenSorted(ElementsAre(2, 1, 4, 5, 3))));
}

TEST(WhenSortedTest, WorksForVectorConstRefMatcherOnStreamlike) {
  const int a[] = {2, 1, 4, 5, 3};
  Streamlike<int> s(a, a + GTEST_ARRAY_SIZE_(a));
  Matcher<const std::vector<int>&> vector_match = ElementsAre(1, 2, 3, 4, 5);
  EXPECT_THAT(s, WhenSorted(vector_match));
  EXPECT_THAT(s, Not(WhenSorted(ElementsAre(2, 1, 4, 5, 3))));
}

TEST(IsSupersetOfTest, WorksForNativeArray) {
  const int subset[] = {1, 4};
  const int superset[] = {1, 2, 4};
  const int disjoint[] = {1, 0, 3};
  EXPECT_THAT(subset, IsSupersetOf(subset));
  EXPECT_THAT(subset, Not(IsSupersetOf(superset)));
  EXPECT_THAT(superset, IsSupersetOf(subset));
  EXPECT_THAT(subset, Not(IsSupersetOf(disjoint)));
  EXPECT_THAT(disjoint, Not(IsSupersetOf(subset)));
}

TEST(IsSupersetOfTest, WorksWithDuplicates) {
  const int not_enough[] = {1, 2};
  const int enough[] = {1, 1, 2};
  const int expected[] = {1, 1};
  EXPECT_THAT(not_enough, Not(IsSupersetOf(expected)));
  EXPECT_THAT(enough, IsSupersetOf(expected));
}

TEST(IsSupersetOfTest, WorksForEmpty) {
  vector<int> numbers;
  vector<int> expected;
  EXPECT_THAT(numbers, IsSupersetOf(expected));
  expected.push_back(1);
  EXPECT_THAT(numbers, Not(IsSupersetOf(expected)));
  expected.clear();
  numbers.push_back(1);
  numbers.push_back(2);
  EXPECT_THAT(numbers, IsSupersetOf(expected));
  expected.push_back(1);
  EXPECT_THAT(numbers, IsSupersetOf(expected));
  expected.push_back(2);
  EXPECT_THAT(numbers, IsSupersetOf(expected));
  expected.push_back(3);
  EXPECT_THAT(numbers, Not(IsSupersetOf(expected)));
}

TEST(IsSupersetOfTest, WorksForStreamlike) {
  const int a[5] = {1, 2, 3, 4, 5};
  Streamlike<int> s(a, a + GTEST_ARRAY_SIZE_(a));

  vector<int> expected;
  expected.push_back(1);
  expected.push_back(2);
  expected.push_back(5);
  EXPECT_THAT(s, IsSupersetOf(expected));

  expected.push_back(0);
  EXPECT_THAT(s, Not(IsSupersetOf(expected)));
}

TEST(IsSupersetOfTest, TakesStlContainer) {
  const int actual[] = {3, 1, 2};

  ::std::list<int> expected;
  expected.push_back(1);
  expected.push_back(3);
  EXPECT_THAT(actual, IsSupersetOf(expected));

  expected.push_back(4);
  EXPECT_THAT(actual, Not(IsSupersetOf(expected)));
}

TEST(IsSupersetOfTest, Describe) {
  typedef std::vector<int> IntVec;
  IntVec expected;
  expected.push_back(111);
  expected.push_back(222);
  expected.push_back(333);
  EXPECT_THAT(
      Describe<IntVec>(IsSupersetOf(expected)),
      Eq("a surjection from elements to requirements exists such that:\n"
         " - an element is equal to 111\n"
         " - an element is equal to 222\n"
         " - an element is equal to 333"));
}

TEST(IsSupersetOfTest, DescribeNegation) {
  typedef std::vector<int> IntVec;
  IntVec expected;
  expected.push_back(111);
  expected.push_back(222);
  expected.push_back(333);
  EXPECT_THAT(
      DescribeNegation<IntVec>(IsSupersetOf(expected)),
      Eq("no surjection from elements to requirements exists such that:\n"
         " - an element is equal to 111\n"
         " - an element is equal to 222\n"
         " - an element is equal to 333"));
}

TEST(IsSupersetOfTest, MatchAndExplain) {
  std::vector<int> v;
  v.push_back(2);
  v.push_back(3);
  std::vector<int> expected;
  expected.push_back(1);
  expected.push_back(2);
  StringMatchResultListener listener;
  ASSERT_FALSE(ExplainMatchResult(IsSupersetOf(expected), v, &listener))
      << listener.str();
  EXPECT_THAT(listener.str(),
              Eq("where the following matchers don't match any elements:\n"
                 "matcher #0: is equal to 1"));

  v.push_back(1);
  listener.Clear();
  ASSERT_TRUE(ExplainMatchResult(IsSupersetOf(expected), v, &listener))
      << listener.str();
  EXPECT_THAT(listener.str(), Eq("where:\n"
                                 " - element #0 is matched by matcher #1,\n"
                                 " - element #2 is matched by matcher #0"));
}

TEST(IsSupersetOfTest, WorksForRhsInitializerList) {
  const int numbers[] = {1, 3, 6, 2, 4, 5};
  EXPECT_THAT(numbers, IsSupersetOf({1, 2}));
  EXPECT_THAT(numbers, Not(IsSupersetOf({3, 0})));
}

TEST(IsSupersetOfTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(IsSupersetOf({Pointee(1)})));
  helper.Call(MakeUniquePtrs({1, 2}));
  EXPECT_CALL(helper, Call(Not(IsSupersetOf({Pointee(1), Pointee(2)}))));
  helper.Call(MakeUniquePtrs({2}));
}

TEST(IsSubsetOfTest, WorksForNativeArray) {
  const int subset[] = {1, 4};
  const int superset[] = {1, 2, 4};
  const int disjoint[] = {1, 0, 3};
  EXPECT_THAT(subset, IsSubsetOf(subset));
  EXPECT_THAT(subset, IsSubsetOf(superset));
  EXPECT_THAT(superset, Not(IsSubsetOf(subset)));
  EXPECT_THAT(subset, Not(IsSubsetOf(disjoint)));
  EXPECT_THAT(disjoint, Not(IsSubsetOf(subset)));
}

TEST(IsSubsetOfTest, WorksWithDuplicates) {
  const int not_enough[] = {1, 2};
  const int enough[] = {1, 1, 2};
  const int actual[] = {1, 1};
  EXPECT_THAT(actual, Not(IsSubsetOf(not_enough)));
  EXPECT_THAT(actual, IsSubsetOf(enough));
}

TEST(IsSubsetOfTest, WorksForEmpty) {
  vector<int> numbers;
  vector<int> expected;
  EXPECT_THAT(numbers, IsSubsetOf(expected));
  expected.push_back(1);
  EXPECT_THAT(numbers, IsSubsetOf(expected));
  expected.clear();
  numbers.push_back(1);
  numbers.push_back(2);
  EXPECT_THAT(numbers, Not(IsSubsetOf(expected)));
  expected.push_back(1);
  EXPECT_THAT(numbers, Not(IsSubsetOf(expected)));
  expected.push_back(2);
  EXPECT_THAT(numbers, IsSubsetOf(expected));
  expected.push_back(3);
  EXPECT_THAT(numbers, IsSubsetOf(expected));
}

TEST(IsSubsetOfTest, WorksForStreamlike) {
  const int a[5] = {1, 2};
  Streamlike<int> s(a, a + GTEST_ARRAY_SIZE_(a));

  vector<int> expected;
  expected.push_back(1);
  EXPECT_THAT(s, Not(IsSubsetOf(expected)));
  expected.push_back(2);
  expected.push_back(5);
  EXPECT_THAT(s, IsSubsetOf(expected));
}

TEST(IsSubsetOfTest, TakesStlContainer) {
  const int actual[] = {3, 1, 2};

  ::std::list<int> expected;
  expected.push_back(1);
  expected.push_back(3);
  EXPECT_THAT(actual, Not(IsSubsetOf(expected)));

  expected.push_back(2);
  expected.push_back(4);
  EXPECT_THAT(actual, IsSubsetOf(expected));
}

TEST(IsSubsetOfTest, Describe) {
  typedef std::vector<int> IntVec;
  IntVec expected;
  expected.push_back(111);
  expected.push_back(222);
  expected.push_back(333);

  EXPECT_THAT(
      Describe<IntVec>(IsSubsetOf(expected)),
      Eq("an injection from elements to requirements exists such that:\n"
         " - an element is equal to 111\n"
         " - an element is equal to 222\n"
         " - an element is equal to 333"));
}

TEST(IsSubsetOfTest, DescribeNegation) {
  typedef std::vector<int> IntVec;
  IntVec expected;
  expected.push_back(111);
  expected.push_back(222);
  expected.push_back(333);
  EXPECT_THAT(
      DescribeNegation<IntVec>(IsSubsetOf(expected)),
      Eq("no injection from elements to requirements exists such that:\n"
         " - an element is equal to 111\n"
         " - an element is equal to 222\n"
         " - an element is equal to 333"));
}

TEST(IsSubsetOfTest, MatchAndExplain) {
  std::vector<int> v;
  v.push_back(2);
  v.push_back(3);
  std::vector<int> expected;
  expected.push_back(1);
  expected.push_back(2);
  StringMatchResultListener listener;
  ASSERT_FALSE(ExplainMatchResult(IsSubsetOf(expected), v, &listener))
      << listener.str();
  EXPECT_THAT(listener.str(),
              Eq("where the following elements don't match any matchers:\n"
                 "element #1: 3"));

  expected.push_back(3);
  listener.Clear();
  ASSERT_TRUE(ExplainMatchResult(IsSubsetOf(expected), v, &listener))
      << listener.str();
  EXPECT_THAT(listener.str(), Eq("where:\n"
                                 " - element #0 is matched by matcher #1,\n"
                                 " - element #1 is matched by matcher #2"));
}

TEST(IsSubsetOfTest, WorksForRhsInitializerList) {
  const int numbers[] = {1, 2, 3};
  EXPECT_THAT(numbers, IsSubsetOf({1, 2, 3, 4}));
  EXPECT_THAT(numbers, Not(IsSubsetOf({1, 2})));
}

TEST(IsSubsetOfTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(IsSubsetOf({Pointee(1), Pointee(2)})));
  helper.Call(MakeUniquePtrs({1}));
  EXPECT_CALL(helper, Call(Not(IsSubsetOf({Pointee(1)}))));
  helper.Call(MakeUniquePtrs({2}));
}

// Tests using ElementsAre() and ElementsAreArray() with stream-like
// "containers".

TEST(ElemensAreStreamTest, WorksForStreamlike) {
  const int a[5] = {1, 2, 3, 4, 5};
  Streamlike<int> s(a, a + GTEST_ARRAY_SIZE_(a));
  EXPECT_THAT(s, ElementsAre(1, 2, 3, 4, 5));
  EXPECT_THAT(s, Not(ElementsAre(2, 1, 4, 5, 3)));
}

TEST(ElemensAreArrayStreamTest, WorksForStreamlike) {
  const int a[5] = {1, 2, 3, 4, 5};
  Streamlike<int> s(a, a + GTEST_ARRAY_SIZE_(a));

  vector<int> expected;
  expected.push_back(1);
  expected.push_back(2);
  expected.push_back(3);
  expected.push_back(4);
  expected.push_back(5);
  EXPECT_THAT(s, ElementsAreArray(expected));

  expected[3] = 0;
  EXPECT_THAT(s, Not(ElementsAreArray(expected)));
}

TEST(ElementsAreTest, WorksWithUncopyable) {
  Uncopyable objs[2];
  objs[0].set_value(-3);
  objs[1].set_value(1);
  EXPECT_THAT(objs, ElementsAre(UncopyableIs(-3), Truly(ValueIsPositive)));
}

TEST(ElementsAreTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(ElementsAre(Pointee(1), Pointee(2))));
  helper.Call(MakeUniquePtrs({1, 2}));

  EXPECT_CALL(helper, Call(ElementsAreArray({Pointee(3), Pointee(4)})));
  helper.Call(MakeUniquePtrs({3, 4}));
}

TEST(ElementsAreTest, TakesStlContainer) {
  const int actual[] = {3, 1, 2};

  ::std::list<int> expected;
  expected.push_back(3);
  expected.push_back(1);
  expected.push_back(2);
  EXPECT_THAT(actual, ElementsAreArray(expected));

  expected.push_back(4);
  EXPECT_THAT(actual, Not(ElementsAreArray(expected)));
}

// Tests for UnorderedElementsAreArray()

TEST(UnorderedElementsAreArrayTest, SucceedsWhenExpected) {
  const int a[] = {0, 1, 2, 3, 4};
  std::vector<int> s(a, a + GTEST_ARRAY_SIZE_(a));
  do {
    StringMatchResultListener listener;
    EXPECT_TRUE(ExplainMatchResult(UnorderedElementsAreArray(a),
                                   s, &listener)) << listener.str();
  } while (std::next_permutation(s.begin(), s.end()));
}

TEST(UnorderedElementsAreArrayTest, VectorBool) {
  const bool a[] = {0, 1, 0, 1, 1};
  const bool b[] = {1, 0, 1, 1, 0};
  std::vector<bool> expected(a, a + GTEST_ARRAY_SIZE_(a));
  std::vector<bool> actual(b, b + GTEST_ARRAY_SIZE_(b));
  StringMatchResultListener listener;
  EXPECT_TRUE(ExplainMatchResult(UnorderedElementsAreArray(expected),
                                 actual, &listener)) << listener.str();
}

TEST(UnorderedElementsAreArrayTest, WorksForStreamlike) {
  // Streamlike 'container' provides only minimal iterator support.
  // Its iterators are tagged with input_iterator_tag, and it has no
  // size() or empty() methods.
  const int a[5] = {2, 1, 4, 5, 3};
  Streamlike<int> s(a, a + GTEST_ARRAY_SIZE_(a));

  ::std::vector<int> expected;
  expected.push_back(1);
  expected.push_back(2);
  expected.push_back(3);
  expected.push_back(4);
  expected.push_back(5);
  EXPECT_THAT(s, UnorderedElementsAreArray(expected));

  expected.push_back(6);
  EXPECT_THAT(s, Not(UnorderedElementsAreArray(expected)));
}

TEST(UnorderedElementsAreArrayTest, TakesStlContainer) {
  const int actual[] = {3, 1, 2};

  ::std::list<int> expected;
  expected.push_back(1);
  expected.push_back(2);
  expected.push_back(3);
  EXPECT_THAT(actual, UnorderedElementsAreArray(expected));

  expected.push_back(4);
  EXPECT_THAT(actual, Not(UnorderedElementsAreArray(expected)));
}


TEST(UnorderedElementsAreArrayTest, TakesInitializerList) {
  const int a[5] = {2, 1, 4, 5, 3};
  EXPECT_THAT(a, UnorderedElementsAreArray({1, 2, 3, 4, 5}));
  EXPECT_THAT(a, Not(UnorderedElementsAreArray({1, 2, 3, 4, 6})));
}

TEST(UnorderedElementsAreArrayTest, TakesInitializerListOfCStrings) {
  const std::string a[5] = {"a", "b", "c", "d", "e"};
  EXPECT_THAT(a, UnorderedElementsAreArray({"a", "b", "c", "d", "e"}));
  EXPECT_THAT(a, Not(UnorderedElementsAreArray({"a", "b", "c", "d", "ef"})));
}

TEST(UnorderedElementsAreArrayTest, TakesInitializerListOfSameTypedMatchers) {
  const int a[5] = {2, 1, 4, 5, 3};
  EXPECT_THAT(a, UnorderedElementsAreArray(
      {Eq(1), Eq(2), Eq(3), Eq(4), Eq(5)}));
  EXPECT_THAT(a, Not(UnorderedElementsAreArray(
      {Eq(1), Eq(2), Eq(3), Eq(4), Eq(6)})));
}

TEST(UnorderedElementsAreArrayTest,
     TakesInitializerListOfDifferentTypedMatchers) {
  const int a[5] = {2, 1, 4, 5, 3};
  // The compiler cannot infer the type of the initializer list if its
  // elements have different types.  We must explicitly specify the
  // unified element type in this case.
  EXPECT_THAT(a, UnorderedElementsAreArray<Matcher<int> >(
      {Eq(1), Ne(-2), Ge(3), Le(4), Eq(5)}));
  EXPECT_THAT(a, Not(UnorderedElementsAreArray<Matcher<int> >(
      {Eq(1), Ne(-2), Ge(3), Le(4), Eq(6)})));
}


TEST(UnorderedElementsAreArrayTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper,
              Call(UnorderedElementsAreArray({Pointee(1), Pointee(2)})));
  helper.Call(MakeUniquePtrs({2, 1}));
}

class UnorderedElementsAreTest : public testing::Test {
 protected:
  typedef std::vector<int> IntVec;
};

TEST_F(UnorderedElementsAreTest, WorksWithUncopyable) {
  Uncopyable objs[2];
  objs[0].set_value(-3);
  objs[1].set_value(1);
  EXPECT_THAT(objs,
              UnorderedElementsAre(Truly(ValueIsPositive), UncopyableIs(-3)));
}

TEST_F(UnorderedElementsAreTest, SucceedsWhenExpected) {
  const int a[] = {1, 2, 3};
  std::vector<int> s(a, a + GTEST_ARRAY_SIZE_(a));
  do {
    StringMatchResultListener listener;
    EXPECT_TRUE(ExplainMatchResult(UnorderedElementsAre(1, 2, 3),
                                   s, &listener)) << listener.str();
  } while (std::next_permutation(s.begin(), s.end()));
}

TEST_F(UnorderedElementsAreTest, FailsWhenAnElementMatchesNoMatcher) {
  const int a[] = {1, 2, 3};
  std::vector<int> s(a, a + GTEST_ARRAY_SIZE_(a));
  std::vector<Matcher<int> > mv;
  mv.push_back(1);
  mv.push_back(2);
  mv.push_back(2);
  // The element with value '3' matches nothing: fail fast.
  StringMatchResultListener listener;
  EXPECT_FALSE(ExplainMatchResult(UnorderedElementsAreArray(mv),
                                  s, &listener)) << listener.str();
}

TEST_F(UnorderedElementsAreTest, WorksForStreamlike) {
  // Streamlike 'container' provides only minimal iterator support.
  // Its iterators are tagged with input_iterator_tag, and it has no
  // size() or empty() methods.
  const int a[5] = {2, 1, 4, 5, 3};
  Streamlike<int> s(a, a + GTEST_ARRAY_SIZE_(a));

  EXPECT_THAT(s, UnorderedElementsAre(1, 2, 3, 4, 5));
  EXPECT_THAT(s, Not(UnorderedElementsAre(2, 2, 3, 4, 5)));
}

TEST_F(UnorderedElementsAreTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(UnorderedElementsAre(Pointee(1), Pointee(2))));
  helper.Call(MakeUniquePtrs({2, 1}));
}

// One naive implementation of the matcher runs in O(N!) time, which is too
// slow for many real-world inputs. This test shows that our matcher can match
// 100 inputs very quickly (a few milliseconds).  An O(100!) is 10^158
// iterations and obviously effectively incomputable.
// [ RUN      ] UnorderedElementsAreTest.Performance
// [       OK ] UnorderedElementsAreTest.Performance (4 ms)
TEST_F(UnorderedElementsAreTest, Performance) {
  std::vector<int> s;
  std::vector<Matcher<int> > mv;
  for (int i = 0; i < 100; ++i) {
    s.push_back(i);
    mv.push_back(_);
  }
  mv[50] = Eq(0);
  StringMatchResultListener listener;
  EXPECT_TRUE(ExplainMatchResult(UnorderedElementsAreArray(mv),
                                 s, &listener)) << listener.str();
}

// Another variant of 'Performance' with similar expectations.
// [ RUN      ] UnorderedElementsAreTest.PerformanceHalfStrict
// [       OK ] UnorderedElementsAreTest.PerformanceHalfStrict (4 ms)
TEST_F(UnorderedElementsAreTest, PerformanceHalfStrict) {
  std::vector<int> s;
  std::vector<Matcher<int> > mv;
  for (int i = 0; i < 100; ++i) {
    s.push_back(i);
    if (i & 1) {
      mv.push_back(_);
    } else {
      mv.push_back(i);
    }
  }
  StringMatchResultListener listener;
  EXPECT_TRUE(ExplainMatchResult(UnorderedElementsAreArray(mv),
                                 s, &listener)) << listener.str();
}

TEST_F(UnorderedElementsAreTest, FailMessageCountWrong) {
  std::vector<int> v;
  v.push_back(4);
  StringMatchResultListener listener;
  EXPECT_FALSE(ExplainMatchResult(UnorderedElementsAre(1, 2, 3),
                                  v, &listener)) << listener.str();
  EXPECT_THAT(listener.str(), Eq("which has 1 element"));
}

TEST_F(UnorderedElementsAreTest, FailMessageCountWrongZero) {
  std::vector<int> v;
  StringMatchResultListener listener;
  EXPECT_FALSE(ExplainMatchResult(UnorderedElementsAre(1, 2, 3),
                                  v, &listener)) << listener.str();
  EXPECT_THAT(listener.str(), Eq(""));
}

TEST_F(UnorderedElementsAreTest, FailMessageUnmatchedMatchers) {
  std::vector<int> v;
  v.push_back(1);
  v.push_back(1);
  StringMatchResultListener listener;
  EXPECT_FALSE(ExplainMatchResult(UnorderedElementsAre(1, 2),
                                  v, &listener)) << listener.str();
  EXPECT_THAT(
      listener.str(),
      Eq("where the following matchers don't match any elements:\n"
         "matcher #1: is equal to 2"));
}

TEST_F(UnorderedElementsAreTest, FailMessageUnmatchedElements) {
  std::vector<int> v;
  v.push_back(1);
  v.push_back(2);
  StringMatchResultListener listener;
  EXPECT_FALSE(ExplainMatchResult(UnorderedElementsAre(1, 1),
                                  v, &listener)) << listener.str();
  EXPECT_THAT(
      listener.str(),
      Eq("where the following elements don't match any matchers:\n"
         "element #1: 2"));
}

TEST_F(UnorderedElementsAreTest, FailMessageUnmatchedMatcherAndElement) {
  std::vector<int> v;
  v.push_back(2);
  v.push_back(3);
  StringMatchResultListener listener;
  EXPECT_FALSE(ExplainMatchResult(UnorderedElementsAre(1, 2),
                                  v, &listener)) << listener.str();
  EXPECT_THAT(
      listener.str(),
      Eq("where"
         " the following matchers don't match any elements:\n"
         "matcher #0: is equal to 1\n"
         "and"
         " where"
         " the following elements don't match any matchers:\n"
         "element #1: 3"));
}

// Test helper for formatting element, matcher index pairs in expectations.
static std::string EMString(int element, int matcher) {
  stringstream ss;
  ss << "(element #" << element << ", matcher #" << matcher << ")";
  return ss.str();
}

TEST_F(UnorderedElementsAreTest, FailMessageImperfectMatchOnly) {
  // A situation where all elements and matchers have a match
  // associated with them, but the max matching is not perfect.
  std::vector<std::string> v;
  v.push_back("a");
  v.push_back("b");
  v.push_back("c");
  StringMatchResultListener listener;
  EXPECT_FALSE(ExplainMatchResult(
      UnorderedElementsAre("a", "a", AnyOf("b", "c")), v, &listener))
      << listener.str();

  std::string prefix =
      "where no permutation of the elements can satisfy all matchers, "
      "and the closest match is 2 of 3 matchers with the "
      "pairings:\n";

  // We have to be a bit loose here, because there are 4 valid max matches.
  EXPECT_THAT(
      listener.str(),
      AnyOf(prefix + "{\n  " + EMString(0, 0) +
                     ",\n  " + EMString(1, 2) + "\n}",
            prefix + "{\n  " + EMString(0, 1) +
                     ",\n  " + EMString(1, 2) + "\n}",
            prefix + "{\n  " + EMString(0, 0) +
                     ",\n  " + EMString(2, 2) + "\n}",
            prefix + "{\n  " + EMString(0, 1) +
                     ",\n  " + EMString(2, 2) + "\n}"));
}

TEST_F(UnorderedElementsAreTest, Describe) {
  EXPECT_THAT(Describe<IntVec>(UnorderedElementsAre()),
              Eq("is empty"));
  EXPECT_THAT(
      Describe<IntVec>(UnorderedElementsAre(345)),
      Eq("has 1 element and that element is equal to 345"));
  EXPECT_THAT(
      Describe<IntVec>(UnorderedElementsAre(111, 222, 333)),
      Eq("has 3 elements and there exists some permutation "
         "of elements such that:\n"
         " - element #0 is equal to 111, and\n"
         " - element #1 is equal to 222, and\n"
         " - element #2 is equal to 333"));
}

TEST_F(UnorderedElementsAreTest, DescribeNegation) {
  EXPECT_THAT(DescribeNegation<IntVec>(UnorderedElementsAre()),
              Eq("isn't empty"));
  EXPECT_THAT(
      DescribeNegation<IntVec>(UnorderedElementsAre(345)),
      Eq("doesn't have 1 element, or has 1 element that isn't equal to 345"));
  EXPECT_THAT(
      DescribeNegation<IntVec>(UnorderedElementsAre(123, 234, 345)),
      Eq("doesn't have 3 elements, or there exists no permutation "
         "of elements such that:\n"
         " - element #0 is equal to 123, and\n"
         " - element #1 is equal to 234, and\n"
         " - element #2 is equal to 345"));
}

namespace {

// Used as a check on the more complex max flow method used in the
// real testing::internal::FindMaxBipartiteMatching. This method is
// compatible but runs in worst-case factorial time, so we only
// use it in testing for small problem sizes.
template <typename Graph>
class BacktrackingMaxBPMState {
 public:
  // Does not take ownership of 'g'.
  explicit BacktrackingMaxBPMState(const Graph* g) : graph_(g) { }

  ElementMatcherPairs Compute() {
    if (graph_->LhsSize() == 0 || graph_->RhsSize() == 0) {
      return best_so_far_;
    }
    lhs_used_.assign(graph_->LhsSize(), kUnused);
    rhs_used_.assign(graph_->RhsSize(), kUnused);
    for (size_t irhs = 0; irhs < graph_->RhsSize(); ++irhs) {
      matches_.clear();
      RecurseInto(irhs);
      if (best_so_far_.size() == graph_->RhsSize())
        break;
    }
    return best_so_far_;
  }

 private:
  static const size_t kUnused = static_cast<size_t>(-1);

  void PushMatch(size_t lhs, size_t rhs) {
    matches_.push_back(ElementMatcherPair(lhs, rhs));
    lhs_used_[lhs] = rhs;
    rhs_used_[rhs] = lhs;
    if (matches_.size() > best_so_far_.size()) {
      best_so_far_ = matches_;
    }
  }

  void PopMatch() {
    const ElementMatcherPair& back = matches_.back();
    lhs_used_[back.first] = kUnused;
    rhs_used_[back.second] = kUnused;
    matches_.pop_back();
  }

  bool RecurseInto(size_t irhs) {
    if (rhs_used_[irhs] != kUnused) {
      return true;
    }
    for (size_t ilhs = 0; ilhs < graph_->LhsSize(); ++ilhs) {
      if (lhs_used_[ilhs] != kUnused) {
        continue;
      }
      if (!graph_->HasEdge(ilhs, irhs)) {
        continue;
      }
      PushMatch(ilhs, irhs);
      if (best_so_far_.size() == graph_->RhsSize()) {
        return false;
      }
      for (size_t mi = irhs + 1; mi < graph_->RhsSize(); ++mi) {
        if (!RecurseInto(mi)) return false;
      }
      PopMatch();
    }
    return true;
  }

  const Graph* graph_;  // not owned
  std::vector<size_t> lhs_used_;
  std::vector<size_t> rhs_used_;
  ElementMatcherPairs matches_;
  ElementMatcherPairs best_so_far_;
};

template <typename Graph>
const size_t BacktrackingMaxBPMState<Graph>::kUnused;

}  // namespace

// Implement a simple backtracking algorithm to determine if it is possible
// to find one element per matcher, without reusing elements.
template <typename Graph>
ElementMatcherPairs
FindBacktrackingMaxBPM(const Graph& g) {
  return BacktrackingMaxBPMState<Graph>(&g).Compute();
}

class BacktrackingBPMTest : public ::testing::Test { };

// Tests the MaxBipartiteMatching algorithm with square matrices.
// The single int param is the # of nodes on each of the left and right sides.
class BipartiteTest : public ::testing::TestWithParam<size_t> {};

// Verify all match graphs up to some moderate number of edges.
TEST_P(BipartiteTest, Exhaustive) {
  size_t nodes = GetParam();
  MatchMatrix graph(nodes, nodes);
  do {
    ElementMatcherPairs matches =
        internal::FindMaxBipartiteMatching(graph);
    EXPECT_EQ(FindBacktrackingMaxBPM(graph).size(), matches.size())
        << "graph: " << graph.DebugString();
    // Check that all elements of matches are in the graph.
    // Check that elements of first and second are unique.
    std::vector<bool> seen_element(graph.LhsSize());
    std::vector<bool> seen_matcher(graph.RhsSize());
    SCOPED_TRACE(PrintToString(matches));
    for (size_t i = 0; i < matches.size(); ++i) {
      size_t ilhs = matches[i].first;
      size_t irhs = matches[i].second;
      EXPECT_TRUE(graph.HasEdge(ilhs, irhs));
      EXPECT_FALSE(seen_element[ilhs]);
      EXPECT_FALSE(seen_matcher[irhs]);
      seen_element[ilhs] = true;
      seen_matcher[irhs] = true;
    }
  } while (graph.NextGraph());
}

INSTANTIATE_TEST_SUITE_P(AllGraphs, BipartiteTest,
                         ::testing::Range(size_t{0}, size_t{5}));

// Parameterized by a pair interpreted as (LhsSize, RhsSize).
class BipartiteNonSquareTest
    : public ::testing::TestWithParam<std::pair<size_t, size_t> > {
};

TEST_F(BipartiteNonSquareTest, SimpleBacktracking) {
  //   .......
  // 0:-----\ :
  // 1:---\ | :
  // 2:---\ | :
  // 3:-\ | | :
  //  :.......:
  //    0 1 2
  MatchMatrix g(4, 3);
  static const size_t kEdges[][2] = {{0, 2}, {1, 1}, {2, 1}, {3, 0}};
  for (size_t i = 0; i < GTEST_ARRAY_SIZE_(kEdges); ++i) {
    g.SetEdge(kEdges[i][0], kEdges[i][1], true);
  }
  EXPECT_THAT(FindBacktrackingMaxBPM(g),
              ElementsAre(Pair(3, 0),
                          Pair(AnyOf(1, 2), 1),
                          Pair(0, 2))) << g.DebugString();
}

// Verify a few nonsquare matrices.
TEST_P(BipartiteNonSquareTest, Exhaustive) {
  size_t nlhs = GetParam().first;
  size_t nrhs = GetParam().second;
  MatchMatrix graph(nlhs, nrhs);
  do {
    EXPECT_EQ(FindBacktrackingMaxBPM(graph).size(),
              internal::FindMaxBipartiteMatching(graph).size())
        << "graph: " << graph.DebugString()
        << "\nbacktracking: "
        << PrintToString(FindBacktrackingMaxBPM(graph))
        << "\nmax flow: "
        << PrintToString(internal::FindMaxBipartiteMatching(graph));
  } while (graph.NextGraph());
}

INSTANTIATE_TEST_SUITE_P(AllGraphs, BipartiteNonSquareTest,
    testing::Values(
        std::make_pair(1, 2),
        std::make_pair(2, 1),
        std::make_pair(3, 2),
        std::make_pair(2, 3),
        std::make_pair(4, 1),
        std::make_pair(1, 4),
        std::make_pair(4, 3),
        std::make_pair(3, 4)));

class BipartiteRandomTest
    : public ::testing::TestWithParam<std::pair<int, int> > {
};

// Verifies a large sample of larger graphs.
TEST_P(BipartiteRandomTest, LargerNets) {
  int nodes = GetParam().first;
  int iters = GetParam().second;
  MatchMatrix graph(static_cast<size_t>(nodes), static_cast<size_t>(nodes));

  auto seed = static_cast<testing::internal::UInt32>(GTEST_FLAG(random_seed));
  if (seed == 0) {
    seed = static_cast<testing::internal::UInt32>(time(nullptr));
  }

  for (; iters > 0; --iters, ++seed) {
    srand(static_cast<unsigned int>(seed));
    graph.Randomize();
    EXPECT_EQ(FindBacktrackingMaxBPM(graph).size(),
              internal::FindMaxBipartiteMatching(graph).size())
        << " graph: " << graph.DebugString()
        << "\nTo reproduce the failure, rerun the test with the flag"
           " --" << GTEST_FLAG_PREFIX_ << "random_seed=" << seed;
  }
}

// Test argument is a std::pair<int, int> representing (nodes, iters).
INSTANTIATE_TEST_SUITE_P(Samples, BipartiteRandomTest,
    testing::Values(
        std::make_pair(5, 10000),
        std::make_pair(6, 5000),
        std::make_pair(7, 2000),
        std::make_pair(8, 500),
        std::make_pair(9, 100)));

// Tests IsReadableTypeName().

TEST(IsReadableTypeNameTest, ReturnsTrueForShortNames) {
  EXPECT_TRUE(IsReadableTypeName("int"));
  EXPECT_TRUE(IsReadableTypeName("const unsigned char*"));
  EXPECT_TRUE(IsReadableTypeName("MyMap<int, void*>"));
  EXPECT_TRUE(IsReadableTypeName("void (*)(int, bool)"));
}

TEST(IsReadableTypeNameTest, ReturnsTrueForLongNonTemplateNonFunctionNames) {
  EXPECT_TRUE(IsReadableTypeName("my_long_namespace::MyClassName"));
  EXPECT_TRUE(IsReadableTypeName("int [5][6][7][8][9][10][11]"));
  EXPECT_TRUE(IsReadableTypeName("my_namespace::MyOuterClass::MyInnerClass"));
}

TEST(IsReadableTypeNameTest, ReturnsFalseForLongTemplateNames) {
  EXPECT_FALSE(
      IsReadableTypeName("basic_string<char, std::char_traits<char> >"));
  EXPECT_FALSE(IsReadableTypeName("std::vector<int, std::alloc_traits<int> >"));
}

TEST(IsReadableTypeNameTest, ReturnsFalseForLongFunctionTypeNames) {
  EXPECT_FALSE(IsReadableTypeName("void (&)(int, bool, char, float)"));
}

// Tests FormatMatcherDescription().

TEST(FormatMatcherDescriptionTest, WorksForEmptyDescription) {
  EXPECT_EQ("is even",
            FormatMatcherDescription(false, "IsEven", Strings()));
  EXPECT_EQ("not (is even)",
            FormatMatcherDescription(true, "IsEven", Strings()));

  const char* params[] = {"5"};
  EXPECT_EQ("equals 5",
            FormatMatcherDescription(false, "Equals",
                                     Strings(params, params + 1)));

  const char* params2[] = {"5", "8"};
  EXPECT_EQ("is in range (5, 8)",
            FormatMatcherDescription(false, "IsInRange",
                                     Strings(params2, params2 + 2)));
}

// Tests PolymorphicMatcher::mutable_impl().
TEST(PolymorphicMatcherTest, CanAccessMutableImpl) {
  PolymorphicMatcher<DivisibleByImpl> m(DivisibleByImpl(42));
  DivisibleByImpl& impl = m.mutable_impl();
  EXPECT_EQ(42, impl.divider());

  impl.set_divider(0);
  EXPECT_EQ(0, m.mutable_impl().divider());
}

// Tests PolymorphicMatcher::impl().
TEST(PolymorphicMatcherTest, CanAccessImpl) {
  const PolymorphicMatcher<DivisibleByImpl> m(DivisibleByImpl(42));
  const DivisibleByImpl& impl = m.impl();
  EXPECT_EQ(42, impl.divider());
}

TEST(MatcherTupleTest, ExplainsMatchFailure) {
  stringstream ss1;
  ExplainMatchFailureTupleTo(
      std::make_tuple(Matcher<char>(Eq('a')), GreaterThan(5)),
      std::make_tuple('a', 10), &ss1);
  EXPECT_EQ("", ss1.str());  // Successful match.

  stringstream ss2;
  ExplainMatchFailureTupleTo(
      std::make_tuple(GreaterThan(5), Matcher<char>(Eq('a'))),
      std::make_tuple(2, 'b'), &ss2);
  EXPECT_EQ("  Expected arg #0: is > 5\n"
            "           Actual: 2, which is 3 less than 5\n"
            "  Expected arg #1: is equal to 'a' (97, 0x61)\n"
            "           Actual: 'b' (98, 0x62)\n",
            ss2.str());  // Failed match where both arguments need explanation.

  stringstream ss3;
  ExplainMatchFailureTupleTo(
      std::make_tuple(GreaterThan(5), Matcher<char>(Eq('a'))),
      std::make_tuple(2, 'a'), &ss3);
  EXPECT_EQ("  Expected arg #0: is > 5\n"
            "           Actual: 2, which is 3 less than 5\n",
            ss3.str());  // Failed match where only one argument needs
                         // explanation.
}

// Tests Each().

TEST(EachTest, ExplainsMatchResultCorrectly) {
  set<int> a;  // empty

  Matcher<set<int> > m = Each(2);
  EXPECT_EQ("", Explain(m, a));

  Matcher<const int(&)[1]> n = Each(1);  // NOLINT

  const int b[1] = {1};
  EXPECT_EQ("", Explain(n, b));

  n = Each(3);
  EXPECT_EQ("whose element #0 doesn't match", Explain(n, b));

  a.insert(1);
  a.insert(2);
  a.insert(3);
  m = Each(GreaterThan(0));
  EXPECT_EQ("", Explain(m, a));

  m = Each(GreaterThan(10));
  EXPECT_EQ("whose element #0 doesn't match, which is 9 less than 10",
            Explain(m, a));
}

TEST(EachTest, DescribesItselfCorrectly) {
  Matcher<vector<int> > m = Each(1);
  EXPECT_EQ("only contains elements that is equal to 1", Describe(m));

  Matcher<vector<int> > m2 = Not(m);
  EXPECT_EQ("contains some element that isn't equal to 1", Describe(m2));
}

TEST(EachTest, MatchesVectorWhenAllElementsMatch) {
  vector<int> some_vector;
  EXPECT_THAT(some_vector, Each(1));
  some_vector.push_back(3);
  EXPECT_THAT(some_vector, Not(Each(1)));
  EXPECT_THAT(some_vector, Each(3));
  some_vector.push_back(1);
  some_vector.push_back(2);
  EXPECT_THAT(some_vector, Not(Each(3)));
  EXPECT_THAT(some_vector, Each(Lt(3.5)));

  vector<std::string> another_vector;
  another_vector.push_back("fee");
  EXPECT_THAT(another_vector, Each(std::string("fee")));
  another_vector.push_back("fie");
  another_vector.push_back("foe");
  another_vector.push_back("fum");
  EXPECT_THAT(another_vector, Not(Each(std::string("fee"))));
}

TEST(EachTest, MatchesMapWhenAllElementsMatch) {
  map<const char*, int> my_map;
  const char* bar = "a string";
  my_map[bar] = 2;
  EXPECT_THAT(my_map, Each(make_pair(bar, 2)));

  map<std::string, int> another_map;
  EXPECT_THAT(another_map, Each(make_pair(std::string("fee"), 1)));
  another_map["fee"] = 1;
  EXPECT_THAT(another_map, Each(make_pair(std::string("fee"), 1)));
  another_map["fie"] = 2;
  another_map["foe"] = 3;
  another_map["fum"] = 4;
  EXPECT_THAT(another_map, Not(Each(make_pair(std::string("fee"), 1))));
  EXPECT_THAT(another_map, Not(Each(make_pair(std::string("fum"), 1))));
  EXPECT_THAT(another_map, Each(Pair(_, Gt(0))));
}

TEST(EachTest, AcceptsMatcher) {
  const int a[] = {1, 2, 3};
  EXPECT_THAT(a, Each(Gt(0)));
  EXPECT_THAT(a, Not(Each(Gt(1))));
}

TEST(EachTest, WorksForNativeArrayAsTuple) {
  const int a[] = {1, 2};
  const int* const pointer = a;
  EXPECT_THAT(std::make_tuple(pointer, 2), Each(Gt(0)));
  EXPECT_THAT(std::make_tuple(pointer, 2), Not(Each(Gt(1))));
}

TEST(EachTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(Each(Pointee(Gt(0)))));
  helper.Call(MakeUniquePtrs({1, 2}));
}

// For testing Pointwise().
class IsHalfOfMatcher {
 public:
  template <typename T1, typename T2>
  bool MatchAndExplain(const std::tuple<T1, T2>& a_pair,
                       MatchResultListener* listener) const {
    if (std::get<0>(a_pair) == std::get<1>(a_pair) / 2) {
      *listener << "where the second is " << std::get<1>(a_pair);
      return true;
    } else {
      *listener << "where the second/2 is " << std::get<1>(a_pair) / 2;
      return false;
    }
  }

  void DescribeTo(ostream* os) const {
    *os << "are a pair where the first is half of the second";
  }

  void DescribeNegationTo(ostream* os) const {
    *os << "are a pair where the first isn't half of the second";
  }
};

PolymorphicMatcher<IsHalfOfMatcher> IsHalfOf() {
  return MakePolymorphicMatcher(IsHalfOfMatcher());
}

TEST(PointwiseTest, DescribesSelf) {
  vector<int> rhs;
  rhs.push_back(1);
  rhs.push_back(2);
  rhs.push_back(3);
  const Matcher<const vector<int>&> m = Pointwise(IsHalfOf(), rhs);
  EXPECT_EQ("contains 3 values, where each value and its corresponding value "
            "in { 1, 2, 3 } are a pair where the first is half of the second",
            Describe(m));
  EXPECT_EQ("doesn't contain exactly 3 values, or contains a value x at some "
            "index i where x and the i-th value of { 1, 2, 3 } are a pair "
            "where the first isn't half of the second",
            DescribeNegation(m));
}

TEST(PointwiseTest, MakesCopyOfRhs) {
  list<signed char> rhs;
  rhs.push_back(2);
  rhs.push_back(4);

  int lhs[] = {1, 2};
  const Matcher<const int (&)[2]> m = Pointwise(IsHalfOf(), rhs);
  EXPECT_THAT(lhs, m);

  // Changing rhs now shouldn't affect m, which made a copy of rhs.
  rhs.push_back(6);
  EXPECT_THAT(lhs, m);
}

TEST(PointwiseTest, WorksForLhsNativeArray) {
  const int lhs[] = {1, 2, 3};
  vector<int> rhs;
  rhs.push_back(2);
  rhs.push_back(4);
  rhs.push_back(6);
  EXPECT_THAT(lhs, Pointwise(Lt(), rhs));
  EXPECT_THAT(lhs, Not(Pointwise(Gt(), rhs)));
}

TEST(PointwiseTest, WorksForRhsNativeArray) {
  const int rhs[] = {1, 2, 3};
  vector<int> lhs;
  lhs.push_back(2);
  lhs.push_back(4);
  lhs.push_back(6);
  EXPECT_THAT(lhs, Pointwise(Gt(), rhs));
  EXPECT_THAT(lhs, Not(Pointwise(Lt(), rhs)));
}

// Test is effective only with sanitizers.
TEST(PointwiseTest, WorksForVectorOfBool) {
  vector<bool> rhs(3, false);
  rhs[1] = true;
  vector<bool> lhs = rhs;
  EXPECT_THAT(lhs, Pointwise(Eq(), rhs));
  rhs[0] = true;
  EXPECT_THAT(lhs, Not(Pointwise(Eq(), rhs)));
}


TEST(PointwiseTest, WorksForRhsInitializerList) {
  const vector<int> lhs{2, 4, 6};
  EXPECT_THAT(lhs, Pointwise(Gt(), {1, 2, 3}));
  EXPECT_THAT(lhs, Not(Pointwise(Lt(), {3, 3, 7})));
}


TEST(PointwiseTest, RejectsWrongSize) {
  const double lhs[2] = {1, 2};
  const int rhs[1] = {0};
  EXPECT_THAT(lhs, Not(Pointwise(Gt(), rhs)));
  EXPECT_EQ("which contains 2 values",
            Explain(Pointwise(Gt(), rhs), lhs));

  const int rhs2[3] = {0, 1, 2};
  EXPECT_THAT(lhs, Not(Pointwise(Gt(), rhs2)));
}

TEST(PointwiseTest, RejectsWrongContent) {
  const double lhs[3] = {1, 2, 3};
  const int rhs[3] = {2, 6, 4};
  EXPECT_THAT(lhs, Not(Pointwise(IsHalfOf(), rhs)));
  EXPECT_EQ("where the value pair (2, 6) at index #1 don't match, "
            "where the second/2 is 3",
            Explain(Pointwise(IsHalfOf(), rhs), lhs));
}

TEST(PointwiseTest, AcceptsCorrectContent) {
  const double lhs[3] = {1, 2, 3};
  const int rhs[3] = {2, 4, 6};
  EXPECT_THAT(lhs, Pointwise(IsHalfOf(), rhs));
  EXPECT_EQ("", Explain(Pointwise(IsHalfOf(), rhs), lhs));
}

TEST(PointwiseTest, AllowsMonomorphicInnerMatcher) {
  const double lhs[3] = {1, 2, 3};
  const int rhs[3] = {2, 4, 6};
  const Matcher<std::tuple<const double&, const int&>> m1 = IsHalfOf();
  EXPECT_THAT(lhs, Pointwise(m1, rhs));
  EXPECT_EQ("", Explain(Pointwise(m1, rhs), lhs));

  // This type works as a std::tuple<const double&, const int&> can be
  // implicitly cast to std::tuple<double, int>.
  const Matcher<std::tuple<double, int>> m2 = IsHalfOf();
  EXPECT_THAT(lhs, Pointwise(m2, rhs));
  EXPECT_EQ("", Explain(Pointwise(m2, rhs), lhs));
}

MATCHER(PointeeEquals, "Points to an equal value") {
  return ExplainMatchResult(::testing::Pointee(::testing::get<1>(arg)),
                            ::testing::get<0>(arg), result_listener);
}

TEST(PointwiseTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(Pointwise(PointeeEquals(), std::vector<int>{1, 2})));
  helper.Call(MakeUniquePtrs({1, 2}));
}

TEST(UnorderedPointwiseTest, DescribesSelf) {
  vector<int> rhs;
  rhs.push_back(1);
  rhs.push_back(2);
  rhs.push_back(3);
  const Matcher<const vector<int>&> m = UnorderedPointwise(IsHalfOf(), rhs);
  EXPECT_EQ(
      "has 3 elements and there exists some permutation of elements such "
      "that:\n"
      " - element #0 and 1 are a pair where the first is half of the second, "
      "and\n"
      " - element #1 and 2 are a pair where the first is half of the second, "
      "and\n"
      " - element #2 and 3 are a pair where the first is half of the second",
      Describe(m));
  EXPECT_EQ(
      "doesn't have 3 elements, or there exists no permutation of elements "
      "such that:\n"
      " - element #0 and 1 are a pair where the first is half of the second, "
      "and\n"
      " - element #1 and 2 are a pair where the first is half of the second, "
      "and\n"
      " - element #2 and 3 are a pair where the first is half of the second",
      DescribeNegation(m));
}

TEST(UnorderedPointwiseTest, MakesCopyOfRhs) {
  list<signed char> rhs;
  rhs.push_back(2);
  rhs.push_back(4);

  int lhs[] = {2, 1};
  const Matcher<const int (&)[2]> m = UnorderedPointwise(IsHalfOf(), rhs);
  EXPECT_THAT(lhs, m);

  // Changing rhs now shouldn't affect m, which made a copy of rhs.
  rhs.push_back(6);
  EXPECT_THAT(lhs, m);
}

TEST(UnorderedPointwiseTest, WorksForLhsNativeArray) {
  const int lhs[] = {1, 2, 3};
  vector<int> rhs;
  rhs.push_back(4);
  rhs.push_back(6);
  rhs.push_back(2);
  EXPECT_THAT(lhs, UnorderedPointwise(Lt(), rhs));
  EXPECT_THAT(lhs, Not(UnorderedPointwise(Gt(), rhs)));
}

TEST(UnorderedPointwiseTest, WorksForRhsNativeArray) {
  const int rhs[] = {1, 2, 3};
  vector<int> lhs;
  lhs.push_back(4);
  lhs.push_back(2);
  lhs.push_back(6);
  EXPECT_THAT(lhs, UnorderedPointwise(Gt(), rhs));
  EXPECT_THAT(lhs, Not(UnorderedPointwise(Lt(), rhs)));
}


TEST(UnorderedPointwiseTest, WorksForRhsInitializerList) {
  const vector<int> lhs{2, 4, 6};
  EXPECT_THAT(lhs, UnorderedPointwise(Gt(), {5, 1, 3}));
  EXPECT_THAT(lhs, Not(UnorderedPointwise(Lt(), {1, 1, 7})));
}


TEST(UnorderedPointwiseTest, RejectsWrongSize) {
  const double lhs[2] = {1, 2};
  const int rhs[1] = {0};
  EXPECT_THAT(lhs, Not(UnorderedPointwise(Gt(), rhs)));
  EXPECT_EQ("which has 2 elements",
            Explain(UnorderedPointwise(Gt(), rhs), lhs));

  const int rhs2[3] = {0, 1, 2};
  EXPECT_THAT(lhs, Not(UnorderedPointwise(Gt(), rhs2)));
}

TEST(UnorderedPointwiseTest, RejectsWrongContent) {
  const double lhs[3] = {1, 2, 3};
  const int rhs[3] = {2, 6, 6};
  EXPECT_THAT(lhs, Not(UnorderedPointwise(IsHalfOf(), rhs)));
  EXPECT_EQ("where the following elements don't match any matchers:\n"
            "element #1: 2",
            Explain(UnorderedPointwise(IsHalfOf(), rhs), lhs));
}

TEST(UnorderedPointwiseTest, AcceptsCorrectContentInSameOrder) {
  const double lhs[3] = {1, 2, 3};
  const int rhs[3] = {2, 4, 6};
  EXPECT_THAT(lhs, UnorderedPointwise(IsHalfOf(), rhs));
}

TEST(UnorderedPointwiseTest, AcceptsCorrectContentInDifferentOrder) {
  const double lhs[3] = {1, 2, 3};
  const int rhs[3] = {6, 4, 2};
  EXPECT_THAT(lhs, UnorderedPointwise(IsHalfOf(), rhs));
}

TEST(UnorderedPointwiseTest, AllowsMonomorphicInnerMatcher) {
  const double lhs[3] = {1, 2, 3};
  const int rhs[3] = {4, 6, 2};
  const Matcher<std::tuple<const double&, const int&>> m1 = IsHalfOf();
  EXPECT_THAT(lhs, UnorderedPointwise(m1, rhs));

  // This type works as a std::tuple<const double&, const int&> can be
  // implicitly cast to std::tuple<double, int>.
  const Matcher<std::tuple<double, int>> m2 = IsHalfOf();
  EXPECT_THAT(lhs, UnorderedPointwise(m2, rhs));
}

TEST(UnorderedPointwiseTest, WorksWithMoveOnly) {
  ContainerHelper helper;
  EXPECT_CALL(helper, Call(UnorderedPointwise(PointeeEquals(),
                                              std::vector<int>{1, 2})));
  helper.Call(MakeUniquePtrs({2, 1}));
}

// Sample optional type implementation with minimal requirements for use with
// Optional matcher.
template <typename T>
class SampleOptional {
 public:
  using value_type = T;
  explicit SampleOptional(T value)
      : value_(std::move(value)), has_value_(true) {}
  SampleOptional() : value_(), has_value_(false) {}
  operator bool() const { return has_value_; }
  const T& operator*() const { return value_; }

 private:
  T value_;
  bool has_value_;
};

TEST(OptionalTest, DescribesSelf) {
  const Matcher<SampleOptional<int>> m = Optional(Eq(1));
  EXPECT_EQ("value is equal to 1", Describe(m));
}

TEST(OptionalTest, ExplainsSelf) {
  const Matcher<SampleOptional<int>> m = Optional(Eq(1));
  EXPECT_EQ("whose value 1 matches", Explain(m, SampleOptional<int>(1)));
  EXPECT_EQ("whose value 2 doesn't match", Explain(m, SampleOptional<int>(2)));
}

TEST(OptionalTest, MatchesNonEmptyOptional) {
  const Matcher<SampleOptional<int>> m1 = Optional(1);
  const Matcher<SampleOptional<int>> m2 = Optional(Eq(2));
  const Matcher<SampleOptional<int>> m3 = Optional(Lt(3));
  SampleOptional<int> opt(1);
  EXPECT_TRUE(m1.Matches(opt));
  EXPECT_FALSE(m2.Matches(opt));
  EXPECT_TRUE(m3.Matches(opt));
}

TEST(OptionalTest, DoesNotMatchNullopt) {
  const Matcher<SampleOptional<int>> m = Optional(1);
  SampleOptional<int> empty;
  EXPECT_FALSE(m.Matches(empty));
}

TEST(OptionalTest, WorksWithMoveOnly) {
  Matcher<SampleOptional<std::unique_ptr<int>>> m = Optional(Eq(nullptr));
  EXPECT_TRUE(m.Matches(SampleOptional<std::unique_ptr<int>>(nullptr)));
}

class SampleVariantIntString {
 public:
  SampleVariantIntString(int i) : i_(i), has_int_(true) {}
  SampleVariantIntString(const std::string& s) : s_(s), has_int_(false) {}

  template <typename T>
  friend bool holds_alternative(const SampleVariantIntString& value) {
    return value.has_int_ == std::is_same<T, int>::value;
  }

  template <typename T>
  friend const T& get(const SampleVariantIntString& value) {
    return value.get_impl(static_cast<T*>(nullptr));
  }

 private:
  const int& get_impl(int*) const { return i_; }
  const std::string& get_impl(std::string*) const { return s_; }

  int i_;
  std::string s_;
  bool has_int_;
};

TEST(VariantTest, DescribesSelf) {
  const Matcher<SampleVariantIntString> m = VariantWith<int>(Eq(1));
  EXPECT_THAT(Describe(m), ContainsRegex("is a variant<> with value of type "
                                         "'.*' and the value is equal to 1"));
}

TEST(VariantTest, ExplainsSelf) {
  const Matcher<SampleVariantIntString> m = VariantWith<int>(Eq(1));
  EXPECT_THAT(Explain(m, SampleVariantIntString(1)),
              ContainsRegex("whose value 1"));
  EXPECT_THAT(Explain(m, SampleVariantIntString("A")),
              HasSubstr("whose value is not of type '"));
  EXPECT_THAT(Explain(m, SampleVariantIntString(2)),
              "whose value 2 doesn't match");
}

TEST(VariantTest, FullMatch) {
  Matcher<SampleVariantIntString> m = VariantWith<int>(Eq(1));
  EXPECT_TRUE(m.Matches(SampleVariantIntString(1)));

  m = VariantWith<std::string>(Eq("1"));
  EXPECT_TRUE(m.Matches(SampleVariantIntString("1")));
}

TEST(VariantTest, TypeDoesNotMatch) {
  Matcher<SampleVariantIntString> m = VariantWith<int>(Eq(1));
  EXPECT_FALSE(m.Matches(SampleVariantIntString("1")));

  m = VariantWith<std::string>(Eq("1"));
  EXPECT_FALSE(m.Matches(SampleVariantIntString(1)));
}

TEST(VariantTest, InnerDoesNotMatch) {
  Matcher<SampleVariantIntString> m = VariantWith<int>(Eq(1));
  EXPECT_FALSE(m.Matches(SampleVariantIntString(2)));

  m = VariantWith<std::string>(Eq("1"));
  EXPECT_FALSE(m.Matches(SampleVariantIntString("2")));
}

class SampleAnyType {
 public:
  explicit SampleAnyType(int i) : index_(0), i_(i) {}
  explicit SampleAnyType(const std::string& s) : index_(1), s_(s) {}

  template <typename T>
  friend const T* any_cast(const SampleAnyType* any) {
    return any->get_impl(static_cast<T*>(nullptr));
  }

 private:
  int index_;
  int i_;
  std::string s_;

  const int* get_impl(int*) const { return index_ == 0 ? &i_ : nullptr; }
  const std::string* get_impl(std::string*) const {
    return index_ == 1 ? &s_ : nullptr;
  }
};

TEST(AnyWithTest, FullMatch) {
  Matcher<SampleAnyType> m = AnyWith<int>(Eq(1));
  EXPECT_TRUE(m.Matches(SampleAnyType(1)));
}

TEST(AnyWithTest, TestBadCastType) {
  Matcher<SampleAnyType> m = AnyWith<std::string>(Eq("fail"));
  EXPECT_FALSE(m.Matches(SampleAnyType(1)));
}

TEST(AnyWithTest, TestUseInContainers) {
  std::vector<SampleAnyType> a;
  a.emplace_back(1);
  a.emplace_back(2);
  a.emplace_back(3);
  EXPECT_THAT(
      a, ElementsAreArray({AnyWith<int>(1), AnyWith<int>(2), AnyWith<int>(3)}));

  std::vector<SampleAnyType> b;
  b.emplace_back("hello");
  b.emplace_back("merhaba");
  b.emplace_back("salut");
  EXPECT_THAT(b, ElementsAreArray({AnyWith<std::string>("hello"),
                                   AnyWith<std::string>("merhaba"),
                                   AnyWith<std::string>("salut")}));
}
TEST(AnyWithTest, TestCompare) {
  EXPECT_THAT(SampleAnyType(1), AnyWith<int>(Gt(0)));
}

TEST(AnyWithTest, DescribesSelf) {
  const Matcher<const SampleAnyType&> m = AnyWith<int>(Eq(1));
  EXPECT_THAT(Describe(m), ContainsRegex("is an 'any' type with value of type "
                                         "'.*' and the value is equal to 1"));
}

TEST(AnyWithTest, ExplainsSelf) {
  const Matcher<const SampleAnyType&> m = AnyWith<int>(Eq(1));

  EXPECT_THAT(Explain(m, SampleAnyType(1)), ContainsRegex("whose value 1"));
  EXPECT_THAT(Explain(m, SampleAnyType("A")),
              HasSubstr("whose value is not of type '"));
  EXPECT_THAT(Explain(m, SampleAnyType(2)), "whose value 2 doesn't match");
}

TEST(PointeeTest, WorksOnMoveOnlyType) {
  std::unique_ptr<int> p(new int(3));
  EXPECT_THAT(p, Pointee(Eq(3)));
  EXPECT_THAT(p, Not(Pointee(Eq(2))));
}

TEST(NotTest, WorksOnMoveOnlyType) {
  std::unique_ptr<int> p(new int(3));
  EXPECT_THAT(p, Pointee(Eq(3)));
  EXPECT_THAT(p, Not(Pointee(Eq(2))));
}

// Tests Args<k0, ..., kn>(m).

TEST(ArgsTest, AcceptsZeroTemplateArg) {
  const std::tuple<int, bool> t(5, true);
  EXPECT_THAT(t, Args<>(Eq(std::tuple<>())));
  EXPECT_THAT(t, Not(Args<>(Ne(std::tuple<>()))));
}

TEST(ArgsTest, AcceptsOneTemplateArg) {
  const std::tuple<int, bool> t(5, true);
  EXPECT_THAT(t, Args<0>(Eq(std::make_tuple(5))));
  EXPECT_THAT(t, Args<1>(Eq(std::make_tuple(true))));
  EXPECT_THAT(t, Not(Args<1>(Eq(std::make_tuple(false)))));
}

TEST(ArgsTest, AcceptsTwoTemplateArgs) {
  const std::tuple<short, int, long> t(4, 5, 6L);  // NOLINT

  EXPECT_THAT(t, (Args<0, 1>(Lt())));
  EXPECT_THAT(t, (Args<1, 2>(Lt())));
  EXPECT_THAT(t, Not(Args<0, 2>(Gt())));
}

TEST(ArgsTest, AcceptsRepeatedTemplateArgs) {
  const std::tuple<short, int, long> t(4, 5, 6L);  // NOLINT
  EXPECT_THAT(t, (Args<0, 0>(Eq())));
  EXPECT_THAT(t, Not(Args<1, 1>(Ne())));
}

TEST(ArgsTest, AcceptsDecreasingTemplateArgs) {
  const std::tuple<short, int, long> t(4, 5, 6L);  // NOLINT
  EXPECT_THAT(t, (Args<2, 0>(Gt())));
  EXPECT_THAT(t, Not(Args<2, 1>(Lt())));
}

MATCHER(SumIsZero, "") {
  return std::get<0>(arg) + std::get<1>(arg) + std::get<2>(arg) == 0;
}

TEST(ArgsTest, AcceptsMoreTemplateArgsThanArityOfOriginalTuple) {
  EXPECT_THAT(std::make_tuple(-1, 2), (Args<0, 0, 1>(SumIsZero())));
  EXPECT_THAT(std::make_tuple(1, 2), Not(Args<0, 0, 1>(SumIsZero())));
}

TEST(ArgsTest, CanBeNested) {
  const std::tuple<short, int, long, int> t(4, 5, 6L, 6);  // NOLINT
  EXPECT_THAT(t, (Args<1, 2, 3>(Args<1, 2>(Eq()))));
  EXPECT_THAT(t, (Args<0, 1, 3>(Args<0, 2>(Lt()))));
}

TEST(ArgsTest, CanMatchTupleByValue) {
  typedef std::tuple<char, int, int> Tuple3;
  const Matcher<Tuple3> m = Args<1, 2>(Lt());
  EXPECT_TRUE(m.Matches(Tuple3('a', 1, 2)));
  EXPECT_FALSE(m.Matches(Tuple3('b', 2, 2)));
}

TEST(ArgsTest, CanMatchTupleByReference) {
  typedef std::tuple<char, char, int> Tuple3;
  const Matcher<const Tuple3&> m = Args<0, 1>(Lt());
  EXPECT_TRUE(m.Matches(Tuple3('a', 'b', 2)));
  EXPECT_FALSE(m.Matches(Tuple3('b', 'b', 2)));
}

// Validates that arg is printed as str.
MATCHER_P(PrintsAs, str, "") {
  return testing::PrintToString(arg) == str;
}

TEST(ArgsTest, AcceptsTenTemplateArgs) {
  EXPECT_THAT(std::make_tuple(0, 1L, 2, 3L, 4, 5, 6, 7, 8, 9),
              (Args<9, 8, 7, 6, 5, 4, 3, 2, 1, 0>(
                  PrintsAs("(9, 8, 7, 6, 5, 4, 3, 2, 1, 0)"))));
  EXPECT_THAT(std::make_tuple(0, 1L, 2, 3L, 4, 5, 6, 7, 8, 9),
              Not(Args<9, 8, 7, 6, 5, 4, 3, 2, 1, 0>(
                  PrintsAs("(0, 8, 7, 6, 5, 4, 3, 2, 1, 0)"))));
}

TEST(ArgsTest, DescirbesSelfCorrectly) {
  const Matcher<std::tuple<int, bool, char> > m = Args<2, 0>(Lt());
  EXPECT_EQ("are a tuple whose fields (#2, #0) are a pair where "
            "the first < the second",
            Describe(m));
}

TEST(ArgsTest, DescirbesNestedArgsCorrectly) {
  const Matcher<const std::tuple<int, bool, char, int>&> m =
      Args<0, 2, 3>(Args<2, 0>(Lt()));
  EXPECT_EQ("are a tuple whose fields (#0, #2, #3) are a tuple "
            "whose fields (#2, #0) are a pair where the first < the second",
            Describe(m));
}

TEST(ArgsTest, DescribesNegationCorrectly) {
  const Matcher<std::tuple<int, char> > m = Args<1, 0>(Gt());
  EXPECT_EQ("are a tuple whose fields (#1, #0) aren't a pair "
            "where the first > the second",
            DescribeNegation(m));
}

TEST(ArgsTest, ExplainsMatchResultWithoutInnerExplanation) {
  const Matcher<std::tuple<bool, int, int> > m = Args<1, 2>(Eq());
  EXPECT_EQ("whose fields (#1, #2) are (42, 42)",
            Explain(m, std::make_tuple(false, 42, 42)));
  EXPECT_EQ("whose fields (#1, #2) are (42, 43)",
            Explain(m, std::make_tuple(false, 42, 43)));
}

// For testing Args<>'s explanation.
class LessThanMatcher : public MatcherInterface<std::tuple<char, int> > {
 public:
  void DescribeTo(::std::ostream* /*os*/) const override {}

  bool MatchAndExplain(std::tuple<char, int> value,
                       MatchResultListener* listener) const override {
    const int diff = std::get<0>(value) - std::get<1>(value);
    if (diff > 0) {
      *listener << "where the first value is " << diff
                << " more than the second";
    }
    return diff < 0;
  }
};

Matcher<std::tuple<char, int> > LessThan() {
  return MakeMatcher(new LessThanMatcher);
}

TEST(ArgsTest, ExplainsMatchResultWithInnerExplanation) {
  const Matcher<std::tuple<char, int, int> > m = Args<0, 2>(LessThan());
  EXPECT_EQ(
      "whose fields (#0, #2) are ('a' (97, 0x61), 42), "
      "where the first value is 55 more than the second",
      Explain(m, std::make_tuple('a', 42, 42)));
  EXPECT_EQ("whose fields (#0, #2) are ('\\0', 43)",
            Explain(m, std::make_tuple('\0', 42, 43)));
}

class PredicateFormatterFromMatcherTest : public ::testing::Test {
 protected:
  enum Behavior { kInitialSuccess, kAlwaysFail, kFlaky };

  // A matcher that can return different results when used multiple times on the
  // same input. No real matcher should do this; but this lets us test that we
  // detect such behavior and fail appropriately.
  class MockMatcher : public MatcherInterface<Behavior> {
   public:
    bool MatchAndExplain(Behavior behavior,
                         MatchResultListener* listener) const override {
      *listener << "[MatchAndExplain]";
      switch (behavior) {
        case kInitialSuccess:
          // The first call to MatchAndExplain should use a "not interested"
          // listener; so this is expected to return |true|. There should be no
          // subsequent calls.
          return !listener->IsInterested();

        case kAlwaysFail:
          return false;

        case kFlaky:
          // The first call to MatchAndExplain should use a "not interested"
          // listener; so this will return |false|. Subsequent calls should have
          // an "interested" listener; so this will return |true|, thus
          // simulating a flaky matcher.
          return listener->IsInterested();
      }

      GTEST_LOG_(FATAL) << "This should never be reached";
      return false;
    }

    void DescribeTo(ostream* os) const override { *os << "[DescribeTo]"; }

    void DescribeNegationTo(ostream* os) const override {
      *os << "[DescribeNegationTo]";
    }
  };

  AssertionResult RunPredicateFormatter(Behavior behavior) {
    auto matcher = MakeMatcher(new MockMatcher);
    PredicateFormatterFromMatcher<Matcher<Behavior>> predicate_formatter(
        matcher);
    return predicate_formatter("dummy-name", behavior);
  }
};

TEST_F(PredicateFormatterFromMatcherTest, ShortCircuitOnSuccess) {
  AssertionResult result = RunPredicateFormatter(kInitialSuccess);
  EXPECT_TRUE(result);  // Implicit cast to bool.
  std::string expect;
  EXPECT_EQ(expect, result.message());
}

TEST_F(PredicateFormatterFromMatcherTest, NoShortCircuitOnFailure) {
  AssertionResult result = RunPredicateFormatter(kAlwaysFail);
  EXPECT_FALSE(result);  // Implicit cast to bool.
  std::string expect =
      "Value of: dummy-name\nExpected: [DescribeTo]\n"
      "  Actual: 1, [MatchAndExplain]";
  EXPECT_EQ(expect, result.message());
}

TEST_F(PredicateFormatterFromMatcherTest, DetectsFlakyShortCircuit) {
  AssertionResult result = RunPredicateFormatter(kFlaky);
  EXPECT_FALSE(result);  // Implicit cast to bool.
  std::string expect =
      "Value of: dummy-name\nExpected: [DescribeTo]\n"
      "  The matcher failed on the initial attempt; but passed when rerun to "
      "generate the explanation.\n"
      "  Actual: 2, [MatchAndExplain]";
  EXPECT_EQ(expect, result.message());
}

}  // namespace
}  // namespace gmock_matchers_test
}  // namespace testing

#ifdef _MSC_VER
# pragma warning(pop)
#endif
