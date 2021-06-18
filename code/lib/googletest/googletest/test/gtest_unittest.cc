// Copyright 2005, Google Inc.
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

// Verifies that the command line flag variables can be accessed in
// code once "gtest.h" has been #included.
// Do not move it after other gtest #includes.
TEST(CommandLineFlagsTest, CanBeAccessedInCodeOnceGTestHIsIncluded) {
  bool dummy = testing::GTEST_FLAG(also_run_disabled_tests)
      || testing::GTEST_FLAG(break_on_failure)
      || testing::GTEST_FLAG(catch_exceptions)
      || testing::GTEST_FLAG(color) != "unknown"
      || testing::GTEST_FLAG(filter) != "unknown"
      || testing::GTEST_FLAG(list_tests)
      || testing::GTEST_FLAG(output) != "unknown"
      || testing::GTEST_FLAG(print_time)
      || testing::GTEST_FLAG(random_seed)
      || testing::GTEST_FLAG(repeat) > 0
      || testing::GTEST_FLAG(show_internal_stack_frames)
      || testing::GTEST_FLAG(shuffle)
      || testing::GTEST_FLAG(stack_trace_depth) > 0
      || testing::GTEST_FLAG(stream_result_to) != "unknown"
      || testing::GTEST_FLAG(throw_on_failure);
  EXPECT_TRUE(dummy || !dummy);  // Suppresses warning that dummy is unused.
}

#include <limits.h>  // For INT_MAX.
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <map>
#include <ostream>
#include <type_traits>
#include <unordered_set>
#include <vector>

#include "gtest/gtest-spi.h"
#include "src/gtest-internal-inl.h"

namespace testing {
namespace internal {

#if GTEST_CAN_STREAM_RESULTS_

class StreamingListenerTest : public Test {
 public:
  class FakeSocketWriter : public StreamingListener::AbstractSocketWriter {
   public:
    // Sends a string to the socket.
    void Send(const std::string& message) override { output_ += message; }

    std::string output_;
  };

  StreamingListenerTest()
      : fake_sock_writer_(new FakeSocketWriter),
        streamer_(fake_sock_writer_),
        test_info_obj_("FooTest", "Bar", nullptr, nullptr,
                       CodeLocation(__FILE__, __LINE__), nullptr, nullptr) {}

 protected:
  std::string* output() { return &(fake_sock_writer_->output_); }

  FakeSocketWriter* const fake_sock_writer_;
  StreamingListener streamer_;
  UnitTest unit_test_;
  TestInfo test_info_obj_;  // The name test_info_ was taken by testing::Test.
};

TEST_F(StreamingListenerTest, OnTestProgramEnd) {
  *output() = "";
  streamer_.OnTestProgramEnd(unit_test_);
  EXPECT_EQ("event=TestProgramEnd&passed=1\n", *output());
}

TEST_F(StreamingListenerTest, OnTestIterationEnd) {
  *output() = "";
  streamer_.OnTestIterationEnd(unit_test_, 42);
  EXPECT_EQ("event=TestIterationEnd&passed=1&elapsed_time=0ms\n", *output());
}

TEST_F(StreamingListenerTest, OnTestCaseStart) {
  *output() = "";
  streamer_.OnTestCaseStart(TestCase("FooTest", "Bar", nullptr, nullptr));
  EXPECT_EQ("event=TestCaseStart&name=FooTest\n", *output());
}

TEST_F(StreamingListenerTest, OnTestCaseEnd) {
  *output() = "";
  streamer_.OnTestCaseEnd(TestCase("FooTest", "Bar", nullptr, nullptr));
  EXPECT_EQ("event=TestCaseEnd&passed=1&elapsed_time=0ms\n", *output());
}

TEST_F(StreamingListenerTest, OnTestStart) {
  *output() = "";
  streamer_.OnTestStart(test_info_obj_);
  EXPECT_EQ("event=TestStart&name=Bar\n", *output());
}

TEST_F(StreamingListenerTest, OnTestEnd) {
  *output() = "";
  streamer_.OnTestEnd(test_info_obj_);
  EXPECT_EQ("event=TestEnd&passed=1&elapsed_time=0ms\n", *output());
}

TEST_F(StreamingListenerTest, OnTestPartResult) {
  *output() = "";
  streamer_.OnTestPartResult(TestPartResult(
      TestPartResult::kFatalFailure, "foo.cc", 42, "failed=\n&%"));

  // Meta characters in the failure message should be properly escaped.
  EXPECT_EQ(
      "event=TestPartResult&file=foo.cc&line=42&message=failed%3D%0A%26%25\n",
      *output());
}

#endif  // GTEST_CAN_STREAM_RESULTS_

// Provides access to otherwise private parts of the TestEventListeners class
// that are needed to test it.
class TestEventListenersAccessor {
 public:
  static TestEventListener* GetRepeater(TestEventListeners* listeners) {
    return listeners->repeater();
  }

  static void SetDefaultResultPrinter(TestEventListeners* listeners,
                                      TestEventListener* listener) {
    listeners->SetDefaultResultPrinter(listener);
  }
  static void SetDefaultXmlGenerator(TestEventListeners* listeners,
                                     TestEventListener* listener) {
    listeners->SetDefaultXmlGenerator(listener);
  }

  static bool EventForwardingEnabled(const TestEventListeners& listeners) {
    return listeners.EventForwardingEnabled();
  }

  static void SuppressEventForwarding(TestEventListeners* listeners) {
    listeners->SuppressEventForwarding();
  }
};

class UnitTestRecordPropertyTestHelper : public Test {
 protected:
  UnitTestRecordPropertyTestHelper() {}

  // Forwards to UnitTest::RecordProperty() to bypass access controls.
  void UnitTestRecordProperty(const char* key, const std::string& value) {
    unit_test_.RecordProperty(key, value);
  }

  UnitTest unit_test_;
};

}  // namespace internal
}  // namespace testing

using testing::AssertionFailure;
using testing::AssertionResult;
using testing::AssertionSuccess;
using testing::DoubleLE;
using testing::EmptyTestEventListener;
using testing::Environment;
using testing::FloatLE;
using testing::GTEST_FLAG(also_run_disabled_tests);
using testing::GTEST_FLAG(break_on_failure);
using testing::GTEST_FLAG(catch_exceptions);
using testing::GTEST_FLAG(color);
using testing::GTEST_FLAG(death_test_use_fork);
using testing::GTEST_FLAG(filter);
using testing::GTEST_FLAG(list_tests);
using testing::GTEST_FLAG(output);
using testing::GTEST_FLAG(print_time);
using testing::GTEST_FLAG(random_seed);
using testing::GTEST_FLAG(repeat);
using testing::GTEST_FLAG(show_internal_stack_frames);
using testing::GTEST_FLAG(shuffle);
using testing::GTEST_FLAG(stack_trace_depth);
using testing::GTEST_FLAG(stream_result_to);
using testing::GTEST_FLAG(throw_on_failure);
using testing::IsNotSubstring;
using testing::IsSubstring;
using testing::Message;
using testing::ScopedFakeTestPartResultReporter;
using testing::StaticAssertTypeEq;
using testing::Test;
using testing::TestCase;
using testing::TestEventListeners;
using testing::TestInfo;
using testing::TestPartResult;
using testing::TestPartResultArray;
using testing::TestProperty;
using testing::TestResult;
using testing::TimeInMillis;
using testing::UnitTest;
using testing::internal::AlwaysFalse;
using testing::internal::AlwaysTrue;
using testing::internal::AppendUserMessage;
using testing::internal::ArrayAwareFind;
using testing::internal::ArrayEq;
using testing::internal::CodePointToUtf8;
using testing::internal::CopyArray;
using testing::internal::CountIf;
using testing::internal::EqFailure;
using testing::internal::FloatingPoint;
using testing::internal::ForEach;
using testing::internal::FormatEpochTimeInMillisAsIso8601;
using testing::internal::FormatTimeInMillisAsSeconds;
using testing::internal::GTestFlagSaver;
using testing::internal::GetCurrentOsStackTraceExceptTop;
using testing::internal::GetElementOr;
using testing::internal::GetNextRandomSeed;
using testing::internal::GetRandomSeedFromFlag;
using testing::internal::GetTestTypeId;
using testing::internal::GetTimeInMillis;
using testing::internal::GetTypeId;
using testing::internal::GetUnitTestImpl;
using testing::internal::Int32;
using testing::internal::Int32FromEnvOrDie;
using testing::internal::IsAProtocolMessage;
using testing::internal::IsContainer;
using testing::internal::IsContainerTest;
using testing::internal::IsNotContainer;
using testing::internal::NativeArray;
using testing::internal::OsStackTraceGetter;
using testing::internal::OsStackTraceGetterInterface;
using testing::internal::ParseInt32Flag;
using testing::internal::RelationToSourceCopy;
using testing::internal::RelationToSourceReference;
using testing::internal::ShouldRunTestOnShard;
using testing::internal::ShouldShard;
using testing::internal::ShouldUseColor;
using testing::internal::Shuffle;
using testing::internal::ShuffleRange;
using testing::internal::SkipPrefix;
using testing::internal::StreamableToString;
using testing::internal::String;
using testing::internal::TestEventListenersAccessor;
using testing::internal::TestResultAccessor;
using testing::internal::UInt32;
using testing::internal::UnitTestImpl;
using testing::internal::WideStringToUtf8;
using testing::internal::edit_distance::CalculateOptimalEdits;
using testing::internal::edit_distance::CreateUnifiedDiff;
using testing::internal::edit_distance::EditType;
using testing::internal::kMaxRandomSeed;
using testing::internal::kTestTypeIdInGoogleTest;
using testing::kMaxStackTraceDepth;

#if GTEST_HAS_STREAM_REDIRECTION
using testing::internal::CaptureStdout;
using testing::internal::GetCapturedStdout;
#endif

#if GTEST_IS_THREADSAFE
using testing::internal::ThreadWithParam;
#endif

class TestingVector : public std::vector<int> {
};

::std::ostream& operator<<(::std::ostream& os,
                           const TestingVector& vector) {
  os << "{ ";
  for (size_t i = 0; i < vector.size(); i++) {
    os << vector[i] << " ";
  }
  os << "}";
  return os;
}

// This line tests that we can define tests in an unnamed namespace.
namespace {

TEST(GetRandomSeedFromFlagTest, HandlesZero) {
  const int seed = GetRandomSeedFromFlag(0);
  EXPECT_LE(1, seed);
  EXPECT_LE(seed, static_cast<int>(kMaxRandomSeed));
}

TEST(GetRandomSeedFromFlagTest, PreservesValidSeed) {
  EXPECT_EQ(1, GetRandomSeedFromFlag(1));
  EXPECT_EQ(2, GetRandomSeedFromFlag(2));
  EXPECT_EQ(kMaxRandomSeed - 1, GetRandomSeedFromFlag(kMaxRandomSeed - 1));
  EXPECT_EQ(static_cast<int>(kMaxRandomSeed),
            GetRandomSeedFromFlag(kMaxRandomSeed));
}

TEST(GetRandomSeedFromFlagTest, NormalizesInvalidSeed) {
  const int seed1 = GetRandomSeedFromFlag(-1);
  EXPECT_LE(1, seed1);
  EXPECT_LE(seed1, static_cast<int>(kMaxRandomSeed));

  const int seed2 = GetRandomSeedFromFlag(kMaxRandomSeed + 1);
  EXPECT_LE(1, seed2);
  EXPECT_LE(seed2, static_cast<int>(kMaxRandomSeed));
}

TEST(GetNextRandomSeedTest, WorksForValidInput) {
  EXPECT_EQ(2, GetNextRandomSeed(1));
  EXPECT_EQ(3, GetNextRandomSeed(2));
  EXPECT_EQ(static_cast<int>(kMaxRandomSeed),
            GetNextRandomSeed(kMaxRandomSeed - 1));
  EXPECT_EQ(1, GetNextRandomSeed(kMaxRandomSeed));

  // We deliberately don't test GetNextRandomSeed() with invalid
  // inputs, as that requires death tests, which are expensive.  This
  // is fine as GetNextRandomSeed() is internal and has a
  // straightforward definition.
}

static void ClearCurrentTestPartResults() {
  TestResultAccessor::ClearTestPartResults(
      GetUnitTestImpl()->current_test_result());
}

// Tests GetTypeId.

TEST(GetTypeIdTest, ReturnsSameValueForSameType) {
  EXPECT_EQ(GetTypeId<int>(), GetTypeId<int>());
  EXPECT_EQ(GetTypeId<Test>(), GetTypeId<Test>());
}

class SubClassOfTest : public Test {};
class AnotherSubClassOfTest : public Test {};

TEST(GetTypeIdTest, ReturnsDifferentValuesForDifferentTypes) {
  EXPECT_NE(GetTypeId<int>(), GetTypeId<const int>());
  EXPECT_NE(GetTypeId<int>(), GetTypeId<char>());
  EXPECT_NE(GetTypeId<int>(), GetTestTypeId());
  EXPECT_NE(GetTypeId<SubClassOfTest>(), GetTestTypeId());
  EXPECT_NE(GetTypeId<AnotherSubClassOfTest>(), GetTestTypeId());
  EXPECT_NE(GetTypeId<AnotherSubClassOfTest>(), GetTypeId<SubClassOfTest>());
}

// Verifies that GetTestTypeId() returns the same value, no matter it
// is called from inside Google Test or outside of it.
TEST(GetTestTypeIdTest, ReturnsTheSameValueInsideOrOutsideOfGoogleTest) {
  EXPECT_EQ(kTestTypeIdInGoogleTest, GetTestTypeId());
}

// Tests CanonicalizeForStdLibVersioning.

using ::testing::internal::CanonicalizeForStdLibVersioning;

TEST(CanonicalizeForStdLibVersioning, LeavesUnversionedNamesUnchanged) {
  EXPECT_EQ("std::bind", CanonicalizeForStdLibVersioning("std::bind"));
  EXPECT_EQ("std::_", CanonicalizeForStdLibVersioning("std::_"));
  EXPECT_EQ("std::__foo", CanonicalizeForStdLibVersioning("std::__foo"));
  EXPECT_EQ("gtl::__1::x", CanonicalizeForStdLibVersioning("gtl::__1::x"));
  EXPECT_EQ("__1::x", CanonicalizeForStdLibVersioning("__1::x"));
  EXPECT_EQ("::__1::x", CanonicalizeForStdLibVersioning("::__1::x"));
}

TEST(CanonicalizeForStdLibVersioning, ElidesDoubleUnderNames) {
  EXPECT_EQ("std::bind", CanonicalizeForStdLibVersioning("std::__1::bind"));
  EXPECT_EQ("std::_", CanonicalizeForStdLibVersioning("std::__1::_"));

  EXPECT_EQ("std::bind", CanonicalizeForStdLibVersioning("std::__g::bind"));
  EXPECT_EQ("std::_", CanonicalizeForStdLibVersioning("std::__g::_"));

  EXPECT_EQ("std::bind",
            CanonicalizeForStdLibVersioning("std::__google::bind"));
  EXPECT_EQ("std::_", CanonicalizeForStdLibVersioning("std::__google::_"));
}

// Tests FormatTimeInMillisAsSeconds().

TEST(FormatTimeInMillisAsSecondsTest, FormatsZero) {
  EXPECT_EQ("0", FormatTimeInMillisAsSeconds(0));
}

TEST(FormatTimeInMillisAsSecondsTest, FormatsPositiveNumber) {
  EXPECT_EQ("0.003", FormatTimeInMillisAsSeconds(3));
  EXPECT_EQ("0.01", FormatTimeInMillisAsSeconds(10));
  EXPECT_EQ("0.2", FormatTimeInMillisAsSeconds(200));
  EXPECT_EQ("1.2", FormatTimeInMillisAsSeconds(1200));
  EXPECT_EQ("3", FormatTimeInMillisAsSeconds(3000));
}

TEST(FormatTimeInMillisAsSecondsTest, FormatsNegativeNumber) {
  EXPECT_EQ("-0.003", FormatTimeInMillisAsSeconds(-3));
  EXPECT_EQ("-0.01", FormatTimeInMillisAsSeconds(-10));
  EXPECT_EQ("-0.2", FormatTimeInMillisAsSeconds(-200));
  EXPECT_EQ("-1.2", FormatTimeInMillisAsSeconds(-1200));
  EXPECT_EQ("-3", FormatTimeInMillisAsSeconds(-3000));
}

// Tests FormatEpochTimeInMillisAsIso8601().  The correctness of conversion
// for particular dates below was verified in Python using
// datetime.datetime.fromutctimestamp(<timetamp>/1000).

// FormatEpochTimeInMillisAsIso8601 depends on the current timezone, so we
// have to set up a particular timezone to obtain predictable results.
class FormatEpochTimeInMillisAsIso8601Test : public Test {
 public:
  // On Cygwin, GCC doesn't allow unqualified integer literals to exceed
  // 32 bits, even when 64-bit integer types are available.  We have to
  // force the constants to have a 64-bit type here.
  static const TimeInMillis kMillisPerSec = 1000;

 private:
  void SetUp() override {
    saved_tz_ = nullptr;

    GTEST_DISABLE_MSC_DEPRECATED_PUSH_(/* getenv, strdup: deprecated */)
    if (getenv("TZ"))
      saved_tz_ = strdup(getenv("TZ"));
    GTEST_DISABLE_MSC_DEPRECATED_POP_()

    // Set up the time zone for FormatEpochTimeInMillisAsIso8601 to use.  We
    // cannot use the local time zone because the function's output depends
    // on the time zone.
    SetTimeZone("UTC+00");
  }

  void TearDown() override {
    SetTimeZone(saved_tz_);
    free(const_cast<char*>(saved_tz_));
    saved_tz_ = nullptr;
  }

  static void SetTimeZone(const char* time_zone) {
    // tzset() distinguishes between the TZ variable being present and empty
    // and not being present, so we have to consider the case of time_zone
    // being NULL.
#if _MSC_VER || GTEST_OS_WINDOWS_MINGW
    // ...Unless it's MSVC, whose standard library's _putenv doesn't
    // distinguish between an empty and a missing variable.
    const std::string env_var =
        std::string("TZ=") + (time_zone ? time_zone : "");
    _putenv(env_var.c_str());
    GTEST_DISABLE_MSC_WARNINGS_PUSH_(4996 /* deprecated function */)
    tzset();
    GTEST_DISABLE_MSC_WARNINGS_POP_()
#else
    if (time_zone) {
      setenv(("TZ"), time_zone, 1);
    } else {
      unsetenv("TZ");
    }
    tzset();
#endif
  }

  const char* saved_tz_;
};

const TimeInMillis FormatEpochTimeInMillisAsIso8601Test::kMillisPerSec;

TEST_F(FormatEpochTimeInMillisAsIso8601Test, PrintsTwoDigitSegments) {
  EXPECT_EQ("2011-10-31T18:52:42",
            FormatEpochTimeInMillisAsIso8601(1320087162 * kMillisPerSec));
}

TEST_F(FormatEpochTimeInMillisAsIso8601Test, MillisecondsDoNotAffectResult) {
  EXPECT_EQ(
      "2011-10-31T18:52:42",
      FormatEpochTimeInMillisAsIso8601(1320087162 * kMillisPerSec + 234));
}

TEST_F(FormatEpochTimeInMillisAsIso8601Test, PrintsLeadingZeroes) {
  EXPECT_EQ("2011-09-03T05:07:02",
            FormatEpochTimeInMillisAsIso8601(1315026422 * kMillisPerSec));
}

TEST_F(FormatEpochTimeInMillisAsIso8601Test, Prints24HourTime) {
  EXPECT_EQ("2011-09-28T17:08:22",
            FormatEpochTimeInMillisAsIso8601(1317229702 * kMillisPerSec));
}

TEST_F(FormatEpochTimeInMillisAsIso8601Test, PrintsEpochStart) {
  EXPECT_EQ("1970-01-01T00:00:00", FormatEpochTimeInMillisAsIso8601(0));
}

# ifdef __BORLANDC__
// Silences warnings: "Condition is always true", "Unreachable code"
#  pragma option push -w-ccc -w-rch
# endif

// Tests that the LHS of EXPECT_EQ or ASSERT_EQ can be used as a null literal
// when the RHS is a pointer type.
TEST(NullLiteralTest, LHSAllowsNullLiterals) {
  EXPECT_EQ(0, static_cast<void*>(nullptr));     // NOLINT
  ASSERT_EQ(0, static_cast<void*>(nullptr));     // NOLINT
  EXPECT_EQ(NULL, static_cast<void*>(nullptr));  // NOLINT
  ASSERT_EQ(NULL, static_cast<void*>(nullptr));  // NOLINT
  EXPECT_EQ(nullptr, static_cast<void*>(nullptr));
  ASSERT_EQ(nullptr, static_cast<void*>(nullptr));

  const int* const p = nullptr;
  EXPECT_EQ(0, p);     // NOLINT
  ASSERT_EQ(0, p);     // NOLINT
  EXPECT_EQ(NULL, p);  // NOLINT
  ASSERT_EQ(NULL, p);  // NOLINT
  EXPECT_EQ(nullptr, p);
  ASSERT_EQ(nullptr, p);
}

struct ConvertToAll {
  template <typename T>
  operator T() const {  // NOLINT
    return T();
  }
};

struct ConvertToPointer {
  template <class T>
  operator T*() const {  // NOLINT
    return nullptr;
  }
};

struct ConvertToAllButNoPointers {
  template <typename T,
            typename std::enable_if<!std::is_pointer<T>::value, int>::type = 0>
  operator T() const {  // NOLINT
    return T();
  }
};

struct MyType {};
inline bool operator==(MyType const&, MyType const&) { return true; }

TEST(NullLiteralTest, ImplicitConversion) {
  EXPECT_EQ(ConvertToPointer{}, static_cast<void*>(nullptr));
#if !defined(__GNUC__) || defined(__clang__)
  // Disabled due to GCC bug gcc.gnu.org/PR89580
  EXPECT_EQ(ConvertToAll{}, static_cast<void*>(nullptr));
#endif
  EXPECT_EQ(ConvertToAll{}, MyType{});
  EXPECT_EQ(ConvertToAllButNoPointers{}, MyType{});
}

#ifdef __clang__
#pragma clang diagnostic push
#if __has_warning("-Wzero-as-null-pointer-constant")
#pragma clang diagnostic error "-Wzero-as-null-pointer-constant"
#endif
#endif

TEST(NullLiteralTest, NoConversionNoWarning) {
  // Test that gtests detection and handling of null pointer constants
  // doesn't trigger a warning when '0' isn't actually used as null.
  EXPECT_EQ(0, 0);
  ASSERT_EQ(0, 0);
}

#ifdef __clang__
#pragma clang diagnostic pop
#endif

# ifdef __BORLANDC__
// Restores warnings after previous "#pragma option push" suppressed them.
#  pragma option pop
# endif

//
// Tests CodePointToUtf8().

// Tests that the NUL character L'\0' is encoded correctly.
TEST(CodePointToUtf8Test, CanEncodeNul) {
  EXPECT_EQ("", CodePointToUtf8(L'\0'));
}

// Tests that ASCII characters are encoded correctly.
TEST(CodePointToUtf8Test, CanEncodeAscii) {
  EXPECT_EQ("a", CodePointToUtf8(L'a'));
  EXPECT_EQ("Z", CodePointToUtf8(L'Z'));
  EXPECT_EQ("&", CodePointToUtf8(L'&'));
  EXPECT_EQ("\x7F", CodePointToUtf8(L'\x7F'));
}

// Tests that Unicode code-points that have 8 to 11 bits are encoded
// as 110xxxxx 10xxxxxx.
TEST(CodePointToUtf8Test, CanEncode8To11Bits) {
  // 000 1101 0011 => 110-00011 10-010011
  EXPECT_EQ("\xC3\x93", CodePointToUtf8(L'\xD3'));

  // 101 0111 0110 => 110-10101 10-110110
  // Some compilers (e.g., GCC on MinGW) cannot handle non-ASCII codepoints
  // in wide strings and wide chars. In order to accommodate them, we have to
  // introduce such character constants as integers.
  EXPECT_EQ("\xD5\xB6",
            CodePointToUtf8(static_cast<wchar_t>(0x576)));
}

// Tests that Unicode code-points that have 12 to 16 bits are encoded
// as 1110xxxx 10xxxxxx 10xxxxxx.
TEST(CodePointToUtf8Test, CanEncode12To16Bits) {
  // 0000 1000 1101 0011 => 1110-0000 10-100011 10-010011
  EXPECT_EQ("\xE0\xA3\x93",
            CodePointToUtf8(static_cast<wchar_t>(0x8D3)));

  // 1100 0111 0100 1101 => 1110-1100 10-011101 10-001101
  EXPECT_EQ("\xEC\x9D\x8D",
            CodePointToUtf8(static_cast<wchar_t>(0xC74D)));
}

#if !GTEST_WIDE_STRING_USES_UTF16_
// Tests in this group require a wchar_t to hold > 16 bits, and thus
// are skipped on Windows, and Cygwin, where a wchar_t is
// 16-bit wide. This code may not compile on those systems.

// Tests that Unicode code-points that have 17 to 21 bits are encoded
// as 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx.
TEST(CodePointToUtf8Test, CanEncode17To21Bits) {
  // 0 0001 0000 1000 1101 0011 => 11110-000 10-010000 10-100011 10-010011
  EXPECT_EQ("\xF0\x90\xA3\x93", CodePointToUtf8(L'\x108D3'));

  // 0 0001 0000 0100 0000 0000 => 11110-000 10-010000 10-010000 10-000000
  EXPECT_EQ("\xF0\x90\x90\x80", CodePointToUtf8(L'\x10400'));

  // 1 0000 1000 0110 0011 0100 => 11110-100 10-001000 10-011000 10-110100
  EXPECT_EQ("\xF4\x88\x98\xB4", CodePointToUtf8(L'\x108634'));
}

// Tests that encoding an invalid code-point generates the expected result.
TEST(CodePointToUtf8Test, CanEncodeInvalidCodePoint) {
  EXPECT_EQ("(Invalid Unicode 0x1234ABCD)", CodePointToUtf8(L'\x1234ABCD'));
}

#endif  // !GTEST_WIDE_STRING_USES_UTF16_

// Tests WideStringToUtf8().

// Tests that the NUL character L'\0' is encoded correctly.
TEST(WideStringToUtf8Test, CanEncodeNul) {
  EXPECT_STREQ("", WideStringToUtf8(L"", 0).c_str());
  EXPECT_STREQ("", WideStringToUtf8(L"", -1).c_str());
}

// Tests that ASCII strings are encoded correctly.
TEST(WideStringToUtf8Test, CanEncodeAscii) {
  EXPECT_STREQ("a", WideStringToUtf8(L"a", 1).c_str());
  EXPECT_STREQ("ab", WideStringToUtf8(L"ab", 2).c_str());
  EXPECT_STREQ("a", WideStringToUtf8(L"a", -1).c_str());
  EXPECT_STREQ("ab", WideStringToUtf8(L"ab", -1).c_str());
}

// Tests that Unicode code-points that have 8 to 11 bits are encoded
// as 110xxxxx 10xxxxxx.
TEST(WideStringToUtf8Test, CanEncode8To11Bits) {
  // 000 1101 0011 => 110-00011 10-010011
  EXPECT_STREQ("\xC3\x93", WideStringToUtf8(L"\xD3", 1).c_str());
  EXPECT_STREQ("\xC3\x93", WideStringToUtf8(L"\xD3", -1).c_str());

  // 101 0111 0110 => 110-10101 10-110110
  const wchar_t s[] = { 0x576, '\0' };
  EXPECT_STREQ("\xD5\xB6", WideStringToUtf8(s, 1).c_str());
  EXPECT_STREQ("\xD5\xB6", WideStringToUtf8(s, -1).c_str());
}

// Tests that Unicode code-points that have 12 to 16 bits are encoded
// as 1110xxxx 10xxxxxx 10xxxxxx.
TEST(WideStringToUtf8Test, CanEncode12To16Bits) {
  // 0000 1000 1101 0011 => 1110-0000 10-100011 10-010011
  const wchar_t s1[] = { 0x8D3, '\0' };
  EXPECT_STREQ("\xE0\xA3\x93", WideStringToUtf8(s1, 1).c_str());
  EXPECT_STREQ("\xE0\xA3\x93", WideStringToUtf8(s1, -1).c_str());

  // 1100 0111 0100 1101 => 1110-1100 10-011101 10-001101
  const wchar_t s2[] = { 0xC74D, '\0' };
  EXPECT_STREQ("\xEC\x9D\x8D", WideStringToUtf8(s2, 1).c_str());
  EXPECT_STREQ("\xEC\x9D\x8D", WideStringToUtf8(s2, -1).c_str());
}

// Tests that the conversion stops when the function encounters \0 character.
TEST(WideStringToUtf8Test, StopsOnNulCharacter) {
  EXPECT_STREQ("ABC", WideStringToUtf8(L"ABC\0XYZ", 100).c_str());
}

// Tests that the conversion stops when the function reaches the limit
// specified by the 'length' parameter.
TEST(WideStringToUtf8Test, StopsWhenLengthLimitReached) {
  EXPECT_STREQ("ABC", WideStringToUtf8(L"ABCDEF", 3).c_str());
}

#if !GTEST_WIDE_STRING_USES_UTF16_
// Tests that Unicode code-points that have 17 to 21 bits are encoded
// as 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx. This code may not compile
// on the systems using UTF-16 encoding.
TEST(WideStringToUtf8Test, CanEncode17To21Bits) {
  // 0 0001 0000 1000 1101 0011 => 11110-000 10-010000 10-100011 10-010011
  EXPECT_STREQ("\xF0\x90\xA3\x93", WideStringToUtf8(L"\x108D3", 1).c_str());
  EXPECT_STREQ("\xF0\x90\xA3\x93", WideStringToUtf8(L"\x108D3", -1).c_str());

  // 1 0000 1000 0110 0011 0100 => 11110-100 10-001000 10-011000 10-110100
  EXPECT_STREQ("\xF4\x88\x98\xB4", WideStringToUtf8(L"\x108634", 1).c_str());
  EXPECT_STREQ("\xF4\x88\x98\xB4", WideStringToUtf8(L"\x108634", -1).c_str());
}

// Tests that encoding an invalid code-point generates the expected result.
TEST(WideStringToUtf8Test, CanEncodeInvalidCodePoint) {
  EXPECT_STREQ("(Invalid Unicode 0xABCDFF)",
               WideStringToUtf8(L"\xABCDFF", -1).c_str());
}
#else  // !GTEST_WIDE_STRING_USES_UTF16_
// Tests that surrogate pairs are encoded correctly on the systems using
// UTF-16 encoding in the wide strings.
TEST(WideStringToUtf8Test, CanEncodeValidUtf16SUrrogatePairs) {
  const wchar_t s[] = { 0xD801, 0xDC00, '\0' };
  EXPECT_STREQ("\xF0\x90\x90\x80", WideStringToUtf8(s, -1).c_str());
}

// Tests that encoding an invalid UTF-16 surrogate pair
// generates the expected result.
TEST(WideStringToUtf8Test, CanEncodeInvalidUtf16SurrogatePair) {
  // Leading surrogate is at the end of the string.
  const wchar_t s1[] = { 0xD800, '\0' };
  EXPECT_STREQ("\xED\xA0\x80", WideStringToUtf8(s1, -1).c_str());
  // Leading surrogate is not followed by the trailing surrogate.
  const wchar_t s2[] = { 0xD800, 'M', '\0' };
  EXPECT_STREQ("\xED\xA0\x80M", WideStringToUtf8(s2, -1).c_str());
  // Trailing surrogate appearas without a leading surrogate.
  const wchar_t s3[] = { 0xDC00, 'P', 'Q', 'R', '\0' };
  EXPECT_STREQ("\xED\xB0\x80PQR", WideStringToUtf8(s3, -1).c_str());
}
#endif  // !GTEST_WIDE_STRING_USES_UTF16_

// Tests that codepoint concatenation works correctly.
#if !GTEST_WIDE_STRING_USES_UTF16_
TEST(WideStringToUtf8Test, ConcatenatesCodepointsCorrectly) {
  const wchar_t s[] = { 0x108634, 0xC74D, '\n', 0x576, 0x8D3, 0x108634, '\0'};
  EXPECT_STREQ(
      "\xF4\x88\x98\xB4"
          "\xEC\x9D\x8D"
          "\n"
          "\xD5\xB6"
          "\xE0\xA3\x93"
          "\xF4\x88\x98\xB4",
      WideStringToUtf8(s, -1).c_str());
}
#else
TEST(WideStringToUtf8Test, ConcatenatesCodepointsCorrectly) {
  const wchar_t s[] = { 0xC74D, '\n', 0x576, 0x8D3, '\0'};
  EXPECT_STREQ(
      "\xEC\x9D\x8D" "\n" "\xD5\xB6" "\xE0\xA3\x93",
      WideStringToUtf8(s, -1).c_str());
}
#endif  // !GTEST_WIDE_STRING_USES_UTF16_

// Tests the Random class.

TEST(RandomDeathTest, GeneratesCrashesOnInvalidRange) {
  testing::internal::Random random(42);
  EXPECT_DEATH_IF_SUPPORTED(
      random.Generate(0),
      "Cannot generate a number in the range \\[0, 0\\)");
  EXPECT_DEATH_IF_SUPPORTED(
      random.Generate(testing::internal::Random::kMaxRange + 1),
      "Generation of a number in \\[0, 2147483649\\) was requested, "
      "but this can only generate numbers in \\[0, 2147483648\\)");
}

TEST(RandomTest, GeneratesNumbersWithinRange) {
  const UInt32 kRange = 10000;
  testing::internal::Random random(12345);
  for (int i = 0; i < 10; i++) {
    EXPECT_LT(random.Generate(kRange), kRange) << " for iteration " << i;
  }

  testing::internal::Random random2(testing::internal::Random::kMaxRange);
  for (int i = 0; i < 10; i++) {
    EXPECT_LT(random2.Generate(kRange), kRange) << " for iteration " << i;
  }
}

TEST(RandomTest, RepeatsWhenReseeded) {
  const int kSeed = 123;
  const int kArraySize = 10;
  const UInt32 kRange = 10000;
  UInt32 values[kArraySize];

  testing::internal::Random random(kSeed);
  for (int i = 0; i < kArraySize; i++) {
    values[i] = random.Generate(kRange);
  }

  random.Reseed(kSeed);
  for (int i = 0; i < kArraySize; i++) {
    EXPECT_EQ(values[i], random.Generate(kRange)) << " for iteration " << i;
  }
}

// Tests STL container utilities.

// Tests CountIf().

static bool IsPositive(int n) { return n > 0; }

TEST(ContainerUtilityTest, CountIf) {
  std::vector<int> v;
  EXPECT_EQ(0, CountIf(v, IsPositive));  // Works for an empty container.

  v.push_back(-1);
  v.push_back(0);
  EXPECT_EQ(0, CountIf(v, IsPositive));  // Works when no value satisfies.

  v.push_back(2);
  v.push_back(-10);
  v.push_back(10);
  EXPECT_EQ(2, CountIf(v, IsPositive));
}

// Tests ForEach().

static int g_sum = 0;
static void Accumulate(int n) { g_sum += n; }

TEST(ContainerUtilityTest, ForEach) {
  std::vector<int> v;
  g_sum = 0;
  ForEach(v, Accumulate);
  EXPECT_EQ(0, g_sum);  // Works for an empty container;

  g_sum = 0;
  v.push_back(1);
  ForEach(v, Accumulate);
  EXPECT_EQ(1, g_sum);  // Works for a container with one element.

  g_sum = 0;
  v.push_back(20);
  v.push_back(300);
  ForEach(v, Accumulate);
  EXPECT_EQ(321, g_sum);
}

// Tests GetElementOr().
TEST(ContainerUtilityTest, GetElementOr) {
  std::vector<char> a;
  EXPECT_EQ('x', GetElementOr(a, 0, 'x'));

  a.push_back('a');
  a.push_back('b');
  EXPECT_EQ('a', GetElementOr(a, 0, 'x'));
  EXPECT_EQ('b', GetElementOr(a, 1, 'x'));
  EXPECT_EQ('x', GetElementOr(a, -2, 'x'));
  EXPECT_EQ('x', GetElementOr(a, 2, 'x'));
}

TEST(ContainerUtilityDeathTest, ShuffleRange) {
  std::vector<int> a;
  a.push_back(0);
  a.push_back(1);
  a.push_back(2);
  testing::internal::Random random(1);

  EXPECT_DEATH_IF_SUPPORTED(
      ShuffleRange(&random, -1, 1, &a),
      "Invalid shuffle range start -1: must be in range \\[0, 3\\]");
  EXPECT_DEATH_IF_SUPPORTED(
      ShuffleRange(&random, 4, 4, &a),
      "Invalid shuffle range start 4: must be in range \\[0, 3\\]");
  EXPECT_DEATH_IF_SUPPORTED(
      ShuffleRange(&random, 3, 2, &a),
      "Invalid shuffle range finish 2: must be in range \\[3, 3\\]");
  EXPECT_DEATH_IF_SUPPORTED(
      ShuffleRange(&random, 3, 4, &a),
      "Invalid shuffle range finish 4: must be in range \\[3, 3\\]");
}

class VectorShuffleTest : public Test {
 protected:
  static const size_t kVectorSize = 20;

