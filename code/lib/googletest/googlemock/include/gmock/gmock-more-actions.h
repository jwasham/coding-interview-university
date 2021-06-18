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
// This file implements some actions that depend on gmock-generated-actions.h.

// GOOGLETEST_CM0002 DO NOT DELETE

#ifndef GMOCK_INCLUDE_GMOCK_GMOCK_MORE_ACTIONS_H_
#define GMOCK_INCLUDE_GMOCK_GMOCK_MORE_ACTIONS_H_

#include <algorithm>
#include <type_traits>

#include "gmock/gmock-generated-actions.h"

namespace testing {
namespace internal {

// An internal replacement for std::copy which mimics its behavior. This is
// necessary because Visual Studio deprecates ::std::copy, issuing warning 4996.
// However Visual Studio 2010 and later do not honor #pragmas which disable that
// warning.
template<typename InputIterator, typename OutputIterator>
inline OutputIterator CopyElements(InputIterator first,
                                   InputIterator last,
                                   OutputIterator output) {
  for (; first != last; ++first, ++output) {
    *output = *first;
  }
  return output;
}

}  // namespace internal

// Various overloads for Invoke().

// The ACTION*() macros trigger warning C4100 (unreferenced formal
// parameter) in MSVC with -W4.  Unfortunately they cannot be fixed in
// the macro definition, as the warnings are generated when the macro
// is expanded and macro expansion cannot contain #pragma.  Therefore
// we suppress them here.
#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable:4100)
#endif

// Action ReturnArg<k>() returns the k-th argument of the mock function.
ACTION_TEMPLATE(ReturnArg,
                HAS_1_TEMPLATE_PARAMS(int, k),
                AND_0_VALUE_PARAMS()) {
  return ::std::get<k>(args);
}

// Action SaveArg<k>(pointer) saves the k-th (0-based) argument of the
// mock function to *pointer.
ACTION_TEMPLATE(SaveArg,
                HAS_1_TEMPLATE_PARAMS(int, k),
                AND_1_VALUE_PARAMS(pointer)) {
  *pointer = ::std::get<k>(args);
}

// Action SaveArgPointee<k>(pointer) saves the value pointed to
// by the k-th (0-based) argument of the mock function to *pointer.
ACTION_TEMPLATE(SaveArgPointee,
                HAS_1_TEMPLATE_PARAMS(int, k),
                AND_1_VALUE_PARAMS(pointer)) {
  *pointer = *::std::get<k>(args);
}

// Action SetArgReferee<k>(value) assigns 'value' to the variable
// referenced by the k-th (0-based) argument of the mock function.
ACTION_TEMPLATE(SetArgReferee,
                HAS_1_TEMPLATE_PARAMS(int, k),
                AND_1_VALUE_PARAMS(value)) {
  typedef typename ::std::tuple_element<k, args_type>::type argk_type;
  // Ensures that argument #k is a reference.  If you get a compiler
  // error on the next line, you are using SetArgReferee<k>(value) in
  // a mock function whose k-th (0-based) argument is not a reference.
  GTEST_COMPILE_ASSERT_(std::is_reference<argk_type>::value,
                        SetArgReferee_must_be_used_with_a_reference_argument);
  ::std::get<k>(args) = value;
}

// Action SetArrayArgument<k>(first, last) copies the elements in
// source range [first, last) to the array pointed to by the k-th
// (0-based) argument, which can be either a pointer or an
// iterator. The action does not take ownership of the elements in the
// source range.
ACTION_TEMPLATE(SetArrayArgument,
                HAS_1_TEMPLATE_PARAMS(int, k),
                AND_2_VALUE_PARAMS(first, last)) {
  // Visual Studio deprecates ::std::copy, so we use our own copy in that case.
#ifdef _MSC_VER
  internal::CopyElements(first, last, ::std::get<k>(args));
#else
  ::std::copy(first, last, ::std::get<k>(args));
#endif
}

// Action DeleteArg<k>() deletes the k-th (0-based) argument of the mock
// function.
ACTION_TEMPLATE(DeleteArg,
                HAS_1_TEMPLATE_PARAMS(int, k),
                AND_0_VALUE_PARAMS()) {
  delete ::std::get<k>(args);
}

// This action returns the value pointed to by 'pointer'.
ACTION_P(ReturnPointee, pointer) { return *pointer; }

// Action Throw(exception) can be used in a mock function of any type
// to throw the given exception.  Any copyable value can be thrown.
#if GTEST_HAS_EXCEPTIONS

// Suppresses the 'unreachable code' warning that VC generates in opt modes.
# ifdef _MSC_VER
#  pragma warning(push)          // Saves the current warning state.
#  pragma warning(disable:4702)  // Temporarily disables warning 4702.
# endif
ACTION_P(Throw, exception) { throw exception; }
# ifdef _MSC_VER
#  pragma warning(pop)           // Restores the warning state.
# endif

#endif  // GTEST_HAS_EXCEPTIONS

#ifdef _MSC_VER
# pragma warning(pop)
#endif

}  // namespace testing

#endif  // GMOCK_INCLUDE_GMOCK_GMOCK_MORE_ACTIONS_H_
