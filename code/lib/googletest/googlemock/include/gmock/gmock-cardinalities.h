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
// This file implements some commonly used cardinalities.  More
// cardinalities can be defined by the user implementing the
// CardinalityInterface interface if necessary.

// GOOGLETEST_CM0002 DO NOT DELETE

#ifndef GMOCK_INCLUDE_GMOCK_GMOCK_CARDINALITIES_H_
#define GMOCK_INCLUDE_GMOCK_GMOCK_CARDINALITIES_H_

#include <limits.h>
#include <memory>
#include <ostream>  // NOLINT
#include "gmock/internal/gmock-port.h"
#include "gtest/gtest.h"

GTEST_DISABLE_MSC_WARNINGS_PUSH_(4251 \
/* class A needs to have dll-interface to be used by clients of class B */)

namespace testing {

// To implement a cardinality Foo, define:
//   1. a class FooCardinality that implements the
//      CardinalityInterface interface, and
//   2. a factory function that creates a Cardinality object from a
//      const FooCardinality*.
//
// The two-level delegation design follows that of Matcher, providing
// consistency for extension developers.  It also eases ownership
// management as Cardinality objects can now be copied like plain values.

// The implementation of a cardinality.
class CardinalityInterface {
 public:
  virtual ~CardinalityInterface() {}

  // Conservative estimate on the lower/upper bound of the number of
  // calls allowed.
  virtual int ConservativeLowerBound() const { return 0; }
  virtual int ConservativeUpperBound() const { return INT_MAX; }

  // Returns true if and only if call_count calls will satisfy this
  // cardinality.
  virtual bool IsSatisfiedByCallCount(int call_count) const = 0;

  // Returns true if and only if call_count calls will saturate this
  // cardinality.
  virtual bool IsSaturatedByCallCount(int call_count) const = 0;

  // Describes self to an ostream.
  virtual void DescribeTo(::std::ostream* os) const = 0;
};

// A Cardinality is a copyable and IMMUTABLE (except by assignment)
// object that specifies how many times a mock function is expected to
// be called.  The implementation of Cardinality is just a std::shared_ptr
// to const CardinalityInterface. Don't inherit from Cardinality!
class GTEST_API_ Cardinality {
 public:
  // Constructs a null cardinality.  Needed for storing Cardinality
  // objects in STL containers.
  Cardinality() {}

  // Constructs a Cardinality from its implementation.
  explicit Cardinality(const CardinalityInterface* impl) : impl_(impl) {}

  // Conservative estimate on the lower/upper bound of the number of
  // calls allowed.
  int ConservativeLowerBound() const { return impl_->ConservativeLowerBound(); }
  int ConservativeUpperBound() const { return impl_->ConservativeUpperBound(); }

  // Returns true if and only if call_count calls will satisfy this
  // cardinality.
  bool IsSatisfiedByCallCount(int call_count) const {
    return impl_->IsSatisfiedByCallCount(call_count);
  }

  // Returns true if and only if call_count calls will saturate this
  // cardinality.
  bool IsSaturatedByCallCount(int call_count) const {
    return impl_->IsSaturatedByCallCount(call_count);
  }

  // Returns true if and only if call_count calls will over-saturate this
  // cardinality, i.e. exceed the maximum number of allowed calls.
  bool IsOverSaturatedByCallCount(int call_count) const {
    return impl_->IsSaturatedByCallCount(call_count) &&
        !impl_->IsSatisfiedByCallCount(call_count);
  }

  // Describes self to an ostream
  void DescribeTo(::std::ostream* os) const { impl_->DescribeTo(os); }

  // Describes the given actual call count to an ostream.
  static void DescribeActualCallCountTo(int actual_call_count,
                                        ::std::ostream* os);

 private:
  std::shared_ptr<const CardinalityInterface> impl_;
};

// Creates a cardinality that allows at least n calls.
GTEST_API_ Cardinality AtLeast(int n);

// Creates a cardinality that allows at most n calls.
GTEST_API_ Cardinality AtMost(int n);

// Creates a cardinality that allows any number of calls.
GTEST_API_ Cardinality AnyNumber();

// Creates a cardinality that allows between min and max calls.
GTEST_API_ Cardinality Between(int min, int max);

// Creates a cardinality that allows exactly n calls.
GTEST_API_ Cardinality Exactly(int n);

// Creates a cardinality from its implementation.
inline Cardinality MakeCardinality(const CardinalityInterface* c) {
  return Cardinality(c);
}

}  // namespace testing

GTEST_DISABLE_MSC_WARNINGS_POP_()  //  4251

#endif  // GMOCK_INCLUDE_GMOCK_GMOCK_CARDINALITIES_H_
