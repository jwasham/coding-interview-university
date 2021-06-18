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

// The Google C++ Testing and Mocking Framework (Google Test)
//
// This file implements just enough of the matcher interface to allow
// EXPECT_DEATH and friends to accept a matcher argument.

// IWYU pragma: private, include "testing/base/public/gunit.h"
// IWYU pragma: friend third_party/googletest/googlemock/.*
// IWYU pragma: friend third_party/googletest/googletest/.*

#ifndef GTEST_INCLUDE_GTEST_GTEST_MATCHERS_H_
#define GTEST_INCLUDE_GTEST_GTEST_MATCHERS_H_

#include <memory>
#include <ostream>
#include <string>
#include <type_traits>

#include "gtest/gtest-printers.h"
#include "gtest/internal/gtest-internal.h"
#include "gtest/internal/gtest-port.h"

// MSVC warning C5046 is new as of VS2017 version 15.8.
#if defined(_MSC_VER) && _MSC_VER >= 1915
#define GTEST_MAYBE_5046_ 5046
#else
#define GTEST_MAYBE_5046_
#endif

GTEST_DISABLE_MSC_WARNINGS_PUSH_(
    4251 GTEST_MAYBE_5046_ /* class A needs to have dll-interface to be used by
                              clients of class B */
    /* Symbol involving type with internal linkage not defined */)

namespace testing {

// To implement a matcher Foo for type T, define:
//   1. a class FooMatcherImpl that implements the
//      MatcherInterface<T> interface, and
//   2. a factory function that creates a Matcher<T> object from a
//      FooMatcherImpl*.
//
// The two-level delegation design makes it possible to allow a user
// to write "v" instead of "Eq(v)" where a Matcher is expected, which
// is impossible if we pass matchers by pointers.  It also eases
// ownership management as Matcher objects can now be copied like
// plain values.

// MatchResultListener is an abstract class.  Its << operator can be
// used by a matcher to explain why a value matches or doesn't match.
//
class MatchResultListener {
 public:
  // Creates a listener object with the given underlying ostream.  The
  // listener does not own the ostream, and does not dereference it
  // in the constructor or destructor.
  explicit MatchResultListener(::std::ostream* os) : stream_(os) {}
  virtual ~MatchResultListener() = 0;  // Makes this class abstract.

  // Streams x to the underlying ostream; does nothing if the ostream
  // is NULL.
  template <typename T>
  MatchResultListener& operator<<(const T& x) {
    if (stream_ != nullptr) *stream_ << x;
    return *this;
  }

  // Returns the underlying ostream.
  ::std::ostream* stream() { return stream_; }

  // Returns true if and only if the listener is interested in an explanation
  // of the match result.  A matcher's MatchAndExplain() method can use
  // this information to avoid generating the explanation when no one
  // intends to hear it.
  bool IsInterested() const { return stream_ != nullptr; }

 private:
  ::std::ostream* const stream_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(MatchResultListener);
};

inline MatchResultListener::~MatchResultListener() {
}

// An instance of a subclass of this knows how to describe itself as a
// matcher.
class MatcherDescriberInterface {
 public:
  virtual ~MatcherDescriberInterface() {}

  // Describes this matcher to an ostream.  The function should print
  // a verb phrase that describes the property a value matching this
  // matcher should have.  The subject of the verb phrase is the value
  // being matched.  For example, the DescribeTo() method of the Gt(7)
  // matcher prints "is greater than 7".
  virtual void DescribeTo(::std::ostream* os) const = 0;