  VectorShuffleTest() : random_(1) {
    for (int i = 0; i < static_cast<int>(kVectorSize); i++) {
      vector_.push_back(i);
    }
  }

  static bool VectorIsCorrupt(const TestingVector& vector) {
    if (kVectorSize != vector.size()) {
      return true;
    }

    bool found_in_vector[kVectorSize] = { false };
    for (size_t i = 0; i < vector.size(); i++) {
      const int e = vector[i];
      if (e < 0 || e >= static_cast<int>(kVectorSize) || found_in_vector[e]) {
        return true;
      }
      found_in_vector[e] = true;
    }

    // Vector size is correct, elements' range is correct, no
    // duplicate elements.  Therefore no corruption has occurred.
    return false;
  }

  static bool VectorIsNotCorrupt(const TestingVector& vector) {
    return !VectorIsCorrupt(vector);
  }

  static bool RangeIsShuffled(const TestingVector& vector, int begin, int end) {
    for (int i = begin; i < end; i++) {
      if (i != vector[static_cast<size_t>(i)]) {
        return true;
      }
    }
    return false;
  }

  static bool RangeIsUnshuffled(
      const TestingVector& vector, int begin, int end) {
    return !RangeIsShuffled(vector, begin, end);
  }

  static bool VectorIsShuffled(const TestingVector& vector) {
    return RangeIsShuffled(vector, 0, static_cast<int>(vector.size()));
  }

  static bool VectorIsUnshuffled(const TestingVector& vector) {
    return !VectorIsShuffled(vector);
  }

  testing::internal::Random random_;
  TestingVector vector_;
};  // class VectorShuffleTest

const size_t VectorShuffleTest::kVectorSize;

TEST_F(VectorShuffleTest, HandlesEmptyRange) {
  // Tests an empty range at the beginning...
  ShuffleRange(&random_, 0, 0, &vector_);
  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  ASSERT_PRED1(VectorIsUnshuffled, vector_);

  // ...in the middle...
  ShuffleRange(&random_, kVectorSize/2, kVectorSize/2, &vector_);
  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  ASSERT_PRED1(VectorIsUnshuffled, vector_);

  // ...at the end...
  ShuffleRange(&random_, kVectorSize - 1, kVectorSize - 1, &vector_);
  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  ASSERT_PRED1(VectorIsUnshuffled, vector_);

  // ...and past the end.
  ShuffleRange(&random_, kVectorSize, kVectorSize, &vector_);
  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  ASSERT_PRED1(VectorIsUnshuffled, vector_);
}

TEST_F(VectorShuffleTest, HandlesRangeOfSizeOne) {
  // Tests a size one range at the beginning...
  ShuffleRange(&random_, 0, 1, &vector_);
  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  ASSERT_PRED1(VectorIsUnshuffled, vector_);

  // ...in the middle...
  ShuffleRange(&random_, kVectorSize/2, kVectorSize/2 + 1, &vector_);
  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  ASSERT_PRED1(VectorIsUnshuffled, vector_);

  // ...and at the end.
  ShuffleRange(&random_, kVectorSize - 1, kVectorSize, &vector_);
  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  ASSERT_PRED1(VectorIsUnshuffled, vector_);
}

// Because we use our own random number generator and a fixed seed,
// we can guarantee that the following "random" tests will succeed.

TEST_F(VectorShuffleTest, ShufflesEntireVector) {
  Shuffle(&random_, &vector_);
  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  EXPECT_FALSE(VectorIsUnshuffled(vector_)) << vector_;

  // Tests the first and last elements in particular to ensure that
  // there are no off-by-one problems in our shuffle algorithm.
  EXPECT_NE(0, vector_[0]);
  EXPECT_NE(static_cast<int>(kVectorSize - 1), vector_[kVectorSize - 1]);
}

TEST_F(VectorShuffleTest, ShufflesStartOfVector) {
  const int kRangeSize = kVectorSize/2;

  ShuffleRange(&random_, 0, kRangeSize, &vector_);

  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  EXPECT_PRED3(RangeIsShuffled, vector_, 0, kRangeSize);
  EXPECT_PRED3(RangeIsUnshuffled, vector_, kRangeSize,
               static_cast<int>(kVectorSize));
}

TEST_F(VectorShuffleTest, ShufflesEndOfVector) {
  const int kRangeSize = kVectorSize / 2;
  ShuffleRange(&random_, kRangeSize, kVectorSize, &vector_);

  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  EXPECT_PRED3(RangeIsUnshuffled, vector_, 0, kRangeSize);
  EXPECT_PRED3(RangeIsShuffled, vector_, kRangeSize,
               static_cast<int>(kVectorSize));
}

TEST_F(VectorShuffleTest, ShufflesMiddleOfVector) {
  const int kRangeSize = static_cast<int>(kVectorSize) / 3;
  ShuffleRange(&random_, kRangeSize, 2*kRangeSize, &vector_);

  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  EXPECT_PRED3(RangeIsUnshuffled, vector_, 0, kRangeSize);
  EXPECT_PRED3(RangeIsShuffled, vector_, kRangeSize, 2*kRangeSize);
  EXPECT_PRED3(RangeIsUnshuffled, vector_, 2 * kRangeSize,
               static_cast<int>(kVectorSize));
}

TEST_F(VectorShuffleTest, ShufflesRepeatably) {
  TestingVector vector2;
  for (size_t i = 0; i < kVectorSize; i++) {
    vector2.push_back(static_cast<int>(i));
  }

  random_.Reseed(1234);
  Shuffle(&random_, &vector_);
  random_.Reseed(1234);
  Shuffle(&random_, &vector2);

  ASSERT_PRED1(VectorIsNotCorrupt, vector_);
  ASSERT_PRED1(VectorIsNotCorrupt, vector2);

  for (size_t i = 0; i < kVectorSize; i++) {
    EXPECT_EQ(vector_[i], vector2[i]) << " where i is " << i;
  }
}

// Tests the size of the AssertHelper class.

TEST(AssertHelperTest, AssertHelperIsSmall) {
  // To avoid breaking clients that use lots of assertions in one
  // function, we cannot grow the size of AssertHelper.
  EXPECT_LE(sizeof(testing::internal::AssertHelper), sizeof(void*));
}

// Tests String::EndsWithCaseInsensitive().
TEST(StringTest, EndsWithCaseInsensitive) {
  EXPECT_TRUE(String::EndsWithCaseInsensitive("foobar", "BAR"));
  EXPECT_TRUE(String::EndsWithCaseInsensitive("foobaR", "bar"));
  EXPECT_TRUE(String::EndsWithCaseInsensitive("foobar", ""));
  EXPECT_TRUE(String::EndsWithCaseInsensitive("", ""));

  EXPECT_FALSE(String::EndsWithCaseInsensitive("Foobar", "foo"));
  EXPECT_FALSE(String::EndsWithCaseInsensitive("foobar", "Foo"));
  EXPECT_FALSE(String::EndsWithCaseInsensitive("", "foo"));
}

// C++Builder's preprocessor is buggy; it fails to expand macros that
// appear in macro parameters after wide char literals.  Provide an alias
// for NULL as a workaround.
static const wchar_t* const kNull = nullptr;

// Tests String::CaseInsensitiveWideCStringEquals
TEST(StringTest, CaseInsensitiveWideCStringEquals) {
  EXPECT_TRUE(String::CaseInsensitiveWideCStringEquals(nullptr, nullptr));
  EXPECT_FALSE(String::CaseInsensitiveWideCStringEquals(kNull, L""));
  EXPECT_FALSE(String::CaseInsensitiveWideCStringEquals(L"", kNull));
  EXPECT_FALSE(String::CaseInsensitiveWideCStringEquals(kNull, L"foobar"));
  EXPECT_FALSE(String::CaseInsensitiveWideCStringEquals(L"foobar", kNull));
  EXPECT_TRUE(String::CaseInsensitiveWideCStringEquals(L"foobar", L"foobar"));
  EXPECT_TRUE(String::CaseInsensitiveWideCStringEquals(L"foobar", L"FOOBAR"));
  EXPECT_TRUE(String::CaseInsensitiveWideCStringEquals(L"FOOBAR", L"foobar"));
}

#if GTEST_OS_WINDOWS

// Tests String::ShowWideCString().
TEST(StringTest, ShowWideCString) {
  EXPECT_STREQ("(null)",
               String::ShowWideCString(NULL).c_str());
  EXPECT_STREQ("", String::ShowWideCString(L"").c_str());
  EXPECT_STREQ("foo", String::ShowWideCString(L"foo").c_str());
}

# if GTEST_OS_WINDOWS_MOBILE
TEST(StringTest, AnsiAndUtf16Null) {
  EXPECT_EQ(NULL, String::AnsiToUtf16(NULL));
  EXPECT_EQ(NULL, String::Utf16ToAnsi(NULL));
}

TEST(StringTest, AnsiAndUtf16ConvertBasic) {
  const char* ansi = String::Utf16ToAnsi(L"str");
  EXPECT_STREQ("str", ansi);
  delete [] ansi;
  const WCHAR* utf16 = String::AnsiToUtf16("str");
  EXPECT_EQ(0, wcsncmp(L"str", utf16, 3));
  delete [] utf16;
}

TEST(StringTest, AnsiAndUtf16ConvertPathChars) {
  const char* ansi = String::Utf16ToAnsi(L".:\\ \"*?");
  EXPECT_STREQ(".:\\ \"*?", ansi);
  delete [] ansi;
  const WCHAR* utf16 = String::AnsiToUtf16(".:\\ \"*?");
  EXPECT_EQ(0, wcsncmp(L".:\\ \"*?", utf16, 3));
  delete [] utf16;
}
# endif  // GTEST_OS_WINDOWS_MOBILE

#endif  // GTEST_OS_WINDOWS

// Tests TestProperty construction.
TEST(TestPropertyTest, StringValue) {
  TestProperty property("key", "1");
  EXPECT_STREQ("key", property.key());
  EXPECT_STREQ("1", property.value());
}

// Tests TestProperty replacing a value.
TEST(TestPropertyTest, ReplaceStringValue) {
  TestProperty property("key", "1");
  EXPECT_STREQ("1", property.value());
  property.SetValue("2");
  EXPECT_STREQ("2", property.value());
}

// AddFatalFailure() and AddNonfatalFailure() must be stand-alone
// functions (i.e. their definitions cannot be inlined at the call
// sites), or C++Builder won't compile the code.
static void AddFatalFailure() {
  FAIL() << "Expected fatal failure.";
}

static void AddNonfatalFailure() {
  ADD_FAILURE() << "Expected non-fatal failure.";
}

class ScopedFakeTestPartResultReporterTest : public Test {
 public:  // Must be public and not protected due to a bug in g++ 3.4.2.
  enum FailureMode {
    FATAL_FAILURE,
    NONFATAL_FAILURE
  };
  static void AddFailure(FailureMode failure) {
    if (failure == FATAL_FAILURE) {
      AddFatalFailure();
    } else {
      AddNonfatalFailure();
    }
  }
};

// Tests that ScopedFakeTestPartResultReporter intercepts test
// failures.
TEST_F(ScopedFakeTestPartResultReporterTest, InterceptsTestFailures) {
  TestPartResultArray results;
  {
    ScopedFakeTestPartResultReporter reporter(
        ScopedFakeTestPartResultReporter::INTERCEPT_ONLY_CURRENT_THREAD,
        &results);
    AddFailure(NONFATAL_FAILURE);
    AddFailure(FATAL_FAILURE);
  }

  EXPECT_EQ(2, results.size());
  EXPECT_TRUE(results.GetTestPartResult(0).nonfatally_failed());
  EXPECT_TRUE(results.GetTestPartResult(1).fatally_failed());
}

TEST_F(ScopedFakeTestPartResultReporterTest, DeprecatedConstructor) {
  TestPartResultArray results;
  {
    // Tests, that the deprecated constructor still works.
    ScopedFakeTestPartResultReporter reporter(&results);
    AddFailure(NONFATAL_FAILURE);
  }
  EXPECT_EQ(1, results.size());
}

#if GTEST_IS_THREADSAFE

class ScopedFakeTestPartResultReporterWithThreadsTest
  : public ScopedFakeTestPartResultReporterTest {
 protected:
  static void AddFailureInOtherThread(FailureMode failure) {
    ThreadWithParam<FailureMode> thread(&AddFailure, failure, nullptr);
    thread.Join();
  }
};

TEST_F(ScopedFakeTestPartResultReporterWithThreadsTest,
       InterceptsTestFailuresInAllThreads) {
  TestPartResultArray results;
  {
    ScopedFakeTestPartResultReporter reporter(
        ScopedFakeTestPartResultReporter::INTERCEPT_ALL_THREADS, &results);
    AddFailure(NONFATAL_FAILURE);
    AddFailure(FATAL_FAILURE);
    AddFailureInOtherThread(NONFATAL_FAILURE);
    AddFailureInOtherThread(FATAL_FAILURE);
  }

  EXPECT_EQ(4, results.size());
  EXPECT_TRUE(results.GetTestPartResult(0).nonfatally_failed());
  EXPECT_TRUE(results.GetTestPartResult(1).fatally_failed());
  EXPECT_TRUE(results.GetTestPartResult(2).nonfatally_failed());
  EXPECT_TRUE(results.GetTestPartResult(3).fatally_failed());
}

#endif  // GTEST_IS_THREADSAFE

// Tests EXPECT_FATAL_FAILURE{,ON_ALL_THREADS}.  Makes sure that they
// work even if the failure is generated in a called function rather than
// the current context.

typedef ScopedFakeTestPartResultReporterTest ExpectFatalFailureTest;

TEST_F(ExpectFatalFailureTest, CatchesFatalFaliure) {
  EXPECT_FATAL_FAILURE(AddFatalFailure(), "Expected fatal failure.");
}

TEST_F(ExpectFatalFailureTest, AcceptsStdStringObject) {
  EXPECT_FATAL_FAILURE(AddFatalFailure(),
                       ::std::string("Expected fatal failure."));
}

TEST_F(ExpectFatalFailureTest, CatchesFatalFailureOnAllThreads) {
  // We have another test below to verify that the macro catches fatal
  // failures generated on another thread.
  EXPECT_FATAL_FAILURE_ON_ALL_THREADS(AddFatalFailure(),
                                      "Expected fatal failure.");
}

#ifdef __BORLANDC__
// Silences warnings: "Condition is always true"
# pragma option push -w-ccc
#endif

// Tests that EXPECT_FATAL_FAILURE() can be used in a non-void
// function even when the statement in it contains ASSERT_*.

int NonVoidFunction() {
  EXPECT_FATAL_FAILURE(ASSERT_TRUE(false), "");
  EXPECT_FATAL_FAILURE_ON_ALL_THREADS(FAIL(), "");
  return 0;
}

TEST_F(ExpectFatalFailureTest, CanBeUsedInNonVoidFunction) {
  NonVoidFunction();
}

// Tests that EXPECT_FATAL_FAILURE(statement, ...) doesn't abort the
// current function even though 'statement' generates a fatal failure.

void DoesNotAbortHelper(bool* aborted) {
  EXPECT_FATAL_FAILURE(ASSERT_TRUE(false), "");
  EXPECT_FATAL_FAILURE_ON_ALL_THREADS(FAIL(), "");

  *aborted = false;
}

#ifdef __BORLANDC__
// Restores warnings after previous "#pragma option push" suppressed them.
# pragma option pop
#endif

TEST_F(ExpectFatalFailureTest, DoesNotAbort) {
  bool aborted = true;
  DoesNotAbortHelper(&aborted);
  EXPECT_FALSE(aborted);
}

// Tests that the EXPECT_FATAL_FAILURE{,_ON_ALL_THREADS} accepts a
// statement that contains a macro which expands to code containing an
// unprotected comma.

static int global_var = 0;
#define GTEST_USE_UNPROTECTED_COMMA_ global_var++, global_var++

TEST_F(ExpectFatalFailureTest, AcceptsMacroThatExpandsToUnprotectedComma) {
#ifndef __BORLANDC__
  // ICE's in C++Builder.
  EXPECT_FATAL_FAILURE({
    GTEST_USE_UNPROTECTED_COMMA_;
    AddFatalFailure();
  }, "");
#endif

  EXPECT_FATAL_FAILURE_ON_ALL_THREADS({
    GTEST_USE_UNPROTECTED_COMMA_;
    AddFatalFailure();
  }, "");
}

// Tests EXPECT_NONFATAL_FAILURE{,ON_ALL_THREADS}.

typedef ScopedFakeTestPartResultReporterTest ExpectNonfatalFailureTest;

TEST_F(ExpectNonfatalFailureTest, CatchesNonfatalFailure) {
  EXPECT_NONFATAL_FAILURE(AddNonfatalFailure(),
                          "Expected non-fatal failure.");
}

TEST_F(ExpectNonfatalFailureTest, AcceptsStdStringObject) {
  EXPECT_NONFATAL_FAILURE(AddNonfatalFailure(),
                          ::std::string("Expected non-fatal failure."));
}

TEST_F(ExpectNonfatalFailureTest, CatchesNonfatalFailureOnAllThreads) {
  // We have another test below to verify that the macro catches
  // non-fatal failures generated on another thread.
  EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(AddNonfatalFailure(),
                                         "Expected non-fatal failure.");
}

// Tests that the EXPECT_NONFATAL_FAILURE{,_ON_ALL_THREADS} accepts a
// statement that contains a macro which expands to code containing an
// unprotected comma.
TEST_F(ExpectNonfatalFailureTest, AcceptsMacroThatExpandsToUnprotectedComma) {
  EXPECT_NONFATAL_FAILURE({
    GTEST_USE_UNPROTECTED_COMMA_;
    AddNonfatalFailure();
  }, "");

  EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS({
    GTEST_USE_UNPROTECTED_COMMA_;
    AddNonfatalFailure();
  }, "");
}

#if GTEST_IS_THREADSAFE

typedef ScopedFakeTestPartResultReporterWithThreadsTest
    ExpectFailureWithThreadsTest;

TEST_F(ExpectFailureWithThreadsTest, ExpectFatalFailureOnAllThreads) {
  EXPECT_FATAL_FAILURE_ON_ALL_THREADS(AddFailureInOtherThread(FATAL_FAILURE),
                                      "Expected fatal failure.");
}

TEST_F(ExpectFailureWithThreadsTest, ExpectNonFatalFailureOnAllThreads) {
  EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(
      AddFailureInOtherThread(NONFATAL_FAILURE), "Expected non-fatal failure.");
}

#endif  // GTEST_IS_THREADSAFE

// Tests the TestProperty class.

TEST(TestPropertyTest, ConstructorWorks) {
  const TestProperty property("key", "value");
  EXPECT_STREQ("key", property.key());
  EXPECT_STREQ("value", property.value());
}

TEST(TestPropertyTest, SetValue) {
  TestProperty property("key", "value_1");
  EXPECT_STREQ("key", property.key());
  property.SetValue("value_2");
  EXPECT_STREQ("key", property.key());
  EXPECT_STREQ("value_2", property.value());
}

// Tests the TestResult class

// The test fixture for testing TestResult.
class TestResultTest : public Test {
 protected:
  typedef std::vector<TestPartResult> TPRVector;

  // We make use of 2 TestPartResult objects,
  TestPartResult * pr1, * pr2;

  // ... and 3 TestResult objects.
  TestResult * r0, * r1, * r2;

  void SetUp() override {
    // pr1 is for success.
    pr1 = new TestPartResult(TestPartResult::kSuccess,
                             "foo/bar.cc",
                             10,
                             "Success!");

    // pr2 is for fatal failure.
    pr2 = new TestPartResult(TestPartResult::kFatalFailure,
                             "foo/bar.cc",
                             -1,  // This line number means "unknown"
                             "Failure!");

    // Creates the TestResult objects.
    r0 = new TestResult();
    r1 = new TestResult();
    r2 = new TestResult();

    // In order to test TestResult, we need to modify its internal
    // state, in particular the TestPartResult vector it holds.
    // test_part_results() returns a const reference to this vector.
    // We cast it to a non-const object s.t. it can be modified
    TPRVector* results1 = const_cast<TPRVector*>(
        &TestResultAccessor::test_part_results(*r1));
    TPRVector* results2 = const_cast<TPRVector*>(
        &TestResultAccessor::test_part_results(*r2));

    // r0 is an empty TestResult.

    // r1 contains a single SUCCESS TestPartResult.
    results1->push_back(*pr1);

    // r2 contains a SUCCESS, and a FAILURE.
    results2->push_back(*pr1);
    results2->push_back(*pr2);
  }

  void TearDown() override {
    delete pr1;
    delete pr2;

    delete r0;
    delete r1;
    delete r2;
  }

  // Helper that compares two TestPartResults.
  static void CompareTestPartResult(const TestPartResult& expected,
                                    const TestPartResult& actual) {
    EXPECT_EQ(expected.type(), actual.type());
    EXPECT_STREQ(expected.file_name(), actual.file_name());
    EXPECT_EQ(expected.line_number(), actual.line_number());
    EXPECT_STREQ(expected.summary(), actual.summary());
    EXPECT_STREQ(expected.message(), actual.message());
    EXPECT_EQ(expected.passed(), actual.passed());
    EXPECT_EQ(expected.failed(), actual.failed());
    EXPECT_EQ(expected.nonfatally_failed(), actual.nonfatally_failed());
    EXPECT_EQ(expected.fatally_failed(), actual.fatally_failed());
  }
};

// Tests TestResult::total_part_count().
TEST_F(TestResultTest, total_part_count) {
  ASSERT_EQ(0, r0->total_part_count());
  ASSERT_EQ(1, r1->total_part_count());
  ASSERT_EQ(2, r2->total_part_count());
}

// Tests TestResult::Passed().
TEST_F(TestResultTest, Passed) {
  ASSERT_TRUE(r0->Passed());
  ASSERT_TRUE(r1->Passed());
  ASSERT_FALSE(r2->Passed());
}

// Tests TestResult::Failed().
TEST_F(TestResultTest, Failed) {
  ASSERT_FALSE(r0->Failed());
  ASSERT_FALSE(r1->Failed());
  ASSERT_TRUE(r2->Failed());
}

// Tests TestResult::GetTestPartResult().

typedef TestResultTest TestResultDeathTest;

TEST_F(TestResultDeathTest, GetTestPartResult) {
  CompareTestPartResult(*pr1, r2->GetTestPartResult(0));
  CompareTestPartResult(*pr2, r2->GetTestPartResult(1));
  EXPECT_DEATH_IF_SUPPORTED(r2->GetTestPartResult(2), "");
  EXPECT_DEATH_IF_SUPPORTED(r2->GetTestPartResult(-1), "");
}

// Tests TestResult has no properties when none are added.
TEST(TestResultPropertyTest, NoPropertiesFoundWhenNoneAreAdded) {
  TestResult test_result;
  ASSERT_EQ(0, test_result.test_property_count());
}

// Tests TestResult has the expected property when added.
TEST(TestResultPropertyTest, OnePropertyFoundWhenAdded) {
  TestResult test_result;
  TestProperty property("key_1", "1");
  TestResultAccessor::RecordProperty(&test_result, "testcase", property);
  ASSERT_EQ(1, test_result.test_property_count());
  const TestProperty& actual_property = test_result.GetTestProperty(0);
  EXPECT_STREQ("key_1", actual_property.key());
  EXPECT_STREQ("1", actual_property.value());
}

// Tests TestResult has multiple properties when added.
TEST(TestResultPropertyTest, MultiplePropertiesFoundWhenAdded) {
  TestResult test_result;
  TestProperty property_1("key_1", "1");
  TestProperty property_2("key_2", "2");
  TestResultAccessor::RecordProperty(&test_result, "testcase", property_1);
  TestResultAccessor::RecordProperty(&test_result, "testcase", property_2);
  ASSERT_EQ(2, test_result.test_property_count());
  const TestProperty& actual_property_1 = test_result.GetTestProperty(0);
  EXPECT_STREQ("key_1", actual_property_1.key());
  EXPECT_STREQ("1", actual_property_1.value());

  const TestProperty& actual_property_2 = test_result.GetTestProperty(1);
  EXPECT_STREQ("key_2", actual_property_2.key());
  EXPECT_STREQ("2", actual_property_2.value());
}

// Tests TestResult::RecordProperty() overrides values for duplicate keys.
TEST(TestResultPropertyTest, OverridesValuesForDuplicateKeys) {
  TestResult test_result;
  TestProperty property_1_1("key_1", "1");
  TestProperty property_2_1("key_2", "2");
  TestProperty property_1_2("key_1", "12");
  TestProperty property_2_2("key_2", "22");
  TestResultAccessor::RecordProperty(&test_result, "testcase", property_1_1);
  TestResultAccessor::RecordProperty(&test_result, "testcase", property_2_1);
  TestResultAccessor::RecordProperty(&test_result, "testcase", property_1_2);
  TestResultAccessor::RecordProperty(&test_result, "testcase", property_2_2);

  ASSERT_EQ(2, test_result.test_property_count());
  const TestProperty& actual_property_1 = test_result.GetTestProperty(0);
  EXPECT_STREQ("key_1", actual_property_1.key());
  EXPECT_STREQ("12", actual_property_1.value());

  const TestProperty& actual_property_2 = test_result.GetTestProperty(1);
  EXPECT_STREQ("key_2", actual_property_2.key());
  EXPECT_STREQ("22", actual_property_2.value());
}

// Tests TestResult::GetTestProperty().
TEST(TestResultPropertyTest, GetTestProperty) {
  TestResult test_result;
  TestProperty property_1("key_1", "1");
  TestProperty property_2("key_2", "2");
  TestProperty property_3("key_3", "3");
  TestResultAccessor::RecordProperty(&test_result, "testcase", property_1);
  TestResultAccessor::RecordProperty(&test_result, "testcase", property_2);
  TestResultAccessor::RecordProperty(&test_result, "testcase", property_3);

  const TestProperty& fetched_property_1 = test_result.GetTestProperty(0);
  const TestProperty& fetched_property_2 = test_result.GetTestProperty(1);
  const TestProperty& fetched_property_3 = test_result.GetTestProperty(2);

  EXPECT_STREQ("key_1", fetched_property_1.key());
  EXPECT_STREQ("1", fetched_property_1.value());

  EXPECT_STREQ("key_2", fetched_property_2.key());
  EXPECT_STREQ("2", fetched_property_2.value());

  EXPECT_STREQ("key_3", fetched_property_3.key());
  EXPECT_STREQ("3", fetched_property_3.value());

  EXPECT_DEATH_IF_SUPPORTED(test_result.GetTestProperty(3), "");
  EXPECT_DEATH_IF_SUPPORTED(test_result.GetTestProperty(-1), "");
}

// Tests the Test class.
//
// It's difficult to test every public method of this class (we are
// already stretching the limit of Google Test by using it to test itself!).
// Fortunately, we don't have to do that, as we are already testing
// the functionalities of the Test class extensively by using Google Test
// alone.
//
// Therefore, this section only contains one test.

// Tests that GTestFlagSaver works on Windows and Mac.

class GTestFlagSaverTest : public Test {
 protected:
  // Saves the Google Test flags such that we can restore them later, and
  // then sets them to their default values.  This will be called
  // before the first test in this test case is run.
  static void SetUpTestSuite() {
    saver_ = new GTestFlagSaver;

    GTEST_FLAG(also_run_disabled_tests) = false;
    GTEST_FLAG(break_on_failure) = false;
    GTEST_FLAG(catch_exceptions) = false;
    GTEST_FLAG(death_test_use_fork) = false;
    GTEST_FLAG(color) = "auto";
    GTEST_FLAG(filter) = "";
    GTEST_FLAG(list_tests) = false;
    GTEST_FLAG(output) = "";
    GTEST_FLAG(print_time) = true;
    GTEST_FLAG(random_seed) = 0;
    GTEST_FLAG(repeat) = 1;
    GTEST_FLAG(shuffle) = false;
    GTEST_FLAG(stack_trace_depth) = kMaxStackTraceDepth;
    GTEST_FLAG(stream_result_to) = "";
    GTEST_FLAG(throw_on_failure) = false;
  }

  // Restores the Google Test flags that the tests have modified.  This will
  // be called after the last test in this test case is run.
  static void TearDownTestSuite() {
    delete saver_;
    saver_ = nullptr;
  }

  // Verifies that the Google Test flags have their default values, and then
  // modifies each of them.
  void VerifyAndModifyFlags() {
    EXPECT_FALSE(GTEST_FLAG(also_run_disabled_tests));
    EXPECT_FALSE(GTEST_FLAG(break_on_failure));
    EXPECT_FALSE(GTEST_FLAG(catch_exceptions));
    EXPECT_STREQ("auto", GTEST_FLAG(color).c_str());
    EXPECT_FALSE(GTEST_FLAG(death_test_use_fork));
    EXPECT_STREQ("", GTEST_FLAG(filter).c_str());
    EXPECT_FALSE(GTEST_FLAG(list_tests));
    EXPECT_STREQ("", GTEST_FLAG(output).c_str());
    EXPECT_TRUE(GTEST_FLAG(print_time));
    EXPECT_EQ(0, GTEST_FLAG(random_seed));
    EXPECT_EQ(1, GTEST_FLAG(repeat));
    EXPECT_FALSE(GTEST_FLAG(shuffle));
    EXPECT_EQ(kMaxStackTraceDepth, GTEST_FLAG(stack_trace_depth));
    EXPECT_STREQ("", GTEST_FLAG(stream_result_to).c_str());
    EXPECT_FALSE(GTEST_FLAG(throw_on_failure));

    GTEST_FLAG(also_run_disabled_tests) = true;
    GTEST_FLAG(break_on_failure) = true;
    GTEST_FLAG(catch_exceptions) = true;
    GTEST_FLAG(color) = "no";
    GTEST_FLAG(death_test_use_fork) = true;
    GTEST_FLAG(filter) = "abc";
    GTEST_FLAG(list_tests) = true;
    GTEST_FLAG(output) = "xml:foo.xml";
    GTEST_FLAG(print_time) = false;
    GTEST_FLAG(random_seed) = 1;
    GTEST_FLAG(repeat) = 100;
    GTEST_FLAG(shuffle) = true;
    GTEST_FLAG(stack_trace_depth) = 1;
    GTEST_FLAG(stream_result_to) = "localhost:1234";
    GTEST_FLAG(throw_on_failure) = true;
  }

 private:
  // For saving Google Test flags during this test case.
  static GTestFlagSaver* saver_;
};

GTestFlagSaver* GTestFlagSaverTest::saver_ = nullptr;

// Google Test doesn't guarantee the order of tests.  The following two
// tests are designed to work regardless of their order.

// Modifies the Google Test flags in the test body.
TEST_F(GTestFlagSaverTest, ModifyGTestFlags) {
  VerifyAndModifyFlags();
}

// Verifies that the Google Test flags in the body of the previous test were
// restored to their original values.
TEST_F(GTestFlagSaverTest, VerifyGTestFlags) {
  VerifyAndModifyFlags();
}

// Sets an environment variable with the given name to the given
// value.  If the value argument is "", unsets the environment
// variable.  The caller must ensure that both arguments are not NULL.
static void SetEnv(const char* name, const char* value) {
#if GTEST_OS_WINDOWS_MOBILE
  // Environment variables are not supported on Windows CE.
  return;
#elif defined(__BORLANDC__) || defined(__SunOS_5_8) || defined(__SunOS_5_9)
  // C++Builder's putenv only stores a pointer to its parameter; we have to
  // ensure that the string remains valid as long as it might be needed.
  // We use an std::map to do so.
  static std::map<std::string, std::string*> added_env;

  // Because putenv stores a pointer to the string buffer, we can't delete the
  // previous string (if present) until after it's replaced.
  std::string *prev_env = NULL;
  if (added_env.find(name) != added_env.end()) {
    prev_env = added_env[name];
  }
  added_env[name] = new std::string(
      (Message() << name << "=" << value).GetString());

  // The standard signature of putenv accepts a 'char*' argument. Other
  // implementations, like C++Builder's, accept a 'const char*'.
  // We cast away the 'const' since that would work for both variants.
  putenv(const_cast<char*>(added_env[name]->c_str()));
  delete prev_env;
#elif GTEST_OS_WINDOWS  // If we are on Windows proper.
  _putenv((Message() << name << "=" << value).GetString().c_str());
#else
  if (*value == '\0') {
    unsetenv(name);
  } else {
    setenv(name, value, 1);
  }
#endif  // GTEST_OS_WINDOWS_MOBILE
}

#if !GTEST_OS_WINDOWS_MOBILE
// Environment variables are not supported on Windows CE.

using testing::internal::Int32FromGTestEnv;

// Tests Int32FromGTestEnv().

// Tests that Int32FromGTestEnv() returns the default value when the
// environment variable is not set.
TEST(Int32FromGTestEnvTest, ReturnsDefaultWhenVariableIsNotSet) {
  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "TEMP", "");
  EXPECT_EQ(10, Int32FromGTestEnv("temp", 10));
}

# if !defined(GTEST_GET_INT32_FROM_ENV_)

// Tests that Int32FromGTestEnv() returns the default value when the
// environment variable overflows as an Int32.
TEST(Int32FromGTestEnvTest, ReturnsDefaultWhenValueOverflows) {
  printf("(expecting 2 warnings)\n");

  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "TEMP", "12345678987654321");
  EXPECT_EQ(20, Int32FromGTestEnv("temp", 20));

  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "TEMP", "-12345678987654321");
  EXPECT_EQ(30, Int32FromGTestEnv("temp", 30));
}

// Tests that Int32FromGTestEnv() returns the default value when the
// environment variable does not represent a valid decimal integer.
TEST(Int32FromGTestEnvTest, ReturnsDefaultWhenValueIsInvalid) {
  printf("(expecting 2 warnings)\n");

  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "TEMP", "A1");
  EXPECT_EQ(40, Int32FromGTestEnv("temp", 40));

  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "TEMP", "12X");
  EXPECT_EQ(50, Int32FromGTestEnv("temp", 50));
}

