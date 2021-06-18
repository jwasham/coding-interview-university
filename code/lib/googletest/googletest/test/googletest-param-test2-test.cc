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
// Tests for Google Test itself.  This verifies that the basic constructs of
// Google Test work.

#include "gtest/gtest.h"
#include "test/googletest-param-test-test.h"

using ::testing::Values;
using ::testing::internal::ParamGenerator;

// Tests that generators defined in a different translation unit
// are functional. The test using extern_gen is defined
// in googletest-param-test-test.cc.
ParamGenerator<int> extern_gen = Values(33);

// Tests that a parameterized test case can be defined in one translation unit
// and instantiated in another. The test is defined in
// googletest-param-test-test.cc and ExternalInstantiationTest fixture class is
// defined in gtest-param-test_test.h.
INSTANTIATE_TEST_SUITE_P(MultiplesOf33,
                         ExternalInstantiationTest,
                         Values(33, 66));

// Tests that a parameterized test case can be instantiated
// in multiple translation units. Another instantiation is defined
// in googletest-param-test-test.cc and
// InstantiationInMultipleTranslationUnitsTest fixture is defined in
// gtest-param-test_test.h
INSTANTIATE_TEST_SUITE_P(Sequence2,
                         InstantiationInMultipleTranslationUnitsTest,
                         Values(42*3, 42*4, 42*5));

