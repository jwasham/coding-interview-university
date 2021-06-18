// Copyright 2008, Google Inc.
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

//
// Low-level types and utilities for porting Google Mock to various
// platforms.  All macros ending with _ and symbols defined in an
// internal namespace are subject to change without notice.  Code
// outside Google Mock MUST NOT USE THEM DIRECTLY.  Macros that don't
// end with _ are part of Google Mock's public API and can be used by
// code outside Google Mock.

// GOOGLETEST_CM0002 DO NOT DELETE

#ifndef GMOCK_INCLUDE_GMOCK_INTERNAL_GMOCK_PORT_H_
#define GMOCK_INCLUDE_GMOCK_INTERNAL_GMOCK_PORT_H_

#include <assert.h>
#include <stdlib.h>
#include <iostream>

// Most of the utilities needed for porting Google Mock are also
// required for Google Test and are defined in gtest-port.h.
//
// Note to maintainers: to reduce code duplication, prefer adding
// portability utilities to Google Test's gtest-port.h instead of
// here, as Google Mock depends on Google Test.  Only add a utility
// here if it's truly specific to Google Mock.

#include "gtest/internal/gtest-port.h"
#include "gmock/internal/custom/gmock-port.h"

// For MS Visual C++, check the compiler version. At least VS 2015 is
// required to compile Google Mock.
#if defined(_MSC_VER) && _MSC_VER < 1900
# error "At least Visual C++ 2015 (14.0) is required to compile Google Mock."
#endif

// Macro for referencing flags.  This is public as we want the user to
// use this syntax to reference Google Mock flags.
#define GMOCK_FLAG(name) FLAGS_gmock_##name

#if !defined(GMOCK_DECLARE_bool_)

// Macros for declaring flags.
# define GMOCK_DECLARE_bool_(name) extern GTEST_API_ bool GMOCK_FLAG(name)
# define GMOCK_DECLARE_int32_(name) \
    extern GTEST_API_ ::testing::internal::Int32 GMOCK_FLAG(name)
# define GMOCK_DECLARE_string_(name) \
    extern GTEST_API_ ::std::string GMOCK_FLAG(name)

// Macros for defining flags.
# define GMOCK_DEFINE_bool_(name, default_val, doc) \
    GTEST_API_ bool GMOCK_FLAG(name) = (default_val)
# define GMOCK_DEFINE_int32_(name, default_val, doc) \
    GTEST_API_ ::testing::internal::Int32 GMOCK_FLAG(name) = (default_val)
# define GMOCK_DEFINE_string_(name, default_val, doc) \
    GTEST_API_ ::std::string GMOCK_FLAG(name) = (default_val)

#endif  // !defined(GMOCK_DECLARE_bool_)

#endif  // GMOCK_INCLUDE_GMOCK_INTERNAL_GMOCK_PORT_H_