# endif  // !defined(GTEST_GET_INT32_FROM_ENV_)

// Tests that Int32FromGTestEnv() parses and returns the value of the
// environment variable when it represents a valid decimal integer in
// the range of an Int32.
TEST(Int32FromGTestEnvTest, ParsesAndReturnsValidValue) {
  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "TEMP", "123");
  EXPECT_EQ(123, Int32FromGTestEnv("temp", 0));

  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "TEMP", "-321");
  EXPECT_EQ(-321, Int32FromGTestEnv("temp", 0));
}
#endif  // !GTEST_OS_WINDOWS_MOBILE

// Tests ParseInt32Flag().

// Tests that ParseInt32Flag() returns false and doesn't change the
// output value when the flag has wrong format
TEST(ParseInt32FlagTest, ReturnsFalseForInvalidFlag) {
  Int32 value = 123;
  EXPECT_FALSE(ParseInt32Flag("--a=100", "b", &value));
  EXPECT_EQ(123, value);

  EXPECT_FALSE(ParseInt32Flag("a=100", "a", &value));
  EXPECT_EQ(123, value);
}

// Tests that ParseInt32Flag() returns false and doesn't change the
// output value when the flag overflows as an Int32.
TEST(ParseInt32FlagTest, ReturnsDefaultWhenValueOverflows) {
  printf("(expecting 2 warnings)\n");

  Int32 value = 123;
  EXPECT_FALSE(ParseInt32Flag("--abc=12345678987654321", "abc", &value));
  EXPECT_EQ(123, value);

  EXPECT_FALSE(ParseInt32Flag("--abc=-12345678987654321", "abc", &value));
  EXPECT_EQ(123, value);
}

// Tests that ParseInt32Flag() returns false and doesn't change the
// output value when the flag does not represent a valid decimal
// integer.
TEST(ParseInt32FlagTest, ReturnsDefaultWhenValueIsInvalid) {
  printf("(expecting 2 warnings)\n");

  Int32 value = 123;
  EXPECT_FALSE(ParseInt32Flag("--abc=A1", "abc", &value));
  EXPECT_EQ(123, value);

  EXPECT_FALSE(ParseInt32Flag("--abc=12X", "abc", &value));
  EXPECT_EQ(123, value);
}

// Tests that ParseInt32Flag() parses the value of the flag and
// returns true when the flag represents a valid decimal integer in
// the range of an Int32.
TEST(ParseInt32FlagTest, ParsesAndReturnsValidValue) {
  Int32 value = 123;
  EXPECT_TRUE(ParseInt32Flag("--" GTEST_FLAG_PREFIX_ "abc=456", "abc", &value));
  EXPECT_EQ(456, value);

  EXPECT_TRUE(ParseInt32Flag("--" GTEST_FLAG_PREFIX_ "abc=-789",
                             "abc", &value));
  EXPECT_EQ(-789, value);
}

// Tests that Int32FromEnvOrDie() parses the value of the var or
// returns the correct default.
// Environment variables are not supported on Windows CE.
#if !GTEST_OS_WINDOWS_MOBILE
TEST(Int32FromEnvOrDieTest, ParsesAndReturnsValidValue) {
  EXPECT_EQ(333, Int32FromEnvOrDie(GTEST_FLAG_PREFIX_UPPER_ "UnsetVar", 333));
  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "UnsetVar", "123");
  EXPECT_EQ(123, Int32FromEnvOrDie(GTEST_FLAG_PREFIX_UPPER_ "UnsetVar", 333));
  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "UnsetVar", "-123");
  EXPECT_EQ(-123, Int32FromEnvOrDie(GTEST_FLAG_PREFIX_UPPER_ "UnsetVar", 333));
}
#endif  // !GTEST_OS_WINDOWS_MOBILE

// Tests that Int32FromEnvOrDie() aborts with an error message
// if the variable is not an Int32.
TEST(Int32FromEnvOrDieDeathTest, AbortsOnFailure) {
  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "VAR", "xxx");
  EXPECT_DEATH_IF_SUPPORTED(
      Int32FromEnvOrDie(GTEST_FLAG_PREFIX_UPPER_ "VAR", 123),
      ".*");
}

// Tests that Int32FromEnvOrDie() aborts with an error message
// if the variable cannot be represented by an Int32.
TEST(Int32FromEnvOrDieDeathTest, AbortsOnInt32Overflow) {
  SetEnv(GTEST_FLAG_PREFIX_UPPER_ "VAR", "1234567891234567891234");
  EXPECT_DEATH_IF_SUPPORTED(
      Int32FromEnvOrDie(GTEST_FLAG_PREFIX_UPPER_ "VAR", 123),
      ".*");
}

// Tests that ShouldRunTestOnShard() selects all tests
// where there is 1 shard.
TEST(ShouldRunTestOnShardTest, IsPartitionWhenThereIsOneShard) {
  EXPECT_TRUE(ShouldRunTestOnShard(1, 0, 0));
  EXPECT_TRUE(ShouldRunTestOnShard(1, 0, 1));
  EXPECT_TRUE(ShouldRunTestOnShard(1, 0, 2));
  EXPECT_TRUE(ShouldRunTestOnShard(1, 0, 3));
  EXPECT_TRUE(ShouldRunTestOnShard(1, 0, 4));
}

class ShouldShardTest : public testing::Test {
 protected:
  void SetUp() override {
    index_var_ = GTEST_FLAG_PREFIX_UPPER_ "INDEX";
    total_var_ = GTEST_FLAG_PREFIX_UPPER_ "TOTAL";
  }

  void TearDown() override {
    SetEnv(index_var_, "");
    SetEnv(total_var_, "");
  }

  const char* index_var_;
  const char* total_var_;
};

// Tests that sharding is disabled if neither of the environment variables
// are set.
TEST_F(ShouldShardTest, ReturnsFalseWhenNeitherEnvVarIsSet) {
  SetEnv(index_var_, "");
  SetEnv(total_var_, "");

  EXPECT_FALSE(ShouldShard(total_var_, index_var_, false));
  EXPECT_FALSE(ShouldShard(total_var_, index_var_, true));
}

// Tests that sharding is not enabled if total_shards  == 1.
TEST_F(ShouldShardTest, ReturnsFalseWhenTotalShardIsOne) {
  SetEnv(index_var_, "0");
  SetEnv(total_var_, "1");
  EXPECT_FALSE(ShouldShard(total_var_, index_var_, false));
  EXPECT_FALSE(ShouldShard(total_var_, index_var_, true));
}

// Tests that sharding is enabled if total_shards > 1 and
// we are not in a death test subprocess.
// Environment variables are not supported on Windows CE.
#if !GTEST_OS_WINDOWS_MOBILE
TEST_F(ShouldShardTest, WorksWhenShardEnvVarsAreValid) {
  SetEnv(index_var_, "4");
  SetEnv(total_var_, "22");
  EXPECT_TRUE(ShouldShard(total_var_, index_var_, false));
  EXPECT_FALSE(ShouldShard(total_var_, index_var_, true));

  SetEnv(index_var_, "8");
  SetEnv(total_var_, "9");
  EXPECT_TRUE(ShouldShard(total_var_, index_var_, false));
  EXPECT_FALSE(ShouldShard(total_var_, index_var_, true));

  SetEnv(index_var_, "0");
  SetEnv(total_var_, "9");
  EXPECT_TRUE(ShouldShard(total_var_, index_var_, false));
  EXPECT_FALSE(ShouldShard(total_var_, index_var_, true));
}
#endif  // !GTEST_OS_WINDOWS_MOBILE

// Tests that we exit in error if the sharding values are not valid.

typedef ShouldShardTest ShouldShardDeathTest;

TEST_F(ShouldShardDeathTest, AbortsWhenShardingEnvVarsAreInvalid) {
  SetEnv(index_var_, "4");
  SetEnv(total_var_, "4");
  EXPECT_DEATH_IF_SUPPORTED(ShouldShard(total_var_, index_var_, false), ".*");

  SetEnv(index_var_, "4");
  SetEnv(total_var_, "-2");
  EXPECT_DEATH_IF_SUPPORTED(ShouldShard(total_var_, index_var_, false), ".*");

  SetEnv(index_var_, "5");
  SetEnv(total_var_, "");
  EXPECT_DEATH_IF_SUPPORTED(ShouldShard(total_var_, index_var_, false), ".*");

  SetEnv(index_var_, "");
  SetEnv(total_var_, "5");
  EXPECT_DEATH_IF_SUPPORTED(ShouldShard(total_var_, index_var_, false), ".*");
}

// Tests that ShouldRunTestOnShard is a partition when 5
// shards are used.
TEST(ShouldRunTestOnShardTest, IsPartitionWhenThereAreFiveShards) {
  // Choose an arbitrary number of tests and shards.
  const int num_tests = 17;
  const int num_shards = 5;

  // Check partitioning: each test should be on exactly 1 shard.
  for (int test_id = 0; test_id < num_tests; test_id++) {
    int prev_selected_shard_index = -1;
    for (int shard_index = 0; shard_index < num_shards; shard_index++) {
      if (ShouldRunTestOnShard(num_shards, shard_index, test_id)) {
        if (prev_selected_shard_index < 0) {
          prev_selected_shard_index = shard_index;
        } else {
          ADD_FAILURE() << "Shard " << prev_selected_shard_index << " and "
            << shard_index << " are both selected to run test " << test_id;
        }
      }
    }
  }

  // Check balance: This is not required by the sharding protocol, but is a
  // desirable property for performance.
  for (int shard_index = 0; shard_index < num_shards; shard_index++) {
    int num_tests_on_shard = 0;
    for (int test_id = 0; test_id < num_tests; test_id++) {
      num_tests_on_shard +=
        ShouldRunTestOnShard(num_shards, shard_index, test_id);
    }
    EXPECT_GE(num_tests_on_shard, num_tests / num_shards);
  }
}

// For the same reason we are not explicitly testing everything in the
// Test class, there are no separate tests for the following classes
// (except for some trivial cases):
//
//   TestSuite, UnitTest, UnitTestResultPrinter.
//
// Similarly, there are no separate tests for the following macros:
//
//   TEST, TEST_F, RUN_ALL_TESTS

TEST(UnitTestTest, CanGetOriginalWorkingDir) {
  ASSERT_TRUE(UnitTest::GetInstance()->original_working_dir() != nullptr);
  EXPECT_STRNE(UnitTest::GetInstance()->original_working_dir(), "");
}

TEST(UnitTestTest, ReturnsPlausibleTimestamp) {
  EXPECT_LT(0, UnitTest::GetInstance()->start_timestamp());
  EXPECT_LE(UnitTest::GetInstance()->start_timestamp(), GetTimeInMillis());
}

// When a property using a reserved key is supplied to this function, it
// tests that a non-fatal failure is added, a fatal failure is not added,
// and that the property is not recorded.
void ExpectNonFatalFailureRecordingPropertyWithReservedKey(
    const TestResult& test_result, const char* key) {
  EXPECT_NONFATAL_FAILURE(Test::RecordProperty(key, "1"), "Reserved key");
  ASSERT_EQ(0, test_result.test_property_count()) << "Property for key '" << key
                                                  << "' recorded unexpectedly.";
}

void ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTest(
    const char* key) {
  const TestInfo* test_info = UnitTest::GetInstance()->current_test_info();
  ASSERT_TRUE(test_info != nullptr);
  ExpectNonFatalFailureRecordingPropertyWithReservedKey(*test_info->result(),
                                                        key);
}

void ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTestSuite(
    const char* key) {
  const testing::TestSuite* test_suite =
      UnitTest::GetInstance()->current_test_suite();
  ASSERT_TRUE(test_suite != nullptr);
  ExpectNonFatalFailureRecordingPropertyWithReservedKey(
      test_suite->ad_hoc_test_result(), key);
}

void ExpectNonFatalFailureRecordingPropertyWithReservedKeyOutsideOfTestSuite(
    const char* key) {
  ExpectNonFatalFailureRecordingPropertyWithReservedKey(
      UnitTest::GetInstance()->ad_hoc_test_result(), key);
}

// Tests that property recording functions in UnitTest outside of tests
// functions correcly.  Creating a separate instance of UnitTest ensures it
// is in a state similar to the UnitTest's singleton's between tests.
class UnitTestRecordPropertyTest :
    public testing::internal::UnitTestRecordPropertyTestHelper {
 public:
  static void SetUpTestSuite() {
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTestSuite(
        "disabled");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTestSuite(
        "errors");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTestSuite(
        "failures");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTestSuite(
        "name");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTestSuite(
        "tests");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTestSuite(
        "time");

    Test::RecordProperty("test_case_key_1", "1");

    const testing::TestSuite* test_suite =
        UnitTest::GetInstance()->current_test_suite();

    ASSERT_TRUE(test_suite != nullptr);

    ASSERT_EQ(1, test_suite->ad_hoc_test_result().test_property_count());
    EXPECT_STREQ("test_case_key_1",
                 test_suite->ad_hoc_test_result().GetTestProperty(0).key());
    EXPECT_STREQ("1",
                 test_suite->ad_hoc_test_result().GetTestProperty(0).value());
  }
};

// Tests TestResult has the expected property when added.
TEST_F(UnitTestRecordPropertyTest, OnePropertyFoundWhenAdded) {
  UnitTestRecordProperty("key_1", "1");

  ASSERT_EQ(1, unit_test_.ad_hoc_test_result().test_property_count());

  EXPECT_STREQ("key_1",
               unit_test_.ad_hoc_test_result().GetTestProperty(0).key());
  EXPECT_STREQ("1",
               unit_test_.ad_hoc_test_result().GetTestProperty(0).value());
}

// Tests TestResult has multiple properties when added.
TEST_F(UnitTestRecordPropertyTest, MultiplePropertiesFoundWhenAdded) {
  UnitTestRecordProperty("key_1", "1");
  UnitTestRecordProperty("key_2", "2");

  ASSERT_EQ(2, unit_test_.ad_hoc_test_result().test_property_count());

  EXPECT_STREQ("key_1",
               unit_test_.ad_hoc_test_result().GetTestProperty(0).key());
  EXPECT_STREQ("1", unit_test_.ad_hoc_test_result().GetTestProperty(0).value());

  EXPECT_STREQ("key_2",
               unit_test_.ad_hoc_test_result().GetTestProperty(1).key());
  EXPECT_STREQ("2", unit_test_.ad_hoc_test_result().GetTestProperty(1).value());
}

// Tests TestResult::RecordProperty() overrides values for duplicate keys.
TEST_F(UnitTestRecordPropertyTest, OverridesValuesForDuplicateKeys) {
  UnitTestRecordProperty("key_1", "1");
  UnitTestRecordProperty("key_2", "2");
  UnitTestRecordProperty("key_1", "12");
  UnitTestRecordProperty("key_2", "22");

  ASSERT_EQ(2, unit_test_.ad_hoc_test_result().test_property_count());

  EXPECT_STREQ("key_1",
               unit_test_.ad_hoc_test_result().GetTestProperty(0).key());
  EXPECT_STREQ("12",
               unit_test_.ad_hoc_test_result().GetTestProperty(0).value());

  EXPECT_STREQ("key_2",
               unit_test_.ad_hoc_test_result().GetTestProperty(1).key());
  EXPECT_STREQ("22",
               unit_test_.ad_hoc_test_result().GetTestProperty(1).value());
}

TEST_F(UnitTestRecordPropertyTest,
       AddFailureInsideTestsWhenUsingTestSuiteReservedKeys) {
  ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTest(
      "name");
  ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTest(
      "value_param");
  ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTest(
      "type_param");
  ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTest(
      "status");
  ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTest(
      "time");
  ExpectNonFatalFailureRecordingPropertyWithReservedKeyForCurrentTest(
      "classname");
}

TEST_F(UnitTestRecordPropertyTest,
       AddRecordWithReservedKeysGeneratesCorrectPropertyList) {
  EXPECT_NONFATAL_FAILURE(
      Test::RecordProperty("name", "1"),
      "'classname', 'name', 'status', 'time', 'type_param', 'value_param',"
      " 'file', and 'line' are reserved");
}

class UnitTestRecordPropertyTestEnvironment : public Environment {
 public:
  void TearDown() override {
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyOutsideOfTestSuite(
        "tests");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyOutsideOfTestSuite(
        "failures");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyOutsideOfTestSuite(
        "disabled");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyOutsideOfTestSuite(
        "errors");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyOutsideOfTestSuite(
        "name");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyOutsideOfTestSuite(
        "timestamp");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyOutsideOfTestSuite(
        "time");
    ExpectNonFatalFailureRecordingPropertyWithReservedKeyOutsideOfTestSuite(
        "random_seed");
  }
};

// This will test property recording outside of any test or test case.
static Environment* record_property_env GTEST_ATTRIBUTE_UNUSED_ =
    AddGlobalTestEnvironment(new UnitTestRecordPropertyTestEnvironment);

// This group of tests is for predicate assertions (ASSERT_PRED*, etc)
// of various arities.  They do not attempt to be exhaustive.  Rather,
// view them as smoke tests that can be easily reviewed and verified.
// A more complete set of tests for predicate assertions can be found
// in gtest_pred_impl_unittest.cc.

// First, some predicates and predicate-formatters needed by the tests.

// Returns true if and only if the argument is an even number.
bool IsEven(int n) {
  return (n % 2) == 0;
}

// A functor that returns true if and only if the argument is an even number.
struct IsEvenFunctor {
  bool operator()(int n) { return IsEven(n); }
};

// A predicate-formatter function that asserts the argument is an even
// number.
AssertionResult AssertIsEven(const char* expr, int n) {
  if (IsEven(n)) {
    return AssertionSuccess();
  }

  Message msg;
  msg << expr << " evaluates to " << n << ", which is not even.";
  return AssertionFailure(msg);
}

// A predicate function that returns AssertionResult for use in
// EXPECT/ASSERT_TRUE/FALSE.
AssertionResult ResultIsEven(int n) {
  if (IsEven(n))
    return AssertionSuccess() << n << " is even";
  else
    return AssertionFailure() << n << " is odd";
}

// A predicate function that returns AssertionResult but gives no
// explanation why it succeeds. Needed for testing that
// EXPECT/ASSERT_FALSE handles such functions correctly.
AssertionResult ResultIsEvenNoExplanation(int n) {
  if (IsEven(n))
    return AssertionSuccess();
  else
    return AssertionFailure() << n << " is odd";
}

// A predicate-formatter functor that asserts the argument is an even
// number.
struct AssertIsEvenFunctor {
  AssertionResult operator()(const char* expr, int n) {
    return AssertIsEven(expr, n);
  }
};

// Returns true if and only if the sum of the arguments is an even number.
bool SumIsEven2(int n1, int n2) {
  return IsEven(n1 + n2);
}

// A functor that returns true if and only if the sum of the arguments is an
// even number.
struct SumIsEven3Functor {
  bool operator()(int n1, int n2, int n3) {
    return IsEven(n1 + n2 + n3);
  }
};

// A predicate-formatter function that asserts the sum of the
// arguments is an even number.
AssertionResult AssertSumIsEven4(
    const char* e1, const char* e2, const char* e3, const char* e4,
    int n1, int n2, int n3, int n4) {
  const int sum = n1 + n2 + n3 + n4;
  if (IsEven(sum)) {
    return AssertionSuccess();
  }

  Message msg;
  msg << e1 << " + " << e2 << " + " << e3 << " + " << e4
      << " (" << n1 << " + " << n2 << " + " << n3 << " + " << n4
      << ") evaluates to " << sum << ", which is not even.";
  return AssertionFailure(msg);
}

// A predicate-formatter functor that asserts the sum of the arguments
// is an even number.
struct AssertSumIsEven5Functor {
  AssertionResult operator()(
      const char* e1, const char* e2, const char* e3, const char* e4,
      const char* e5, int n1, int n2, int n3, int n4, int n5) {
    const int sum = n1 + n2 + n3 + n4 + n5;
    if (IsEven(sum)) {
      return AssertionSuccess();
    }

    Message msg;
    msg << e1 << " + " << e2 << " + " << e3 << " + " << e4 << " + " << e5
        << " ("
        << n1 << " + " << n2 << " + " << n3 << " + " << n4 << " + " << n5
        << ") evaluates to " << sum << ", which is not even.";
    return AssertionFailure(msg);
  }
};


// Tests unary predicate assertions.

// Tests unary predicate assertions that don't use a custom formatter.
TEST(Pred1Test, WithoutFormat) {
  // Success cases.
  EXPECT_PRED1(IsEvenFunctor(), 2) << "This failure is UNEXPECTED!";
  ASSERT_PRED1(IsEven, 4);

  // Failure cases.
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED1(IsEven, 5) << "This failure is expected.";
  }, "This failure is expected.");
  EXPECT_FATAL_FAILURE(ASSERT_PRED1(IsEvenFunctor(), 5),
                       "evaluates to false");
}

// Tests unary predicate assertions that use a custom formatter.
TEST(Pred1Test, WithFormat) {
  // Success cases.
  EXPECT_PRED_FORMAT1(AssertIsEven, 2);
  ASSERT_PRED_FORMAT1(AssertIsEvenFunctor(), 4)
    << "This failure is UNEXPECTED!";

  // Failure cases.
  const int n = 5;
  EXPECT_NONFATAL_FAILURE(EXPECT_PRED_FORMAT1(AssertIsEvenFunctor(), n),
                          "n evaluates to 5, which is not even.");
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_PRED_FORMAT1(AssertIsEven, 5) << "This failure is expected.";
  }, "This failure is expected.");
}

// Tests that unary predicate assertions evaluates their arguments
// exactly once.
TEST(Pred1Test, SingleEvaluationOnFailure) {
  // A success case.
  static int n = 0;
  EXPECT_PRED1(IsEven, n++);
  EXPECT_EQ(1, n) << "The argument is not evaluated exactly once.";

  // A failure case.
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_PRED_FORMAT1(AssertIsEvenFunctor(), n++)
        << "This failure is expected.";
  }, "This failure is expected.");
  EXPECT_EQ(2, n) << "The argument is not evaluated exactly once.";
}


// Tests predicate assertions whose arity is >= 2.

// Tests predicate assertions that don't use a custom formatter.
TEST(PredTest, WithoutFormat) {
  // Success cases.
  ASSERT_PRED2(SumIsEven2, 2, 4) << "This failure is UNEXPECTED!";
  EXPECT_PRED3(SumIsEven3Functor(), 4, 6, 8);

  // Failure cases.
  const int n1 = 1;
  const int n2 = 2;
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED2(SumIsEven2, n1, n2) << "This failure is expected.";
  }, "This failure is expected.");
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_PRED3(SumIsEven3Functor(), 1, 2, 4);
  }, "evaluates to false");
}

// Tests predicate assertions that use a custom formatter.
TEST(PredTest, WithFormat) {
  // Success cases.
  ASSERT_PRED_FORMAT4(AssertSumIsEven4, 4, 6, 8, 10) <<
    "This failure is UNEXPECTED!";
  EXPECT_PRED_FORMAT5(AssertSumIsEven5Functor(), 2, 4, 6, 8, 10);

  // Failure cases.
  const int n1 = 1;
  const int n2 = 2;
  const int n3 = 4;
  const int n4 = 6;
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED_FORMAT4(AssertSumIsEven4, n1, n2, n3, n4);
  }, "evaluates to 13, which is not even.");
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_PRED_FORMAT5(AssertSumIsEven5Functor(), 1, 2, 4, 6, 8)
        << "This failure is expected.";
  }, "This failure is expected.");
}

// Tests that predicate assertions evaluates their arguments
// exactly once.
TEST(PredTest, SingleEvaluationOnFailure) {
  // A success case.
  int n1 = 0;
  int n2 = 0;
  EXPECT_PRED2(SumIsEven2, n1++, n2++);
  EXPECT_EQ(1, n1) << "Argument 1 is not evaluated exactly once.";
  EXPECT_EQ(1, n2) << "Argument 2 is not evaluated exactly once.";

  // Another success case.
  n1 = n2 = 0;
  int n3 = 0;
  int n4 = 0;
  int n5 = 0;
  ASSERT_PRED_FORMAT5(AssertSumIsEven5Functor(),
                      n1++, n2++, n3++, n4++, n5++)
                        << "This failure is UNEXPECTED!";
  EXPECT_EQ(1, n1) << "Argument 1 is not evaluated exactly once.";
  EXPECT_EQ(1, n2) << "Argument 2 is not evaluated exactly once.";
  EXPECT_EQ(1, n3) << "Argument 3 is not evaluated exactly once.";
  EXPECT_EQ(1, n4) << "Argument 4 is not evaluated exactly once.";
  EXPECT_EQ(1, n5) << "Argument 5 is not evaluated exactly once.";

  // A failure case.
  n1 = n2 = n3 = 0;
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED3(SumIsEven3Functor(), ++n1, n2++, n3++)
        << "This failure is expected.";
  }, "This failure is expected.");
  EXPECT_EQ(1, n1) << "Argument 1 is not evaluated exactly once.";
  EXPECT_EQ(1, n2) << "Argument 2 is not evaluated exactly once.";
  EXPECT_EQ(1, n3) << "Argument 3 is not evaluated exactly once.";

  // Another failure case.
  n1 = n2 = n3 = n4 = 0;
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED_FORMAT4(AssertSumIsEven4, ++n1, n2++, n3++, n4++);
  }, "evaluates to 1, which is not even.");
  EXPECT_EQ(1, n1) << "Argument 1 is not evaluated exactly once.";
  EXPECT_EQ(1, n2) << "Argument 2 is not evaluated exactly once.";
  EXPECT_EQ(1, n3) << "Argument 3 is not evaluated exactly once.";
  EXPECT_EQ(1, n4) << "Argument 4 is not evaluated exactly once.";
}

// Test predicate assertions for sets
TEST(PredTest, ExpectPredEvalFailure) {
  std::set<int> set_a = {2, 1, 3, 4, 5};
  std::set<int> set_b = {0, 4, 8};
  const auto compare_sets = [] (std::set<int>, std::set<int>) { return false; };
  EXPECT_NONFATAL_FAILURE(
      EXPECT_PRED2(compare_sets, set_a, set_b),
      "compare_sets(set_a, set_b) evaluates to false, where\nset_a evaluates "
      "to { 1, 2, 3, 4, 5 }\nset_b evaluates to { 0, 4, 8 }");
}

// Some helper functions for testing using overloaded/template
// functions with ASSERT_PREDn and EXPECT_PREDn.

bool IsPositive(double x) {
  return x > 0;
}

template <typename T>
bool IsNegative(T x) {
  return x < 0;
}

template <typename T1, typename T2>
bool GreaterThan(T1 x1, T2 x2) {
  return x1 > x2;
}

// Tests that overloaded functions can be used in *_PRED* as long as
// their types are explicitly specified.
TEST(PredicateAssertionTest, AcceptsOverloadedFunction) {
  // C++Builder requires C-style casts rather than static_cast.
  EXPECT_PRED1((bool (*)(int))(IsPositive), 5);  // NOLINT
  ASSERT_PRED1((bool (*)(double))(IsPositive), 6.0);  // NOLINT
}

// Tests that template functions can be used in *_PRED* as long as
// their types are explicitly specified.
TEST(PredicateAssertionTest, AcceptsTemplateFunction) {
  EXPECT_PRED1(IsNegative<int>, -5);
  // Makes sure that we can handle templates with more than one
  // parameter.
  ASSERT_PRED2((GreaterThan<int, int>), 5, 0);
}


// Some helper functions for testing using overloaded/template
// functions with ASSERT_PRED_FORMATn and EXPECT_PRED_FORMATn.

AssertionResult IsPositiveFormat(const char* /* expr */, int n) {
  return n > 0 ? AssertionSuccess() :
      AssertionFailure(Message() << "Failure");
}

AssertionResult IsPositiveFormat(const char* /* expr */, double x) {
  return x > 0 ? AssertionSuccess() :
      AssertionFailure(Message() << "Failure");
}

template <typename T>
AssertionResult IsNegativeFormat(const char* /* expr */, T x) {
  return x < 0 ? AssertionSuccess() :
      AssertionFailure(Message() << "Failure");
}

template <typename T1, typename T2>
AssertionResult EqualsFormat(const char* /* expr1 */, const char* /* expr2 */,
                             const T1& x1, const T2& x2) {
  return x1 == x2 ? AssertionSuccess() :
      AssertionFailure(Message() << "Failure");
}

// Tests that overloaded functions can be used in *_PRED_FORMAT*
// without explicitly specifying their types.
TEST(PredicateFormatAssertionTest, AcceptsOverloadedFunction) {
  EXPECT_PRED_FORMAT1(IsPositiveFormat, 5);
  ASSERT_PRED_FORMAT1(IsPositiveFormat, 6.0);
}

// Tests that template functions can be used in *_PRED_FORMAT* without
// explicitly specifying their types.
TEST(PredicateFormatAssertionTest, AcceptsTemplateFunction) {
  EXPECT_PRED_FORMAT1(IsNegativeFormat, -5);
  ASSERT_PRED_FORMAT2(EqualsFormat, 3, 3);
}


// Tests string assertions.

// Tests ASSERT_STREQ with non-NULL arguments.
TEST(StringAssertionTest, ASSERT_STREQ) {
  const char * const p1 = "good";
  ASSERT_STREQ(p1, p1);

  // Let p2 have the same content as p1, but be at a different address.
  const char p2[] = "good";
  ASSERT_STREQ(p1, p2);

  EXPECT_FATAL_FAILURE(ASSERT_STREQ("bad", "good"),
                       "  \"bad\"\n  \"good\"");
}

// Tests ASSERT_STREQ with NULL arguments.
TEST(StringAssertionTest, ASSERT_STREQ_Null) {
  ASSERT_STREQ(static_cast<const char*>(nullptr), nullptr);
  EXPECT_FATAL_FAILURE(ASSERT_STREQ(nullptr, "non-null"), "non-null");
}

// Tests ASSERT_STREQ with NULL arguments.
TEST(StringAssertionTest, ASSERT_STREQ_Null2) {
  EXPECT_FATAL_FAILURE(ASSERT_STREQ("non-null", nullptr), "non-null");
}

// Tests ASSERT_STRNE.
TEST(StringAssertionTest, ASSERT_STRNE) {
  ASSERT_STRNE("hi", "Hi");
  ASSERT_STRNE("Hi", nullptr);
  ASSERT_STRNE(nullptr, "Hi");
  ASSERT_STRNE("", nullptr);
  ASSERT_STRNE(nullptr, "");
  ASSERT_STRNE("", "Hi");
  ASSERT_STRNE("Hi", "");
  EXPECT_FATAL_FAILURE(ASSERT_STRNE("Hi", "Hi"),
                       "\"Hi\" vs \"Hi\"");
}

// Tests ASSERT_STRCASEEQ.
TEST(StringAssertionTest, ASSERT_STRCASEEQ) {
  ASSERT_STRCASEEQ("hi", "Hi");
  ASSERT_STRCASEEQ(static_cast<const char*>(nullptr), nullptr);

  ASSERT_STRCASEEQ("", "");
  EXPECT_FATAL_FAILURE(ASSERT_STRCASEEQ("Hi", "hi2"),
                       "Ignoring case");
}

// Tests ASSERT_STRCASENE.
TEST(StringAssertionTest, ASSERT_STRCASENE) {
  ASSERT_STRCASENE("hi1", "Hi2");
  ASSERT_STRCASENE("Hi", nullptr);
  ASSERT_STRCASENE(nullptr, "Hi");
  ASSERT_STRCASENE("", nullptr);
  ASSERT_STRCASENE(nullptr, "");
  ASSERT_STRCASENE("", "Hi");
  ASSERT_STRCASENE("Hi", "");
  EXPECT_FATAL_FAILURE(ASSERT_STRCASENE("Hi", "hi"),
                       "(ignoring case)");
}

// Tests *_STREQ on wide strings.
TEST(StringAssertionTest, STREQ_Wide) {
  // NULL strings.
  ASSERT_STREQ(static_cast<const wchar_t*>(nullptr), nullptr);

  // Empty strings.
  ASSERT_STREQ(L"", L"");

  // Non-null vs NULL.
  EXPECT_NONFATAL_FAILURE(EXPECT_STREQ(L"non-null", nullptr), "non-null");

  // Equal strings.
  EXPECT_STREQ(L"Hi", L"Hi");

  // Unequal strings.
  EXPECT_NONFATAL_FAILURE(EXPECT_STREQ(L"abc", L"Abc"),
                          "Abc");

  // Strings containing wide characters.
  EXPECT_NONFATAL_FAILURE(EXPECT_STREQ(L"abc\x8119", L"abc\x8120"),
                          "abc");

  // The streaming variation.
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_STREQ(L"abc\x8119", L"abc\x8121") << "Expected failure";
  }, "Expected failure");
}

// Tests *_STRNE on wide strings.
TEST(StringAssertionTest, STRNE_Wide) {
  // NULL strings.
  EXPECT_NONFATAL_FAILURE(
      {  // NOLINT
        EXPECT_STRNE(static_cast<const wchar_t*>(nullptr), nullptr);
      },
      "");

  // Empty strings.
  EXPECT_NONFATAL_FAILURE(EXPECT_STRNE(L"", L""),
                          "L\"\"");

  // Non-null vs NULL.
  ASSERT_STRNE(L"non-null", nullptr);

  // Equal strings.
  EXPECT_NONFATAL_FAILURE(EXPECT_STRNE(L"Hi", L"Hi"),
                          "L\"Hi\"");

  // Unequal strings.
  EXPECT_STRNE(L"abc", L"Abc");

  // Strings containing wide characters.
  EXPECT_NONFATAL_FAILURE(EXPECT_STRNE(L"abc\x8119", L"abc\x8119"),
                          "abc");

  // The streaming variation.
  ASSERT_STRNE(L"abc\x8119", L"abc\x8120") << "This shouldn't happen";
}

// Tests for ::testing::IsSubstring().

// Tests that IsSubstring() returns the correct result when the input
// argument type is const char*.
TEST(IsSubstringTest, ReturnsCorrectResultForCString) {
  EXPECT_FALSE(IsSubstring("", "", nullptr, "a"));
  EXPECT_FALSE(IsSubstring("", "", "b", nullptr));
  EXPECT_FALSE(IsSubstring("", "", "needle", "haystack"));

  EXPECT_TRUE(IsSubstring("", "", static_cast<const char*>(nullptr), nullptr));
  EXPECT_TRUE(IsSubstring("", "", "needle", "two needles"));
}

// Tests that IsSubstring() returns the correct result when the input
// argument type is const wchar_t*.
TEST(IsSubstringTest, ReturnsCorrectResultForWideCString) {
  EXPECT_FALSE(IsSubstring("", "", kNull, L"a"));
  EXPECT_FALSE(IsSubstring("", "", L"b", kNull));
  EXPECT_FALSE(IsSubstring("", "", L"needle", L"haystack"));

  EXPECT_TRUE(
      IsSubstring("", "", static_cast<const wchar_t*>(nullptr), nullptr));
  EXPECT_TRUE(IsSubstring("", "", L"needle", L"two needles"));
}

// Tests that IsSubstring() generates the correct message when the input
// argument type is const char*.
TEST(IsSubstringTest, GeneratesCorrectMessageForCString) {
  EXPECT_STREQ("Value of: needle_expr\n"
               "  Actual: \"needle\"\n"
               "Expected: a substring of haystack_expr\n"
               "Which is: \"haystack\"",
               IsSubstring("needle_expr", "haystack_expr",
                           "needle", "haystack").failure_message());
}