  // Describes the negation of this matcher to an ostream.  For
  // example, if the description of this matcher is "is greater than
  // 7", the negated description could be "is not greater than 7".
  // You are not required to override this when implementing
  // MatcherInterface, but it is highly advised so that your matcher
  // can produce good error messages.
  virtual void DescribeNegationTo(::std::ostream* os) const {
    *os << "not (";
    DescribeTo(os);
    *os << ")";
  }
};

// The implementation of a matcher.
template <typename T>
class MatcherInterface : public MatcherDescriberInterface {
 public:
  // Returns true if and only if the matcher matches x; also explains the
  // match result to 'listener' if necessary (see the next paragraph), in
  // the form of a non-restrictive relative clause ("which ...",
  // "whose ...", etc) that describes x.  For example, the
  // MatchAndExplain() method of the Pointee(...) matcher should
  // generate an explanation like "which points to ...".
  //
  // Implementations of MatchAndExplain() should add an explanation of
  // the match result *if and only if* they can provide additional
  // information that's not already present (or not obvious) in the
  // print-out of x and the matcher's description.  Whether the match
  // succeeds is not a factor in deciding whether an explanation is
  // needed, as sometimes the caller needs to print a failure message
  // when the match succeeds (e.g. when the matcher is used inside
  // Not()).
  //
  // For example, a "has at least 10 elements" matcher should explain
  // what the actual element count is, regardless of the match result,
  // as it is useful information to the reader; on the other hand, an
  // "is empty" matcher probably only needs to explain what the actual
  // size is when the match fails, as it's redundant to say that the
  // size is 0 when the value is already known to be empty.
  //
  // You should override this method when defining a new matcher.
  //
  // It's the responsibility of the caller (Google Test) to guarantee
  // that 'listener' is not NULL.  This helps to simplify a matcher's
  // implementation when it doesn't care about the performance, as it
  // can talk to 'listener' without checking its validity first.
  // However, in order to implement dummy listeners efficiently,
  // listener->stream() may be NULL.
  virtual bool MatchAndExplain(T x, MatchResultListener* listener) const = 0;

  // Inherits these methods from MatcherDescriberInterface:
  //   virtual void DescribeTo(::std::ostream* os) const = 0;
  //   virtual void DescribeNegationTo(::std::ostream* os) const;
};

namespace internal {

// Converts a MatcherInterface<T> to a MatcherInterface<const T&>.
template <typename T>
class MatcherInterfaceAdapter : public MatcherInterface<const T&> {
 public:
  explicit MatcherInterfaceAdapter(const MatcherInterface<T>* impl)
      : impl_(impl) {}
  ~MatcherInterfaceAdapter() override { delete impl_; }

  void DescribeTo(::std::ostream* os) const override { impl_->DescribeTo(os); }

  void DescribeNegationTo(::std::ostream* os) const override {
    impl_->DescribeNegationTo(os);
  }

  bool MatchAndExplain(const T& x,
                       MatchResultListener* listener) const override {
    return impl_->MatchAndExplain(x, listener);
  }

 private:
  const MatcherInterface<T>* const impl_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(MatcherInterfaceAdapter);
};

struct AnyEq {
  template <typename A, typename B>
  bool operator()(const A& a, const B& b) const { return a == b; }
};
struct AnyNe {
  template <typename A, typename B>
  bool operator()(const A& a, const B& b) const { return a != b; }
};
struct AnyLt {
  template <typename A, typename B>
  bool operator()(const A& a, const B& b) const { return a < b; }
};
struct AnyGt {
  template <typename A, typename B>
  bool operator()(const A& a, const B& b) const { return a > b; }
};
struct AnyLe {
  template <typename A, typename B>
  bool operator()(const A& a, const B& b) const { return a <= b; }
};
struct AnyGe {
  template <typename A, typename B>
  bool operator()(const A& a, const B& b) const { return a >= b; }
};

// A match result listener that ignores the explanation.
class DummyMatchResultListener : public MatchResultListener {
 public:
  DummyMatchResultListener() : MatchResultListener(nullptr) {}

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(DummyMatchResultListener);
};

// A match result listener that forwards the explanation to a given
// ostream.  The difference between this and MatchResultListener is
// that the former is concrete.
class StreamMatchResultListener : public MatchResultListener {
 public:
  explicit StreamMatchResultListener(::std::ostream* os)
      : MatchResultListener(os) {}

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(StreamMatchResultListener);
};

// An internal class for implementing Matcher<T>, which will derive
// from it.  We put functionalities common to all Matcher<T>
// specializations here to avoid code duplication.
template <typename T>
class MatcherBase {
 public:
  // Returns true if and only if the matcher matches x; also explains the
  // match result to 'listener'.
  bool MatchAndExplain(const T& x, MatchResultListener* listener) const {
    return impl_->MatchAndExplain(x, listener);
  }

  // Returns true if and only if this matcher matches x.
  bool Matches(const T& x) const {
    DummyMatchResultListener dummy;
    return MatchAndExplain(x, &dummy);
  }

  // Describes this matcher to an ostream.
  void DescribeTo(::std::ostream* os) const { impl_->DescribeTo(os); }

