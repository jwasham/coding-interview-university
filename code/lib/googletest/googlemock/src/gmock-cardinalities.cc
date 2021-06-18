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
// This file implements cardinalities.

#include "gmock/gmock-cardinalities.h"

#include <limits.h>
#include <ostream>  // NOLINT
#include <sstream>
#include <string>
#include "gmock/internal/gmock-internal-utils.h"
#include "gtest/gtest.h"

namespace testing {

namespace {

// Implements the Between(m, n) cardinality.
class BetweenCardinalityImpl : public CardinalityInterface {
 public:
  BetweenCardinalityImpl(int min, int max)
      : min_(min >= 0 ? min : 0),
        max_(max >= min_ ? max : min_) {
    std::stringstream ss;
    if (min < 0) {
      ss << "The invocation lower bound must be >= 0, "
         << "but is actually " << min << ".";
      internal::Expect(false, __FILE__, __LINE__, ss.str());
    } else if (max < 0) {
      ss << "The invocation upper bound must be >= 0, "
         << "but is actually " << max << ".";
      internal::Expect(false, __FILE__, __LINE__, ss.str());
    } else if (min > max) {
      ss << "The invocation upper bound (" << max
         << ") must be >= the invocation lower bound (" << min
         << ").";
      internal::Expect(false, __FILE__, __LINE__, ss.str());
    }
  }

  // Conservative estimate on the lower/upper bound of the number of
  // calls allowed.
  int ConservativeLowerBound() const override { return min_; }
  int ConservativeUpperBound() const override { return max_; }

  bool IsSatisfiedByCallCount(int call_count) const override {
    return min_ <= call_count && call_count <= max_;
  }

  bool IsSaturatedByCallCount(int call_count) const override {
    return call_count >= max_;
  }

  void DescribeTo(::std::ostream* os) const override;

 private:
  const int min_;
  const int max_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(BetweenCardinalityImpl);
};

// Formats "n times" in a human-friendly way.
inline std::string FormatTimes(int n) {
  if (n == 1) {
    return "once";
  } else if (n == 2) {
    return "twice";
  } else {
    std::stringstream ss;
    ss << n << " times";
    return ss.str();
  }
}

// Describes the Between(m, n) cardinality in human-friendly text.
void BetweenCardinalityImpl::DescribeTo(::std::ostream* os) const {
  if (min_ == 0) {
    if (max_ == 0) {
      *os << "never called";
    } else if (max_ == INT_MAX) {
      *os << "called any number of times";
    } else {
      *os << "called at most " << FormatTimes(max_);
    }
  } else if (min_ == max_) {
    *os << "called " << FormatTimes(min_);
  } else if (max_ == INT_MAX) {
    *os << "called at least " << FormatTimes(min_);
  } else {
    // 0 < min_ < max_ < INT_MAX
    *os << "called between " << min_ << " and " << max_ << " times";
  }
}

}  // Unnamed namespace

// Describes the given call count to an ostream.
void Cardinality::DescribeActualCallCountTo(int actual_call_count,
                                            ::std::ostream* os) {
  if (actual_call_count > 0) {
    *os << "called " << FormatTimes(actual_call_count);
  } else {
    *os << "never called";
  }
}

// Creates a cardinality that allows at least n calls.
GTEST_API_ Cardinality AtLeast(int n) { return Between(n, INT_MAX); }

// Creates a cardinality that allows at most n calls.
GTEST_API_ Cardinality AtMost(int n) { return Between(0, n); }

// Creates a cardinality that allows any number of calls.
GTEST_API_ Cardinality AnyNumber() { return AtLeast(0); }

// Creates a cardinality that allows between min and max calls.
GTEST_API_ Cardinality Between(int min, int max) {
  return Cardinality(new BetweenCardinalityImpl(min, max));
}

// Creates a cardinality that allows exactly n calls.
GTEST_API_ Cardinality Exactly(int n) { return Between(n, n); }

}  // namespace testing