// Tests that IsSubstring returns the correct result when the input
// argument type is ::std::string.
TEST(IsSubstringTest, ReturnsCorrectResultsForStdString) {
  EXPECT_TRUE(IsSubstring("", "", std::string("hello"), "ahellob"));
  EXPECT_FALSE(IsSubstring("", "", "hello", std::string("world")));
}

#if GTEST_HAS_STD_WSTRING
// Tests that IsSubstring returns the correct result when the input
// argument type is ::std::wstring.
TEST(IsSubstringTest, ReturnsCorrectResultForStdWstring) {
  EXPECT_TRUE(IsSubstring("", "", ::std::wstring(L"needle"), L"two needles"));
  EXPECT_FALSE(IsSubstring("", "", L"needle", ::std::wstring(L"haystack")));
}

// Tests that IsSubstring() generates the correct message when the input
// argument type is ::std::wstring.
TEST(IsSubstringTest, GeneratesCorrectMessageForWstring) {
  EXPECT_STREQ("Value of: needle_expr\n"
               "  Actual: L\"needle\"\n"
               "Expected: a substring of haystack_expr\n"
               "Which is: L\"haystack\"",
               IsSubstring(
                   "needle_expr", "haystack_expr",
                   ::std::wstring(L"needle"), L"haystack").failure_message());
}

#endif  // GTEST_HAS_STD_WSTRING

// Tests for ::testing::IsNotSubstring().

// Tests that IsNotSubstring() returns the correct result when the input
// argument type is const char*.
TEST(IsNotSubstringTest, ReturnsCorrectResultForCString) {
  EXPECT_TRUE(IsNotSubstring("", "", "needle", "haystack"));
  EXPECT_FALSE(IsNotSubstring("", "", "needle", "two needles"));
}

// Tests that IsNotSubstring() returns the correct result when the input
// argument type is const wchar_t*.
TEST(IsNotSubstringTest, ReturnsCorrectResultForWideCString) {
  EXPECT_TRUE(IsNotSubstring("", "", L"needle", L"haystack"));
  EXPECT_FALSE(IsNotSubstring("", "", L"needle", L"two needles"));
}

// Tests that IsNotSubstring() generates the correct message when the input
// argument type is const wchar_t*.
TEST(IsNotSubstringTest, GeneratesCorrectMessageForWideCString) {
  EXPECT_STREQ("Value of: needle_expr\n"
               "  Actual: L\"needle\"\n"
               "Expected: not a substring of haystack_expr\n"
               "Which is: L\"two needles\"",
               IsNotSubstring(
                   "needle_expr", "haystack_expr",
                   L"needle", L"two needles").failure_message());
}

// Tests that IsNotSubstring returns the correct result when the input
// argument type is ::std::string.
TEST(IsNotSubstringTest, ReturnsCorrectResultsForStdString) {
  EXPECT_FALSE(IsNotSubstring("", "", std::string("hello"), "ahellob"));
  EXPECT_TRUE(IsNotSubstring("", "", "hello", std::string("world")));
}

// Tests that IsNotSubstring() generates the correct message when the input
// argument type is ::std::string.
TEST(IsNotSubstringTest, GeneratesCorrectMessageForStdString) {
  EXPECT_STREQ("Value of: needle_expr\n"
               "  Actual: \"needle\"\n"
               "Expected: not a substring of haystack_expr\n"
               "Which is: \"two needles\"",
               IsNotSubstring(
                   "needle_expr", "haystack_expr",
                   ::std::string("needle"), "two needles").failure_message());
}

#if GTEST_HAS_STD_WSTRING

// Tests that IsNotSubstring returns the correct result when the input
// argument type is ::std::wstring.
TEST(IsNotSubstringTest, ReturnsCorrectResultForStdWstring) {
  EXPECT_FALSE(
      IsNotSubstring("", "", ::std::wstring(L"needle"), L"two needles"));
  EXPECT_TRUE(IsNotSubstring("", "", L"needle", ::std::wstring(L"haystack")));
}

#endif  // GTEST_HAS_STD_WSTRING

// Tests floating-point assertions.

template <typename RawType>
class FloatingPointTest : public Test {
 protected:
  // Pre-calculated numbers to be used by the tests.
  struct TestValues {
    RawType close_to_positive_zero;
    RawType close_to_negative_zero;
    RawType further_from_negative_zero;

    RawType close_to_one;
    RawType further_from_one;

    RawType infinity;
    RawType close_to_infinity;
    RawType further_from_infinity;

    RawType nan1;
    RawType nan2;
  };

  typedef typename testing::internal::FloatingPoint<RawType> Floating;
  typedef typename Floating::Bits Bits;

  void SetUp() override {
    const size_t max_ulps = Floating::kMaxUlps;

    // The bits that represent 0.0.
    const Bits zero_bits = Floating(0).bits();

    // Makes some numbers close to 0.0.
    values_.close_to_positive_zero = Floating::ReinterpretBits(
        zero_bits + max_ulps/2);
    values_.close_to_negative_zero = -Floating::ReinterpretBits(
        zero_bits + max_ulps - max_ulps/2);
    values_.further_from_negative_zero = -Floating::ReinterpretBits(
        zero_bits + max_ulps + 1 - max_ulps/2);

    // The bits that represent 1.0.
    const Bits one_bits = Floating(1).bits();

    // Makes some numbers close to 1.0.
    values_.close_to_one = Floating::ReinterpretBits(one_bits + max_ulps);
    values_.further_from_one = Floating::ReinterpretBits(
        one_bits + max_ulps + 1);

    // +infinity.
    values_.infinity = Floating::Infinity();

    // The bits that represent +infinity.
    const Bits infinity_bits = Floating(values_.infinity).bits();

    // Makes some numbers close to infinity.
    values_.close_to_infinity = Floating::ReinterpretBits(
        infinity_bits - max_ulps);
    values_.further_from_infinity = Floating::ReinterpretBits(
        infinity_bits - max_ulps - 1);

    // Makes some NAN's.  Sets the most significant bit of the fraction so that
    // our NaN's are quiet; trying to process a signaling NaN would raise an
    // exception if our environment enables floating point exceptions.
    values_.nan1 = Floating::ReinterpretBits(Floating::kExponentBitMask
        | (static_cast<Bits>(1) << (Floating::kFractionBitCount - 1)) | 1);
    values_.nan2 = Floating::ReinterpretBits(Floating::kExponentBitMask
        | (static_cast<Bits>(1) << (Floating::kFractionBitCount - 1)) | 200);
  }

  void TestSize() {
    EXPECT_EQ(sizeof(RawType), sizeof(Bits));
  }

  static TestValues values_;
};

template <typename RawType>
typename FloatingPointTest<RawType>::TestValues
    FloatingPointTest<RawType>::values_;

// Instantiates FloatingPointTest for testing *_FLOAT_EQ.
typedef FloatingPointTest<float> FloatTest;

// Tests that the size of Float::Bits matches the size of float.
TEST_F(FloatTest, Size) {
  TestSize();
}

// Tests comparing with +0 and -0.
TEST_F(FloatTest, Zeros) {
  EXPECT_FLOAT_EQ(0.0, -0.0);
  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(-0.0, 1.0),
                          "1.0");
  EXPECT_FATAL_FAILURE(ASSERT_FLOAT_EQ(0.0, 1.5),
                       "1.5");
}

// Tests comparing numbers close to 0.
//
// This ensures that *_FLOAT_EQ handles the sign correctly and no
// overflow occurs when comparing numbers whose absolute value is very
// small.
TEST_F(FloatTest, AlmostZeros) {
  // In C++Builder, names within local classes (such as used by
  // EXPECT_FATAL_FAILURE) cannot be resolved against static members of the
  // scoping class.  Use a static local alias as a workaround.
  // We use the assignment syntax since some compilers, like Sun Studio,
  // don't allow initializing references using construction syntax
  // (parentheses).
  static const FloatTest::TestValues& v = this->values_;

  EXPECT_FLOAT_EQ(0.0, v.close_to_positive_zero);
  EXPECT_FLOAT_EQ(-0.0, v.close_to_negative_zero);
  EXPECT_FLOAT_EQ(v.close_to_positive_zero, v.close_to_negative_zero);

  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_FLOAT_EQ(v.close_to_positive_zero,
                    v.further_from_negative_zero);
  }, "v.further_from_negative_zero");
}

// Tests comparing numbers close to each other.
TEST_F(FloatTest, SmallDiff) {
  EXPECT_FLOAT_EQ(1.0, values_.close_to_one);
  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(1.0, values_.further_from_one),
                          "values_.further_from_one");
}

// Tests comparing numbers far apart.
TEST_F(FloatTest, LargeDiff) {
  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(2.5, 3.0),
                          "3.0");
}

// Tests comparing with infinity.
//
// This ensures that no overflow occurs when comparing numbers whose
// absolute value is very large.
TEST_F(FloatTest, Infinity) {
  EXPECT_FLOAT_EQ(values_.infinity, values_.close_to_infinity);
  EXPECT_FLOAT_EQ(-values_.infinity, -values_.close_to_infinity);
  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(values_.infinity, -values_.infinity),
                          "-values_.infinity");

  // This is interesting as the representations of infinity and nan1
  // are only 1 DLP apart.
  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(values_.infinity, values_.nan1),
                          "values_.nan1");
}

// Tests that comparing with NAN always returns false.
TEST_F(FloatTest, NaN) {
  // In C++Builder, names within local classes (such as used by
  // EXPECT_FATAL_FAILURE) cannot be resolved against static members of the
  // scoping class.  Use a static local alias as a workaround.
  // We use the assignment syntax since some compilers, like Sun Studio,
  // don't allow initializing references using construction syntax
  // (parentheses).
  static const FloatTest::TestValues& v = this->values_;

  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(v.nan1, v.nan1),
                          "v.nan1");
  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(v.nan1, v.nan2),
                          "v.nan2");
  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(1.0, v.nan1),
                          "v.nan1");

  EXPECT_FATAL_FAILURE(ASSERT_FLOAT_EQ(v.nan1, v.infinity),
                       "v.infinity");
}

// Tests that *_FLOAT_EQ are reflexive.
TEST_F(FloatTest, Reflexive) {
  EXPECT_FLOAT_EQ(0.0, 0.0);
  EXPECT_FLOAT_EQ(1.0, 1.0);
  ASSERT_FLOAT_EQ(values_.infinity, values_.infinity);
}

// Tests that *_FLOAT_EQ are commutative.
TEST_F(FloatTest, Commutative) {
  // We already tested EXPECT_FLOAT_EQ(1.0, values_.close_to_one).
  EXPECT_FLOAT_EQ(values_.close_to_one, 1.0);

  // We already tested EXPECT_FLOAT_EQ(1.0, values_.further_from_one).
  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(values_.further_from_one, 1.0),
                          "1.0");
}

// Tests EXPECT_NEAR.
TEST_F(FloatTest, EXPECT_NEAR) {
  EXPECT_NEAR(-1.0f, -1.1f, 0.2f);
  EXPECT_NEAR(2.0f, 3.0f, 1.0f);
  EXPECT_NONFATAL_FAILURE(EXPECT_NEAR(1.0f,1.5f, 0.25f),  // NOLINT
                          "The difference between 1.0f and 1.5f is 0.5, "
                          "which exceeds 0.25f");
  // To work around a bug in gcc 2.95.0, there is intentionally no
  // space after the first comma in the previous line.
}

// Tests ASSERT_NEAR.
TEST_F(FloatTest, ASSERT_NEAR) {
  ASSERT_NEAR(-1.0f, -1.1f, 0.2f);
  ASSERT_NEAR(2.0f, 3.0f, 1.0f);
  EXPECT_FATAL_FAILURE(ASSERT_NEAR(1.0f,1.5f, 0.25f),  // NOLINT
                       "The difference between 1.0f and 1.5f is 0.5, "
                       "which exceeds 0.25f");
  // To work around a bug in gcc 2.95.0, there is intentionally no
  // space after the first comma in the previous line.
}

// Tests the cases where FloatLE() should succeed.
TEST_F(FloatTest, FloatLESucceeds) {
  EXPECT_PRED_FORMAT2(FloatLE, 1.0f, 2.0f);  // When val1 < val2,
  ASSERT_PRED_FORMAT2(FloatLE, 1.0f, 1.0f);  // val1 == val2,

  // or when val1 is greater than, but almost equals to, val2.
  EXPECT_PRED_FORMAT2(FloatLE, values_.close_to_positive_zero, 0.0f);
}

// Tests the cases where FloatLE() should fail.
TEST_F(FloatTest, FloatLEFails) {
  // When val1 is greater than val2 by a large margin,
  EXPECT_NONFATAL_FAILURE(EXPECT_PRED_FORMAT2(FloatLE, 2.0f, 1.0f),
                          "(2.0f) <= (1.0f)");

  // or by a small yet non-negligible margin,
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED_FORMAT2(FloatLE, values_.further_from_one, 1.0f);
  }, "(values_.further_from_one) <= (1.0f)");

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED_FORMAT2(FloatLE, values_.nan1, values_.infinity);
  }, "(values_.nan1) <= (values_.infinity)");
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED_FORMAT2(FloatLE, -values_.infinity, values_.nan1);
  }, "(-values_.infinity) <= (values_.nan1)");
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_PRED_FORMAT2(FloatLE, values_.nan1, values_.nan1);
  }, "(values_.nan1) <= (values_.nan1)");
}

// Instantiates FloatingPointTest for testing *_DOUBLE_EQ.
typedef FloatingPointTest<double> DoubleTest;

// Tests that the size of Double::Bits matches the size of double.
TEST_F(DoubleTest, Size) {
  TestSize();
}

// Tests comparing with +0 and -0.
TEST_F(DoubleTest, Zeros) {
  EXPECT_DOUBLE_EQ(0.0, -0.0);
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(-0.0, 1.0),
                          "1.0");
  EXPECT_FATAL_FAILURE(ASSERT_DOUBLE_EQ(0.0, 1.0),
                       "1.0");
}

// Tests comparing numbers close to 0.
//
// This ensures that *_DOUBLE_EQ handles the sign correctly and no
// overflow occurs when comparing numbers whose absolute value is very
// small.
TEST_F(DoubleTest, AlmostZeros) {
  // In C++Builder, names within local classes (such as used by
  // EXPECT_FATAL_FAILURE) cannot be resolved against static members of the
  // scoping class.  Use a static local alias as a workaround.
  // We use the assignment syntax since some compilers, like Sun Studio,
  // don't allow initializing references using construction syntax
  // (parentheses).
  static const DoubleTest::TestValues& v = this->values_;

  EXPECT_DOUBLE_EQ(0.0, v.close_to_positive_zero);
  EXPECT_DOUBLE_EQ(-0.0, v.close_to_negative_zero);
  EXPECT_DOUBLE_EQ(v.close_to_positive_zero, v.close_to_negative_zero);

  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_DOUBLE_EQ(v.close_to_positive_zero,
                     v.further_from_negative_zero);
  }, "v.further_from_negative_zero");
}

// Tests comparing numbers close to each other.
TEST_F(DoubleTest, SmallDiff) {
  EXPECT_DOUBLE_EQ(1.0, values_.close_to_one);
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(1.0, values_.further_from_one),
                          "values_.further_from_one");
}

// Tests comparing numbers far apart.
TEST_F(DoubleTest, LargeDiff) {
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(2.0, 3.0),
                          "3.0");
}

// Tests comparing with infinity.
//
// This ensures that no overflow occurs when comparing numbers whose
// absolute value is very large.
TEST_F(DoubleTest, Infinity) {
  EXPECT_DOUBLE_EQ(values_.infinity, values_.close_to_infinity);
  EXPECT_DOUBLE_EQ(-values_.infinity, -values_.close_to_infinity);
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(values_.infinity, -values_.infinity),
                          "-values_.infinity");

  // This is interesting as the representations of infinity_ and nan1_
  // are only 1 DLP apart.
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(values_.infinity, values_.nan1),
                          "values_.nan1");
}

// Tests that comparing with NAN always returns false.
TEST_F(DoubleTest, NaN) {
  static const DoubleTest::TestValues& v = this->values_;

  // Nokia's STLport crashes if we try to output infinity or NaN.
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(v.nan1, v.nan1),
                          "v.nan1");
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(v.nan1, v.nan2), "v.nan2");
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(1.0, v.nan1), "v.nan1");
  EXPECT_FATAL_FAILURE(ASSERT_DOUBLE_EQ(v.nan1, v.infinity),
                       "v.infinity");
}

// Tests that *_DOUBLE_EQ are reflexive.
TEST_F(DoubleTest, Reflexive) {
  EXPECT_DOUBLE_EQ(0.0, 0.0);
  EXPECT_DOUBLE_EQ(1.0, 1.0);
  ASSERT_DOUBLE_EQ(values_.infinity, values_.infinity);
}

// Tests that *_DOUBLE_EQ are commutative.
TEST_F(DoubleTest, Commutative) {
  // We already tested EXPECT_DOUBLE_EQ(1.0, values_.close_to_one).
  EXPECT_DOUBLE_EQ(values_.close_to_one, 1.0);

  // We already tested EXPECT_DOUBLE_EQ(1.0, values_.further_from_one).
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(values_.further_from_one, 1.0),
                          "1.0");
}

// Tests EXPECT_NEAR.
TEST_F(DoubleTest, EXPECT_NEAR) {
  EXPECT_NEAR(-1.0, -1.1, 0.2);
  EXPECT_NEAR(2.0, 3.0, 1.0);
  EXPECT_NONFATAL_FAILURE(EXPECT_NEAR(1.0, 1.5, 0.25),  // NOLINT
                          "The difference between 1.0 and 1.5 is 0.5, "
                          "which exceeds 0.25");
  // To work around a bug in gcc 2.95.0, there is intentionally no
  // space after the first comma in the previous statement.
}

// Tests ASSERT_NEAR.
TEST_F(DoubleTest, ASSERT_NEAR) {
  ASSERT_NEAR(-1.0, -1.1, 0.2);
  ASSERT_NEAR(2.0, 3.0, 1.0);
  EXPECT_FATAL_FAILURE(ASSERT_NEAR(1.0, 1.5, 0.25),  // NOLINT
                       "The difference between 1.0 and 1.5 is 0.5, "
                       "which exceeds 0.25");
  // To work around a bug in gcc 2.95.0, there is intentionally no
  // space after the first comma in the previous statement.
}

// Tests the cases where DoubleLE() should succeed.
TEST_F(DoubleTest, DoubleLESucceeds) {
  EXPECT_PRED_FORMAT2(DoubleLE, 1.0, 2.0);  // When val1 < val2,
  ASSERT_PRED_FORMAT2(DoubleLE, 1.0, 1.0);  // val1 == val2,

  // or when val1 is greater than, but almost equals to, val2.
  EXPECT_PRED_FORMAT2(DoubleLE, values_.close_to_positive_zero, 0.0);
}

// Tests the cases where DoubleLE() should fail.
TEST_F(DoubleTest, DoubleLEFails) {
  // When val1 is greater than val2 by a large margin,
  EXPECT_NONFATAL_FAILURE(EXPECT_PRED_FORMAT2(DoubleLE, 2.0, 1.0),
                          "(2.0) <= (1.0)");

  // or by a small yet non-negligible margin,
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED_FORMAT2(DoubleLE, values_.further_from_one, 1.0);
  }, "(values_.further_from_one) <= (1.0)");

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED_FORMAT2(DoubleLE, values_.nan1, values_.infinity);
  }, "(values_.nan1) <= (values_.infinity)");
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_PRED_FORMAT2(DoubleLE, -values_.infinity, values_.nan1);
  }, " (-values_.infinity) <= (values_.nan1)");
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_PRED_FORMAT2(DoubleLE, values_.nan1, values_.nan1);
  }, "(values_.nan1) <= (values_.nan1)");
}


// Verifies that a test or test case whose name starts with DISABLED_ is
// not run.

// A test whose name starts with DISABLED_.
// Should not run.
TEST(DisabledTest, DISABLED_TestShouldNotRun) {
  FAIL() << "Unexpected failure: Disabled test should not be run.";
}

// A test whose name does not start with DISABLED_.
// Should run.
TEST(DisabledTest, NotDISABLED_TestShouldRun) {
  EXPECT_EQ(1, 1);
}

// A test case whose name starts with DISABLED_.
// Should not run.
TEST(DISABLED_TestSuite, TestShouldNotRun) {
  FAIL() << "Unexpected failure: Test in disabled test case should not be run.";
}

// A test case and test whose names start with DISABLED_.
// Should not run.
TEST(DISABLED_TestSuite, DISABLED_TestShouldNotRun) {
  FAIL() << "Unexpected failure: Test in disabled test case should not be run.";
}

// Check that when all tests in a test case are disabled, SetUpTestSuite() and
// TearDownTestSuite() are not called.
class DisabledTestsTest : public Test {
 protected:
  static void SetUpTestSuite() {
    FAIL() << "Unexpected failure: All tests disabled in test case. "
              "SetUpTestSuite() should not be called.";
  }

  static void TearDownTestSuite() {
    FAIL() << "Unexpected failure: All tests disabled in test case. "
              "TearDownTestSuite() should not be called.";
  }
};

TEST_F(DisabledTestsTest, DISABLED_TestShouldNotRun_1) {
  FAIL() << "Unexpected failure: Disabled test should not be run.";
}

TEST_F(DisabledTestsTest, DISABLED_TestShouldNotRun_2) {
  FAIL() << "Unexpected failure: Disabled test should not be run.";
}

// Tests that disabled typed tests aren't run.

#if GTEST_HAS_TYPED_TEST

template <typename T>
class TypedTest : public Test {
};

typedef testing::Types<int, double> NumericTypes;
TYPED_TEST_SUITE(TypedTest, NumericTypes);

TYPED_TEST(TypedTest, DISABLED_ShouldNotRun) {
  FAIL() << "Unexpected failure: Disabled typed test should not run.";
}

template <typename T>
class DISABLED_TypedTest : public Test {
};

TYPED_TEST_SUITE(DISABLED_TypedTest, NumericTypes);

TYPED_TEST(DISABLED_TypedTest, ShouldNotRun) {
  FAIL() << "Unexpected failure: Disabled typed test should not run.";
}

#endif  // GTEST_HAS_TYPED_TEST

// Tests that disabled type-parameterized tests aren't run.

#if GTEST_HAS_TYPED_TEST_P

template <typename T>
class TypedTestP : public Test {
};

TYPED_TEST_SUITE_P(TypedTestP);

TYPED_TEST_P(TypedTestP, DISABLED_ShouldNotRun) {
  FAIL() << "Unexpected failure: "
         << "Disabled type-parameterized test should not run.";
}

REGISTER_TYPED_TEST_SUITE_P(TypedTestP, DISABLED_ShouldNotRun);

INSTANTIATE_TYPED_TEST_SUITE_P(My, TypedTestP, NumericTypes);

template <typename T>
class DISABLED_TypedTestP : public Test {
};

TYPED_TEST_SUITE_P(DISABLED_TypedTestP);

TYPED_TEST_P(DISABLED_TypedTestP, ShouldNotRun) {
  FAIL() << "Unexpected failure: "
         << "Disabled type-parameterized test should not run.";
}

REGISTER_TYPED_TEST_SUITE_P(DISABLED_TypedTestP, ShouldNotRun);

INSTANTIATE_TYPED_TEST_SUITE_P(My, DISABLED_TypedTestP, NumericTypes);

#endif  // GTEST_HAS_TYPED_TEST_P

// Tests that assertion macros evaluate their arguments exactly once.

class SingleEvaluationTest : public Test {
 public:  // Must be public and not protected due to a bug in g++ 3.4.2.
  // This helper function is needed by the FailedASSERT_STREQ test
  // below.  It's public to work around C++Builder's bug with scoping local
  // classes.
  static void CompareAndIncrementCharPtrs() {
    ASSERT_STREQ(p1_++, p2_++);
  }

  // This helper function is needed by the FailedASSERT_NE test below.  It's
  // public to work around C++Builder's bug with scoping local classes.
  static void CompareAndIncrementInts() {
    ASSERT_NE(a_++, b_++);
  }

 protected:
  SingleEvaluationTest() {
    p1_ = s1_;
    p2_ = s2_;
    a_ = 0;
    b_ = 0;
  }

  static const char* const s1_;
  static const char* const s2_;
  static const char* p1_;
  static const char* p2_;

  static int a_;
  static int b_;
};

const char* const SingleEvaluationTest::s1_ = "01234";
const char* const SingleEvaluationTest::s2_ = "abcde";
const char* SingleEvaluationTest::p1_;
const char* SingleEvaluationTest::p2_;
int SingleEvaluationTest::a_;
int SingleEvaluationTest::b_;

// Tests that when ASSERT_STREQ fails, it evaluates its arguments
// exactly once.
TEST_F(SingleEvaluationTest, FailedASSERT_STREQ) {
  EXPECT_FATAL_FAILURE(SingleEvaluationTest::CompareAndIncrementCharPtrs(),
                       "p2_++");
  EXPECT_EQ(s1_ + 1, p1_);
  EXPECT_EQ(s2_ + 1, p2_);
}

// Tests that string assertion arguments are evaluated exactly once.
TEST_F(SingleEvaluationTest, ASSERT_STR) {
  // successful EXPECT_STRNE
  EXPECT_STRNE(p1_++, p2_++);
  EXPECT_EQ(s1_ + 1, p1_);
  EXPECT_EQ(s2_ + 1, p2_);

  // failed EXPECT_STRCASEEQ
  EXPECT_NONFATAL_FAILURE(EXPECT_STRCASEEQ(p1_++, p2_++),
                          "Ignoring case");
  EXPECT_EQ(s1_ + 2, p1_);
  EXPECT_EQ(s2_ + 2, p2_);
}

// Tests that when ASSERT_NE fails, it evaluates its arguments exactly
// once.
TEST_F(SingleEvaluationTest, FailedASSERT_NE) {
  EXPECT_FATAL_FAILURE(SingleEvaluationTest::CompareAndIncrementInts(),
                       "(a_++) != (b_++)");
  EXPECT_EQ(1, a_);
  EXPECT_EQ(1, b_);
}

// Tests that assertion arguments are evaluated exactly once.
TEST_F(SingleEvaluationTest, OtherCases) {
  // successful EXPECT_TRUE
  EXPECT_TRUE(0 == a_++);  // NOLINT
  EXPECT_EQ(1, a_);

  // failed EXPECT_TRUE
  EXPECT_NONFATAL_FAILURE(EXPECT_TRUE(-1 == a_++), "-1 == a_++");
  EXPECT_EQ(2, a_);

  // successful EXPECT_GT
  EXPECT_GT(a_++, b_++);
  EXPECT_EQ(3, a_);
  EXPECT_EQ(1, b_);

  // failed EXPECT_LT
  EXPECT_NONFATAL_FAILURE(EXPECT_LT(a_++, b_++), "(a_++) < (b_++)");
  EXPECT_EQ(4, a_);
  EXPECT_EQ(2, b_);

  // successful ASSERT_TRUE
  ASSERT_TRUE(0 < a_++);  // NOLINT
  EXPECT_EQ(5, a_);

  // successful ASSERT_GT
  ASSERT_GT(a_++, b_++);
  EXPECT_EQ(6, a_);
  EXPECT_EQ(3, b_);
}

#if GTEST_HAS_EXCEPTIONS

void ThrowAnInteger() {
  throw 1;
}

// Tests that assertion arguments are evaluated exactly once.
TEST_F(SingleEvaluationTest, ExceptionTests) {
  // successful EXPECT_THROW
  EXPECT_THROW({  // NOLINT
    a_++;
    ThrowAnInteger();
  }, int);
  EXPECT_EQ(1, a_);

  // failed EXPECT_THROW, throws different
  EXPECT_NONFATAL_FAILURE(EXPECT_THROW({  // NOLINT
    a_++;
    ThrowAnInteger();
  }, bool), "throws a different type");
  EXPECT_EQ(2, a_);

  // failed EXPECT_THROW, throws nothing
  EXPECT_NONFATAL_FAILURE(EXPECT_THROW(a_++, bool), "throws nothing");
  EXPECT_EQ(3, a_);

  // successful EXPECT_NO_THROW
  EXPECT_NO_THROW(a_++);
  EXPECT_EQ(4, a_);

  // failed EXPECT_NO_THROW
  EXPECT_NONFATAL_FAILURE(EXPECT_NO_THROW({  // NOLINT
    a_++;
    ThrowAnInteger();
  }), "it throws");
  EXPECT_EQ(5, a_);

  // successful EXPECT_ANY_THROW
  EXPECT_ANY_THROW({  // NOLINT
    a_++;
    ThrowAnInteger();
  });
  EXPECT_EQ(6, a_);

  // failed EXPECT_ANY_THROW
  EXPECT_NONFATAL_FAILURE(EXPECT_ANY_THROW(a_++), "it doesn't");
  EXPECT_EQ(7, a_);
}

#endif  // GTEST_HAS_EXCEPTIONS

// Tests {ASSERT|EXPECT}_NO_FATAL_FAILURE.
class NoFatalFailureTest : public Test {
 protected:
  void Succeeds() {}
  void FailsNonFatal() {
    ADD_FAILURE() << "some non-fatal failure";
  }
  void Fails() {
    FAIL() << "some fatal failure";
  }

  void DoAssertNoFatalFailureOnFails() {
    ASSERT_NO_FATAL_FAILURE(Fails());
    ADD_FAILURE() << "should not reach here.";
  }

  void DoExpectNoFatalFailureOnFails() {
    EXPECT_NO_FATAL_FAILURE(Fails());
    ADD_FAILURE() << "other failure";
  }
};

TEST_F(NoFatalFailureTest, NoFailure) {
  EXPECT_NO_FATAL_FAILURE(Succeeds());
  ASSERT_NO_FATAL_FAILURE(Succeeds());
}

TEST_F(NoFatalFailureTest, NonFatalIsNoFailure) {
  EXPECT_NONFATAL_FAILURE(
      EXPECT_NO_FATAL_FAILURE(FailsNonFatal()),
      "some non-fatal failure");
  EXPECT_NONFATAL_FAILURE(
      ASSERT_NO_FATAL_FAILURE(FailsNonFatal()),
      "some non-fatal failure");
}

TEST_F(NoFatalFailureTest, AssertNoFatalFailureOnFatalFailure) {
  TestPartResultArray gtest_failures;
  {
    ScopedFakeTestPartResultReporter gtest_reporter(&gtest_failures);
    DoAssertNoFatalFailureOnFails();
  }
  ASSERT_EQ(2, gtest_failures.size());
  EXPECT_EQ(TestPartResult::kFatalFailure,
            gtest_failures.GetTestPartResult(0).type());
  EXPECT_EQ(TestPartResult::kFatalFailure,
            gtest_failures.GetTestPartResult(1).type());
  EXPECT_PRED_FORMAT2(testing::IsSubstring, "some fatal failure",
                      gtest_failures.GetTestPartResult(0).message());
  EXPECT_PRED_FORMAT2(testing::IsSubstring, "it does",
                      gtest_failures.GetTestPartResult(1).message());
}

TEST_F(NoFatalFailureTest, ExpectNoFatalFailureOnFatalFailure) {
  TestPartResultArray gtest_failures;
  {
    ScopedFakeTestPartResultReporter gtest_reporter(&gtest_failures);
    DoExpectNoFatalFailureOnFails();
  }
  ASSERT_EQ(3, gtest_failures.size());
  EXPECT_EQ(TestPartResult::kFatalFailure,
            gtest_failures.GetTestPartResult(0).type());
  EXPECT_EQ(TestPartResult::kNonFatalFailure,
            gtest_failures.GetTestPartResult(1).type());
  EXPECT_EQ(TestPartResult::kNonFatalFailure,
            gtest_failures.GetTestPartResult(2).type());
  EXPECT_PRED_FORMAT2(testing::IsSubstring, "some fatal failure",
                      gtest_failures.GetTestPartResult(0).message());
  EXPECT_PRED_FORMAT2(testing::IsSubstring, "it does",
                      gtest_failures.GetTestPartResult(1).message());
  EXPECT_PRED_FORMAT2(testing::IsSubstring, "other failure",
                      gtest_failures.GetTestPartResult(2).message());
}

TEST_F(NoFatalFailureTest, MessageIsStreamable) {
  TestPartResultArray gtest_failures;
  {
    ScopedFakeTestPartResultReporter gtest_reporter(&gtest_failures);
    EXPECT_NO_FATAL_FAILURE(FAIL() << "foo") << "my message";
  }
  ASSERT_EQ(2, gtest_failures.size());
  EXPECT_EQ(TestPartResult::kNonFatalFailure,
            gtest_failures.GetTestPartResult(0).type());
  EXPECT_EQ(TestPartResult::kNonFatalFailure,
            gtest_failures.GetTestPartResult(1).type());
  EXPECT_PRED_FORMAT2(testing::IsSubstring, "foo",
                      gtest_failures.GetTestPartResult(0).message());
  EXPECT_PRED_FORMAT2(testing::IsSubstring, "my message",
                      gtest_failures.GetTestPartResult(1).message());
}

// Tests non-string assertions.

std::string EditsToString(const std::vector<EditType>& edits) {
  std::string out;
  for (size_t i = 0; i < edits.size(); ++i) {
    static const char kEdits[] = " +-/";
    out.append(1, kEdits[edits[i]]);
  }
  return out;
}

std::vector<size_t> CharsToIndices(const std::string& str) {
  std::vector<size_t> out;
  for (size_t i = 0; i < str.size(); ++i) {
    out.push_back(static_cast<size_t>(str[i]));
  }
  return out;
}

std::vector<std::string> CharsToLines(const std::string& str) {
  std::vector<std::string> out;
  for (size_t i = 0; i < str.size(); ++i) {
    out.push_back(str.substr(i, 1));
  }
  return out;
}

TEST(EditDistance, TestSuites) {
  struct Case {
    int line;
    const char* left;
    const char* right;
    const char* expected_edits;
    const char* expected_diff;
  };
  static const Case kCases[] = {
      // No change.
      {__LINE__, "A", "A", " ", ""},
      {__LINE__, "ABCDE", "ABCDE", "     ", ""},
      // Simple adds.
      {__LINE__, "X", "XA", " +", "@@ +1,2 @@\n X\n+A\n"},
      {__LINE__, "X", "XABCD", " ++++", "@@ +1,5 @@\n X\n+A\n+B\n+C\n+D\n"},
      // Simple removes.
      {__LINE__, "XA", "X", " -", "@@ -1,2 @@\n X\n-A\n"},
      {__LINE__, "XABCD", "X", " ----", "@@ -1,5 @@\n X\n-A\n-B\n-C\n-D\n"},
      // Simple replaces.
      {__LINE__, "A", "a", "/", "@@ -1,1 +1,1 @@\n-A\n+a\n"},
      {__LINE__, "ABCD", "abcd", "////",
       "@@ -1,4 +1,4 @@\n-A\n-B\n-C\n-D\n+a\n+b\n+c\n+d\n"},
      // Path finding.
      {__LINE__, "ABCDEFGH", "ABXEGH1", "  -/ -  +",
       "@@ -1,8 +1,7 @@\n A\n B\n-C\n-D\n+X\n E\n-F\n G\n H\n+1\n"},
      {__LINE__, "AAAABCCCC", "ABABCDCDC", "- /   + / ",
       "@@ -1,9 +1,9 @@\n-A\n A\n-A\n+B\n A\n B\n C\n+D\n C\n-C\n+D\n C\n"},
      {__LINE__, "ABCDE", "BCDCD", "-   +/",
       "@@ -1,5 +1,5 @@\n-A\n B\n C\n D\n-E\n+C\n+D\n"},
      {__LINE__, "ABCDEFGHIJKL", "BCDCDEFGJKLJK", "- ++     --   ++",
       "@@ -1,4 +1,5 @@\n-A\n B\n+C\n+D\n C\n D\n"
       "@@ -6,7 +7,7 @@\n F\n G\n-H\n-I\n J\n K\n L\n+J\n+K\n"},
      {}};
  for (const Case* c = kCases; c->left; ++c) {
    EXPECT_TRUE(c->expected_edits ==
                EditsToString(CalculateOptimalEdits(CharsToIndices(c->left),
                                                    CharsToIndices(c->right))))
        << "Left <" << c->left << "> Right <" << c->right << "> Edits <"
        << EditsToString(CalculateOptimalEdits(
               CharsToIndices(c->left), CharsToIndices(c->right))) << ">";
    EXPECT_TRUE(c->expected_diff == CreateUnifiedDiff(CharsToLines(c->left),
                                                      CharsToLines(c->right)))
        << "Left <" << c->left << "> Right <" << c->right << "> Diff <"
        << CreateUnifiedDiff(CharsToLines(c->left), CharsToLines(c->right))
        << ">";
  }
}