  // Describes the negation of this matcher to an ostream.
  void DescribeNegationTo(::std::ostream* os) const {
    impl_->DescribeNegationTo(os);
  }

  // Explains why x matches, or doesn't match, the matcher.
  void ExplainMatchResultTo(const T& x, ::std::ostream* os) const {
    StreamMatchResultListener listener(os);
    MatchAndExplain(x, &listener);
  }

  // Returns the describer for this matcher object; retains ownership
  // of the describer, which is only guaranteed to be alive when
  // this matcher object is alive.
  const MatcherDescriberInterface* GetDescriber() const {
    return impl_.get();
  }

 protected:
  MatcherBase() {}

  // Constructs a matcher from its implementation.
  explicit MatcherBase(const MatcherInterface<const T&>* impl) : impl_(impl) {}

  template <typename U>
  explicit MatcherBase(
      const MatcherInterface<U>* impl,
      typename std::enable_if<!std::is_same<U, const U&>::value>::type* =
          nullptr)
      : impl_(new internal::MatcherInterfaceAdapter<U>(impl)) {}

  MatcherBase(const MatcherBase&) = default;
  MatcherBase& operator=(const MatcherBase&) = default;
  MatcherBase(MatcherBase&&) = default;
  MatcherBase& operator=(MatcherBase&&) = default;

  virtual ~MatcherBase() {}

 private:
  std::shared_ptr<const MatcherInterface<const T&>> impl_;
};

}  // namespace internal

// A Matcher<T> is a copyable and IMMUTABLE (except by assignment)
// object that can check whether a value of type T matches.  The
// implementation of Matcher<T> is just a std::shared_ptr to const
// MatcherInterface<T>.  Don't inherit from Matcher!
template <typename T>
class Matcher : public internal::MatcherBase<T> {
 public:
  // Constructs a null matcher.  Needed for storing Matcher objects in STL
  // containers.  A default-constructed matcher is not yet initialized.  You
  // cannot use it until a valid value has been assigned to it.
  explicit Matcher() {}  // NOLINT

  // Constructs a matcher from its implementation.
  explicit Matcher(const MatcherInterface<const T&>* impl)
      : internal::MatcherBase<T>(impl) {}

  template <typename U>
  explicit Matcher(
      const MatcherInterface<U>* impl,
      typename std::enable_if<!std::is_same<U, const U&>::value>::type* =
          nullptr)
      : internal::MatcherBase<T>(impl) {}

  // Implicit constructor here allows people to write
  // EXPECT_CALL(foo, Bar(5)) instead of EXPECT_CALL(foo, Bar(Eq(5))) sometimes
  Matcher(T value);  // NOLINT
};

// The following two specializations allow the user to write str
// instead of Eq(str) and "foo" instead of Eq("foo") when a std::string
// matcher is expected.
template <>
class GTEST_API_ Matcher<const std::string&>
    : public internal::MatcherBase<const std::string&> {
 public:
  Matcher() {}

  explicit Matcher(const MatcherInterface<const std::string&>* impl)
      : internal::MatcherBase<const std::string&>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a std::string object.
  Matcher(const std::string& s);  // NOLINT

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(const char* s);  // NOLINT
};

template <>
class GTEST_API_ Matcher<std::string>
    : public internal::MatcherBase<std::string> {
 public:
  Matcher() {}

  explicit Matcher(const MatcherInterface<const std::string&>* impl)
      : internal::MatcherBase<std::string>(impl) {}
  explicit Matcher(const MatcherInterface<std::string>* impl)
      : internal::MatcherBase<std::string>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a string object.
  Matcher(const std::string& s);  // NOLINT

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(const char* s);  // NOLINT
};

#if GTEST_HAS_ABSL
// The following two specializations allow the user to write str
// instead of Eq(str) and "foo" instead of Eq("foo") when a absl::string_view
// matcher is expected.
template <>
class GTEST_API_ Matcher<const absl::string_view&>
    : public internal::MatcherBase<const absl::string_view&> {
 public:
  Matcher() {}

  explicit Matcher(const MatcherInterface<const absl::string_view&>* impl)
      : internal::MatcherBase<const absl::string_view&>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a std::string object.
  Matcher(const std::string& s);  // NOLINT

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(const char* s);  // NOLINT

  // Allows the user to pass absl::string_views directly.
  Matcher(absl::string_view s);  // NOLINT
};

template <>
class GTEST_API_ Matcher<absl::string_view>
    : public internal::MatcherBase<absl::string_view> {
 public:
  Matcher() {}

  explicit Matcher(const MatcherInterface<const absl::string_view&>* impl)
      : internal::MatcherBase<absl::string_view>(impl) {}
  explicit Matcher(const MatcherInterface<absl::string_view>* impl)
      : internal::MatcherBase<absl::string_view>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a std::string object.
  Matcher(const std::string& s);  // NOLINT

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(const char* s);  // NOLINT

  // Allows the user to pass absl::string_views directly.
  Matcher(absl::string_view s);  // NOLINT
};
#endif  // GTEST_HAS_ABSL

// Prints a matcher in a human-readable format.
template <typename T>
std::ostream& operator<<(std::ostream& os, const Matcher<T>& matcher) {
  matcher.DescribeTo(&os);
  return os;
}

// The PolymorphicMatcher class template makes it easy to implement a
// polymorphic matcher (i.e. a matcher that can match values of more
// than one type, e.g. Eq(n) and NotNull()).
//
// To define a polymorphic matcher, a user should provide an Impl
// class that has a DescribeTo() method and a DescribeNegationTo()
// method, and define a member function (or member function template)
//
//   bool MatchAndExplain(const Value& value,
//                        MatchResultListener* listener) const;
//
// See the definition of NotNull() for a complete example.
template <class Impl>
class PolymorphicMatcher {
 public:
  explicit PolymorphicMatcher(const Impl& an_impl) : impl_(an_impl) {}

