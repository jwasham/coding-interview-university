// Copyright 2018, Google Inc.
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
// This file tests the internal preprocessor macro library.
#include "gmock/internal/gmock-pp.h"

#include <string>

#include "gmock/gmock.h"

namespace testing {
namespace {

// Matcher to verify that to strings are identical up to whitespace
// Not 100% correct, because it treats "AB" as equal to "A B".
::testing::Matcher<const std::string&> SameExceptSpaces(const std::string& s) {
  auto remove_spaces = [](std::string to_split) {
    to_split.erase(std::remove(to_split.begin(), to_split.end(), ' '),
                   to_split.end());
    return to_split;
  };
  return ::testing::ResultOf(remove_spaces, remove_spaces(s));
}

// Verify that a macro expands to a given text. Ignores whitespace difference.
// In MSVC, GMOCK_PP_STRINGIZE() returns nothing, rather than "". So concatenate
// with an empty string.
#define EXPECT_EXPANSION(Result, Macro) \
  EXPECT_THAT("" GMOCK_PP_STRINGIZE(Macro), SameExceptSpaces(Result))

TEST(Macros, Cat) {
  EXPECT_EXPANSION("14", GMOCK_PP_CAT(1, 4));
  EXPECT_EXPANSION("+=", GMOCK_PP_CAT(+, =));
}

TEST(Macros, Narg) {
  EXPECT_EXPANSION("1", GMOCK_PP_NARG());
  EXPECT_EXPANSION("1", GMOCK_PP_NARG(x));
  EXPECT_EXPANSION("2", GMOCK_PP_NARG(x, y));
  EXPECT_EXPANSION("3", GMOCK_PP_NARG(x, y, z));
  EXPECT_EXPANSION("4", GMOCK_PP_NARG(x, y, z, w));

  EXPECT_EXPANSION("0", GMOCK_PP_NARG0());
  EXPECT_EXPANSION("1", GMOCK_PP_NARG0(x));
  EXPECT_EXPANSION("2", GMOCK_PP_NARG0(x, y));
}

TEST(Macros, Comma) {
  EXPECT_EXPANSION("0", GMOCK_PP_HAS_COMMA());
  EXPECT_EXPANSION("1", GMOCK_PP_HAS_COMMA(, ));
  EXPECT_EXPANSION("0", GMOCK_PP_HAS_COMMA((, )));
}

TEST(Macros, IsEmpty) {
  EXPECT_EXPANSION("1", GMOCK_PP_IS_EMPTY());
  EXPECT_EXPANSION("0", GMOCK_PP_IS_EMPTY(, ));
  EXPECT_EXPANSION("0", GMOCK_PP_IS_EMPTY(a));
  EXPECT_EXPANSION("0", GMOCK_PP_IS_EMPTY(()));

#define GMOCK_PP_INTERNAL_IS_EMPTY_TEST_1
  EXPECT_EXPANSION("1", GMOCK_PP_IS_EMPTY(GMOCK_PP_INTERNAL_IS_EMPTY_TEST_1));
}

TEST(Macros, If) {
  EXPECT_EXPANSION("1", GMOCK_PP_IF(1, 1, 2));
  EXPECT_EXPANSION("2", GMOCK_PP_IF(0, 1, 2));
}

TEST(Macros, HeadTail) {
  EXPECT_EXPANSION("1", GMOCK_PP_HEAD(1));
  EXPECT_EXPANSION("1", GMOCK_PP_HEAD(1, 2));
  EXPECT_EXPANSION("1", GMOCK_PP_HEAD(1, 2, 3));

  EXPECT_EXPANSION("", GMOCK_PP_TAIL(1));
  EXPECT_EXPANSION("2", GMOCK_PP_TAIL(1, 2));
  EXPECT_EXPANSION("2", GMOCK_PP_HEAD(GMOCK_PP_TAIL(1, 2, 3)));
}

TEST(Macros, Parentheses) {
  EXPECT_EXPANSION("0", GMOCK_PP_IS_BEGIN_PARENS(sss));
  EXPECT_EXPANSION("0", GMOCK_PP_IS_BEGIN_PARENS(sss()));
  EXPECT_EXPANSION("0", GMOCK_PP_IS_BEGIN_PARENS(sss() sss));
  EXPECT_EXPANSION("1", GMOCK_PP_IS_BEGIN_PARENS((sss)));
  EXPECT_EXPANSION("1", GMOCK_PP_IS_BEGIN_PARENS((sss)ss));

  EXPECT_EXPANSION("0", GMOCK_PP_IS_ENCLOSED_PARENS(sss));
  EXPECT_EXPANSION("0", GMOCK_PP_IS_ENCLOSED_PARENS(sss()));
  EXPECT_EXPANSION("0", GMOCK_PP_IS_ENCLOSED_PARENS(sss() sss));
  EXPECT_EXPANSION("1", GMOCK_PP_IS_ENCLOSED_PARENS((sss)));
  EXPECT_EXPANSION("0", GMOCK_PP_IS_ENCLOSED_PARENS((sss)ss));

  EXPECT_EXPANSION("1 + 1", GMOCK_PP_REMOVE_PARENS((1 + 1)));
}

TEST(Macros, Increment) {
  EXPECT_EXPANSION("1", GMOCK_PP_INC(0));
  EXPECT_EXPANSION("2", GMOCK_PP_INC(1));
  EXPECT_EXPANSION("3", GMOCK_PP_INC(2));
  EXPECT_EXPANSION("4", GMOCK_PP_INC(3));
  EXPECT_EXPANSION("5", GMOCK_PP_INC(4));

  EXPECT_EXPANSION("16", GMOCK_PP_INC(15));
}

#define JOINER_CAT(a, b) a##b
#define JOINER(_N, _Data, _Elem) JOINER_CAT(_Data, _N) = _Elem

TEST(Macros, Repeat) {
  EXPECT_EXPANSION("", GMOCK_PP_REPEAT(JOINER, X, 0));
  EXPECT_EXPANSION("X0=", GMOCK_PP_REPEAT(JOINER, X, 1));
  EXPECT_EXPANSION("X0= X1=", GMOCK_PP_REPEAT(JOINER, X, 2));
  EXPECT_EXPANSION("X0= X1= X2=", GMOCK_PP_REPEAT(JOINER, X, 3));
  EXPECT_EXPANSION("X0= X1= X2= X3=", GMOCK_PP_REPEAT(JOINER, X, 4));
  EXPECT_EXPANSION("X0= X1= X2= X3= X4=", GMOCK_PP_REPEAT(JOINER, X, 5));
  EXPECT_EXPANSION("X0= X1= X2= X3= X4= X5=", GMOCK_PP_REPEAT(JOINER, X, 6));
  EXPECT_EXPANSION("X0= X1= X2= X3= X4= X5= X6=",
                   GMOCK_PP_REPEAT(JOINER, X, 7));
  EXPECT_EXPANSION("X0= X1= X2= X3= X4= X5= X6= X7=",
                   GMOCK_PP_REPEAT(JOINER, X, 8));
  EXPECT_EXPANSION("X0= X1= X2= X3= X4= X5= X6= X7= X8=",
                   GMOCK_PP_REPEAT(JOINER, X, 9));
  EXPECT_EXPANSION("X0= X1= X2= X3= X4= X5= X6= X7= X8= X9=",
                   GMOCK_PP_REPEAT(JOINER, X, 10));
  EXPECT_EXPANSION("X0= X1= X2= X3= X4= X5= X6= X7= X8= X9= X10=",
                   GMOCK_PP_REPEAT(JOINER, X, 11));
  EXPECT_EXPANSION("X0= X1= X2= X3= X4= X5= X6= X7= X8= X9= X10= X11=",
                   GMOCK_PP_REPEAT(JOINER, X, 12));
  EXPECT_EXPANSION("X0= X1= X2= X3= X4= X5= X6= X7= X8= X9= X10= X11= X12=",
                   GMOCK_PP_REPEAT(JOINER, X, 13));
  EXPECT_EXPANSION(
      "X0= X1= X2= X3= X4= X5= X6= X7= X8= X9= X10= X11= X12= X13=",
      GMOCK_PP_REPEAT(JOINER, X, 14));
  EXPECT_EXPANSION(
      "X0= X1= X2= X3= X4= X5= X6= X7= X8= X9= X10= X11= X12= X13= X14=",
      GMOCK_PP_REPEAT(JOINER, X, 15));
}
TEST(Macros, ForEach) {
  EXPECT_EXPANSION("", GMOCK_PP_FOR_EACH(JOINER, X, ()));
  EXPECT_EXPANSION("X0=a", GMOCK_PP_FOR_EACH(JOINER, X, (a)));
  EXPECT_EXPANSION("X0=a X1=b", GMOCK_PP_FOR_EACH(JOINER, X, (a, b)));
  EXPECT_EXPANSION("X0=a X1=b X2=c", GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c)));
  EXPECT_EXPANSION("X0=a X1=b X2=c X3=d",
                   GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d)));
  EXPECT_EXPANSION("X0=a X1=b X2=c X3=d X4=e",
                   GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e)));
  EXPECT_EXPANSION("X0=a X1=b X2=c X3=d X4=e X5=f",
                   GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e, f)));
  EXPECT_EXPANSION("X0=a X1=b X2=c X3=d X4=e X5=f X6=g",
                   GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e, f, g)));
  EXPECT_EXPANSION("X0=a X1=b X2=c X3=d X4=e X5=f X6=g X7=h",
                   GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e, f, g, h)));
  EXPECT_EXPANSION("X0=a X1=b X2=c X3=d X4=e X5=f X6=g X7=h X8=i",
                   GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e, f, g, h, i)));
  EXPECT_EXPANSION(
      "X0=a X1=b X2=c X3=d X4=e X5=f X6=g X7=h X8=i X9=j",
      GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e, f, g, h, i, j)));
  EXPECT_EXPANSION(
      "X0=a X1=b X2=c X3=d X4=e X5=f X6=g X7=h X8=i X9=j X10=k",
      GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e, f, g, h, i, j, k)));
  EXPECT_EXPANSION(
      "X0=a X1=b X2=c X3=d X4=e X5=f X6=g X7=h X8=i X9=j X10=k X11=l",
      GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e, f, g, h, i, j, k, l)));
  EXPECT_EXPANSION(
      "X0=a X1=b X2=c X3=d X4=e X5=f X6=g X7=h X8=i X9=j X10=k X11=l X12=m",
      GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e, f, g, h, i, j, k, l, m)));
  EXPECT_EXPANSION(
      "X0=a X1=b X2=c X3=d X4=e X5=f X6=g X7=h X8=i X9=j X10=k X11=l X12=m "
      "X13=n",
      GMOCK_PP_FOR_EACH(JOINER, X, (a, b, c, d, e, f, g, h, i, j, k, l, m, n)));
  EXPECT_EXPANSION(
      "X0=a X1=b X2=c X3=d X4=e X5=f X6=g X7=h X8=i X9=j X10=k X11=l X12=m "
      "X13=n X14=o",
      GMOCK_PP_FOR_EACH(JOINER, X,
                        (a, b, c, d, e, f, g, h, i, j, k, l, m, n, o)));
}

}  // namespace
}  // namespace testing
