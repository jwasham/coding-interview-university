// Copyright 2009, Google Inc.
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
// Tests for Google C++ Mocking Framework (Google Mock)
//
// Some users use a build system that Google Mock doesn't support directly,
// yet they still want to build and run Google Mock's own tests.  This file
// includes most such tests, making it easier for these users to maintain
// their build scripts (they just need to build this file, even though the
// below list of actual *_test.cc files might change).
#include "test/gmock-actions_test.cc"
#include "test/gmock-cardinalities_test.cc"
#include "test/gmock-generated-actions_test.cc"
#include "test/gmock-generated-function-mockers_test.cc"
#include "test/gmock-generated-matchers_test.cc"
#include "test/gmock-internal-utils_test.cc"
#include "test/gmock-matchers_test.cc"
#include "test/gmock-more-actions_test.cc"
#include "test/gmock-nice-strict_test.cc"
#include "test/gmock-port_test.cc"
#include "test/gmock-spec-builders_test.cc"
#include "test/gmock_test.cc"