// Tests EqFailure(), used for implementing *EQ* assertions.
TEST(AssertionTest, EqFailure) {
  const std::string foo_val("5"), bar_val("6");
  const std::string msg1(
      EqFailure("foo", "bar", foo_val, bar_val, false)
      .failure_message());
  EXPECT_STREQ(
      "Expected equality of these values:\n"
      "  foo\n"
      "    Which is: 5\n"
      "  bar\n"
      "    Which is: 6",
      msg1.c_str());

  const std::string msg2(
      EqFailure("foo", "6", foo_val, bar_val, false)
      .failure_message());
  EXPECT_STREQ(
      "Expected equality of these values:\n"
      "  foo\n"
      "    Which is: 5\n"
      "  6",
      msg2.c_str());

  const std::string msg3(
      EqFailure("5", "bar", foo_val, bar_val, false)
      .failure_message());
  EXPECT_STREQ(
      "Expected equality of these values:\n"
      "  5\n"
      "  bar\n"
      "    Which is: 6",
      msg3.c_str());

  const std::string msg4(
      EqFailure("5", "6", foo_val, bar_val, false).failure_message());
  EXPECT_STREQ(
      "Expected equality of these values:\n"
      "  5\n"
      "  6",
      msg4.c_str());

  const std::string msg5(
      EqFailure("foo", "bar",
                std::string("\"x\""), std::string("\"y\""),
                true).failure_message());
  EXPECT_STREQ(
      "Expected equality of these values:\n"
      "  foo\n"
      "    Which is: \"x\"\n"
      "  bar\n"
      "    Which is: \"y\"\n"
      "Ignoring case",
      msg5.c_str());
}

TEST(AssertionTest, EqFailureWithDiff) {
  const std::string left(
      "1\\n2XXX\\n3\\n5\\n6\\n7\\n8\\n9\\n10\\n11\\n12XXX\\n13\\n14\\n15");
  const std::string right(
      "1\\n2\\n3\\n4\\n5\\n6\\n7\\n8\\n9\\n11\\n12\\n13\\n14");
  const std::string msg1(
      EqFailure("left", "right", left, right, false).failure_message());
  EXPECT_STREQ(
      "Expected equality of these values:\n"
      "  left\n"
      "    Which is: "
      "1\\n2XXX\\n3\\n5\\n6\\n7\\n8\\n9\\n10\\n11\\n12XXX\\n13\\n14\\n15\n"
      "  right\n"
      "    Which is: 1\\n2\\n3\\n4\\n5\\n6\\n7\\n8\\n9\\n11\\n12\\n13\\n14\n"
      "With diff:\n@@ -1,5 +1,6 @@\n 1\n-2XXX\n+2\n 3\n+4\n 5\n 6\n"
      "@@ -7,8 +8,6 @@\n 8\n 9\n-10\n 11\n-12XXX\n+12\n 13\n 14\n-15\n",
      msg1.c_str());
}

// Tests AppendUserMessage(), used for implementing the *EQ* macros.
TEST(AssertionTest, AppendUserMessage) {
  const std::string foo("foo");

  Message msg;
  EXPECT_STREQ("foo",
               AppendUserMessage(foo, msg).c_str());

  msg << "bar";
  EXPECT_STREQ("foo\nbar",
               AppendUserMessage(foo, msg).c_str());
}

#ifdef __BORLANDC__
// Silences warnings: "Condition is always true", "Unreachable code"
# pragma option push -w-ccc -w-rch
#endif

// Tests ASSERT_TRUE.
TEST(AssertionTest, ASSERT_TRUE) {
  ASSERT_TRUE(2 > 1);  // NOLINT
  EXPECT_FATAL_FAILURE(ASSERT_TRUE(2 < 1),
                       "2 < 1");
}

// Tests ASSERT_TRUE(predicate) for predicates returning AssertionResult.
TEST(AssertionTest, AssertTrueWithAssertionResult) {
  ASSERT_TRUE(ResultIsEven(2));
#ifndef __BORLANDC__
  // ICE's in C++Builder.
  EXPECT_FATAL_FAILURE(ASSERT_TRUE(ResultIsEven(3)),
                       "Value of: ResultIsEven(3)\n"
                       "  Actual: false (3 is odd)\n"
                       "Expected: true");
#endif
  ASSERT_TRUE(ResultIsEvenNoExplanation(2));
  EXPECT_FATAL_FAILURE(ASSERT_TRUE(ResultIsEvenNoExplanation(3)),
                       "Value of: ResultIsEvenNoExplanation(3)\n"
                       "  Actual: false (3 is odd)\n"
                       "Expected: true");
}

// Tests ASSERT_FALSE.
TEST(AssertionTest, ASSERT_FALSE) {
  ASSERT_FALSE(2 < 1);  // NOLINT
  EXPECT_FATAL_FAILURE(ASSERT_FALSE(2 > 1),
                       "Value of: 2 > 1\n"
                       "  Actual: true\n"
                       "Expected: false");
}

// Tests ASSERT_FALSE(predicate) for predicates returning AssertionResult.
TEST(AssertionTest, AssertFalseWithAssertionResult) {
  ASSERT_FALSE(ResultIsEven(3));
#ifndef __BORLANDC__
  // ICE's in C++Builder.
  EXPECT_FATAL_FAILURE(ASSERT_FALSE(ResultIsEven(2)),
                       "Value of: ResultIsEven(2)\n"
                       "  Actual: true (2 is even)\n"
                       "Expected: false");
#endif
  ASSERT_FALSE(ResultIsEvenNoExplanation(3));
  EXPECT_FATAL_FAILURE(ASSERT_FALSE(ResultIsEvenNoExplanation(2)),
                       "Value of: ResultIsEvenNoExplanation(2)\n"
                       "  Actual: true\n"
                       "Expected: false");
}

#ifdef __BORLANDC__
// Restores warnings after previous "#pragma option push" suppressed them
# pragma option pop
#endif

// Tests using ASSERT_EQ on double values.  The purpose is to make
// sure that the specialization we did for integer and anonymous enums
// isn't used for double arguments.
TEST(ExpectTest, ASSERT_EQ_Double) {
  // A success.
  ASSERT_EQ(5.6, 5.6);

  // A failure.
  EXPECT_FATAL_FAILURE(ASSERT_EQ(5.1, 5.2),
                       "5.1");
}

// Tests ASSERT_EQ.
TEST(AssertionTest, ASSERT_EQ) {
  ASSERT_EQ(5, 2 + 3);
  EXPECT_FATAL_FAILURE(ASSERT_EQ(5, 2*3),
                       "Expected equality of these values:\n"
                       "  5\n"
                       "  2*3\n"
                       "    Which is: 6");
}

// Tests ASSERT_EQ(NULL, pointer).
TEST(AssertionTest, ASSERT_EQ_NULL) {
  // A success.
  const char* p = nullptr;
  // Some older GCC versions may issue a spurious warning in this or the next
  // assertion statement. This warning should not be suppressed with
  // static_cast since the test verifies the ability to use bare NULL as the
  // expected parameter to the macro.
  ASSERT_EQ(nullptr, p);

  // A failure.
  static int n = 0;
  EXPECT_FATAL_FAILURE(ASSERT_EQ(nullptr, &n), "  &n\n    Which is:");
}

// Tests ASSERT_EQ(0, non_pointer).  Since the literal 0 can be
// treated as a null pointer by the compiler, we need to make sure
// that ASSERT_EQ(0, non_pointer) isn't interpreted by Google Test as
// ASSERT_EQ(static_cast<void*>(NULL), non_pointer).
TEST(ExpectTest, ASSERT_EQ_0) {
  int n = 0;

  // A success.
  ASSERT_EQ(0, n);

  // A failure.
  EXPECT_FATAL_FAILURE(ASSERT_EQ(0, 5.6),
                       "  0\n  5.6");
}

// Tests ASSERT_NE.
TEST(AssertionTest, ASSERT_NE) {
  ASSERT_NE(6, 7);
  EXPECT_FATAL_FAILURE(ASSERT_NE('a', 'a'),
                       "Expected: ('a') != ('a'), "
                       "actual: 'a' (97, 0x61) vs 'a' (97, 0x61)");
}

// Tests ASSERT_LE.
TEST(AssertionTest, ASSERT_LE) {
  ASSERT_LE(2, 3);
  ASSERT_LE(2, 2);
  EXPECT_FATAL_FAILURE(ASSERT_LE(2, 0),
                       "Expected: (2) <= (0), actual: 2 vs 0");
}

// Tests ASSERT_LT.
TEST(AssertionTest, ASSERT_LT) {
  ASSERT_LT(2, 3);
  EXPECT_FATAL_FAILURE(ASSERT_LT(2, 2),
                       "Expected: (2) < (2), actual: 2 vs 2");
}

// Tests ASSERT_GE.
TEST(AssertionTest, ASSERT_GE) {
  ASSERT_GE(2, 1);
  ASSERT_GE(2, 2);
  EXPECT_FATAL_FAILURE(ASSERT_GE(2, 3),
                       "Expected: (2) >= (3), actual: 2 vs 3");
}

// Tests ASSERT_GT.
TEST(AssertionTest, ASSERT_GT) {
  ASSERT_GT(2, 1);
  EXPECT_FATAL_FAILURE(ASSERT_GT(2, 2),
                       "Expected: (2) > (2), actual: 2 vs 2");
}

#if GTEST_HAS_EXCEPTIONS

void ThrowNothing() {}

// Tests ASSERT_THROW.
TEST(AssertionTest, ASSERT_THROW) {
  ASSERT_THROW(ThrowAnInteger(), int);

# ifndef __BORLANDC__

  // ICE's in C++Builder 2007 and 2009.
  EXPECT_FATAL_FAILURE(
      ASSERT_THROW(ThrowAnInteger(), bool),
      "Expected: ThrowAnInteger() throws an exception of type bool.\n"
      "  Actual: it throws a different type.");
# endif

  EXPECT_FATAL_FAILURE(
      ASSERT_THROW(ThrowNothing(), bool),
      "Expected: ThrowNothing() throws an exception of type bool.\n"
      "  Actual: it throws nothing.");
}

// Tests ASSERT_NO_THROW.
TEST(AssertionTest, ASSERT_NO_THROW) {
  ASSERT_NO_THROW(ThrowNothing());
  EXPECT_FATAL_FAILURE(ASSERT_NO_THROW(ThrowAnInteger()),
                       "Expected: ThrowAnInteger() doesn't throw an exception."
                       "\n  Actual: it throws.");
}

// Tests ASSERT_ANY_THROW.
TEST(AssertionTest, ASSERT_ANY_THROW) {
  ASSERT_ANY_THROW(ThrowAnInteger());
  EXPECT_FATAL_FAILURE(
      ASSERT_ANY_THROW(ThrowNothing()),
      "Expected: ThrowNothing() throws an exception.\n"
      "  Actual: it doesn't.");
}

#endif  // GTEST_HAS_EXCEPTIONS

// Makes sure we deal with the precedence of <<.  This test should
// compile.
TEST(AssertionTest, AssertPrecedence) {
  ASSERT_EQ(1 < 2, true);
  bool false_value = false;
  ASSERT_EQ(true && false_value, false);
}

// A subroutine used by the following test.
void TestEq1(int x) {
  ASSERT_EQ(1, x);
}

// Tests calling a test subroutine that's not part of a fixture.
TEST(AssertionTest, NonFixtureSubroutine) {
  EXPECT_FATAL_FAILURE(TestEq1(2),
                       "  x\n    Which is: 2");
}

// An uncopyable class.
class Uncopyable {
 public:
  explicit Uncopyable(int a_value) : value_(a_value) {}

  int value() const { return value_; }
  bool operator==(const Uncopyable& rhs) const {
    return value() == rhs.value();
  }
 private:
  // This constructor deliberately has no implementation, as we don't
  // want this class to be copyable.
  Uncopyable(const Uncopyable&);  // NOLINT

  int value_;
};

::std::ostream& operator<<(::std::ostream& os, const Uncopyable& value) {
  return os << value.value();
}


bool IsPositiveUncopyable(const Uncopyable& x) {
  return x.value() > 0;
}

// A subroutine used by the following test.
void TestAssertNonPositive() {
  Uncopyable y(-1);
  ASSERT_PRED1(IsPositiveUncopyable, y);
}
// A subroutine used by the following test.
void TestAssertEqualsUncopyable() {
  Uncopyable x(5);
  Uncopyable y(-1);
  ASSERT_EQ(x, y);
}

// Tests that uncopyable objects can be used in assertions.
TEST(AssertionTest, AssertWorksWithUncopyableObject) {
  Uncopyable x(5);
  ASSERT_PRED1(IsPositiveUncopyable, x);
  ASSERT_EQ(x, x);
  EXPECT_FATAL_FAILURE(TestAssertNonPositive(),
    "IsPositiveUncopyable(y) evaluates to false, where\ny evaluates to -1");
  EXPECT_FATAL_FAILURE(TestAssertEqualsUncopyable(),
                       "Expected equality of these values:\n"
                       "  x\n    Which is: 5\n  y\n    Which is: -1");
}

// Tests that uncopyable objects can be used in expects.
TEST(AssertionTest, ExpectWorksWithUncopyableObject) {
  Uncopyable x(5);
  EXPECT_PRED1(IsPositiveUncopyable, x);
  Uncopyable y(-1);
  EXPECT_NONFATAL_FAILURE(EXPECT_PRED1(IsPositiveUncopyable, y),
    "IsPositiveUncopyable(y) evaluates to false, where\ny evaluates to -1");
  EXPECT_EQ(x, x);
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(x, y),
                          "Expected equality of these values:\n"
                          "  x\n    Which is: 5\n  y\n    Which is: -1");
}

enum NamedEnum {
  kE1 = 0,
  kE2 = 1
};

TEST(AssertionTest, NamedEnum) {
  EXPECT_EQ(kE1, kE1);
  EXPECT_LT(kE1, kE2);
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(kE1, kE2), "Which is: 0");
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(kE1, kE2), "Which is: 1");
}

// Sun Studio and HP aCC2reject this code.
#if !defined(__SUNPRO_CC) && !defined(__HP_aCC)

// Tests using assertions with anonymous enums.
enum {
  kCaseA = -1,

# if GTEST_OS_LINUX

  // We want to test the case where the size of the anonymous enum is
  // larger than sizeof(int), to make sure our implementation of the
  // assertions doesn't truncate the enums.  However, MSVC
  // (incorrectly) doesn't allow an enum value to exceed the range of
  // an int, so this has to be conditionally compiled.
  //
  // On Linux, kCaseB and kCaseA have the same value when truncated to
  // int size.  We want to test whether this will confuse the
  // assertions.
  kCaseB = testing::internal::kMaxBiggestInt,

# else

  kCaseB = INT_MAX,

# endif  // GTEST_OS_LINUX

  kCaseC = 42
};

TEST(AssertionTest, AnonymousEnum) {
# if GTEST_OS_LINUX

  EXPECT_EQ(static_cast<int>(kCaseA), static_cast<int>(kCaseB));

# endif  // GTEST_OS_LINUX

  EXPECT_EQ(kCaseA, kCaseA);
  EXPECT_NE(kCaseA, kCaseB);
  EXPECT_LT(kCaseA, kCaseB);
  EXPECT_LE(kCaseA, kCaseB);
  EXPECT_GT(kCaseB, kCaseA);
  EXPECT_GE(kCaseA, kCaseA);
  EXPECT_NONFATAL_FAILURE(EXPECT_GE(kCaseA, kCaseB),
                          "(kCaseA) >= (kCaseB)");
  EXPECT_NONFATAL_FAILURE(EXPECT_GE(kCaseA, kCaseC),
                          "-1 vs 42");

  ASSERT_EQ(kCaseA, kCaseA);
  ASSERT_NE(kCaseA, kCaseB);
  ASSERT_LT(kCaseA, kCaseB);
  ASSERT_LE(kCaseA, kCaseB);
  ASSERT_GT(kCaseB, kCaseA);
  ASSERT_GE(kCaseA, kCaseA);

# ifndef __BORLANDC__

  // ICE's in C++Builder.
  EXPECT_FATAL_FAILURE(ASSERT_EQ(kCaseA, kCaseB),
                       "  kCaseB\n    Which is: ");
  EXPECT_FATAL_FAILURE(ASSERT_EQ(kCaseA, kCaseC),
                       "\n    Which is: 42");
# endif

  EXPECT_FATAL_FAILURE(ASSERT_EQ(kCaseA, kCaseC),
                       "\n    Which is: -1");
}

#endif  // !GTEST_OS_MAC && !defined(__SUNPRO_CC)

#if GTEST_OS_WINDOWS

static HRESULT UnexpectedHRESULTFailure() {
  return E_UNEXPECTED;
}

static HRESULT OkHRESULTSuccess() {
  return S_OK;
}

static HRESULT FalseHRESULTSuccess() {
  return S_FALSE;
}

// HRESULT assertion tests test both zero and non-zero
// success codes as well as failure message for each.
//
// Windows CE doesn't support message texts.
TEST(HRESULTAssertionTest, EXPECT_HRESULT_SUCCEEDED) {
  EXPECT_HRESULT_SUCCEEDED(S_OK);
  EXPECT_HRESULT_SUCCEEDED(S_FALSE);

  EXPECT_NONFATAL_FAILURE(EXPECT_HRESULT_SUCCEEDED(UnexpectedHRESULTFailure()),
    "Expected: (UnexpectedHRESULTFailure()) succeeds.\n"
    "  Actual: 0x8000FFFF");
}

TEST(HRESULTAssertionTest, ASSERT_HRESULT_SUCCEEDED) {
  ASSERT_HRESULT_SUCCEEDED(S_OK);
  ASSERT_HRESULT_SUCCEEDED(S_FALSE);

  EXPECT_FATAL_FAILURE(ASSERT_HRESULT_SUCCEEDED(UnexpectedHRESULTFailure()),
    "Expected: (UnexpectedHRESULTFailure()) succeeds.\n"
    "  Actual: 0x8000FFFF");
}

TEST(HRESULTAssertionTest, EXPECT_HRESULT_FAILED) {
  EXPECT_HRESULT_FAILED(E_UNEXPECTED);

  EXPECT_NONFATAL_FAILURE(EXPECT_HRESULT_FAILED(OkHRESULTSuccess()),
    "Expected: (OkHRESULTSuccess()) fails.\n"
    "  Actual: 0x0");
  EXPECT_NONFATAL_FAILURE(EXPECT_HRESULT_FAILED(FalseHRESULTSuccess()),
    "Expected: (FalseHRESULTSuccess()) fails.\n"
    "  Actual: 0x1");
}

TEST(HRESULTAssertionTest, ASSERT_HRESULT_FAILED) {
  ASSERT_HRESULT_FAILED(E_UNEXPECTED);

# ifndef __BORLANDC__

  // ICE's in C++Builder 2007 and 2009.
  EXPECT_FATAL_FAILURE(ASSERT_HRESULT_FAILED(OkHRESULTSuccess()),
    "Expected: (OkHRESULTSuccess()) fails.\n"
    "  Actual: 0x0");
# endif

  EXPECT_FATAL_FAILURE(ASSERT_HRESULT_FAILED(FalseHRESULTSuccess()),
    "Expected: (FalseHRESULTSuccess()) fails.\n"
    "  Actual: 0x1");
}

// Tests that streaming to the HRESULT macros works.
TEST(HRESULTAssertionTest, Streaming) {
  EXPECT_HRESULT_SUCCEEDED(S_OK) << "unexpected failure";
  ASSERT_HRESULT_SUCCEEDED(S_OK) << "unexpected failure";
  EXPECT_HRESULT_FAILED(E_UNEXPECTED) << "unexpected failure";
  ASSERT_HRESULT_FAILED(E_UNEXPECTED) << "unexpected failure";

  EXPECT_NONFATAL_FAILURE(
      EXPECT_HRESULT_SUCCEEDED(E_UNEXPECTED) << "expected failure",
      "expected failure");

# ifndef __BORLANDC__

  // ICE's in C++Builder 2007 and 2009.
  EXPECT_FATAL_FAILURE(
      ASSERT_HRESULT_SUCCEEDED(E_UNEXPECTED) << "expected failure",
      "expected failure");
# endif

  EXPECT_NONFATAL_FAILURE(
      EXPECT_HRESULT_FAILED(S_OK) << "expected failure",
      "expected failure");

  EXPECT_FATAL_FAILURE(
      ASSERT_HRESULT_FAILED(S_OK) << "expected failure",
      "expected failure");
}

#endif  // GTEST_OS_WINDOWS

#ifdef __BORLANDC__
// Silences warnings: "Condition is always true", "Unreachable code"
# pragma option push -w-ccc -w-rch
#endif

// Tests that the assertion macros behave like single statements.
TEST(AssertionSyntaxTest, BasicAssertionsBehavesLikeSingleStatement) {
  if (AlwaysFalse())
    ASSERT_TRUE(false) << "This should never be executed; "
                          "It's a compilation test only.";

  if (AlwaysTrue())
    EXPECT_FALSE(false);
  else
    ;  // NOLINT

  if (AlwaysFalse())
    ASSERT_LT(1, 3);

  if (AlwaysFalse())
    ;  // NOLINT
  else
    EXPECT_GT(3, 2) << "";
}

#if GTEST_HAS_EXCEPTIONS
// Tests that the compiler will not complain about unreachable code in the
// EXPECT_THROW/EXPECT_ANY_THROW/EXPECT_NO_THROW macros.
TEST(ExpectThrowTest, DoesNotGenerateUnreachableCodeWarning) {
  int n = 0;

  EXPECT_THROW(throw 1, int);
  EXPECT_NONFATAL_FAILURE(EXPECT_THROW(n++, int), "");
  EXPECT_NONFATAL_FAILURE(EXPECT_THROW(throw 1, const char*), "");
  EXPECT_NO_THROW(n++);
  EXPECT_NONFATAL_FAILURE(EXPECT_NO_THROW(throw 1), "");
  EXPECT_ANY_THROW(throw 1);
  EXPECT_NONFATAL_FAILURE(EXPECT_ANY_THROW(n++), "");
}

TEST(AssertionSyntaxTest, ExceptionAssertionsBehavesLikeSingleStatement) {
  if (AlwaysFalse())
    EXPECT_THROW(ThrowNothing(), bool);

  if (AlwaysTrue())
    EXPECT_THROW(ThrowAnInteger(), int);
  else
    ;  // NOLINT

  if (AlwaysFalse())
    EXPECT_NO_THROW(ThrowAnInteger());

  if (AlwaysTrue())
    EXPECT_NO_THROW(ThrowNothing());
  else
    ;  // NOLINT

  if (AlwaysFalse())
    EXPECT_ANY_THROW(ThrowNothing());

  if (AlwaysTrue())
    EXPECT_ANY_THROW(ThrowAnInteger());
  else
    ;  // NOLINT
}
#endif  // GTEST_HAS_EXCEPTIONS

TEST(AssertionSyntaxTest, NoFatalFailureAssertionsBehavesLikeSingleStatement) {
  if (AlwaysFalse())
    EXPECT_NO_FATAL_FAILURE(FAIL()) << "This should never be executed. "
                                    << "It's a compilation test only.";
  else
    ;  // NOLINT

  if (AlwaysFalse())
    ASSERT_NO_FATAL_FAILURE(FAIL()) << "";
  else
    ;  // NOLINT

  if (AlwaysTrue())
    EXPECT_NO_FATAL_FAILURE(SUCCEED());
  else
    ;  // NOLINT

  if (AlwaysFalse())
    ;  // NOLINT
  else
    ASSERT_NO_FATAL_FAILURE(SUCCEED());
}

// Tests that the assertion macros work well with switch statements.
TEST(AssertionSyntaxTest, WorksWithSwitch) {
  switch (0) {
    case 1:
      break;
    default:
      ASSERT_TRUE(true);
  }

  switch (0)
    case 0:
      EXPECT_FALSE(false) << "EXPECT_FALSE failed in switch case";

  // Binary assertions are implemented using a different code path
  // than the Boolean assertions.  Hence we test them separately.
  switch (0) {
    case 1:
    default:
      ASSERT_EQ(1, 1) << "ASSERT_EQ failed in default switch handler";
  }

  switch (0)
    case 0:
      EXPECT_NE(1, 2);
}

#if GTEST_HAS_EXCEPTIONS

void ThrowAString() {
    throw "std::string";
}

// Test that the exception assertion macros compile and work with const
// type qualifier.
TEST(AssertionSyntaxTest, WorksWithConst) {
    ASSERT_THROW(ThrowAString(), const char*);

    EXPECT_THROW(ThrowAString(), const char*);
}

#endif  // GTEST_HAS_EXCEPTIONS

}  // namespace

namespace testing {

// Tests that Google Test tracks SUCCEED*.
TEST(SuccessfulAssertionTest, SUCCEED) {
  SUCCEED();
  SUCCEED() << "OK";
  EXPECT_EQ(2, GetUnitTestImpl()->current_test_result()->total_part_count());
}

// Tests that Google Test doesn't track successful EXPECT_*.
TEST(SuccessfulAssertionTest, EXPECT) {
  EXPECT_TRUE(true);
  EXPECT_EQ(0, GetUnitTestImpl()->current_test_result()->total_part_count());
}

// Tests that Google Test doesn't track successful EXPECT_STR*.
TEST(SuccessfulAssertionTest, EXPECT_STR) {
  EXPECT_STREQ("", "");
  EXPECT_EQ(0, GetUnitTestImpl()->current_test_result()->total_part_count());
}

// Tests that Google Test doesn't track successful ASSERT_*.
TEST(SuccessfulAssertionTest, ASSERT) {
  ASSERT_TRUE(true);
  EXPECT_EQ(0, GetUnitTestImpl()->current_test_result()->total_part_count());
}

// Tests that Google Test doesn't track successful ASSERT_STR*.
TEST(SuccessfulAssertionTest, ASSERT_STR) {
  ASSERT_STREQ("", "");
  EXPECT_EQ(0, GetUnitTestImpl()->current_test_result()->total_part_count());
}

}  // namespace testing

namespace {

// Tests the message streaming variation of assertions.

TEST(AssertionWithMessageTest, EXPECT) {
  EXPECT_EQ(1, 1) << "This should succeed.";
  EXPECT_NONFATAL_FAILURE(EXPECT_NE(1, 1) << "Expected failure #1.",
                          "Expected failure #1");
  EXPECT_LE(1, 2) << "This should succeed.";
  EXPECT_NONFATAL_FAILURE(EXPECT_LT(1, 0) << "Expected failure #2.",
                          "Expected failure #2.");
  EXPECT_GE(1, 0) << "This should succeed.";
  EXPECT_NONFATAL_FAILURE(EXPECT_GT(1, 2) << "Expected failure #3.",
                          "Expected failure #3.");

  EXPECT_STREQ("1", "1") << "This should succeed.";
  EXPECT_NONFATAL_FAILURE(EXPECT_STRNE("1", "1") << "Expected failure #4.",
                          "Expected failure #4.");
  EXPECT_STRCASEEQ("a", "A") << "This should succeed.";
  EXPECT_NONFATAL_FAILURE(EXPECT_STRCASENE("a", "A") << "Expected failure #5.",
                          "Expected failure #5.");

  EXPECT_FLOAT_EQ(1, 1) << "This should succeed.";
  EXPECT_NONFATAL_FAILURE(EXPECT_DOUBLE_EQ(1, 1.2) << "Expected failure #6.",
                          "Expected failure #6.");
  EXPECT_NEAR(1, 1.1, 0.2) << "This should succeed.";
}

TEST(AssertionWithMessageTest, ASSERT) {
  ASSERT_EQ(1, 1) << "This should succeed.";
  ASSERT_NE(1, 2) << "This should succeed.";
  ASSERT_LE(1, 2) << "This should succeed.";
  ASSERT_LT(1, 2) << "This should succeed.";
  ASSERT_GE(1, 0) << "This should succeed.";
  EXPECT_FATAL_FAILURE(ASSERT_GT(1, 2) << "Expected failure.",
                       "Expected failure.");
}

TEST(AssertionWithMessageTest, ASSERT_STR) {
  ASSERT_STREQ("1", "1") << "This should succeed.";
  ASSERT_STRNE("1", "2") << "This should succeed.";
  ASSERT_STRCASEEQ("a", "A") << "This should succeed.";
  EXPECT_FATAL_FAILURE(ASSERT_STRCASENE("a", "A") << "Expected failure.",
                       "Expected failure.");
}

TEST(AssertionWithMessageTest, ASSERT_FLOATING) {
  ASSERT_FLOAT_EQ(1, 1) << "This should succeed.";
  ASSERT_DOUBLE_EQ(1, 1) << "This should succeed.";
  EXPECT_FATAL_FAILURE(ASSERT_NEAR(1,1.2, 0.1) << "Expect failure.",  // NOLINT
                       "Expect failure.");
  // To work around a bug in gcc 2.95.0, there is intentionally no
  // space after the first comma in the previous statement.
}

// Tests using ASSERT_FALSE with a streamed message.
TEST(AssertionWithMessageTest, ASSERT_FALSE) {
  ASSERT_FALSE(false) << "This shouldn't fail.";
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_FALSE(true) << "Expected failure: " << 2 << " > " << 1
                       << " evaluates to " << true;
  }, "Expected failure");
}

// Tests using FAIL with a streamed message.
TEST(AssertionWithMessageTest, FAIL) {
  EXPECT_FATAL_FAILURE(FAIL() << 0,
                       "0");
}

// Tests using SUCCEED with a streamed message.
TEST(AssertionWithMessageTest, SUCCEED) {
  SUCCEED() << "Success == " << 1;
}

// Tests using ASSERT_TRUE with a streamed message.
TEST(AssertionWithMessageTest, ASSERT_TRUE) {
  ASSERT_TRUE(true) << "This should succeed.";
  ASSERT_TRUE(true) << true;
  EXPECT_FATAL_FAILURE(
      {  // NOLINT
        ASSERT_TRUE(false) << static_cast<const char*>(nullptr)
                           << static_cast<char*>(nullptr);
      },
      "(null)(null)");
}

#if GTEST_OS_WINDOWS
// Tests using wide strings in assertion messages.
TEST(AssertionWithMessageTest, WideStringMessage) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_TRUE(false) << L"This failure is expected.\x8119";
  }, "This failure is expected.");
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_EQ(1, 2) << "This failure is "
                    << L"expected too.\x8120";
  }, "This failure is expected too.");
}
#endif  // GTEST_OS_WINDOWS

// Tests EXPECT_TRUE.
TEST(ExpectTest, EXPECT_TRUE) {
  EXPECT_TRUE(true) << "Intentional success";
  EXPECT_NONFATAL_FAILURE(EXPECT_TRUE(false) << "Intentional failure #1.",
                          "Intentional failure #1.");
  EXPECT_NONFATAL_FAILURE(EXPECT_TRUE(false) << "Intentional failure #2.",
                          "Intentional failure #2.");
  EXPECT_TRUE(2 > 1);  // NOLINT
  EXPECT_NONFATAL_FAILURE(EXPECT_TRUE(2 < 1),
                          "Value of: 2 < 1\n"
                          "  Actual: false\n"
                          "Expected: true");
  EXPECT_NONFATAL_FAILURE(EXPECT_TRUE(2 > 3),
                          "2 > 3");
}

// Tests EXPECT_TRUE(predicate) for predicates returning AssertionResult.
TEST(ExpectTest, ExpectTrueWithAssertionResult) {
  EXPECT_TRUE(ResultIsEven(2));
  EXPECT_NONFATAL_FAILURE(EXPECT_TRUE(ResultIsEven(3)),
                          "Value of: ResultIsEven(3)\n"
                          "  Actual: false (3 is odd)\n"
                          "Expected: true");
  EXPECT_TRUE(ResultIsEvenNoExplanation(2));
  EXPECT_NONFATAL_FAILURE(EXPECT_TRUE(ResultIsEvenNoExplanation(3)),
                          "Value of: ResultIsEvenNoExplanation(3)\n"
                          "  Actual: false (3 is odd)\n"
                          "Expected: true");
}

// Tests EXPECT_FALSE with a streamed message.
TEST(ExpectTest, EXPECT_FALSE) {
  EXPECT_FALSE(2 < 1);  // NOLINT
  EXPECT_FALSE(false) << "Intentional success";
  EXPECT_NONFATAL_FAILURE(EXPECT_FALSE(true) << "Intentional failure #1.",
                          "Intentional failure #1.");
  EXPECT_NONFATAL_FAILURE(EXPECT_FALSE(true) << "Intentional failure #2.",
                          "Intentional failure #2.");
  EXPECT_NONFATAL_FAILURE(EXPECT_FALSE(2 > 1),
                          "Value of: 2 > 1\n"
                          "  Actual: true\n"
                          "Expected: false");
  EXPECT_NONFATAL_FAILURE(EXPECT_FALSE(2 < 3),
                          "2 < 3");
}

// Tests EXPECT_FALSE(predicate) for predicates returning AssertionResult.
TEST(ExpectTest, ExpectFalseWithAssertionResult) {
  EXPECT_FALSE(ResultIsEven(3));
  EXPECT_NONFATAL_FAILURE(EXPECT_FALSE(ResultIsEven(2)),
                          "Value of: ResultIsEven(2)\n"
                          "  Actual: true (2 is even)\n"
                          "Expected: false");
  EXPECT_FALSE(ResultIsEvenNoExplanation(3));
  EXPECT_NONFATAL_FAILURE(EXPECT_FALSE(ResultIsEvenNoExplanation(2)),
                          "Value of: ResultIsEvenNoExplanation(2)\n"
                          "  Actual: true\n"
                          "Expected: false");
}

#ifdef __BORLANDC__
// Restores warnings after previous "#pragma option push" suppressed them
# pragma option pop
#endif

// Tests EXPECT_EQ.
TEST(ExpectTest, EXPECT_EQ) {
  EXPECT_EQ(5, 2 + 3);
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(5, 2*3),
                          "Expected equality of these values:\n"
                          "  5\n"
                          "  2*3\n"
                          "    Which is: 6");
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(5, 2 - 3),
                          "2 - 3");
}