  // Returns a mutable reference to the underlying matcher
  // implementation object.
  Impl& mutable_impl() { return impl_; }

  // Returns an immutable reference to the underlying matcher
  // implementation object.
  const Impl& impl() const { return impl_; }

  template <typename T>
  operator Matcher<T>() const {
    return Matcher<T>(new MonomorphicImpl<const T&>(impl_));
  }

 private:
  template <typename T>
  class MonomorphicImpl : public MatcherInterface<T> {
   public:
    explicit MonomorphicImpl(const Impl& impl) : impl_(impl) {}

    virtual void DescribeTo(::std::ostream* os) const { impl_.DescribeTo(os); }

    virtual void DescribeNegationTo(::std::ostream* os) const {
      impl_.DescribeNegationTo(os);
    }

    virtual bool MatchAndExplain(T x, MatchResultListener* listener) const {
      return impl_.MatchAndExplain(x, listener);
    }

   private:
    const Impl impl_;
  };

  Impl impl_;
};

// Creates a matcher from its implementation.
// DEPRECATED: Especially in the generic code, prefer:
//   Matcher<T>(new MyMatcherImpl<const T&>(...));
//
// MakeMatcher may create a Matcher that accepts its argument by value, which
// leads to unnecessary copies & lack of support for non-copyable types.
template <typename T>
inline Matcher<T> MakeMatcher(const MatcherInterface<T>* impl) {
  return Matcher<T>(impl);
}

// Creates a polymorphic matcher from its implementation.  This is
// easier to use than the PolymorphicMatcher<Impl> constructor as it
// doesn't require you to explicitly write the template argument, e.g.
//
//   MakePolymorphicMatcher(foo);
// vs
//   PolymorphicMatcher<TypeOfFoo>(foo);
template <class Impl>
inline PolymorphicMatcher<Impl> MakePolymorphicMatcher(const Impl& impl) {
  return PolymorphicMatcher<Impl>(impl);
}

namespace internal {
// Implements a matcher that compares a given value with a
// pre-supplied value using one of the ==, <=, <, etc, operators.  The
// two values being compared don't have to have the same type.
//
// The matcher defined here is polymorphic (for example, Eq(5) can be
// used to match an int, a short, a double, etc).  Therefore we use
// a template type conversion operator in the implementation.
//
// The following template definition assumes that the Rhs parameter is
// a "bare" type (i.e. neither 'const T' nor 'T&').
template <typename D, typename Rhs, typename Op>
class ComparisonBase {
 public:
  explicit ComparisonBase(const Rhs& rhs) : rhs_(rhs) {}
  template <typename Lhs>
  operator Matcher<Lhs>() const {
    return Matcher<Lhs>(new Impl<const Lhs&>(rhs_));
  }

 private:
  template <typename T>
  static const T& Unwrap(const T& v) { return v; }
  template <typename T>
  static const T& Unwrap(std::reference_wrapper<T> v) { return v; }

