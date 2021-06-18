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
// This file implements MOCK_METHOD.

// GOOGLETEST_CM0002 DO NOT DELETE

#ifndef THIRD_PARTY_GOOGLETEST_GOOGLEMOCK_INCLUDE_GMOCK_INTERNAL_GMOCK_FUNCTION_MOCKER_H_  // NOLINT
#define THIRD_PARTY_GOOGLETEST_GOOGLEMOCK_INCLUDE_GMOCK_INTERNAL_GMOCK_FUNCTION_MOCKER_H_  // NOLINT

#include "gmock/gmock-generated-function-mockers.h"  // NOLINT
#include "gmock/internal/gmock-pp.h"

#define MOCK_METHOD(...) \
  GMOCK_PP_VARIADIC_CALL(GMOCK_INTERNAL_MOCK_METHOD_ARG_, __VA_ARGS__)

#define GMOCK_INTERNAL_MOCK_METHOD_ARG_1(...) \
  GMOCK_INTERNAL_WRONG_ARITY(__VA_ARGS__)

#define GMOCK_INTERNAL_MOCK_METHOD_ARG_2(...) \
  GMOCK_INTERNAL_WRONG_ARITY(__VA_ARGS__)

#define GMOCK_INTERNAL_MOCK_METHOD_ARG_3(_Ret, _MethodName, _Args) \
  GMOCK_INTERNAL_MOCK_METHOD_ARG_4(_Ret, _MethodName, _Args, ())

#define GMOCK_INTERNAL_MOCK_METHOD_ARG_4(_Ret, _MethodName, _Args, _Spec)     \
  GMOCK_INTERNAL_ASSERT_PARENTHESIS(_Args);                                   \
  GMOCK_INTERNAL_ASSERT_PARENTHESIS(_Spec);                                   \
  GMOCK_INTERNAL_ASSERT_VALID_SIGNATURE(                                      \
      GMOCK_PP_NARG0 _Args, GMOCK_INTERNAL_SIGNATURE(_Ret, _Args));           \
  GMOCK_INTERNAL_ASSERT_VALID_SPEC(_Spec)                                     \
  GMOCK_INTERNAL_MOCK_METHOD_IMPL(                                            \
      GMOCK_PP_NARG0 _Args, _MethodName, GMOCK_INTERNAL_HAS_CONST(_Spec),     \
      GMOCK_INTERNAL_HAS_OVERRIDE(_Spec), GMOCK_INTERNAL_HAS_FINAL(_Spec),    \
      GMOCK_INTERNAL_HAS_NOEXCEPT(_Spec), GMOCK_INTERNAL_GET_CALLTYPE(_Spec), \
      (GMOCK_INTERNAL_SIGNATURE(_Ret, _Args)))

#define GMOCK_INTERNAL_MOCK_METHOD_ARG_5(...) \
  GMOCK_INTERNAL_WRONG_ARITY(__VA_ARGS__)

#define GMOCK_INTERNAL_MOCK_METHOD_ARG_6(...) \
  GMOCK_INTERNAL_WRONG_ARITY(__VA_ARGS__)

#define GMOCK_INTERNAL_MOCK_METHOD_ARG_7(...) \
  GMOCK_INTERNAL_WRONG_ARITY(__VA_ARGS__)

#define GMOCK_INTERNAL_WRONG_ARITY(...)                                      \
  static_assert(                                                             \
      false,                                                                 \
      "MOCK_METHOD must be called with 3 or 4 arguments. _Ret, "             \
      "_MethodName, _Args and optionally _Spec. _Args and _Spec must be "    \
      "enclosed in parentheses. If _Ret is a type with unprotected commas, " \
      "it must also be enclosed in parentheses.")

#define GMOCK_INTERNAL_ASSERT_PARENTHESIS(_Tuple) \
  static_assert(                                  \
      GMOCK_PP_IS_ENCLOSED_PARENS(_Tuple),        \
      GMOCK_PP_STRINGIZE(_Tuple) " should be enclosed in parentheses.")