// Tests using EXPECT_EQ on double values.  The purpose is to make
// sure that the specialization we did for integer and anonymous enums
// isn't used for double arguments.
TEST(ExpectTest, EXPECT_EQ_Double) {
  // A success.
  EXPECT_EQ(5.6, 5.6);

  // A failure.
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(5.1, 5.2),
                          "5.1");
}

// Tests EXPECT_EQ(NULL, pointer).
TEST(ExpectTest, EXPECT_EQ_NULL) {
  // A success.
  const char* p = nullptr;
  // Some older GCC versions may issue a spurious warning in this or the next
  // assertion statement. This warning should not be suppressed with
  // static_cast since the test verifies the ability to use bare NULL as the
  // expected parameter to the macro.
  EXPECT_EQ(nullptr, p);

  // A failure.
  int n = 0;
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(nullptr, &n), "  &n\n    Which is:");
}

// Tests EXPECT_EQ(0, non_pointer).  Since the literal 0 can be
// treated as a null pointer by the compiler, we need to make sure
// that EXPECT_EQ(0, non_pointer) isn't interpreted by Google Test as
// EXPECT_EQ(static_cast<void*>(NULL), non_pointer).
TEST(ExpectTest, EXPECT_EQ_0) {
  int n = 0;

  // A success.
  EXPECT_EQ(0, n);

  // A failure.
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(0, 5.6),
                          "  0\n  5.6");
}

// Tests EXPECT_NE.
TEST(ExpectTest, EXPECT_NE) {
  EXPECT_NE(6, 7);

  EXPECT_NONFATAL_FAILURE(EXPECT_NE('a', 'a'),
                          "Expected: ('a') != ('a'), "
                          "actual: 'a' (97, 0x61) vs 'a' (97, 0x61)");
  EXPECT_NONFATAL_FAILURE(EXPECT_NE(2, 2),
                          "2");
  char* const p0 = nullptr;
  EXPECT_NONFATAL_FAILURE(EXPECT_NE(p0, p0),
                          "p0");
  // Only way to get the Nokia compiler to compile the cast
  // is to have a separate void* variable first. Putting
  // the two casts on the same line doesn't work, neither does
  // a direct C-style to char*.
  void* pv1 = (void*)0x1234;  // NOLINT
  char* const p1 = reinterpret_cast<char*>(pv1);
  EXPECT_NONFATAL_FAILURE(EXPECT_NE(p1, p1),
                          "p1");
}

// Tests EXPECT_LE.
TEST(ExpectTest, EXPECT_LE) {
  EXPECT_LE(2, 3);
  EXPECT_LE(2, 2);
  EXPECT_NONFATAL_FAILURE(EXPECT_LE(2, 0),
                          "Expected: (2) <= (0), actual: 2 vs 0");
  EXPECT_NONFATAL_FAILURE(EXPECT_LE(1.1, 0.9),
                          "(1.1) <= (0.9)");
}

// Tests EXPECT_LT.
TEST(ExpectTest, EXPECT_LT) {
  EXPECT_LT(2, 3);
  EXPECT_NONFATAL_FAILURE(EXPECT_LT(2, 2),
                          "Expected: (2) < (2), actual: 2 vs 2");
  EXPECT_NONFATAL_FAILURE(EXPECT_LT(2, 1),
                          "(2) < (1)");
}

// Tests EXPECT_GE.
TEST(ExpectTest, EXPECT_GE) {
  EXPECT_GE(2, 1);
  EXPECT_GE(2, 2);
  EXPECT_NONFATAL_FAILURE(EXPECT_GE(2, 3),
                          "Expected: (2) >= (3), actual: 2 vs 3");
  EXPECT_NONFATAL_FAILURE(EXPECT_GE(0.9, 1.1),
                          "(0.9) >= (1.1)");
}

// Tests EXPECT_GT.
TEST(ExpectTest, EXPECT_GT) {
  EXPECT_GT(2, 1);
  EXPECT_NONFATAL_FAILURE(EXPECT_GT(2, 2),
                          "Expected: (2) > (2), actual: 2 vs 2");
  EXPECT_NONFATAL_FAILURE(EXPECT_GT(2, 3),
                          "(2) > (3)");
}

#if GTEST_HAS_EXCEPTIONS

// Tests EXPECT_THROW.
TEST(ExpectTest, EXPECT_THROW) {
  EXPECT_THROW(ThrowAnInteger(), int);
  EXPECT_NONFATAL_FAILURE(EXPECT_THROW(ThrowAnInteger(), bool),
                          "Expected: ThrowAnInteger() throws an exception of "
                          "type bool.\n  Actual: it throws a different type.");
  EXPECT_NONFATAL_FAILURE(
      EXPECT_THROW(ThrowNothing(), bool),
      "Expected: ThrowNothing() throws an exception of type bool.\n"
      "  Actual: it throws nothing.");
}

// Tests EXPECT_NO_THROW.
TEST(ExpectTest, EXPECT_NO_THROW) {
  EXPECT_NO_THROW(ThrowNothing());
  EXPECT_NONFATAL_FAILURE(EXPECT_NO_THROW(ThrowAnInteger()),
                          "Expected: ThrowAnInteger() doesn't throw an "
                          "exception.\n  Actual: it throws.");
}

// Tests EXPECT_ANY_THROW.
TEST(ExpectTest, EXPECT_ANY_THROW) {
  EXPECT_ANY_THROW(ThrowAnInteger());
  EXPECT_NONFATAL_FAILURE(
      EXPECT_ANY_THROW(ThrowNothing()),
      "Expected: ThrowNothing() throws an exception.\n"
      "  Actual: it doesn't.");
}

#endif  // GTEST_HAS_EXCEPTIONS

// Make sure we deal with the precedence of <<.
TEST(ExpectTest, ExpectPrecedence) {
  EXPECT_EQ(1 < 2, true);
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(true, true && false),
                          "  true && false\n    Which is: false");
}


// Tests the StreamableToString() function.

// Tests using StreamableToString() on a scalar.
TEST(StreamableToStringTest, Scalar) {
  EXPECT_STREQ("5", StreamableToString(5).c_str());
}

// Tests using StreamableToString() on a non-char pointer.
TEST(StreamableToStringTest, Pointer) {
  int n = 0;
  int* p = &n;
  EXPECT_STRNE("(null)", StreamableToString(p).c_str());
}

// Tests using StreamableToString() on a NULL non-char pointer.
TEST(StreamableToStringTest, NullPointer) {
  int* p = nullptr;
  EXPECT_STREQ("(null)", StreamableToString(p).c_str());
}

// Tests using StreamableToString() on a C string.
TEST(StreamableToStringTest, CString) {
  EXPECT_STREQ("Foo", StreamableToString("Foo").c_str());
}

// Tests using StreamableToString() on a NULL C string.
TEST(StreamableToStringTest, NullCString) {
  char* p = nullptr;
  EXPECT_STREQ("(null)", StreamableToString(p).c_str());
}

// Tests using streamable values as assertion messages.

// Tests using std::string as an assertion message.
TEST(StreamableTest, string) {
  static const std::string str(
      "This failure message is a std::string, and is expected.");
  EXPECT_FATAL_FAILURE(FAIL() << str,
                       str.c_str());
}

// Tests that we can output strings containing embedded NULs.
// Limited to Linux because we can only do this with std::string's.
TEST(StreamableTest, stringWithEmbeddedNUL) {
  static const char char_array_with_nul[] =
      "Here's a NUL\0 and some more string";
  static const std::string string_with_nul(char_array_with_nul,
                                           sizeof(char_array_with_nul)
                                           - 1);  // drops the trailing NUL
  EXPECT_FATAL_FAILURE(FAIL() << string_with_nul,
                       "Here's a NUL\\0 and some more string");
}

// Tests that we can output a NUL char.
TEST(StreamableTest, NULChar) {
  EXPECT_FATAL_FAILURE({  // NOLINT
    FAIL() << "A NUL" << '\0' << " and some more string";
  }, "A NUL\\0 and some more string");
}

// Tests using int as an assertion message.
TEST(StreamableTest, int) {
  EXPECT_FATAL_FAILURE(FAIL() << 900913,
                       "900913");
}

// Tests using NULL char pointer as an assertion message.
//
// In MSVC, streaming a NULL char * causes access violation.  Google Test
// implemented a workaround (substituting "(null)" for NULL).  This
// tests whether the workaround works.
TEST(StreamableTest, NullCharPtr) {
  EXPECT_FATAL_FAILURE(FAIL() << static_cast<const char*>(nullptr), "(null)");
}

// Tests that basic IO manipulators (endl, ends, and flush) can be
// streamed to testing::Message.
TEST(StreamableTest, BasicIoManip) {
  EXPECT_FATAL_FAILURE({  // NOLINT
    FAIL() << "Line 1." << std::endl
           << "A NUL char " << std::ends << std::flush << " in line 2.";
  }, "Line 1.\nA NUL char \\0 in line 2.");
}

// Tests the macros that haven't been covered so far.

void AddFailureHelper(bool* aborted) {
  *aborted = true;
  ADD_FAILURE() << "Intentional failure.";
  *aborted = false;
}

// Tests ADD_FAILURE.
TEST(MacroTest, ADD_FAILURE) {
  bool aborted = true;
  EXPECT_NONFATAL_FAILURE(AddFailureHelper(&aborted),
                          "Intentional failure.");
  EXPECT_FALSE(aborted);
}

// Tests ADD_FAILURE_AT.
TEST(MacroTest, ADD_FAILURE_AT) {
  // Verifies that ADD_FAILURE_AT does generate a nonfatal failure and
  // the failure message contains the user-streamed part.
  EXPECT_NONFATAL_FAILURE(ADD_FAILURE_AT("foo.cc", 42) << "Wrong!", "Wrong!");

  // Verifies that the user-streamed part is optional.
  EXPECT_NONFATAL_FAILURE(ADD_FAILURE_AT("foo.cc", 42), "Failed");

  // Unfortunately, we cannot verify that the failure message contains
  // the right file path and line number the same way, as
  // EXPECT_NONFATAL_FAILURE() doesn't get to see the file path and
  // line number.  Instead, we do that in googletest-output-test_.cc.
}

// Tests FAIL.
TEST(MacroTest, FAIL) {
  EXPECT_FATAL_FAILURE(FAIL(),
                       "Failed");
  EXPECT_FATAL_FAILURE(FAIL() << "Intentional failure.",
                       "Intentional failure.");
}

// Tests GTEST_FAIL_AT.
TEST(MacroTest, GTEST_FAIL_AT) {
  // Verifies that GTEST_FAIL_AT does generate a fatal failure and
  // the failure message contains the user-streamed part.
  EXPECT_FATAL_FAILURE(GTEST_FAIL_AT("foo.cc", 42) << "Wrong!", "Wrong!");

  // Verifies that the user-streamed part is optional.
  EXPECT_FATAL_FAILURE(GTEST_FAIL_AT("foo.cc", 42), "Failed");

  // See the ADD_FAIL_AT test above to see how we test that the failure message
  // contains the right filename and line number -- the same applies here.
}

// Tests SUCCEED
TEST(MacroTest, SUCCEED) {
  SUCCEED();
  SUCCEED() << "Explicit success.";
}

// Tests for EXPECT_EQ() and ASSERT_EQ().
//
// These tests fail *intentionally*, s.t. the failure messages can be
// generated and tested.
//
// We have different tests for different argument types.

// Tests using bool values in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, Bool) {
  EXPECT_EQ(true,  true);
  EXPECT_FATAL_FAILURE({
      bool false_value = false;
      ASSERT_EQ(false_value, true);
    }, "  false_value\n    Which is: false\n  true");
}

// Tests using int values in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, Int) {
  ASSERT_EQ(32, 32);
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(32, 33),
                          "  32\n  33");
}

// Tests using time_t values in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, Time_T) {
  EXPECT_EQ(static_cast<time_t>(0),
            static_cast<time_t>(0));
  EXPECT_FATAL_FAILURE(ASSERT_EQ(static_cast<time_t>(0),
                                 static_cast<time_t>(1234)),
                       "1234");
}

// Tests using char values in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, Char) {
  ASSERT_EQ('z', 'z');
  const char ch = 'b';
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ('\0', ch),
                          "  ch\n    Which is: 'b'");
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ('a', ch),
                          "  ch\n    Which is: 'b'");
}

// Tests using wchar_t values in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, WideChar) {
  EXPECT_EQ(L'b', L'b');

  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(L'\0', L'x'),
                          "Expected equality of these values:\n"
                          "  L'\0'\n"
                          "    Which is: L'\0' (0, 0x0)\n"
                          "  L'x'\n"
                          "    Which is: L'x' (120, 0x78)");

  static wchar_t wchar;
  wchar = L'b';
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(L'a', wchar),
                          "wchar");
  wchar = 0x8119;
  EXPECT_FATAL_FAILURE(ASSERT_EQ(static_cast<wchar_t>(0x8120), wchar),
                       "  wchar\n    Which is: L'");
}

// Tests using ::std::string values in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, StdString) {
  // Compares a const char* to an std::string that has identical
  // content.
  ASSERT_EQ("Test", ::std::string("Test"));

  // Compares two identical std::strings.
  static const ::std::string str1("A * in the middle");
  static const ::std::string str2(str1);
  EXPECT_EQ(str1, str2);

  // Compares a const char* to an std::string that has different
  // content
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ("Test", ::std::string("test")),
                          "\"test\"");

  // Compares an std::string to a char* that has different content.
  char* const p1 = const_cast<char*>("foo");
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(::std::string("bar"), p1),
                          "p1");

  // Compares two std::strings that have different contents, one of
  // which having a NUL character in the middle.  This should fail.
  static ::std::string str3(str1);
  str3.at(2) = '\0';
  EXPECT_FATAL_FAILURE(ASSERT_EQ(str1, str3),
                       "  str3\n    Which is: \"A \\0 in the middle\"");
}

#if GTEST_HAS_STD_WSTRING

// Tests using ::std::wstring values in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, StdWideString) {
  // Compares two identical std::wstrings.
  const ::std::wstring wstr1(L"A * in the middle");
  const ::std::wstring wstr2(wstr1);
  ASSERT_EQ(wstr1, wstr2);

  // Compares an std::wstring to a const wchar_t* that has identical
  // content.
  const wchar_t kTestX8119[] = { 'T', 'e', 's', 't', 0x8119, '\0' };
  EXPECT_EQ(::std::wstring(kTestX8119), kTestX8119);

  // Compares an std::wstring to a const wchar_t* that has different
  // content.
  const wchar_t kTestX8120[] = { 'T', 'e', 's', 't', 0x8120, '\0' };
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    EXPECT_EQ(::std::wstring(kTestX8119), kTestX8120);
  }, "kTestX8120");

  // Compares two std::wstrings that have different contents, one of
  // which having a NUL character in the middle.
  ::std::wstring wstr3(wstr1);
  wstr3.at(2) = L'\0';
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(wstr1, wstr3),
                          "wstr3");

  // Compares a wchar_t* to an std::wstring that has different
  // content.
  EXPECT_FATAL_FAILURE({  // NOLINT
    ASSERT_EQ(const_cast<wchar_t*>(L"foo"), ::std::wstring(L"bar"));
  }, "");
}

#endif  // GTEST_HAS_STD_WSTRING

// Tests using char pointers in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, CharPointer) {
  char* const p0 = nullptr;
  // Only way to get the Nokia compiler to compile the cast
  // is to have a separate void* variable first. Putting
  // the two casts on the same line doesn't work, neither does
  // a direct C-style to char*.
  void* pv1 = (void*)0x1234;  // NOLINT
  void* pv2 = (void*)0xABC0;  // NOLINT
  char* const p1 = reinterpret_cast<char*>(pv1);
  char* const p2 = reinterpret_cast<char*>(pv2);
  ASSERT_EQ(p1, p1);

  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(p0, p2),
                          "  p2\n    Which is:");
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(p1, p2),
                          "  p2\n    Which is:");
  EXPECT_FATAL_FAILURE(ASSERT_EQ(reinterpret_cast<char*>(0x1234),
                                 reinterpret_cast<char*>(0xABC0)),
                       "ABC0");
}

// Tests using wchar_t pointers in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, WideCharPointer) {
  wchar_t* const p0 = nullptr;
  // Only way to get the Nokia compiler to compile the cast
  // is to have a separate void* variable first. Putting
  // the two casts on the same line doesn't work, neither does
  // a direct C-style to char*.
  void* pv1 = (void*)0x1234;  // NOLINT
  void* pv2 = (void*)0xABC0;  // NOLINT
  wchar_t* const p1 = reinterpret_cast<wchar_t*>(pv1);
  wchar_t* const p2 = reinterpret_cast<wchar_t*>(pv2);
  EXPECT_EQ(p0, p0);

  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(p0, p2),
                          "  p2\n    Which is:");
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(p1, p2),
                          "  p2\n    Which is:");
  void* pv3 = (void*)0x1234;  // NOLINT
  void* pv4 = (void*)0xABC0;  // NOLINT
  const wchar_t* p3 = reinterpret_cast<const wchar_t*>(pv3);
  const wchar_t* p4 = reinterpret_cast<const wchar_t*>(pv4);
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(p3, p4),
                          "p4");
}

// Tests using other types of pointers in {EXPECT|ASSERT}_EQ.
TEST(EqAssertionTest, OtherPointer) {
  ASSERT_EQ(static_cast<const int*>(nullptr), static_cast<const int*>(nullptr));
  EXPECT_FATAL_FAILURE(ASSERT_EQ(static_cast<const int*>(nullptr),
                                 reinterpret_cast<const int*>(0x1234)),
                       "0x1234");
}

// A class that supports binary comparison operators but not streaming.
class UnprintableChar {
 public:
  explicit UnprintableChar(char ch) : char_(ch) {}

  bool operator==(const UnprintableChar& rhs) const {
    return char_ == rhs.char_;
  }
  bool operator!=(const UnprintableChar& rhs) const {
    return char_ != rhs.char_;
  }
  bool operator<(const UnprintableChar& rhs) const {
    return char_ < rhs.char_;
  }
  bool operator<=(const UnprintableChar& rhs) const {
    return char_ <= rhs.char_;
  }
  bool operator>(const UnprintableChar& rhs) const {
    return char_ > rhs.char_;
  }
  bool operator>=(const UnprintableChar& rhs) const {
    return char_ >= rhs.char_;
  }

 private:
  char char_;
};

// Tests that ASSERT_EQ() and friends don't require the arguments to
// be printable.
TEST(ComparisonAssertionTest, AcceptsUnprintableArgs) {
  const UnprintableChar x('x'), y('y');
  ASSERT_EQ(x, x);
  EXPECT_NE(x, y);
  ASSERT_LT(x, y);
  EXPECT_LE(x, y);
  ASSERT_GT(y, x);
  EXPECT_GE(x, x);

  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(x, y), "1-byte object <78>");
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(x, y), "1-byte object <79>");
  EXPECT_NONFATAL_FAILURE(EXPECT_LT(y, y), "1-byte object <79>");
  EXPECT_NONFATAL_FAILURE(EXPECT_GT(x, y), "1-byte object <78>");
  EXPECT_NONFATAL_FAILURE(EXPECT_GT(x, y), "1-byte object <79>");

  // Code tested by EXPECT_FATAL_FAILURE cannot reference local
  // variables, so we have to write UnprintableChar('x') instead of x.
#ifndef __BORLANDC__
  // ICE's in C++Builder.
  EXPECT_FATAL_FAILURE(ASSERT_NE(UnprintableChar('x'), UnprintableChar('x')),
                       "1-byte object <78>");
  EXPECT_FATAL_FAILURE(ASSERT_LE(UnprintableChar('y'), UnprintableChar('x')),
                       "1-byte object <78>");
#endif
  EXPECT_FATAL_FAILURE(ASSERT_LE(UnprintableChar('y'), UnprintableChar('x')),
                       "1-byte object <79>");
  EXPECT_FATAL_FAILURE(ASSERT_GE(UnprintableChar('x'), UnprintableChar('y')),
                       "1-byte object <78>");
  EXPECT_FATAL_FAILURE(ASSERT_GE(UnprintableChar('x'), UnprintableChar('y')),
                       "1-byte object <79>");
}

// Tests the FRIEND_TEST macro.

// This class has a private member we want to test.  We will test it
// both in a TEST and in a TEST_F.
class Foo {
 public:
  Foo() {}

 private:
  int Bar() const { return 1; }

  // Declares the friend tests that can access the private member
  // Bar().
  FRIEND_TEST(FRIEND_TEST_Test, TEST);
  FRIEND_TEST(FRIEND_TEST_Test2, TEST_F);
};

// Tests that the FRIEND_TEST declaration allows a TEST to access a
// class's private members.  This should compile.
TEST(FRIEND_TEST_Test, TEST) {
  ASSERT_EQ(1, Foo().Bar());
}

// The fixture needed to test using FRIEND_TEST with TEST_F.
class FRIEND_TEST_Test2 : public Test {
 protected:
  Foo foo;
};

// Tests that the FRIEND_TEST declaration allows a TEST_F to access a
// class's private members.  This should compile.
TEST_F(FRIEND_TEST_Test2, TEST_F) {
  ASSERT_EQ(1, foo.Bar());
}

// Tests the life cycle of Test objects.

// The test fixture for testing the life cycle of Test objects.
//
// This class counts the number of live test objects that uses this
// fixture.
class TestLifeCycleTest : public Test {
 protected:
  // Constructor.  Increments the number of test objects that uses
  // this fixture.
  TestLifeCycleTest() { count_++; }

  // Destructor.  Decrements the number of test objects that uses this
  // fixture.
  ~TestLifeCycleTest() override { count_--; }

  // Returns the number of live test objects that uses this fixture.
  int count() const { return count_; }

 private:
  static int count_;
};

int TestLifeCycleTest::count_ = 0;

// Tests the life cycle of test objects.
TEST_F(TestLifeCycleTest, Test1) {
  // There should be only one test object in this test case that's
  // currently alive.
  ASSERT_EQ(1, count());
}

// Tests the life cycle of test objects.
TEST_F(TestLifeCycleTest, Test2) {
  // After Test1 is done and Test2 is started, there should still be
  // only one live test object, as the object for Test1 should've been
  // deleted.
  ASSERT_EQ(1, count());
}

}  // namespace

// Tests that the copy constructor works when it is NOT optimized away by
// the compiler.
TEST(AssertionResultTest, CopyConstructorWorksWhenNotOptimied) {
  // Checks that the copy constructor doesn't try to dereference NULL pointers
  // in the source object.
  AssertionResult r1 = AssertionSuccess();
  AssertionResult r2 = r1;
  // The following line is added to prevent the compiler from optimizing
  // away the constructor call.
  r1 << "abc";

  AssertionResult r3 = r1;
  EXPECT_EQ(static_cast<bool>(r3), static_cast<bool>(r1));
  EXPECT_STREQ("abc", r1.message());
}

// Tests that AssertionSuccess and AssertionFailure construct
// AssertionResult objects as expected.
TEST(AssertionResultTest, ConstructionWorks) {
  AssertionResult r1 = AssertionSuccess();
  EXPECT_TRUE(r1);
  EXPECT_STREQ("", r1.message());

  AssertionResult r2 = AssertionSuccess() << "abc";
  EXPECT_TRUE(r2);
  EXPECT_STREQ("abc", r2.message());

  AssertionResult r3 = AssertionFailure();
  EXPECT_FALSE(r3);
  EXPECT_STREQ("", r3.message());

  AssertionResult r4 = AssertionFailure() << "def";
  EXPECT_FALSE(r4);
  EXPECT_STREQ("def", r4.message());

  AssertionResult r5 = AssertionFailure(Message() << "ghi");
  EXPECT_FALSE(r5);
  EXPECT_STREQ("ghi", r5.message());
}

// Tests that the negation flips the predicate result but keeps the message.
TEST(AssertionResultTest, NegationWorks) {
  AssertionResult r1 = AssertionSuccess() << "abc";
  EXPECT_FALSE(!r1);
  EXPECT_STREQ("abc", (!r1).message());

  AssertionResult r2 = AssertionFailure() << "def";
  EXPECT_TRUE(!r2);
  EXPECT_STREQ("def", (!r2).message());
}

TEST(AssertionResultTest, StreamingWorks) {
  AssertionResult r = AssertionSuccess();
  r << "abc" << 'd' << 0 << true;
  EXPECT_STREQ("abcd0true", r.message());
}

TEST(AssertionResultTest, CanStreamOstreamManipulators) {
  AssertionResult r = AssertionSuccess();
  r << "Data" << std::endl << std::flush << std::ends << "Will be visible";
  EXPECT_STREQ("Data\n\\0Will be visible", r.message());
}

// The next test uses explicit conversion operators

TEST(AssertionResultTest, ConstructibleFromContextuallyConvertibleToBool) {
  struct ExplicitlyConvertibleToBool {
    explicit operator bool() const { return value; }
    bool value;
  };
  ExplicitlyConvertibleToBool v1 = {false};
  ExplicitlyConvertibleToBool v2 = {true};
  EXPECT_FALSE(v1);
  EXPECT_TRUE(v2);
}

struct ConvertibleToAssertionResult {
  operator AssertionResult() const { return AssertionResult(true); }
};

TEST(AssertionResultTest, ConstructibleFromImplicitlyConvertible) {
  ConvertibleToAssertionResult obj;
  EXPECT_TRUE(obj);
}

// Tests streaming a user type whose definition and operator << are
// both in the global namespace.
class Base {
 public:
  explicit Base(int an_x) : x_(an_x) {}
  int x() const { return x_; }
 private:
  int x_;
};
std::ostream& operator<<(std::ostream& os,
                         const Base& val) {
  return os << val.x();
}
std::ostream& operator<<(std::ostream& os,
                         const Base* pointer) {
  return os << "(" << pointer->x() << ")";
}

TEST(MessageTest, CanStreamUserTypeInGlobalNameSpace) {
  Message msg;
  Base a(1);

  msg << a << &a;  // Uses ::operator<<.
  EXPECT_STREQ("1(1)", msg.GetString().c_str());
}

// Tests streaming a user type whose definition and operator<< are
// both in an unnamed namespace.
namespace {
class MyTypeInUnnamedNameSpace : public Base {
 public:
  explicit MyTypeInUnnamedNameSpace(int an_x): Base(an_x) {}
};
std::ostream& operator<<(std::ostream& os,
                         const MyTypeInUnnamedNameSpace& val) {
  return os << val.x();
}
std::ostream& operator<<(std::ostream& os,
                         const MyTypeInUnnamedNameSpace* pointer) {
  return os << "(" << pointer->x() << ")";
}
}  // namespace

TEST(MessageTest, CanStreamUserTypeInUnnamedNameSpace) {
  Message msg;
  MyTypeInUnnamedNameSpace a(1);

  msg << a << &a;  // Uses <unnamed_namespace>::operator<<.
  EXPECT_STREQ("1(1)", msg.GetString().c_str());
}

// Tests streaming a user type whose definition and operator<< are
// both in a user namespace.
namespace namespace1 {
class MyTypeInNameSpace1 : public Base {
 public:
  explicit MyTypeInNameSpace1(int an_x): Base(an_x) {}
};
std::ostream& operator<<(std::ostream& os,
                         const MyTypeInNameSpace1& val) {
  return os << val.x();
}
std::ostream& operator<<(std::ostream& os,
                         const MyTypeInNameSpace1* pointer) {
  return os << "(" << pointer->x() << ")";
}
}  // namespace namespace1

TEST(MessageTest, CanStreamUserTypeInUserNameSpace) {
  Message msg;
  namespace1::MyTypeInNameSpace1 a(1);

  msg << a << &a;  // Uses namespace1::operator<<.
  EXPECT_STREQ("1(1)", msg.GetString().c_str());
}

// Tests streaming a user type whose definition is in a user namespace
// but whose operator<< is in the global namespace.
namespace namespace2 {
class MyTypeInNameSpace2 : public ::Base {
 public:
  explicit MyTypeInNameSpace2(int an_x): Base(an_x) {}
};
}  // namespace namespace2
std::ostream& operator<<(std::ostream& os,
                         const namespace2::MyTypeInNameSpace2& val) {
  return os << val.x();
}
std::ostream& operator<<(std::ostream& os,
                         const namespace2::MyTypeInNameSpace2* pointer) {
  return os << "(" << pointer->x() << ")";
}

TEST(MessageTest, CanStreamUserTypeInUserNameSpaceWithStreamOperatorInGlobal) {
  Message msg;
  namespace2::MyTypeInNameSpace2 a(1);

  msg << a << &a;  // Uses ::operator<<.
  EXPECT_STREQ("1(1)", msg.GetString().c_str());
}

// Tests streaming NULL pointers to testing::Message.
TEST(MessageTest, NullPointers) {
  Message msg;
  char* const p1 = nullptr;
  unsigned char* const p2 = nullptr;
  int* p3 = nullptr;
  double* p4 = nullptr;
  bool* p5 = nullptr;
  Message* p6 = nullptr;

  msg << p1 << p2 << p3 << p4 << p5 << p6;
  ASSERT_STREQ("(null)(null)(null)(null)(null)(null)",
               msg.GetString().c_str());
}

// Tests streaming wide strings to testing::Message.
TEST(MessageTest, WideStrings) {
  // Streams a NULL of type const wchar_t*.
  const wchar_t* const_wstr = nullptr;
  EXPECT_STREQ("(null)",
               (Message() << const_wstr).GetString().c_str());

  // Streams a NULL of type wchar_t*.
  wchar_t* wstr = nullptr;
  EXPECT_STREQ("(null)",
               (Message() << wstr).GetString().c_str());

  // Streams a non-NULL of type const wchar_t*.
  const_wstr = L"abc\x8119";
  EXPECT_STREQ("abc\xe8\x84\x99",
               (Message() << const_wstr).GetString().c_str());

  // Streams a non-NULL of type wchar_t*.
  wstr = const_cast<wchar_t*>(const_wstr);
  EXPECT_STREQ("abc\xe8\x84\x99",
               (Message() << wstr).GetString().c_str());
}


// This line tests that we can define tests in the testing namespace.
namespace testing {

// Tests the TestInfo class.

class TestInfoTest : public Test {
 protected:
  static const TestInfo* GetTestInfo(const char* test_name) {
    const TestSuite* const test_suite =
        GetUnitTestImpl()->GetTestSuite("TestInfoTest", "", nullptr, nullptr);

    for (int i = 0; i < test_suite->total_test_count(); ++i) {
      const TestInfo* const test_info = test_suite->GetTestInfo(i);
      if (strcmp(test_name, test_info->name()) == 0)
        return test_info;
    }
    return nullptr;
  }

  static const TestResult* GetTestResult(
      const TestInfo* test_info) {
    return test_info->result();
  }
};

// Tests TestInfo::test_case_name() and TestInfo::name().
TEST_F(TestInfoTest, Names) {
  const TestInfo* const test_info = GetTestInfo("Names");

  ASSERT_STREQ("TestInfoTest", test_info->test_case_name());
  ASSERT_STREQ("Names", test_info->name());
}

// Tests TestInfo::result().
TEST_F(TestInfoTest, result) {
  const TestInfo* const test_info = GetTestInfo("result");

  // Initially, there is no TestPartResult for this test.
  ASSERT_EQ(0, GetTestResult(test_info)->total_part_count());

  // After the previous assertion, there is still none.
  ASSERT_EQ(0, GetTestResult(test_info)->total_part_count());
}

#define VERIFY_CODE_LOCATION \
  const int expected_line = __LINE__ - 1; \
  const TestInfo* const test_info = GetUnitTestImpl()->current_test_info(); \
  ASSERT_TRUE(test_info); \
  EXPECT_STREQ(__FILE__, test_info->file()); \
  EXPECT_EQ(expected_line, test_info->line())

TEST(CodeLocationForTEST, Verify) {
  VERIFY_CODE_LOCATION;
}

class CodeLocationForTESTF : public Test {
};

TEST_F(CodeLocationForTESTF, Verify) {
  VERIFY_CODE_LOCATION;
}

class CodeLocationForTESTP : public TestWithParam<int> {
};

TEST_P(CodeLocationForTESTP, Verify) {
  VERIFY_CODE_LOCATION;
}

INSTANTIATE_TEST_SUITE_P(, CodeLocationForTESTP, Values(0));

template <typename T>
class CodeLocationForTYPEDTEST : public Test {
};

TYPED_TEST_SUITE(CodeLocationForTYPEDTEST, int);

TYPED_TEST(CodeLocationForTYPEDTEST, Verify) {
  VERIFY_CODE_LOCATION;
}

template <typename T>
class CodeLocationForTYPEDTESTP : public Test {
};

TYPED_TEST_SUITE_P(CodeLocationForTYPEDTESTP);

TYPED_TEST_P(CodeLocationForTYPEDTESTP, Verify) {
  VERIFY_CODE_LOCATION;
}

REGISTER_TYPED_TEST_SUITE_P(CodeLocationForTYPEDTESTP, Verify);

INSTANTIATE_TYPED_TEST_SUITE_P(My, CodeLocationForTYPEDTESTP, int);

#undef VERIFY_CODE_LOCATION

// Tests setting up and tearing down a test case.
// Legacy API is deprecated but still available
#ifndef REMOVE_LEGACY_TEST_CASEAPI
class SetUpTestCaseTest : public Test {
 protected:
  // This will be called once before the first test in this test case
  // is run.
  static void SetUpTestCase() {
    printf("Setting up the test case . . .\n");

    // Initializes some shared resource.  In this simple example, we
    // just create a C string.  More complex stuff can be done if
    // desired.
    shared_resource_ = "123";

    // Increments the number of test cases that have been set up.
    counter_++;

    // SetUpTestCase() should be called only once.
    EXPECT_EQ(1, counter_);
  }

  // This will be called once after the last test in this test case is
  // run.
  static void TearDownTestCase() {
    printf("Tearing down the test case . . .\n");

    // Decrements the number of test cases that have been set up.
    counter_--;

    // TearDownTestCase() should be called only once.
    EXPECT_EQ(0, counter_);

    // Cleans up the shared resource.
    shared_resource_ = nullptr;
  }

  // This will be called before each test in this test case.
  void SetUp() override {
    // SetUpTestCase() should be called only once, so counter_ should
    // always be 1.
    EXPECT_EQ(1, counter_);
  }

  // Number of test cases that have been set up.
  static int counter_;

  // Some resource to be shared by all tests in this test case.
  static const char* shared_resource_;
};

int SetUpTestCaseTest::counter_ = 0;
const char* SetUpTestCaseTest::shared_resource_ = nullptr;

// A test that uses the shared resource.
TEST_F(SetUpTestCaseTest, Test1) { EXPECT_STRNE(nullptr, shared_resource_); }

// Another test that uses the shared resource.
TEST_F(SetUpTestCaseTest, Test2) {
  EXPECT_STREQ("123", shared_resource_);
}
#endif  //  REMOVE_LEGACY_TEST_CASEAPI

// Tests SetupTestSuite/TearDown TestSuite
class SetUpTestSuiteTest : public Test {
 protected:
  // This will be called once before the first test in this test case
  // is run.
  static void SetUpTestSuite() {
    printf("Setting up the test suite . . .\n");

    // Initializes some shared resource.  In this simple example, we
    // just create a C string.  More complex stuff can be done if
    // desired.
    shared_resource_ = "123";

    // Increments the number of test cases that have been set up.
    counter_++;

    // SetUpTestSuite() should be called only once.
    EXPECT_EQ(1, counter_);
  }

  // This will be called once after the last test in this test case is
  // run.
  static void TearDownTestSuite() {
    printf("Tearing down the test suite . . .\n");

    // Decrements the number of test suites that have been set up.
    counter_--;

    // TearDownTestSuite() should be called only once.
    EXPECT_EQ(0, counter_);

    // Cleans up the shared resource.
    shared_resource_ = nullptr;
  }

