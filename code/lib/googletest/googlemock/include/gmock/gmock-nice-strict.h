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


// Implements class templates NiceMock, NaggyMock, and StrictMock.
//
// Given a mock class MockFoo that is created using Google Mock,
// NiceMock<MockFoo> is a subclass of MockFoo that allows
// uninteresting calls (i.e. calls to mock methods that have no
// EXPECT_CALL specs), NaggyMock<MockFoo> is a subclass of MockFoo
// that prints a warning when an uninteresting call occurs, and
// StrictMock<MockFoo> is a subclass of MockFoo that treats all
// uninteresting calls as errors.
//
// Currently a mock is naggy by default, so MockFoo and
// NaggyMock<MockFoo> behave like the same.  However, we will soon
// switch the default behavior of mocks to be nice, as that in general
// leads to more maintainable tests.  When that happens, MockFoo will
// stop behaving like NaggyMock<MockFoo> and start behaving like
// NiceMock<MockFoo>.
//
// NiceMock, NaggyMock, and StrictMock "inherit" the constructors of
// their respective base class.  Therefore you can write
// NiceMock<MockFoo>(5, "a") to construct a nice mock where MockFoo
// has a constructor that accepts (int, const char*), for example.
//
// A known limitation is that NiceMock<MockFoo>, NaggyMock<MockFoo>,
// and StrictMock<MockFoo> only works for mock methods defined using
// the MOCK_METHOD* family of macros DIRECTLY in the MockFoo class.
// If a mock method is defined in a base class of MockFoo, the "nice"
// or "strict" modifier may not affect it, depending on the compiler.
// In particular, nesting NiceMock, NaggyMock, and StrictMock is NOT
// supported.

// GOOGLETEST_CM0002 DO NOT DELETE

#ifndef GMOCK_INCLUDE_GMOCK_GMOCK_NICE_STRICT_H_
#define GMOCK_INCLUDE_GMOCK_GMOCK_NICE_STRICT_H_

#include "gmock/gmock-spec-builders.h"
#include "gmock/internal/gmock-port.h"

namespace testing {

template <class MockClass>
class NiceMock : public MockClass {
 public:
  NiceMock() : MockClass() {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  // Ideally, we would inherit base class's constructors through a using
  // declaration, which would preserve their visibility. However, many existing
  // tests rely on the fact that current implementation reexports protected
  // constructors as public. These tests would need to be cleaned up first.

  // Single argument constructor is special-cased so that it can be
  // made explicit.
  template <typename A>
  explicit NiceMock(A&& arg) : MockClass(std::forward<A>(arg)) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename... An>
  NiceMock(A1&& arg1, A2&& arg2, An&&... args)
      : MockClass(std::forward<A1>(arg1), std::forward<A2>(arg2),
                  std::forward<An>(args)...) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  ~NiceMock() {  // NOLINT
    ::testing::Mock::UnregisterCallReaction(
        internal::ImplicitCast_<MockClass*>(this));
  }

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(NiceMock);
};

template <class MockClass>
class NaggyMock : public MockClass {
 public:
  NaggyMock() : MockClass() {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  // Ideally, we would inherit base class's constructors through a using
  // declaration, which would preserve their visibility. However, many existing
  // tests rely on the fact that current implementation reexports protected
  // constructors as public. These tests would need to be cleaned up first.

  // Single argument constructor is special-cased so that it can be
  // made explicit.
  template <typename A>
  explicit NaggyMock(A&& arg) : MockClass(std::forward<A>(arg)) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename... An>
  NaggyMock(A1&& arg1, A2&& arg2, An&&... args)
      : MockClass(std::forward<A1>(arg1), std::forward<A2>(arg2),
                  std::forward<An>(args)...) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  ~NaggyMock() {  // NOLINT
    ::testing::Mock::UnregisterCallReaction(
        internal::ImplicitCast_<MockClass*>(this));
  }

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(NaggyMock);
};

template <class MockClass>
class StrictMock : public MockClass {
 public:
  StrictMock() : MockClass() {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  // Ideally, we would inherit base class's constructors through a using
  // declaration, which would preserve their visibility. However, many existing
  // tests rely on the fact that current implementation reexports protected
  // constructors as public. These tests would need to be cleaned up first.

  // Single argument constructor is special-cased so that it can be
  // made explicit.
  template <typename A>
  explicit StrictMock(A&& arg) : MockClass(std::forward<A>(arg)) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename... An>
  StrictMock(A1&& arg1, A2&& arg2, An&&... args)
      : MockClass(std::forward<A1>(arg1), std::forward<A2>(arg2),
                  std::forward<An>(args)...) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  ~StrictMock() {  // NOLINT
    ::testing::Mock::UnregisterCallReaction(
        internal::ImplicitCast_<MockClass*>(this));
  }

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(StrictMock);
};

// The following specializations catch some (relatively more common)
// user errors of nesting nice and strict mocks.  They do NOT catch
// all possible errors.

// These specializations are declared but not defined, as NiceMock,
// NaggyMock, and StrictMock cannot be nested.

template <typename MockClass>
class NiceMock<NiceMock<MockClass> >;
template <typename MockClass>
class NiceMock<NaggyMock<MockClass> >;
template <typename MockClass>
class NiceMock<StrictMock<MockClass> >;

template <typename MockClass>
class NaggyMock<NiceMock<MockClass> >;
template <typename MockClass>
class NaggyMock<NaggyMock<MockClass> >;
template <typename MockClass>
class NaggyMock<StrictMock<MockClass> >;

template <typename MockClass>
class StrictMock<NiceMock<MockClass> >;
template <typename MockClass>
class StrictMock<NaggyMock<MockClass> >;
template <typename MockClass>
class StrictMock<StrictMock<MockClass> >;

}  // namespace testing

#endif  // GMOCK_INCLUDE_GMOCK_GMOCK_NICE_STRICT_H_