  template <typename Lhs, typename = Rhs>
  class Impl : public MatcherInterface<Lhs> {
   public:
    explicit Impl(const Rhs& rhs) : rhs_(rhs) {}
    bool MatchAndExplain(Lhs lhs,
                         MatchResultListener* /* listener */) const override {
      return Op()(lhs, Unwrap(rhs_));
    }
    void DescribeTo(::std::ostream* os) const override {
      *os << D::Desc() << " ";
      UniversalPrint(Unwrap(rhs_), os);
    }
    void DescribeNegationTo(::std::ostream* os) const override {
      *os << D::NegatedDesc() <<  " ";
      UniversalPrint(Unwrap(rhs_), os);
    }

   private:
    Rhs rhs_;
  };
  Rhs rhs_;
};

template <typename Rhs>
class EqMatcher : public ComparisonBase<EqMatcher<Rhs>, Rhs, AnyEq> {
 public:
  explicit EqMatcher(const Rhs& rhs)
      : ComparisonBase<EqMatcher<Rhs>, Rhs, AnyEq>(rhs) { }
  static const char* Desc() { return "is equal to"; }
  static const char* NegatedDesc() { return "isn't equal to"; }
};
template <typename Rhs>
class NeMatcher : public ComparisonBase<NeMatcher<Rhs>, Rhs, AnyNe> {
 public:
  explicit NeMatcher(const Rhs& rhs)
      : ComparisonBase<NeMatcher<Rhs>, Rhs, AnyNe>(rhs) { }
  static const char* Desc() { return "isn't equal to"; }
  static const char* NegatedDesc() { return "is equal to"; }
};
template <typename Rhs>
class LtMatcher : public ComparisonBase<LtMatcher<Rhs>, Rhs, AnyLt> {
 public:
  explicit LtMatcher(const Rhs& rhs)
      : ComparisonBase<LtMatcher<Rhs>, Rhs, AnyLt>(rhs) { }
  static const char* Desc() { return "is <"; }
  static const char* NegatedDesc() { return "isn't <"; }
};
template <typename Rhs>
class GtMatcher : public ComparisonBase<GtMatcher<Rhs>, Rhs, AnyGt> {
 public:
  explicit GtMatcher(const Rhs& rhs)
      : ComparisonBase<GtMatcher<Rhs>, Rhs, AnyGt>(rhs) { }
  static const char* Desc() { return "is >"; }
  static const char* NegatedDesc() { return "isn't >"; }
};
template <typename Rhs>
class LeMatcher : public ComparisonBase<LeMatcher<Rhs>, Rhs, AnyLe> {
 public:
  explicit LeMatcher(const Rhs& rhs)
      : ComparisonBase<LeMatcher<Rhs>, Rhs, AnyLe>(rhs) { }
  static const char* Desc() { return "is <="; }
  static const char* NegatedDesc() { return "isn't <="; }
};
template <typename Rhs>
class GeMatcher : public ComparisonBase<GeMatcher<Rhs>, Rhs, AnyGe> {
 public:
  explicit GeMatcher(const Rhs& rhs)
      : ComparisonBase<GeMatcher<Rhs>, Rhs, AnyGe>(rhs) { }
  static const char* Desc() { return "is >="; }
  static const char* NegatedDesc() { return "isn't >="; }
};

// Implements polymorphic matchers MatchesRegex(regex) and
// ContainsRegex(regex), which can be used as a Matcher<T> as long as
// T can be converted to a string.
class MatchesRegexMatcher {
 public:
  MatchesRegexMatcher(const RE* regex, bool full_match)
      : regex_(regex), full_match_(full_match) {}

#if GTEST_HAS_ABSL
  bool MatchAndExplain(const absl::string_view& s,
                       MatchResultListener* listener) const {
    return MatchAndExplain(std::string(s), listener);
  }
#endif  // GTEST_HAS_ABSL

  // Accepts pointer types, particularly:
  //   const char*
  //   char*
  //   const wchar_t*
  //   wchar_t*
  template <typename CharType>
  bool MatchAndExplain(CharType* s, MatchResultListener* listener) const {
    return s != nullptr && MatchAndExplain(std::string(s), listener);
  }