#define GMOCK_INTERNAL_ASSERT_VALID_SIGNATURE(_N, ...)                 \
  static_assert(                                                       \
      std::is_function<__VA_ARGS__>::value,                            \
      "Signature must be a function type, maybe return type contains " \
      "unprotected comma.");                                           \
  static_assert(                                                       \
      ::testing::tuple_size<typename ::testing::internal::Function<    \
              __VA_ARGS__>::ArgumentTuple>::value == _N,               \
      "This method does not take " GMOCK_PP_STRINGIZE(                 \
          _N) " arguments. Parenthesize all types with unproctected commas.")

#define GMOCK_INTERNAL_ASSERT_VALID_SPEC(_Spec) \
  GMOCK_PP_FOR_EACH(GMOCK_INTERNAL_ASSERT_VALID_SPEC_ELEMENT, ~, _Spec)

#define GMOCK_INTERNAL_MOCK_METHOD_IMPL(_N, _MethodName, _Constness,           \
                                        _Override, _Final, _Noexcept,          \
                                        _CallType, _Signature)                 \
  typename ::testing::internal::Function<GMOCK_PP_REMOVE_PARENS(               \
      _Signature)>::Result                                                     \
  GMOCK_INTERNAL_EXPAND(_CallType)                                             \
      _MethodName(GMOCK_PP_REPEAT(GMOCK_INTERNAL_PARAMETER, _Signature, _N))   \
          GMOCK_PP_IF(_Constness, const, ) GMOCK_PP_IF(_Noexcept, noexcept, )  \
              GMOCK_PP_IF(_Override, override, )                               \
                  GMOCK_PP_IF(_Final, final, ) {                               \
    GMOCK_MOCKER_(_N, _Constness, _MethodName)                                 \
        .SetOwnerAndName(this, #_MethodName);                                  \
    return GMOCK_MOCKER_(_N, _Constness, _MethodName)                          \
        .Invoke(GMOCK_PP_REPEAT(GMOCK_INTERNAL_FORWARD_ARG, _Signature, _N));  \
  }                                                                            \
  ::testing::MockSpec<GMOCK_PP_REMOVE_PARENS(_Signature)> gmock_##_MethodName( \
      GMOCK_PP_REPEAT(GMOCK_INTERNAL_MATCHER_PARAMETER, _Signature, _N))       \
      GMOCK_PP_IF(_Constness, const, ) {                                       \
    GMOCK_MOCKER_(_N, _Constness, _MethodName).RegisterOwner(this);            \
    return GMOCK_MOCKER_(_N, _Constness, _MethodName)                          \
        .With(GMOCK_PP_REPEAT(GMOCK_INTERNAL_MATCHER_ARGUMENT, , _N));         \
  }                                                                            \
  ::testing::MockSpec<GMOCK_PP_REMOVE_PARENS(_Signature)> gmock_##_MethodName( \
      const ::testing::internal::WithoutMatchers&,                             \
      GMOCK_PP_IF(_Constness, const, )::testing::internal::Function<           \
          GMOCK_PP_REMOVE_PARENS(_Signature)>*)                                \
      const GMOCK_PP_IF(_Noexcept, noexcept, ) {                               \
    return GMOCK_PP_CAT(::testing::internal::AdjustConstness_,                 \
                        GMOCK_PP_IF(_Constness, const, ))(this)                \
        ->gmock_##_MethodName(GMOCK_PP_REPEAT(                                 \
            GMOCK_INTERNAL_A_MATCHER_ARGUMENT, _Signature, _N));               \
  }                                                                            \
  mutable ::testing::FunctionMocker<GMOCK_PP_REMOVE_PARENS(_Signature)>        \
      GMOCK_MOCKER_(_N, _Constness, _MethodName)

#define GMOCK_INTERNAL_EXPAND(...) __VA_ARGS__

// Five Valid modifiers.
#define GMOCK_INTERNAL_HAS_CONST(_Tuple) \
  GMOCK_PP_HAS_COMMA(GMOCK_PP_FOR_EACH(GMOCK_INTERNAL_DETECT_CONST, ~, _Tuple))

