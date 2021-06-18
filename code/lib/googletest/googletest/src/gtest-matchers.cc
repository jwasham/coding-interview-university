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

#include "gtest/internal/gtest-internal.h"
#include "gtest/internal/gtest-port.h"
#include "gtest/gtest-matchers.h"

#include <string>

namespace testing {

// Constructs a matcher that matches a const std::string& whose value is
// equal to s.
Matcher<const std::string&>::Matcher(const std::string& s) { *this = Eq(s); }

// Constructs a matcher that matches a const std::string& whose value is
// equal to s.
Matcher<const std::string&>::Matcher(const char* s) {
  *this = Eq(std::string(s));
}

// Constructs a matcher that matches a std::string whose value is equal to
// s.
Matcher<std::string>::Matcher(const std::string& s) { *this = Eq(s); }

// Constructs a matcher that matches a std::string whose value is equal to
// s.
Matcher<std::string>::Matcher(const char* s) { *this = Eq(std::string(s)); }

#if GTEST_HAS_ABSL
// Constructs a matcher that matches a const absl::string_view& whose value is
// equal to s.
Matcher<const absl::string_view&>::Matcher(const std::string& s) {
  *this = Eq(s);
}

// Constructs a matcher that matches a const absl::string_view& whose value is
// equal to s.
Matcher<const absl::string_view&>::Matcher(const char* s) {
  *this = Eq(std::string(s));
}

// Constructs a matcher that matches a const absl::string_view& whose value is
// equal to s.
Matcher<const absl::string_view&>::Matcher(absl::string_view s) {
  *this = Eq(std::string(s));
}

// Constructs a matcher that matches a absl::string_view whose value is equal to
// s.
Matcher<absl::string_view>::Matcher(const std::string& s) { *this = Eq(s); }

// Constructs a matcher that matches a absl::string_view whose value is equal to
// s.
Matcher<absl::string_view>::Matcher(const char* s) {
  *this = Eq(std::string(s));
}

// Constructs a matcher that matches a absl::string_view whose value is equal to
// s.
Matcher<absl::string_view>::Matcher(absl::string_view s) {
  *this = Eq(std::string(s));
}
#endif  // GTEST_HAS_ABSL

}  // namespace testing
