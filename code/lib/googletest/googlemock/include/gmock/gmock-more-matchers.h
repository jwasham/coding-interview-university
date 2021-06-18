// Copyright 2013, Google Inc.
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
// This file implements some matchers that depend on gmock-generated-matchers.h.
//
// Note that tests are implemented in gmock-matchers_test.cc rather than
// gmock-more-matchers-test.cc.

// GOOGLETEST_CM0002 DO NOT DELETE

#ifndef GMOCK_INCLUDE_GMOCK_MORE_MATCHERS_H_
#define GMOCK_INCLUDE_GMOCK_MORE_MATCHERS_H_

#include "gmock/gmock-generated-matchers.h"

namespace testing {

// Silence C4100 (unreferenced formal
// parameter) for MSVC
#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable:4100)
#if (_MSC_VER == 1900)
// and silence C4800 (C4800: 'int *const ': forcing value
// to bool 'true' or 'false') for MSVC 14
# pragma warning(disable:4800)
  #endif
#endif

// Defines a matcher that matches an empty container. The container must
// support both size() and empty(), which all STL-like containers provide.
MATCHER(IsEmpty, negation ? "isn't empty" : "is empty") {
  if (arg.empty()) {
    return true;
  }
  *result_listener << "whose size is " << arg.size();
  return false;
}

// Define a matcher that matches a value that evaluates in boolean
// context to true.  Useful for types that define "explicit operator
// bool" operators and so can't be compared for equality with true
// and false.
MATCHER(IsTrue, negation ? "is false" : "is true") {
  return static_cast<bool>(arg);
}

// Define a matcher that matches a value that evaluates in boolean
// context to false.  Useful for types that define "explicit operator
// bool" operators and so can't be compared for equality with true
// and false.
MATCHER(IsFalse, negation ? "is true" : "is false") {
  return !static_cast<bool>(arg);
}

#ifdef _MSC_VER
# pragma warning(pop)
#endif


}  // namespace testing

#endif  // GMOCK_INCLUDE_GMOCK_MORE_MATCHERS_H_