#define GMOCK_INTERNAL_HAS_OVERRIDE(_Tuple) \
  GMOCK_PP_HAS_COMMA(                       \
      GMOCK_PP_FOR_EACH(GMOCK_INTERNAL_DETECT_OVERRIDE, ~, _Tuple))

#define GMOCK_INTERNAL_HAS_FINAL(_Tuple) \
  GMOCK_PP_HAS_COMMA(GMOCK_PP_FOR_EACH(GMOCK_INTERNAL_DETECT_FINAL, ~, _Tuple))

#define GMOCK_INTERNAL_HAS_NOEXCEPT(_Tuple) \
  GMOCK_PP_HAS_COMMA(                       \
      GMOCK_PP_FOR_EACH(GMOCK_INTERNAL_DETECT_NOEXCEPT, ~, _Tuple))

#define GMOCK_INTERNAL_GET_CALLTYPE(_Tuple) \
  GMOCK_PP_FOR_EACH(GMOCK_INTERNAL_GET_CALLTYPE_IMPL, ~, _Tuple)

#define GMOCK_INTERNAL_ASSERT_VALID_SPEC_ELEMENT(_i, _, _elem)            \
  static_assert(                                                          \
      (GMOCK_PP_HAS_COMMA(GMOCK_INTERNAL_DETECT_CONST(_i, _, _elem)) +    \
       GMOCK_PP_HAS_COMMA(GMOCK_INTERNAL_DETECT_OVERRIDE(_i, _, _elem)) + \
       GMOCK_PP_HAS_COMMA(GMOCK_INTERNAL_DETECT_FINAL(_i, _, _elem)) +    \
       GMOCK_PP_HAS_COMMA(GMOCK_INTERNAL_DETECT_NOEXCEPT(_i, _, _elem)) + \
       GMOCK_INTERNAL_IS_CALLTYPE(_elem)) == 1,                           \
      GMOCK_PP_STRINGIZE(                                                 \
          _elem) " cannot be recognized as a valid specification modifier.");

// Modifiers implementation.
#define GMOCK_INTERNAL_DETECT_CONST(_i, _, _elem) \
  GMOCK_PP_CAT(GMOCK_INTERNAL_DETECT_CONST_I_, _elem)

#define GMOCK_INTERNAL_DETECT_CONST_I_const ,

#define GMOCK_INTERNAL_DETECT_OVERRIDE(_i, _, _elem) \
  GMOCK_PP_CAT(GMOCK_INTERNAL_DETECT_OVERRIDE_I_, _elem)

#define GMOCK_INTERNAL_DETECT_OVERRIDE_I_override ,

#define GMOCK_INTERNAL_DETECT_FINAL(_i, _, _elem) \
  GMOCK_PP_CAT(GMOCK_INTERNAL_DETECT_FINAL_I_, _elem)

#define GMOCK_INTERNAL_DETECT_FINAL_I_final ,

// TODO(iserna): Maybe noexcept should accept an argument here as well.
#define GMOCK_INTERNAL_DETECT_NOEXCEPT(_i, _, _elem) \
  GMOCK_PP_CAT(GMOCK_INTERNAL_DETECT_NOEXCEPT_I_, _elem)

#define GMOCK_INTERNAL_DETECT_NOEXCEPT_I_noexcept ,

#define GMOCK_INTERNAL_GET_CALLTYPE_IMPL(_i, _, _elem)           \
  GMOCK_PP_IF(GMOCK_INTERNAL_IS_CALLTYPE(_elem),                 \
              GMOCK_INTERNAL_GET_VALUE_CALLTYPE, GMOCK_PP_EMPTY) \
  (_elem)

// TODO(iserna): GMOCK_INTERNAL_IS_CALLTYPE and
// GMOCK_INTERNAL_GET_VALUE_CALLTYPE needed more expansions to work on windows
// maybe they can be simplified somehow.
#define GMOCK_INTERNAL_IS_CALLTYPE(_arg) \
  GMOCK_INTERNAL_IS_CALLTYPE_I(          \
      GMOCK_PP_CAT(GMOCK_INTERNAL_IS_CALLTYPE_HELPER_, _arg))