  // Matches anything that can convert to std::string.
  //
  // This is a template, not just a plain function with const std::string&,
  // because absl::string_view has some interfering non-explicit constructors.
  template <class MatcheeStringType>
  bool MatchAndExplain(const MatcheeStringType& s,
                       MatchResultListener* /* listener */) const {
    const std::string& s2(s);
    return full_match_ ? RE::FullMatch(s2, *regex_)
                       : RE::PartialMatch(s2, *regex_);
  }

  void DescribeTo(::std::ostream* os) const {
    *os << (full_match_ ? "matches" : "contains") << " regular expression ";
    UniversalPrinter<std::string>::Print(regex_->pattern(), os);
  }

  void DescribeNegationTo(::std::ostream* os) const {
    *os << "doesn't " << (full_match_ ? "match" : "contain")
        << " regular expression ";
    UniversalPrinter<std::string>::Print(regex_->pattern(), os);
  }

 private:
  const std::shared_ptr<const RE> regex_;
  const bool full_match_;
};
}  // namespace internal

// Matches a string that fully matches regular expression 'regex'.
// The matcher takes ownership of 'regex'.
inline PolymorphicMatcher<internal::MatchesRegexMatcher> MatchesRegex(
    const internal::RE* regex) {
  return MakePolymorphicMatcher(internal::MatchesRegexMatcher(regex, true));
}
inline PolymorphicMatcher<internal::MatchesRegexMatcher> MatchesRegex(
    const std::string& regex) {
  return MatchesRegex(new internal::RE(regex));
}

// Matches a string that contains regular expression 'regex'.
// The matcher takes ownership of 'regex'.
inline PolymorphicMatcher<internal::MatchesRegexMatcher> ContainsRegex(
    const internal::RE* regex) {
  return MakePolymorphicMatcher(internal::MatchesRegexMatcher(regex, false));
}
inline PolymorphicMatcher<internal::MatchesRegexMatcher> ContainsRegex(
    const std::string& regex) {
  return ContainsRegex(new internal::RE(regex));
}

// Creates a polymorphic matcher that matches anything equal to x.
// Note: if the parameter of Eq() were declared as const T&, Eq("foo")
// wouldn't compile.
template <typename T>
inline internal::EqMatcher<T> Eq(T x) { return internal::EqMatcher<T>(x); }

// Constructs a Matcher<T> from a 'value' of type T.  The constructed
// matcher matches any value that's equal to 'value'.
template <typename T>
Matcher<T>::Matcher(T value) { *this = Eq(value); }

// Creates a monomorphic matcher that matches anything with type Lhs
// and equal to rhs.  A user may need to use this instead of Eq(...)
// in order to resolve an overloading ambiguity.
//
// TypedEq<T>(x) is just a convenient short-hand for Matcher<T>(Eq(x))
// or Matcher<T>(x), but more readable than the latter.
//
// We could define similar monomorphic matchers for other comparison
// operations (e.g. TypedLt, TypedGe, and etc), but decided not to do
// it yet as those are used much less than Eq() in practice.  A user
// can always write Matcher<T>(Lt(5)) to be explicit about the type,
// for example.
template <typename Lhs, typename Rhs>
inline Matcher<Lhs> TypedEq(const Rhs& rhs) { return Eq(rhs); }

// Creates a polymorphic matcher that matches anything >= x.
template <typename Rhs>
inline internal::GeMatcher<Rhs> Ge(Rhs x) {
  return internal::GeMatcher<Rhs>(x);
}

// Creates a polymorphic matcher that matches anything > x.
template <typename Rhs>
inline internal::GtMatcher<Rhs> Gt(Rhs x) {
  return internal::GtMatcher<Rhs>(x);
}

// Creates a polymorphic matcher that matches anything <= x.
template <typename Rhs>
inline internal::LeMatcher<Rhs> Le(Rhs x) {
  return internal::LeMatcher<Rhs>(x);
}

// Creates a polymorphic matcher that matches anything < x.
template <typename Rhs>
inline internal::LtMatcher<Rhs> Lt(Rhs x) {
  return internal::LtMatcher<Rhs>(x);
}

// Creates a polymorphic matcher that matches anything != x.
template <typename Rhs>
inline internal::NeMatcher<Rhs> Ne(Rhs x) {
  return internal::NeMatcher<Rhs>(x);
}
}  // namespace testing

GTEST_DISABLE_MSC_WARNINGS_POP_()  //  4251 5046

#endif  // GTEST_INCLUDE_GTEST_GTEST_MATCHERS_H_