  // This will be called before each test in this test case.
  void SetUp() override {
    // SetUpTestSuite() should be called only once, so counter_ should
    // always be 1.
    EXPECT_EQ(1, counter_);
  }

  // Number of test suites that have been set up.
  static int counter_;

  // Some resource to be shared by all tests in this test case.
  static const char* shared_resource_;
};

int SetUpTestSuiteTest::counter_ = 0;
const char* SetUpTestSuiteTest::shared_resource_ = nullptr;

// A test that uses the shared resource.
TEST_F(SetUpTestSuiteTest, TestSetupTestSuite1) {
  EXPECT_STRNE(nullptr, shared_resource_);
}

// Another test that uses the shared resource.
TEST_F(SetUpTestSuiteTest, TestSetupTestSuite2) {
  EXPECT_STREQ("123", shared_resource_);
}

// The ParseFlagsTest test case tests ParseGoogleTestFlagsOnly.

// The Flags struct stores a copy of all Google Test flags.
struct Flags {
  // Constructs a Flags struct where each flag has its default value.
  Flags() : also_run_disabled_tests(false),
            break_on_failure(false),
            catch_exceptions(false),
            death_test_use_fork(false),
            filter(""),
            list_tests(false),
            output(""),
            print_time(true),
            random_seed(0),
            repeat(1),
            shuffle(false),
            stack_trace_depth(kMaxStackTraceDepth),
            stream_result_to(""),
            throw_on_failure(false) {}

  // Factory methods.

  // Creates a Flags struct where the gtest_also_run_disabled_tests flag has
  // the given value.
  static Flags AlsoRunDisabledTests(bool also_run_disabled_tests) {
    Flags flags;
    flags.also_run_disabled_tests = also_run_disabled_tests;
    return flags;
  }

  // Creates a Flags struct where the gtest_break_on_failure flag has
  // the given value.
  static Flags BreakOnFailure(bool break_on_failure) {
    Flags flags;
    flags.break_on_failure = break_on_failure;
    return flags;
  }

  // Creates a Flags struct where the gtest_catch_exceptions flag has
  // the given value.
  static Flags CatchExceptions(bool catch_exceptions) {
    Flags flags;
    flags.catch_exceptions = catch_exceptions;
    return flags;
  }

  // Creates a Flags struct where the gtest_death_test_use_fork flag has
  // the given value.
  static Flags DeathTestUseFork(bool death_test_use_fork) {
    Flags flags;
    flags.death_test_use_fork = death_test_use_fork;
    return flags;
  }

  // Creates a Flags struct where the gtest_filter flag has the given
  // value.
  static Flags Filter(const char* filter) {
    Flags flags;
    flags.filter = filter;
    return flags;
  }

  // Creates a Flags struct where the gtest_list_tests flag has the
  // given value.
  static Flags ListTests(bool list_tests) {
    Flags flags;
    flags.list_tests = list_tests;
    return flags;
  }

  // Creates a Flags struct where the gtest_output flag has the given
  // value.
  static Flags Output(const char* output) {
    Flags flags;
    flags.output = output;
    return flags;
  }

  // Creates a Flags struct where the gtest_print_time flag has the given
  // value.
  static Flags PrintTime(bool print_time) {
    Flags flags;
    flags.print_time = print_time;
    return flags;
  }

  // Creates a Flags struct where the gtest_random_seed flag has the given
  // value.
  static Flags RandomSeed(Int32 random_seed) {
    Flags flags;
    flags.random_seed = random_seed;
    return flags;
  }

  // Creates a Flags struct where the gtest_repeat flag has the given
  // value.
  static Flags Repeat(Int32 repeat) {
    Flags flags;
    flags.repeat = repeat;
    return flags;
  }

  // Creates a Flags struct where the gtest_shuffle flag has the given
  // value.
  static Flags Shuffle(bool shuffle) {
    Flags flags;
    flags.shuffle = shuffle;
    return flags;
  }

  // Creates a Flags struct where the GTEST_FLAG(stack_trace_depth) flag has
  // the given value.
  static Flags StackTraceDepth(Int32 stack_trace_depth) {
    Flags flags;
    flags.stack_trace_depth = stack_trace_depth;
    return flags;
  }

  // Creates a Flags struct where the GTEST_FLAG(stream_result_to) flag has
  // the given value.
  static Flags StreamResultTo(const char* stream_result_to) {
    Flags flags;
    flags.stream_result_to = stream_result_to;
    return flags;
  }

  // Creates a Flags struct where the gtest_throw_on_failure flag has
  // the given value.
  static Flags ThrowOnFailure(bool throw_on_failure) {
    Flags flags;
    flags.throw_on_failure = throw_on_failure;
    return flags;
  }

  // These fields store the flag values.
  bool also_run_disabled_tests;
  bool break_on_failure;
  bool catch_exceptions;
  bool death_test_use_fork;
  const char* filter;
  bool list_tests;
  const char* output;
  bool print_time;
  Int32 random_seed;
  Int32 repeat;
  bool shuffle;
  Int32 stack_trace_depth;
  const char* stream_result_to;
  bool throw_on_failure;
};

// Fixture for testing ParseGoogleTestFlagsOnly().
class ParseFlagsTest : public Test {
 protected:
  // Clears the flags before each test.
  void SetUp() override {
    GTEST_FLAG(also_run_disabled_tests) = false;
    GTEST_FLAG(break_on_failure) = false;
    GTEST_FLAG(catch_exceptions) = false;
    GTEST_FLAG(death_test_use_fork) = false;
    GTEST_FLAG(filter) = "";
    GTEST_FLAG(list_tests) = false;
    GTEST_FLAG(output) = "";
    GTEST_FLAG(print_time) = true;
    GTEST_FLAG(random_seed) = 0;
    GTEST_FLAG(repeat) = 1;
    GTEST_FLAG(shuffle) = false;
    GTEST_FLAG(stack_trace_depth) = kMaxStackTraceDepth;
    GTEST_FLAG(stream_result_to) = "";
    GTEST_FLAG(throw_on_failure) = false;
  }

  // Asserts that two narrow or wide string arrays are equal.
  template <typename CharType>
  static void AssertStringArrayEq(int size1, CharType** array1, int size2,
                                  CharType** array2) {
    ASSERT_EQ(size1, size2) << " Array sizes different.";

    for (int i = 0; i != size1; i++) {
      ASSERT_STREQ(array1[i], array2[i]) << " where i == " << i;
    }
  }

  // Verifies that the flag values match the expected values.
  static void CheckFlags(const Flags& expected) {
    EXPECT_EQ(expected.also_run_disabled_tests,
              GTEST_FLAG(also_run_disabled_tests));
    EXPECT_EQ(expected.break_on_failure, GTEST_FLAG(break_on_failure));
    EXPECT_EQ(expected.catch_exceptions, GTEST_FLAG(catch_exceptions));
    EXPECT_EQ(expected.death_test_use_fork, GTEST_FLAG(death_test_use_fork));
    EXPECT_STREQ(expected.filter, GTEST_FLAG(filter).c_str());
    EXPECT_EQ(expected.list_tests, GTEST_FLAG(list_tests));
    EXPECT_STREQ(expected.output, GTEST_FLAG(output).c_str());
    EXPECT_EQ(expected.print_time, GTEST_FLAG(print_time));
    EXPECT_EQ(expected.random_seed, GTEST_FLAG(random_seed));
    EXPECT_EQ(expected.repeat, GTEST_FLAG(repeat));
    EXPECT_EQ(expected.shuffle, GTEST_FLAG(shuffle));
    EXPECT_EQ(expected.stack_trace_depth, GTEST_FLAG(stack_trace_depth));
    EXPECT_STREQ(expected.stream_result_to,
                 GTEST_FLAG(stream_result_to).c_str());
    EXPECT_EQ(expected.throw_on_failure, GTEST_FLAG(throw_on_failure));
  }

  // Parses a command line (specified by argc1 and argv1), then
  // verifies that the flag values are expected and that the
  // recognized flags are removed from the command line.
  template <typename CharType>
  static void TestParsingFlags(int argc1, const CharType** argv1,
                               int argc2, const CharType** argv2,
                               const Flags& expected, bool should_print_help) {
    const bool saved_help_flag = ::testing::internal::g_help_flag;
    ::testing::internal::g_help_flag = false;

# if GTEST_HAS_STREAM_REDIRECTION
    CaptureStdout();
# endif

    // Parses the command line.
    internal::ParseGoogleTestFlagsOnly(&argc1, const_cast<CharType**>(argv1));

# if GTEST_HAS_STREAM_REDIRECTION
    const std::string captured_stdout = GetCapturedStdout();
# endif

    // Verifies the flag values.
    CheckFlags(expected);

    // Verifies that the recognized flags are removed from the command
    // line.
    AssertStringArrayEq(argc1 + 1, argv1, argc2 + 1, argv2);

    // ParseGoogleTestFlagsOnly should neither set g_help_flag nor print the
    // help message for the flags it recognizes.
    EXPECT_EQ(should_print_help, ::testing::internal::g_help_flag);

# if GTEST_HAS_STREAM_REDIRECTION
    const char* const expected_help_fragment =
        "This program contains tests written using";
    if (should_print_help) {
      EXPECT_PRED_FORMAT2(IsSubstring, expected_help_fragment, captured_stdout);
    } else {
      EXPECT_PRED_FORMAT2(IsNotSubstring,
                          expected_help_fragment, captured_stdout);
    }
# endif  // GTEST_HAS_STREAM_REDIRECTION

    ::testing::internal::g_help_flag = saved_help_flag;
  }

  // This macro wraps TestParsingFlags s.t. the user doesn't need
  // to specify the array sizes.

# define GTEST_TEST_PARSING_FLAGS_(argv1, argv2, expected, should_print_help) \
  TestParsingFlags(sizeof(argv1)/sizeof(*argv1) - 1, argv1, \
                   sizeof(argv2)/sizeof(*argv2) - 1, argv2, \
                   expected, should_print_help)
};

// Tests parsing an empty command line.
TEST_F(ParseFlagsTest, Empty) {
  const char* argv[] = {nullptr};

  const char* argv2[] = {nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags(), false);
}

// Tests parsing a command line that has no flag.
TEST_F(ParseFlagsTest, NoFlag) {
  const char* argv[] = {"foo.exe", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags(), false);
}

// Tests parsing a bad --gtest_filter flag.
TEST_F(ParseFlagsTest, FilterBad) {
  const char* argv[] = {"foo.exe", "--gtest_filter", nullptr};

  const char* argv2[] = {"foo.exe", "--gtest_filter", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Filter(""), true);
}

// Tests parsing an empty --gtest_filter flag.
TEST_F(ParseFlagsTest, FilterEmpty) {
  const char* argv[] = {"foo.exe", "--gtest_filter=", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Filter(""), false);
}

// Tests parsing a non-empty --gtest_filter flag.
TEST_F(ParseFlagsTest, FilterNonEmpty) {
  const char* argv[] = {"foo.exe", "--gtest_filter=abc", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Filter("abc"), false);
}

// Tests parsing --gtest_break_on_failure.
TEST_F(ParseFlagsTest, BreakOnFailureWithoutValue) {
  const char* argv[] = {"foo.exe", "--gtest_break_on_failure", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::BreakOnFailure(true), false);
}

// Tests parsing --gtest_break_on_failure=0.
TEST_F(ParseFlagsTest, BreakOnFailureFalse_0) {
  const char* argv[] = {"foo.exe", "--gtest_break_on_failure=0", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::BreakOnFailure(false), false);
}

// Tests parsing --gtest_break_on_failure=f.
TEST_F(ParseFlagsTest, BreakOnFailureFalse_f) {
  const char* argv[] = {"foo.exe", "--gtest_break_on_failure=f", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::BreakOnFailure(false), false);
}

// Tests parsing --gtest_break_on_failure=F.
TEST_F(ParseFlagsTest, BreakOnFailureFalse_F) {
  const char* argv[] = {"foo.exe", "--gtest_break_on_failure=F", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::BreakOnFailure(false), false);
}

// Tests parsing a --gtest_break_on_failure flag that has a "true"
// definition.
TEST_F(ParseFlagsTest, BreakOnFailureTrue) {
  const char* argv[] = {"foo.exe", "--gtest_break_on_failure=1", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::BreakOnFailure(true), false);
}

// Tests parsing --gtest_catch_exceptions.
TEST_F(ParseFlagsTest, CatchExceptions) {
  const char* argv[] = {"foo.exe", "--gtest_catch_exceptions", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::CatchExceptions(true), false);
}

// Tests parsing --gtest_death_test_use_fork.
TEST_F(ParseFlagsTest, DeathTestUseFork) {
  const char* argv[] = {"foo.exe", "--gtest_death_test_use_fork", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::DeathTestUseFork(true), false);
}

// Tests having the same flag twice with different values.  The
// expected behavior is that the one coming last takes precedence.
TEST_F(ParseFlagsTest, DuplicatedFlags) {
  const char* argv[] = {"foo.exe", "--gtest_filter=a", "--gtest_filter=b",
                        nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Filter("b"), false);
}

// Tests having an unrecognized flag on the command line.
TEST_F(ParseFlagsTest, UnrecognizedFlag) {
  const char* argv[] = {"foo.exe", "--gtest_break_on_failure",
                        "bar",  // Unrecognized by Google Test.
                        "--gtest_filter=b", nullptr};

  const char* argv2[] = {"foo.exe", "bar", nullptr};

  Flags flags;
  flags.break_on_failure = true;
  flags.filter = "b";
  GTEST_TEST_PARSING_FLAGS_(argv, argv2, flags, false);
}

// Tests having a --gtest_list_tests flag
TEST_F(ParseFlagsTest, ListTestsFlag) {
  const char* argv[] = {"foo.exe", "--gtest_list_tests", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::ListTests(true), false);
}

// Tests having a --gtest_list_tests flag with a "true" value
TEST_F(ParseFlagsTest, ListTestsTrue) {
  const char* argv[] = {"foo.exe", "--gtest_list_tests=1", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::ListTests(true), false);
}

// Tests having a --gtest_list_tests flag with a "false" value
TEST_F(ParseFlagsTest, ListTestsFalse) {
  const char* argv[] = {"foo.exe", "--gtest_list_tests=0", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::ListTests(false), false);
}

// Tests parsing --gtest_list_tests=f.
TEST_F(ParseFlagsTest, ListTestsFalse_f) {
  const char* argv[] = {"foo.exe", "--gtest_list_tests=f", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::ListTests(false), false);
}

// Tests parsing --gtest_list_tests=F.
TEST_F(ParseFlagsTest, ListTestsFalse_F) {
  const char* argv[] = {"foo.exe", "--gtest_list_tests=F", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::ListTests(false), false);
}

// Tests parsing --gtest_output (invalid).
TEST_F(ParseFlagsTest, OutputEmpty) {
  const char* argv[] = {"foo.exe", "--gtest_output", nullptr};

  const char* argv2[] = {"foo.exe", "--gtest_output", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags(), true);
}

// Tests parsing --gtest_output=xml
TEST_F(ParseFlagsTest, OutputXml) {
  const char* argv[] = {"foo.exe", "--gtest_output=xml", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Output("xml"), false);
}

// Tests parsing --gtest_output=xml:file
TEST_F(ParseFlagsTest, OutputXmlFile) {
  const char* argv[] = {"foo.exe", "--gtest_output=xml:file", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Output("xml:file"), false);
}

// Tests parsing --gtest_output=xml:directory/path/
TEST_F(ParseFlagsTest, OutputXmlDirectory) {
  const char* argv[] = {"foo.exe", "--gtest_output=xml:directory/path/",
                        nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2,
                            Flags::Output("xml:directory/path/"), false);
}

// Tests having a --gtest_print_time flag
TEST_F(ParseFlagsTest, PrintTimeFlag) {
  const char* argv[] = {"foo.exe", "--gtest_print_time", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::PrintTime(true), false);
}

// Tests having a --gtest_print_time flag with a "true" value
TEST_F(ParseFlagsTest, PrintTimeTrue) {
  const char* argv[] = {"foo.exe", "--gtest_print_time=1", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::PrintTime(true), false);
}

// Tests having a --gtest_print_time flag with a "false" value
TEST_F(ParseFlagsTest, PrintTimeFalse) {
  const char* argv[] = {"foo.exe", "--gtest_print_time=0", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::PrintTime(false), false);
}

// Tests parsing --gtest_print_time=f.
TEST_F(ParseFlagsTest, PrintTimeFalse_f) {
  const char* argv[] = {"foo.exe", "--gtest_print_time=f", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::PrintTime(false), false);
}

// Tests parsing --gtest_print_time=F.
TEST_F(ParseFlagsTest, PrintTimeFalse_F) {
  const char* argv[] = {"foo.exe", "--gtest_print_time=F", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::PrintTime(false), false);
}

// Tests parsing --gtest_random_seed=number
TEST_F(ParseFlagsTest, RandomSeed) {
  const char* argv[] = {"foo.exe", "--gtest_random_seed=1000", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::RandomSeed(1000), false);
}

// Tests parsing --gtest_repeat=number
TEST_F(ParseFlagsTest, Repeat) {
  const char* argv[] = {"foo.exe", "--gtest_repeat=1000", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Repeat(1000), false);
}

// Tests having a --gtest_also_run_disabled_tests flag
TEST_F(ParseFlagsTest, AlsoRunDisabledTestsFlag) {
  const char* argv[] = {"foo.exe", "--gtest_also_run_disabled_tests", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::AlsoRunDisabledTests(true),
                            false);
}

// Tests having a --gtest_also_run_disabled_tests flag with a "true" value
TEST_F(ParseFlagsTest, AlsoRunDisabledTestsTrue) {
  const char* argv[] = {"foo.exe", "--gtest_also_run_disabled_tests=1",
                        nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::AlsoRunDisabledTests(true),
                            false);
}

// Tests having a --gtest_also_run_disabled_tests flag with a "false" value
TEST_F(ParseFlagsTest, AlsoRunDisabledTestsFalse) {
  const char* argv[] = {"foo.exe", "--gtest_also_run_disabled_tests=0",
                        nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::AlsoRunDisabledTests(false),
                            false);
}

// Tests parsing --gtest_shuffle.
TEST_F(ParseFlagsTest, ShuffleWithoutValue) {
  const char* argv[] = {"foo.exe", "--gtest_shuffle", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Shuffle(true), false);
}

// Tests parsing --gtest_shuffle=0.
TEST_F(ParseFlagsTest, ShuffleFalse_0) {
  const char* argv[] = {"foo.exe", "--gtest_shuffle=0", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Shuffle(false), false);
}

// Tests parsing a --gtest_shuffle flag that has a "true" definition.
TEST_F(ParseFlagsTest, ShuffleTrue) {
  const char* argv[] = {"foo.exe", "--gtest_shuffle=1", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Shuffle(true), false);
}

// Tests parsing --gtest_stack_trace_depth=number.
TEST_F(ParseFlagsTest, StackTraceDepth) {
  const char* argv[] = {"foo.exe", "--gtest_stack_trace_depth=5", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::StackTraceDepth(5), false);
}

TEST_F(ParseFlagsTest, StreamResultTo) {
  const char* argv[] = {"foo.exe", "--gtest_stream_result_to=localhost:1234",
                        nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(
      argv, argv2, Flags::StreamResultTo("localhost:1234"), false);
}

// Tests parsing --gtest_throw_on_failure.
TEST_F(ParseFlagsTest, ThrowOnFailureWithoutValue) {
  const char* argv[] = {"foo.exe", "--gtest_throw_on_failure", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::ThrowOnFailure(true), false);
}

// Tests parsing --gtest_throw_on_failure=0.
TEST_F(ParseFlagsTest, ThrowOnFailureFalse_0) {
  const char* argv[] = {"foo.exe", "--gtest_throw_on_failure=0", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::ThrowOnFailure(false), false);
}

// Tests parsing a --gtest_throw_on_failure flag that has a "true"
// definition.
TEST_F(ParseFlagsTest, ThrowOnFailureTrue) {
  const char* argv[] = {"foo.exe", "--gtest_throw_on_failure=1", nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::ThrowOnFailure(true), false);
}

# if GTEST_OS_WINDOWS
// Tests parsing wide strings.
TEST_F(ParseFlagsTest, WideStrings) {
  const wchar_t* argv[] = {
    L"foo.exe",
    L"--gtest_filter=Foo*",
    L"--gtest_list_tests=1",
    L"--gtest_break_on_failure",
    L"--non_gtest_flag",
    NULL
  };

  const wchar_t* argv2[] = {
    L"foo.exe",
    L"--non_gtest_flag",
    NULL
  };

  Flags expected_flags;
  expected_flags.break_on_failure = true;
  expected_flags.filter = "Foo*";
  expected_flags.list_tests = true;

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, expected_flags, false);
}
# endif  // GTEST_OS_WINDOWS

#if GTEST_USE_OWN_FLAGFILE_FLAG_
class FlagfileTest : public ParseFlagsTest {
 public:
  virtual void SetUp() {
    ParseFlagsTest::SetUp();

    testdata_path_.Set(internal::FilePath(
        testing::TempDir() + internal::GetCurrentExecutableName().string() +
        "_flagfile_test"));
    testing::internal::posix::RmDir(testdata_path_.c_str());
    EXPECT_TRUE(testdata_path_.CreateFolder());
  }

  virtual void TearDown() {
    testing::internal::posix::RmDir(testdata_path_.c_str());
    ParseFlagsTest::TearDown();
  }

  internal::FilePath CreateFlagfile(const char* contents) {
    internal::FilePath file_path(internal::FilePath::GenerateUniqueFileName(
        testdata_path_, internal::FilePath("unique"), "txt"));
    FILE* f = testing::internal::posix::FOpen(file_path.c_str(), "w");
    fprintf(f, "%s", contents);
    fclose(f);
    return file_path;
  }

 private:
  internal::FilePath testdata_path_;
};

// Tests an empty flagfile.
TEST_F(FlagfileTest, Empty) {
  internal::FilePath flagfile_path(CreateFlagfile(""));
  std::string flagfile_flag =
      std::string("--" GTEST_FLAG_PREFIX_ "flagfile=") + flagfile_path.c_str();

  const char* argv[] = {"foo.exe", flagfile_flag.c_str(), nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags(), false);
}

// Tests passing a non-empty --gtest_filter flag via --gtest_flagfile.
TEST_F(FlagfileTest, FilterNonEmpty) {
  internal::FilePath flagfile_path(CreateFlagfile(
      "--"  GTEST_FLAG_PREFIX_  "filter=abc"));
  std::string flagfile_flag =
      std::string("--" GTEST_FLAG_PREFIX_ "flagfile=") + flagfile_path.c_str();

  const char* argv[] = {"foo.exe", flagfile_flag.c_str(), nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, Flags::Filter("abc"), false);
}

// Tests passing several flags via --gtest_flagfile.
TEST_F(FlagfileTest, SeveralFlags) {
  internal::FilePath flagfile_path(CreateFlagfile(
      "--"  GTEST_FLAG_PREFIX_  "filter=abc\n"
      "--"  GTEST_FLAG_PREFIX_  "break_on_failure\n"
      "--"  GTEST_FLAG_PREFIX_  "list_tests"));
  std::string flagfile_flag =
      std::string("--" GTEST_FLAG_PREFIX_ "flagfile=") + flagfile_path.c_str();

  const char* argv[] = {"foo.exe", flagfile_flag.c_str(), nullptr};

  const char* argv2[] = {"foo.exe", nullptr};

  Flags expected_flags;
  expected_flags.break_on_failure = true;
  expected_flags.filter = "abc";
  expected_flags.list_tests = true;

  GTEST_TEST_PARSING_FLAGS_(argv, argv2, expected_flags, false);
}
#endif  // GTEST_USE_OWN_FLAGFILE_FLAG_

// Tests current_test_info() in UnitTest.
class CurrentTestInfoTest : public Test {
 protected:
  // Tests that current_test_info() returns NULL before the first test in
  // the test case is run.
  static void SetUpTestSuite() {
    // There should be no tests running at this point.
    const TestInfo* test_info =
      UnitTest::GetInstance()->current_test_info();
    EXPECT_TRUE(test_info == nullptr)
        << "There should be no tests running at this point.";
  }

  // Tests that current_test_info() returns NULL after the last test in
  // the test case has run.
  static void TearDownTestSuite() {
    const TestInfo* test_info =
      UnitTest::GetInstance()->current_test_info();
    EXPECT_TRUE(test_info == nullptr)
        << "There should be no tests running at this point.";
  }
};

// Tests that current_test_info() returns TestInfo for currently running
// test by checking the expected test name against the actual one.
TEST_F(CurrentTestInfoTest, WorksForFirstTestInATestSuite) {
  const TestInfo* test_info =
    UnitTest::GetInstance()->current_test_info();
  ASSERT_TRUE(nullptr != test_info)
      << "There is a test running so we should have a valid TestInfo.";
  EXPECT_STREQ("CurrentTestInfoTest", test_info->test_case_name())
      << "Expected the name of the currently running test case.";
  EXPECT_STREQ("WorksForFirstTestInATestSuite", test_info->name())
      << "Expected the name of the currently running test.";
}

// Tests that current_test_info() returns TestInfo for currently running
// test by checking the expected test name against the actual one.  We
// use this test to see that the TestInfo object actually changed from
// the previous invocation.
TEST_F(CurrentTestInfoTest, WorksForSecondTestInATestSuite) {
  const TestInfo* test_info =
    UnitTest::GetInstance()->current_test_info();
  ASSERT_TRUE(nullptr != test_info)
      << "There is a test running so we should have a valid TestInfo.";
  EXPECT_STREQ("CurrentTestInfoTest", test_info->test_case_name())
      << "Expected the name of the currently running test case.";
  EXPECT_STREQ("WorksForSecondTestInATestSuite", test_info->name())
      << "Expected the name of the currently running test.";
}

}  // namespace testing


// These two lines test that we can define tests in a namespace that
// has the name "testing" and is nested in another namespace.
namespace my_namespace {
namespace testing {

// Makes sure that TEST knows to use ::testing::Test instead of
// ::my_namespace::testing::Test.
class Test {};

// Makes sure that an assertion knows to use ::testing::Message instead of
// ::my_namespace::testing::Message.
class Message {};

// Makes sure that an assertion knows to use
// ::testing::AssertionResult instead of
// ::my_namespace::testing::AssertionResult.
class AssertionResult {};

// Tests that an assertion that should succeed works as expected.
TEST(NestedTestingNamespaceTest, Success) {
  EXPECT_EQ(1, 1) << "This shouldn't fail.";
}

// Tests that an assertion that should fail works as expected.
TEST(NestedTestingNamespaceTest, Failure) {
  EXPECT_FATAL_FAILURE(FAIL() << "This failure is expected.",
                       "This failure is expected.");
}

}  // namespace testing
}  // namespace my_namespace

// Tests that one can call superclass SetUp and TearDown methods--
// that is, that they are not private.
// No tests are based on this fixture; the test "passes" if it compiles
// successfully.
class ProtectedFixtureMethodsTest : public Test {
 protected:
  void SetUp() override { Test::SetUp(); }
  void TearDown() override { Test::TearDown(); }
};

// StreamingAssertionsTest tests the streaming versions of a representative
// sample of assertions.
TEST(StreamingAssertionsTest, Unconditional) {
  SUCCEED() << "expected success";
  EXPECT_NONFATAL_FAILURE(ADD_FAILURE() << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(FAIL() << "expected failure",
                       "expected failure");
}

#ifdef __BORLANDC__
// Silences warnings: "Condition is always true", "Unreachable code"
# pragma option push -w-ccc -w-rch
#endif

TEST(StreamingAssertionsTest, Truth) {
  EXPECT_TRUE(true) << "unexpected failure";
  ASSERT_TRUE(true) << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_TRUE(false) << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_TRUE(false) << "expected failure",
                       "expected failure");
}

TEST(StreamingAssertionsTest, Truth2) {
  EXPECT_FALSE(false) << "unexpected failure";
  ASSERT_FALSE(false) << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_FALSE(true) << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_FALSE(true) << "expected failure",
                       "expected failure");
}

#ifdef __BORLANDC__
// Restores warnings after previous "#pragma option push" suppressed them
# pragma option pop
#endif

TEST(StreamingAssertionsTest, IntegerEquals) {
  EXPECT_EQ(1, 1) << "unexpected failure";
  ASSERT_EQ(1, 1) << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_EQ(1, 2) << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_EQ(1, 2) << "expected failure",
                       "expected failure");
}

TEST(StreamingAssertionsTest, IntegerLessThan) {
  EXPECT_LT(1, 2) << "unexpected failure";
  ASSERT_LT(1, 2) << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_LT(2, 1) << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_LT(2, 1) << "expected failure",
                       "expected failure");
}

TEST(StreamingAssertionsTest, StringsEqual) {
  EXPECT_STREQ("foo", "foo") << "unexpected failure";
  ASSERT_STREQ("foo", "foo") << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_STREQ("foo", "bar") << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_STREQ("foo", "bar") << "expected failure",
                       "expected failure");
}

TEST(StreamingAssertionsTest, StringsNotEqual) {
  EXPECT_STRNE("foo", "bar") << "unexpected failure";
  ASSERT_STRNE("foo", "bar") << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_STRNE("foo", "foo") << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_STRNE("foo", "foo") << "expected failure",
                       "expected failure");
}

TEST(StreamingAssertionsTest, StringsEqualIgnoringCase) {
  EXPECT_STRCASEEQ("foo", "FOO") << "unexpected failure";
  ASSERT_STRCASEEQ("foo", "FOO") << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_STRCASEEQ("foo", "bar") << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_STRCASEEQ("foo", "bar") << "expected failure",
                       "expected failure");
}

TEST(StreamingAssertionsTest, StringNotEqualIgnoringCase) {
  EXPECT_STRCASENE("foo", "bar") << "unexpected failure";
  ASSERT_STRCASENE("foo", "bar") << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_STRCASENE("foo", "FOO") << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_STRCASENE("bar", "BAR") << "expected failure",
                       "expected failure");
}

TEST(StreamingAssertionsTest, FloatingPointEquals) {
  EXPECT_FLOAT_EQ(1.0, 1.0) << "unexpected failure";
  ASSERT_FLOAT_EQ(1.0, 1.0) << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_FLOAT_EQ(0.0, 1.0) << "expected failure",
                          "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_FLOAT_EQ(0.0, 1.0) << "expected failure",
                       "expected failure");
}

#if GTEST_HAS_EXCEPTIONS

TEST(StreamingAssertionsTest, Throw) {
  EXPECT_THROW(ThrowAnInteger(), int) << "unexpected failure";
  ASSERT_THROW(ThrowAnInteger(), int) << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_THROW(ThrowAnInteger(), bool) <<
                          "expected failure", "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_THROW(ThrowAnInteger(), bool) <<
                       "expected failure", "expected failure");
}

TEST(StreamingAssertionsTest, NoThrow) {
  EXPECT_NO_THROW(ThrowNothing()) << "unexpected failure";
  ASSERT_NO_THROW(ThrowNothing()) << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_NO_THROW(ThrowAnInteger()) <<
                          "expected failure", "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_NO_THROW(ThrowAnInteger()) <<
                       "expected failure", "expected failure");
}

TEST(StreamingAssertionsTest, AnyThrow) {
  EXPECT_ANY_THROW(ThrowAnInteger()) << "unexpected failure";
  ASSERT_ANY_THROW(ThrowAnInteger()) << "unexpected failure";
  EXPECT_NONFATAL_FAILURE(EXPECT_ANY_THROW(ThrowNothing()) <<
                          "expected failure", "expected failure");
  EXPECT_FATAL_FAILURE(ASSERT_ANY_THROW(ThrowNothing()) <<
                       "expected failure", "expected failure");
}

#endif  // GTEST_HAS_EXCEPTIONS

// Tests that Google Test correctly decides whether to use colors in the output.

TEST(ColoredOutputTest, UsesColorsWhenGTestColorFlagIsYes) {
  GTEST_FLAG(color) = "yes";

  SetEnv("TERM", "xterm");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.
  EXPECT_TRUE(ShouldUseColor(false));  // Stdout is not a TTY.

  SetEnv("TERM", "dumb");  // TERM doesn't support colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.
  EXPECT_TRUE(ShouldUseColor(false));  // Stdout is not a TTY.
}

TEST(ColoredOutputTest, UsesColorsWhenGTestColorFlagIsAliasOfYes) {
  SetEnv("TERM", "dumb");  // TERM doesn't support colors.

  GTEST_FLAG(color) = "True";
  EXPECT_TRUE(ShouldUseColor(false));  // Stdout is not a TTY.

  GTEST_FLAG(color) = "t";
  EXPECT_TRUE(ShouldUseColor(false));  // Stdout is not a TTY.

  GTEST_FLAG(color) = "1";
  EXPECT_TRUE(ShouldUseColor(false));  // Stdout is not a TTY.
}

TEST(ColoredOutputTest, UsesNoColorWhenGTestColorFlagIsNo) {
  GTEST_FLAG(color) = "no";

  SetEnv("TERM", "xterm");  // TERM supports colors.
  EXPECT_FALSE(ShouldUseColor(true));  // Stdout is a TTY.
  EXPECT_FALSE(ShouldUseColor(false));  // Stdout is not a TTY.

  SetEnv("TERM", "dumb");  // TERM doesn't support colors.
  EXPECT_FALSE(ShouldUseColor(true));  // Stdout is a TTY.
  EXPECT_FALSE(ShouldUseColor(false));  // Stdout is not a TTY.
}

TEST(ColoredOutputTest, UsesNoColorWhenGTestColorFlagIsInvalid) {
  SetEnv("TERM", "xterm");  // TERM supports colors.

  GTEST_FLAG(color) = "F";
  EXPECT_FALSE(ShouldUseColor(true));  // Stdout is a TTY.

  GTEST_FLAG(color) = "0";
  EXPECT_FALSE(ShouldUseColor(true));  // Stdout is a TTY.

  GTEST_FLAG(color) = "unknown";
  EXPECT_FALSE(ShouldUseColor(true));  // Stdout is a TTY.
}

TEST(ColoredOutputTest, UsesColorsWhenStdoutIsTty) {
  GTEST_FLAG(color) = "auto";

  SetEnv("TERM", "xterm");  // TERM supports colors.
  EXPECT_FALSE(ShouldUseColor(false));  // Stdout is not a TTY.
  EXPECT_TRUE(ShouldUseColor(true));    // Stdout is a TTY.
}

TEST(ColoredOutputTest, UsesColorsWhenTermSupportsColors) {
  GTEST_FLAG(color) = "auto";

#if GTEST_OS_WINDOWS && !GTEST_OS_WINDOWS_MINGW
  // On Windows, we ignore the TERM variable as it's usually not set.

  SetEnv("TERM", "dumb");
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "");
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "xterm");
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.
#else
  // On non-Windows platforms, we rely on TERM to determine if the
  // terminal supports colors.

  SetEnv("TERM", "dumb");  // TERM doesn't support colors.
  EXPECT_FALSE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "emacs");  // TERM doesn't support colors.
  EXPECT_FALSE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "vt100");  // TERM doesn't support colors.
  EXPECT_FALSE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "xterm-mono");  // TERM doesn't support colors.
  EXPECT_FALSE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "xterm");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "xterm-color");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "xterm-256color");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "screen");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "screen-256color");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "tmux");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "tmux-256color");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "rxvt-unicode");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "rxvt-unicode-256color");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "linux");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.

  SetEnv("TERM", "cygwin");  // TERM supports colors.
  EXPECT_TRUE(ShouldUseColor(true));  // Stdout is a TTY.