#define GMOCK_INTERNAL_IS_CALLTYPE_I(_arg) GMOCK_PP_IS_ENCLOSED_PARENS(_arg)

#define GMOCK_INTERNAL_GET_VALUE_CALLTYPE(_arg) \
  GMOCK_INTERNAL_GET_VALUE_CALLTYPE_I(          \
      GMOCK_PP_CAT(GMOCK_INTERNAL_IS_CALLTYPE_HELPER_, _arg))
#define GMOCK_INTERNAL_GET_VALUE_CALLTYPE_I(_arg) \
  GMOCK_PP_CAT(GMOCK_PP_IDENTITY, _arg)

#define GMOCK_INTERNAL_IS_CALLTYPE_HELPER_Calltype

#define GMOCK_INTERNAL_SIGNATURE(_Ret, _Args)                         \
  GMOCK_PP_IF(GMOCK_PP_IS_BEGIN_PARENS(_Ret), GMOCK_PP_REMOVE_PARENS, \
              GMOCK_PP_IDENTITY)                                      \
  (_Ret)(GMOCK_PP_FOR_EACH(GMOCK_INTERNAL_GET_TYPE, _, _Args))

#define GMOCK_INTERNAL_GET_TYPE(_i, _, _elem)                          \
  GMOCK_PP_COMMA_IF(_i)                                                \
  GMOCK_PP_IF(GMOCK_PP_IS_BEGIN_PARENS(_elem), GMOCK_PP_REMOVE_PARENS, \
              GMOCK_PP_IDENTITY)                                       \
  (_elem)

#define GMOCK_INTERNAL_PARAMETER(_i, _Signature, _)        \
  GMOCK_PP_COMMA_IF(_i)                                    \
  GMOCK_INTERNAL_ARG_O(typename, GMOCK_PP_INC(_i),         \
                       GMOCK_PP_REMOVE_PARENS(_Signature)) \
  gmock_a##_i

#define GMOCK_INTERNAL_FORWARD_ARG(_i, _Signature, _)                       \
  GMOCK_PP_COMMA_IF(_i)                                                     \
  ::std::forward<GMOCK_INTERNAL_ARG_O(typename, GMOCK_PP_INC(_i),           \
                                      GMOCK_PP_REMOVE_PARENS(_Signature))>( \
      gmock_a##_i)

#define GMOCK_INTERNAL_MATCHER_PARAMETER(_i, _Signature, _)    \
  GMOCK_PP_COMMA_IF(_i)                                        \
  GMOCK_INTERNAL_MATCHER_O(typename, GMOCK_PP_INC(_i),         \
                           GMOCK_PP_REMOVE_PARENS(_Signature)) \
  gmock_a##_i

#define GMOCK_INTERNAL_MATCHER_ARGUMENT(_i, _1, _2) \
  GMOCK_PP_COMMA_IF(_i)                             \
  gmock_a##_i

#define GMOCK_INTERNAL_A_MATCHER_ARGUMENT(_i, _Signature, _)    \
  GMOCK_PP_COMMA_IF(_i)                                         \
  ::testing::A<GMOCK_INTERNAL_ARG_O(typename, GMOCK_PP_INC(_i), \
                                    GMOCK_PP_REMOVE_PARENS(_Signature))>()

#define GMOCK_INTERNAL_ARG_O(_tn, _i, ...) GMOCK_ARG_(_tn, _i, __VA_ARGS__)

#define GMOCK_INTERNAL_MATCHER_O(_tn, _i, ...) \
  GMOCK_MATCHER_(_tn, _i, __VA_ARGS__)

#endif  // THIRD_PARTY_GOOGLETEST_GOOGLEMOCK_INCLUDE_GMOCK_INTERNAL_GMOCK_FUNCTION_MOCKER_H_