#endif  // GTEST_OS_WINDOWS
}

// Verifies that StaticAssertTypeEq works in a namespace scope.

static bool dummy1 GTEST_ATTRIBUTE_UNUSED_ = StaticAssertTypeEq<bool, bool>();
static bool dummy2 GTEST_ATTRIBUTE_UNUSED_ =
    StaticAssertTypeEq<const int, const int>();

// Verifies that StaticAssertTypeEq works in a class.

template <typename T>
class StaticAssertTypeEqTestHelper {
 public:
  StaticAssertTypeEqTestHelper() { StaticAssertTypeEq<bool, T>(); }
};

TEST(StaticAssertTypeEqTest, WorksInClass) {
  StaticAssertTypeEqTestHelper<bool>();
}

// Verifies that StaticAssertTypeEq works inside a function.

typedef int IntAlias;

TEST(StaticAssertTypeEqTest, CompilesForEqualTypes) {
  StaticAssertTypeEq<int, IntAlias>();
  StaticAssertTypeEq<int*, IntAlias*>();
}

TEST(HasNonfatalFailureTest, ReturnsFalseWhenThereIsNoFailure) {
  EXPECT_FALSE(HasNonfatalFailure());
}

static void FailFatally() { FAIL(); }

TEST(HasNonfatalFailureTest, ReturnsFalseWhenThereIsOnlyFatalFailure) {
  FailFatally();
  const bool has_nonfatal_failure = HasNonfatalFailure();
  ClearCurrentTestPartResults();
  EXPECT_FALSE(has_nonfatal_failure);
}

TEST(HasNonfatalFailureTest, ReturnsTrueWhenThereIsNonfatalFailure) {
  ADD_FAILURE();
  const bool has_nonfatal_failure = HasNonfatalFailure();
  ClearCurrentTestPartResults();
  EXPECT_TRUE(has_nonfatal_failure);
}

TEST(HasNonfatalFailureTest, ReturnsTrueWhenThereAreFatalAndNonfatalFailures) {
  FailFatally();
  ADD_FAILURE();
  const bool has_nonfatal_failure = HasNonfatalFailure();
  ClearCurrentTestPartResults();
  EXPECT_TRUE(has_nonfatal_failure);
}

// A wrapper for calling HasNonfatalFailure outside of a test body.
static bool HasNonfatalFailureHelper() {
  return testing::Test::HasNonfatalFailure();
}

TEST(HasNonfatalFailureTest, WorksOutsideOfTestBody) {
  EXPECT_FALSE(HasNonfatalFailureHelper());
}

TEST(HasNonfatalFailureTest, WorksOutsideOfTestBody2) {
  ADD_FAILURE();
  const bool has_nonfatal_failure = HasNonfatalFailureHelper();
  ClearCurrentTestPartResults();
  EXPECT_TRUE(has_nonfatal_failure);
}

TEST(HasFailureTest, ReturnsFalseWhenThereIsNoFailure) {
  EXPECT_FALSE(HasFailure());
}

TEST(HasFailureTest, ReturnsTrueWhenThereIsFatalFailure) {
  FailFatally();
  const bool has_failure = HasFailure();
  ClearCurrentTestPartResults();
  EXPECT_TRUE(has_failure);
}

TEST(HasFailureTest, ReturnsTrueWhenThereIsNonfatalFailure) {
  ADD_FAILURE();
  const bool has_failure = HasFailure();
  ClearCurrentTestPartResults();
  EXPECT_TRUE(has_failure);
}

TEST(HasFailureTest, ReturnsTrueWhenThereAreFatalAndNonfatalFailures) {
  FailFatally();
  ADD_FAILURE();
  const bool has_failure = HasFailure();
  ClearCurrentTestPartResults();
  EXPECT_TRUE(has_failure);
}

// A wrapper for calling HasFailure outside of a test body.
static bool HasFailureHelper() { return testing::Test::HasFailure(); }

TEST(HasFailureTest, WorksOutsideOfTestBody) {
  EXPECT_FALSE(HasFailureHelper());
}

TEST(HasFailureTest, WorksOutsideOfTestBody2) {
  ADD_FAILURE();
  const bool has_failure = HasFailureHelper();
  ClearCurrentTestPartResults();
  EXPECT_TRUE(has_failure);
}

class TestListener : public EmptyTestEventListener {
 public:
  TestListener() : on_start_counter_(nullptr), is_destroyed_(nullptr) {}
  TestListener(int* on_start_counter, bool* is_destroyed)
      : on_start_counter_(on_start_counter),
        is_destroyed_(is_destroyed) {}

  ~TestListener() override {
    if (is_destroyed_)
      *is_destroyed_ = true;
  }

 protected:
  void OnTestProgramStart(const UnitTest& /*unit_test*/) override {
    if (on_start_counter_ != nullptr) (*on_start_counter_)++;
  }

 private:
  int* on_start_counter_;
  bool* is_destroyed_;
};

// Tests the constructor.
TEST(TestEventListenersTest, ConstructionWorks) {
  TestEventListeners listeners;

  EXPECT_TRUE(TestEventListenersAccessor::GetRepeater(&listeners) != nullptr);
  EXPECT_TRUE(listeners.default_result_printer() == nullptr);
  EXPECT_TRUE(listeners.default_xml_generator() == nullptr);
}

// Tests that the TestEventListeners destructor deletes all the listeners it
// owns.
TEST(TestEventListenersTest, DestructionWorks) {
  bool default_result_printer_is_destroyed = false;
  bool default_xml_printer_is_destroyed = false;
  bool extra_listener_is_destroyed = false;
  TestListener* default_result_printer =
      new TestListener(nullptr, &default_result_printer_is_destroyed);
  TestListener* default_xml_printer =
      new TestListener(nullptr, &default_xml_printer_is_destroyed);
  TestListener* extra_listener =
      new TestListener(nullptr, &extra_listener_is_destroyed);

  {
    TestEventListeners listeners;
    TestEventListenersAccessor::SetDefaultResultPrinter(&listeners,
                                                        default_result_printer);
    TestEventListenersAccessor::SetDefaultXmlGenerator(&listeners,
                                                       default_xml_printer);
    listeners.Append(extra_listener);
  }
  EXPECT_TRUE(default_result_printer_is_destroyed);
  EXPECT_TRUE(default_xml_printer_is_destroyed);
  EXPECT_TRUE(extra_listener_is_destroyed);
}

// Tests that a listener Append'ed to a TestEventListeners list starts
// receiving events.
TEST(TestEventListenersTest, Append) {
  int on_start_counter = 0;
  bool is_destroyed = false;
  TestListener* listener = new TestListener(&on_start_counter, &is_destroyed);
  {
    TestEventListeners listeners;
    listeners.Append(listener);
    TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
        *UnitTest::GetInstance());
    EXPECT_EQ(1, on_start_counter);
  }
  EXPECT_TRUE(is_destroyed);
}

// Tests that listeners receive events in the order they were appended to
// the list, except for *End requests, which must be received in the reverse
// order.
class SequenceTestingListener : public EmptyTestEventListener {
 public:
  SequenceTestingListener(std::vector<std::string>* vector, const char* id)
      : vector_(vector), id_(id) {}

 protected:
  void OnTestProgramStart(const UnitTest& /*unit_test*/) override {
    vector_->push_back(GetEventDescription("OnTestProgramStart"));
  }

  void OnTestProgramEnd(const UnitTest& /*unit_test*/) override {
    vector_->push_back(GetEventDescription("OnTestProgramEnd"));
  }

  void OnTestIterationStart(const UnitTest& /*unit_test*/,
                            int /*iteration*/) override {
    vector_->push_back(GetEventDescription("OnTestIterationStart"));
  }

  void OnTestIterationEnd(const UnitTest& /*unit_test*/,
                          int /*iteration*/) override {
    vector_->push_back(GetEventDescription("OnTestIterationEnd"));
  }

 private:
  std::string GetEventDescription(const char* method) {
    Message message;
    message << id_ << "." << method;
    return message.GetString();
  }

  std::vector<std::string>* vector_;
  const char* const id_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(SequenceTestingListener);
};

TEST(EventListenerTest, AppendKeepsOrder) {
  std::vector<std::string> vec;
  TestEventListeners listeners;
  listeners.Append(new SequenceTestingListener(&vec, "1st"));
  listeners.Append(new SequenceTestingListener(&vec, "2nd"));
  listeners.Append(new SequenceTestingListener(&vec, "3rd"));

  TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
      *UnitTest::GetInstance());
  ASSERT_EQ(3U, vec.size());
  EXPECT_STREQ("1st.OnTestProgramStart", vec[0].c_str());
  EXPECT_STREQ("2nd.OnTestProgramStart", vec[1].c_str());
  EXPECT_STREQ("3rd.OnTestProgramStart", vec[2].c_str());

  vec.clear();
  TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramEnd(
      *UnitTest::GetInstance());
  ASSERT_EQ(3U, vec.size());
  EXPECT_STREQ("3rd.OnTestProgramEnd", vec[0].c_str());
  EXPECT_STREQ("2nd.OnTestProgramEnd", vec[1].c_str());
  EXPECT_STREQ("1st.OnTestProgramEnd", vec[2].c_str());

  vec.clear();
  TestEventListenersAccessor::GetRepeater(&listeners)->OnTestIterationStart(
      *UnitTest::GetInstance(), 0);
  ASSERT_EQ(3U, vec.size());
  EXPECT_STREQ("1st.OnTestIterationStart", vec[0].c_str());
  EXPECT_STREQ("2nd.OnTestIterationStart", vec[1].c_str());
  EXPECT_STREQ("3rd.OnTestIterationStart", vec[2].c_str());

  vec.clear();
  TestEventListenersAccessor::GetRepeater(&listeners)->OnTestIterationEnd(
      *UnitTest::GetInstance(), 0);
  ASSERT_EQ(3U, vec.size());
  EXPECT_STREQ("3rd.OnTestIterationEnd", vec[0].c_str());
  EXPECT_STREQ("2nd.OnTestIterationEnd", vec[1].c_str());
  EXPECT_STREQ("1st.OnTestIterationEnd", vec[2].c_str());
}

// Tests that a listener removed from a TestEventListeners list stops receiving
// events and is not deleted when the list is destroyed.
TEST(TestEventListenersTest, Release) {
  int on_start_counter = 0;
  bool is_destroyed = false;
  // Although Append passes the ownership of this object to the list,
  // the following calls release it, and we need to delete it before the
  // test ends.
  TestListener* listener = new TestListener(&on_start_counter, &is_destroyed);
  {
    TestEventListeners listeners;
    listeners.Append(listener);
    EXPECT_EQ(listener, listeners.Release(listener));
    TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
        *UnitTest::GetInstance());
    EXPECT_TRUE(listeners.Release(listener) == nullptr);
  }
  EXPECT_EQ(0, on_start_counter);
  EXPECT_FALSE(is_destroyed);
  delete listener;
}

// Tests that no events are forwarded when event forwarding is disabled.
TEST(EventListenerTest, SuppressEventForwarding) {
  int on_start_counter = 0;
  TestListener* listener = new TestListener(&on_start_counter, nullptr);

  TestEventListeners listeners;
  listeners.Append(listener);
  ASSERT_TRUE(TestEventListenersAccessor::EventForwardingEnabled(listeners));
  TestEventListenersAccessor::SuppressEventForwarding(&listeners);
  ASSERT_FALSE(TestEventListenersAccessor::EventForwardingEnabled(listeners));
  TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
      *UnitTest::GetInstance());
  EXPECT_EQ(0, on_start_counter);
}

// Tests that events generated by Google Test are not forwarded in
// death test subprocesses.
TEST(EventListenerDeathTest, EventsNotForwardedInDeathTestSubprecesses) {
  EXPECT_DEATH_IF_SUPPORTED({
      GTEST_CHECK_(TestEventListenersAccessor::EventForwardingEnabled(
          *GetUnitTestImpl()->listeners())) << "expected failure";},
      "expected failure");
}

// Tests that a listener installed via SetDefaultResultPrinter() starts
// receiving events and is returned via default_result_printer() and that
// the previous default_result_printer is removed from the list and deleted.
TEST(EventListenerTest, default_result_printer) {
  int on_start_counter = 0;
  bool is_destroyed = false;
  TestListener* listener = new TestListener(&on_start_counter, &is_destroyed);

  TestEventListeners listeners;
  TestEventListenersAccessor::SetDefaultResultPrinter(&listeners, listener);

  EXPECT_EQ(listener, listeners.default_result_printer());

  TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
      *UnitTest::GetInstance());

  EXPECT_EQ(1, on_start_counter);

  // Replacing default_result_printer with something else should remove it
  // from the list and destroy it.
  TestEventListenersAccessor::SetDefaultResultPrinter(&listeners, nullptr);

  EXPECT_TRUE(listeners.default_result_printer() == nullptr);
  EXPECT_TRUE(is_destroyed);

  // After broadcasting an event the counter is still the same, indicating
  // the listener is not in the list anymore.
  TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
      *UnitTest::GetInstance());
  EXPECT_EQ(1, on_start_counter);
}

// Tests that the default_result_printer listener stops receiving events
// when removed via Release and that is not owned by the list anymore.
TEST(EventListenerTest, RemovingDefaultResultPrinterWorks) {
  int on_start_counter = 0;
  bool is_destroyed = false;
  // Although Append passes the ownership of this object to the list,
  // the following calls release it, and we need to delete it before the
  // test ends.
  TestListener* listener = new TestListener(&on_start_counter, &is_destroyed);
  {
    TestEventListeners listeners;
    TestEventListenersAccessor::SetDefaultResultPrinter(&listeners, listener);

    EXPECT_EQ(listener, listeners.Release(listener));
    EXPECT_TRUE(listeners.default_result_printer() == nullptr);
    EXPECT_FALSE(is_destroyed);

    // Broadcasting events now should not affect default_result_printer.
    TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
        *UnitTest::GetInstance());
    EXPECT_EQ(0, on_start_counter);
  }
  // Destroying the list should not affect the listener now, too.
  EXPECT_FALSE(is_destroyed);
  delete listener;
}

// Tests that a listener installed via SetDefaultXmlGenerator() starts
// receiving events and is returned via default_xml_generator() and that
// the previous default_xml_generator is removed from the list and deleted.
TEST(EventListenerTest, default_xml_generator) {
  int on_start_counter = 0;
  bool is_destroyed = false;
  TestListener* listener = new TestListener(&on_start_counter, &is_destroyed);

  TestEventListeners listeners;
  TestEventListenersAccessor::SetDefaultXmlGenerator(&listeners, listener);

  EXPECT_EQ(listener, listeners.default_xml_generator());

  TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
      *UnitTest::GetInstance());

  EXPECT_EQ(1, on_start_counter);

  // Replacing default_xml_generator with something else should remove it
  // from the list and destroy it.
  TestEventListenersAccessor::SetDefaultXmlGenerator(&listeners, nullptr);

  EXPECT_TRUE(listeners.default_xml_generator() == nullptr);
  EXPECT_TRUE(is_destroyed);

  // After broadcasting an event the counter is still the same, indicating
  // the listener is not in the list anymore.
  TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
      *UnitTest::GetInstance());
  EXPECT_EQ(1, on_start_counter);
}

// Tests that the default_xml_generator listener stops receiving events
// when removed via Release and that is not owned by the list anymore.
TEST(EventListenerTest, RemovingDefaultXmlGeneratorWorks) {
  int on_start_counter = 0;
  bool is_destroyed = false;
  // Although Append passes the ownership of this object to the list,
  // the following calls release it, and we need to delete it before the
  // test ends.
  TestListener* listener = new TestListener(&on_start_counter, &is_destroyed);
  {
    TestEventListeners listeners;
    TestEventListenersAccessor::SetDefaultXmlGenerator(&listeners, listener);

    EXPECT_EQ(listener, listeners.Release(listener));
    EXPECT_TRUE(listeners.default_xml_generator() == nullptr);
    EXPECT_FALSE(is_destroyed);

    // Broadcasting events now should not affect default_xml_generator.
    TestEventListenersAccessor::GetRepeater(&listeners)->OnTestProgramStart(
        *UnitTest::GetInstance());
    EXPECT_EQ(0, on_start_counter);
  }
  // Destroying the list should not affect the listener now, too.
  EXPECT_FALSE(is_destroyed);
  delete listener;
}

// Sanity tests to ensure that the alternative, verbose spellings of
// some of the macros work.  We don't test them thoroughly as that
// would be quite involved.  Since their implementations are
// straightforward, and they are rarely used, we'll just rely on the
// users to tell us when they are broken.
GTEST_TEST(AlternativeNameTest, Works) {  // GTEST_TEST is the same as TEST.
  GTEST_SUCCEED() << "OK";  // GTEST_SUCCEED is the same as SUCCEED.

  // GTEST_FAIL is the same as FAIL.
  EXPECT_FATAL_FAILURE(GTEST_FAIL() << "An expected failure",
                       "An expected failure");

  // GTEST_ASSERT_XY is the same as ASSERT_XY.

  GTEST_ASSERT_EQ(0, 0);
  EXPECT_FATAL_FAILURE(GTEST_ASSERT_EQ(0, 1) << "An expected failure",
                       "An expected failure");
  EXPECT_FATAL_FAILURE(GTEST_ASSERT_EQ(1, 0) << "An expected failure",
                       "An expected failure");

  GTEST_ASSERT_NE(0, 1);
  GTEST_ASSERT_NE(1, 0);
  EXPECT_FATAL_FAILURE(GTEST_ASSERT_NE(0, 0) << "An expected failure",
                       "An expected failure");

  GTEST_ASSERT_LE(0, 0);
  GTEST_ASSERT_LE(0, 1);
  EXPECT_FATAL_FAILURE(GTEST_ASSERT_LE(1, 0) << "An expected failure",
                       "An expected failure");

  GTEST_ASSERT_LT(0, 1);
  EXPECT_FATAL_FAILURE(GTEST_ASSERT_LT(0, 0) << "An expected failure",
                       "An expected failure");
  EXPECT_FATAL_FAILURE(GTEST_ASSERT_LT(1, 0) << "An expected failure",
                       "An expected failure");

  GTEST_ASSERT_GE(0, 0);
  GTEST_ASSERT_GE(1, 0);
  EXPECT_FATAL_FAILURE(GTEST_ASSERT_GE(0, 1) << "An expected failure",
                       "An expected failure");

  GTEST_ASSERT_GT(1, 0);
  EXPECT_FATAL_FAILURE(GTEST_ASSERT_GT(0, 1) << "An expected failure",
                       "An expected failure");
  EXPECT_FATAL_FAILURE(GTEST_ASSERT_GT(1, 1) << "An expected failure",
                       "An expected failure");
}

// Tests for internal utilities necessary for implementation of the universal
// printing.

class ConversionHelperBase {};
class ConversionHelperDerived : public ConversionHelperBase {};

// Tests that IsAProtocolMessage<T>::value is a compile-time constant.
TEST(IsAProtocolMessageTest, ValueIsCompileTimeConstant) {
  GTEST_COMPILE_ASSERT_(IsAProtocolMessage<::proto2::Message>::value,
                        const_true);
  GTEST_COMPILE_ASSERT_(!IsAProtocolMessage<int>::value, const_false);
}

// Tests that IsAProtocolMessage<T>::value is true when T is
// proto2::Message or a sub-class of it.
TEST(IsAProtocolMessageTest, ValueIsTrueWhenTypeIsAProtocolMessage) {
  EXPECT_TRUE(IsAProtocolMessage< ::proto2::Message>::value);
}

// Tests that IsAProtocolMessage<T>::value is false when T is neither
// ::proto2::Message nor a sub-class of it.
TEST(IsAProtocolMessageTest, ValueIsFalseWhenTypeIsNotAProtocolMessage) {
  EXPECT_FALSE(IsAProtocolMessage<int>::value);
  EXPECT_FALSE(IsAProtocolMessage<const ConversionHelperBase>::value);
}

// Tests GTEST_REMOVE_REFERENCE_AND_CONST_.

template <typename T1, typename T2>
void TestGTestRemoveReferenceAndConst() {
  static_assert(std::is_same<T1, GTEST_REMOVE_REFERENCE_AND_CONST_(T2)>::value,
                "GTEST_REMOVE_REFERENCE_AND_CONST_ failed.");
}

TEST(RemoveReferenceToConstTest, Works) {
  TestGTestRemoveReferenceAndConst<int, int>();
  TestGTestRemoveReferenceAndConst<double, double&>();
  TestGTestRemoveReferenceAndConst<char, const char>();
  TestGTestRemoveReferenceAndConst<char, const char&>();
  TestGTestRemoveReferenceAndConst<const char*, const char*>();
}

// Tests GTEST_REFERENCE_TO_CONST_.

template <typename T1, typename T2>
void TestGTestReferenceToConst() {
  static_assert(std::is_same<T1, GTEST_REFERENCE_TO_CONST_(T2)>::value,
                "GTEST_REFERENCE_TO_CONST_ failed.");
}

TEST(GTestReferenceToConstTest, Works) {
  TestGTestReferenceToConst<const char&, char>();
  TestGTestReferenceToConst<const int&, const int>();
  TestGTestReferenceToConst<const double&, double>();
  TestGTestReferenceToConst<const std::string&, const std::string&>();
}


// Tests IsContainerTest.

class NonContainer {};

TEST(IsContainerTestTest, WorksForNonContainer) {
  EXPECT_EQ(sizeof(IsNotContainer), sizeof(IsContainerTest<int>(0)));
  EXPECT_EQ(sizeof(IsNotContainer), sizeof(IsContainerTest<char[5]>(0)));
  EXPECT_EQ(sizeof(IsNotContainer), sizeof(IsContainerTest<NonContainer>(0)));
}

TEST(IsContainerTestTest, WorksForContainer) {
  EXPECT_EQ(sizeof(IsContainer),
            sizeof(IsContainerTest<std::vector<bool> >(0)));
  EXPECT_EQ(sizeof(IsContainer),
            sizeof(IsContainerTest<std::map<int, double> >(0)));
}

struct ConstOnlyContainerWithPointerIterator {
  using const_iterator = int*;
  const_iterator begin() const;
  const_iterator end() const;
};

struct ConstOnlyContainerWithClassIterator {
  struct const_iterator {
    const int& operator*() const;
    const_iterator& operator++(/* pre-increment */);
  };
  const_iterator begin() const;
  const_iterator end() const;
};

TEST(IsContainerTestTest, ConstOnlyContainer) {
  EXPECT_EQ(sizeof(IsContainer),
            sizeof(IsContainerTest<ConstOnlyContainerWithPointerIterator>(0)));
  EXPECT_EQ(sizeof(IsContainer),
            sizeof(IsContainerTest<ConstOnlyContainerWithClassIterator>(0)));
}

// Tests IsHashTable.
struct AHashTable {
  typedef void hasher;
};
struct NotReallyAHashTable {
  typedef void hasher;
  typedef void reverse_iterator;
};
TEST(IsHashTable, Basic) {
  EXPECT_TRUE(testing::internal::IsHashTable<AHashTable>::value);
  EXPECT_FALSE(testing::internal::IsHashTable<NotReallyAHashTable>::value);
  EXPECT_FALSE(testing::internal::IsHashTable<std::vector<int>>::value);
  EXPECT_TRUE(testing::internal::IsHashTable<std::unordered_set<int>>::value);
}

// Tests ArrayEq().

TEST(ArrayEqTest, WorksForDegeneratedArrays) {
  EXPECT_TRUE(ArrayEq(5, 5L));
  EXPECT_FALSE(ArrayEq('a', 0));
}

TEST(ArrayEqTest, WorksForOneDimensionalArrays) {
  // Note that a and b are distinct but compatible types.
  const int a[] = { 0, 1 };
  long b[] = { 0, 1 };
  EXPECT_TRUE(ArrayEq(a, b));
  EXPECT_TRUE(ArrayEq(a, 2, b));

  b[0] = 2;
  EXPECT_FALSE(ArrayEq(a, b));
  EXPECT_FALSE(ArrayEq(a, 1, b));
}

TEST(ArrayEqTest, WorksForTwoDimensionalArrays) {
  const char a[][3] = { "hi", "lo" };
  const char b[][3] = { "hi", "lo" };
  const char c[][3] = { "hi", "li" };

  EXPECT_TRUE(ArrayEq(a, b));
  EXPECT_TRUE(ArrayEq(a, 2, b));

  EXPECT_FALSE(ArrayEq(a, c));
  EXPECT_FALSE(ArrayEq(a, 2, c));
}

// Tests ArrayAwareFind().

TEST(ArrayAwareFindTest, WorksForOneDimensionalArray) {
  const char a[] = "hello";
  EXPECT_EQ(a + 4, ArrayAwareFind(a, a + 5, 'o'));
  EXPECT_EQ(a + 5, ArrayAwareFind(a, a + 5, 'x'));
}

TEST(ArrayAwareFindTest, WorksForTwoDimensionalArray) {
  int a[][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };
  const int b[2] = { 2, 3 };
  EXPECT_EQ(a + 1, ArrayAwareFind(a, a + 3, b));

  const int c[2] = { 6, 7 };
  EXPECT_EQ(a + 3, ArrayAwareFind(a, a + 3, c));
}

// Tests CopyArray().

TEST(CopyArrayTest, WorksForDegeneratedArrays) {
  int n = 0;
  CopyArray('a', &n);
  EXPECT_EQ('a', n);
}

TEST(CopyArrayTest, WorksForOneDimensionalArrays) {
  const char a[3] = "hi";
  int b[3];
#ifndef __BORLANDC__  // C++Builder cannot compile some array size deductions.
  CopyArray(a, &b);
  EXPECT_TRUE(ArrayEq(a, b));
#endif

  int c[3];
  CopyArray(a, 3, c);
  EXPECT_TRUE(ArrayEq(a, c));
}

TEST(CopyArrayTest, WorksForTwoDimensionalArrays) {
  const int a[2][3] = { { 0, 1, 2 }, { 3, 4, 5 } };
  int b[2][3];
#ifndef __BORLANDC__  // C++Builder cannot compile some array size deductions.
  CopyArray(a, &b);
  EXPECT_TRUE(ArrayEq(a, b));
#endif

  int c[2][3];
  CopyArray(a, 2, c);
  EXPECT_TRUE(ArrayEq(a, c));
}

// Tests NativeArray.

TEST(NativeArrayTest, ConstructorFromArrayWorks) {
  const int a[3] = { 0, 1, 2 };
  NativeArray<int> na(a, 3, RelationToSourceReference());
  EXPECT_EQ(3U, na.size());
  EXPECT_EQ(a, na.begin());
}

TEST(NativeArrayTest, CreatesAndDeletesCopyOfArrayWhenAskedTo) {
  typedef int Array[2];
  Array* a = new Array[1];
  (*a)[0] = 0;
  (*a)[1] = 1;
  NativeArray<int> na(*a, 2, RelationToSourceCopy());
  EXPECT_NE(*a, na.begin());
  delete[] a;
  EXPECT_EQ(0, na.begin()[0]);
  EXPECT_EQ(1, na.begin()[1]);

  // We rely on the heap checker to verify that na deletes the copy of
  // array.
}

TEST(NativeArrayTest, TypeMembersAreCorrect) {
  StaticAssertTypeEq<char, NativeArray<char>::value_type>();
  StaticAssertTypeEq<int[2], NativeArray<int[2]>::value_type>();

  StaticAssertTypeEq<const char*, NativeArray<char>::const_iterator>();
  StaticAssertTypeEq<const bool(*)[2], NativeArray<bool[2]>::const_iterator>();
}

TEST(NativeArrayTest, MethodsWork) {
  const int a[3] = { 0, 1, 2 };
  NativeArray<int> na(a, 3, RelationToSourceCopy());
  ASSERT_EQ(3U, na.size());
  EXPECT_EQ(3, na.end() - na.begin());

  NativeArray<int>::const_iterator it = na.begin();
  EXPECT_EQ(0, *it);
  ++it;
  EXPECT_EQ(1, *it);
  it++;
  EXPECT_EQ(2, *it);
  ++it;
  EXPECT_EQ(na.end(), it);

  EXPECT_TRUE(na == na);

  NativeArray<int> na2(a, 3, RelationToSourceReference());
  EXPECT_TRUE(na == na2);

  const int b1[3] = { 0, 1, 1 };
  const int b2[4] = { 0, 1, 2, 3 };
  EXPECT_FALSE(na == NativeArray<int>(b1, 3, RelationToSourceReference()));
  EXPECT_FALSE(na == NativeArray<int>(b2, 4, RelationToSourceCopy()));
}

TEST(NativeArrayTest, WorksForTwoDimensionalArray) {
  const char a[2][3] = { "hi", "lo" };
  NativeArray<char[3]> na(a, 2, RelationToSourceReference());
  ASSERT_EQ(2U, na.size());
  EXPECT_EQ(a, na.begin());
}

// IndexSequence
TEST(IndexSequence, MakeIndexSequence) {
  using testing::internal::IndexSequence;
  using testing::internal::MakeIndexSequence;
  EXPECT_TRUE(
      (std::is_same<IndexSequence<>, MakeIndexSequence<0>::type>::value));
  EXPECT_TRUE(
      (std::is_same<IndexSequence<0>, MakeIndexSequence<1>::type>::value));
  EXPECT_TRUE(
      (std::is_same<IndexSequence<0, 1>, MakeIndexSequence<2>::type>::value));
  EXPECT_TRUE((
      std::is_same<IndexSequence<0, 1, 2>, MakeIndexSequence<3>::type>::value));
  EXPECT_TRUE(
      (std::is_base_of<IndexSequence<0, 1, 2>, MakeIndexSequence<3>>::value));
}

// ElemFromList
TEST(ElemFromList, Basic) {
  using testing::internal::ElemFromList;
  using Idx = testing::internal::MakeIndexSequence<3>::type;
  EXPECT_TRUE((
      std::is_same<int, ElemFromList<0, Idx, int, double, char>::type>::value));
  EXPECT_TRUE(
      (std::is_same<double,
                    ElemFromList<1, Idx, int, double, char>::type>::value));
  EXPECT_TRUE(
      (std::is_same<char,
                    ElemFromList<2, Idx, int, double, char>::type>::value));
  EXPECT_TRUE(
      (std::is_same<
          char, ElemFromList<7, testing::internal::MakeIndexSequence<12>::type,
                             int, int, int, int, int, int, int, char, int, int,
                             int, int>::type>::value));
}

// FlatTuple
TEST(FlatTuple, Basic) {
  using testing::internal::FlatTuple;

  FlatTuple<int, double, const char*> tuple = {};
  EXPECT_EQ(0, tuple.Get<0>());
  EXPECT_EQ(0.0, tuple.Get<1>());
  EXPECT_EQ(nullptr, tuple.Get<2>());

  tuple = FlatTuple<int, double, const char*>(7, 3.2, "Foo");
  EXPECT_EQ(7, tuple.Get<0>());
  EXPECT_EQ(3.2, tuple.Get<1>());
  EXPECT_EQ(std::string("Foo"), tuple.Get<2>());

  tuple.Get<1>() = 5.1;
  EXPECT_EQ(5.1, tuple.Get<1>());
}

TEST(FlatTuple, ManyTypes) {
  using testing::internal::FlatTuple;

  // Instantiate FlatTuple with 257 ints.
  // Tests show that we can do it with thousands of elements, but very long
  // compile times makes it unusuitable for this test.
#define GTEST_FLAT_TUPLE_INT8 int, int, int, int, int, int, int, int,
#define GTEST_FLAT_TUPLE_INT16 GTEST_FLAT_TUPLE_INT8 GTEST_FLAT_TUPLE_INT8
#define GTEST_FLAT_TUPLE_INT32 GTEST_FLAT_TUPLE_INT16 GTEST_FLAT_TUPLE_INT16
#define GTEST_FLAT_TUPLE_INT64 GTEST_FLAT_TUPLE_INT32 GTEST_FLAT_TUPLE_INT32
#define GTEST_FLAT_TUPLE_INT128 GTEST_FLAT_TUPLE_INT64 GTEST_FLAT_TUPLE_INT64
#define GTEST_FLAT_TUPLE_INT256 GTEST_FLAT_TUPLE_INT128 GTEST_FLAT_TUPLE_INT128

  // Let's make sure that we can have a very long list of types without blowing
  // up the template instantiation depth.
  FlatTuple<GTEST_FLAT_TUPLE_INT256 int> tuple;

  tuple.Get<0>() = 7;
  tuple.Get<99>() = 17;
  tuple.Get<256>() = 1000;
  EXPECT_EQ(7, tuple.Get<0>());
  EXPECT_EQ(17, tuple.Get<99>());
  EXPECT_EQ(1000, tuple.Get<256>());
}

// Tests SkipPrefix().

TEST(SkipPrefixTest, SkipsWhenPrefixMatches) {
  const char* const str = "hello";

  const char* p = str;
  EXPECT_TRUE(SkipPrefix("", &p));
  EXPECT_EQ(str, p);

  p = str;
  EXPECT_TRUE(SkipPrefix("hell", &p));
  EXPECT_EQ(str + 4, p);
}

TEST(SkipPrefixTest, DoesNotSkipWhenPrefixDoesNotMatch) {
  const char* const str = "world";

  const char* p = str;
  EXPECT_FALSE(SkipPrefix("W", &p));
  EXPECT_EQ(str, p);

  p = str;
  EXPECT_FALSE(SkipPrefix("world!", &p));
  EXPECT_EQ(str, p);
}

// Tests ad_hoc_test_result().

class AdHocTestResultTest : public testing::Test {
 protected:
  static void SetUpTestSuite() {
    FAIL() << "A failure happened inside SetUpTestSuite().";
  }
};

TEST_F(AdHocTestResultTest, AdHocTestResultForTestSuiteShowsFailure) {
  const testing::TestResult& test_result = testing::UnitTest::GetInstance()
                                               ->current_test_suite()
                                               ->ad_hoc_test_result();
  EXPECT_TRUE(test_result.Failed());
}

TEST_F(AdHocTestResultTest, AdHocTestResultTestForUnitTestDoesNotShowFailure) {
  const testing::TestResult& test_result =
      testing::UnitTest::GetInstance()->ad_hoc_test_result();
  EXPECT_FALSE(test_result.Failed());
}

class DynamicUnitTestFixture : public testing::Test {};

class DynamicTest : public DynamicUnitTestFixture {
  void TestBody() override { EXPECT_TRUE(true); }
};

auto* dynamic_test = testing::RegisterTest(
    "DynamicUnitTestFixture", "DynamicTest", "TYPE", "VALUE", __FILE__,
    __LINE__, []() -> DynamicUnitTestFixture* { return new DynamicTest; });

TEST(RegisterTest, WasRegistered) {
  auto* unittest = testing::UnitTest::GetInstance();
  for (int i = 0; i < unittest->total_test_suite_count(); ++i) {
    auto* tests = unittest->GetTestSuite(i);
    if (tests->name() != std::string("DynamicUnitTestFixture")) continue;
    for (int j = 0; j < tests->total_test_count(); ++j) {
      if (tests->GetTestInfo(j)->name() != std::string("DynamicTest")) continue;
      // Found it.
      EXPECT_STREQ(tests->GetTestInfo(j)->value_param(), "VALUE");
      EXPECT_STREQ(tests->GetTestInfo(j)->type_param(), "TYPE");
      return;
    }
  }

  FAIL() << "Didn't find the test!";
}
