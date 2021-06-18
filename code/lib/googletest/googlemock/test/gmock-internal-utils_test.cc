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
// This file tests the internal utilities.

#include "gmock/internal/gmock-internal-utils.h"

#include <stdlib.h>

#include <map>
#include <memory>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>

#include "gmock/gmock.h"
#include "gmock/internal/gmock-port.h"
#include "gtest/gtest-spi.h"
#include "gtest/gtest.h"

// Indicates that this translation unit is part of Google Test's
// implementation.  It must come before gtest-internal-inl.h is
// included, or there will be a compiler error.  This trick is to
// prevent a user from accidentally including gtest-internal-inl.h in
// their code.
#define GTEST_IMPLEMENTATION_ 1
#include "src/gtest-internal-inl.h"
#undef GTEST_IMPLEMENTATION_

#if GTEST_OS_CYGWIN
# include <sys/types.h>  // For ssize_t. NOLINT
#endif

namespace proto2 {
class Message;
}  // namespace proto2

namespace testing {
namespace internal {

namespace {

TEST(JoinAsTupleTest, JoinsEmptyTuple) {
  EXPECT_EQ("", JoinAsTuple(Strings()));
}

TEST(JoinAsTupleTest, JoinsOneTuple) {
  const char* fields[] = {"1"};
  EXPECT_EQ("1", JoinAsTuple(Strings(fields, fields + 1)));
}

TEST(JoinAsTupleTest, JoinsTwoTuple) {
  const char* fields[] = {"1", "a"};
  EXPECT_EQ("(1, a)", JoinAsTuple(Strings(fields, fields + 2)));
}

TEST(JoinAsTupleTest, JoinsTenTuple) {
  const char* fields[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
  EXPECT_EQ("(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)",
            JoinAsTuple(Strings(fields, fields + 10)));
}

TEST(ConvertIdentifierNameToWordsTest, WorksWhenNameContainsNoWord) {
  EXPECT_EQ("", ConvertIdentifierNameToWords(""));
  EXPECT_EQ("", ConvertIdentifierNameToWords("_"));
  EXPECT_EQ("", ConvertIdentifierNameToWords("__"));
}

TEST(ConvertIdentifierNameToWordsTest, WorksWhenNameContainsDigits) {
  EXPECT_EQ("1", ConvertIdentifierNameToWords("_1"));
  EXPECT_EQ("2", ConvertIdentifierNameToWords("2_"));
  EXPECT_EQ("34", ConvertIdentifierNameToWords("_34_"));
  EXPECT_EQ("34 56", ConvertIdentifierNameToWords("_34_56"));
}

TEST(ConvertIdentifierNameToWordsTest, WorksWhenNameContainsCamelCaseWords) {
  EXPECT_EQ("a big word", ConvertIdentifierNameToWords("ABigWord"));
  EXPECT_EQ("foo bar", ConvertIdentifierNameToWords("FooBar"));
  EXPECT_EQ("foo", ConvertIdentifierNameToWords("Foo_"));
  EXPECT_EQ("foo bar", ConvertIdentifierNameToWords("_Foo_Bar_"));
  EXPECT_EQ("foo and bar", ConvertIdentifierNameToWords("_Foo__And_Bar"));
}

TEST(ConvertIdentifierNameToWordsTest, WorksWhenNameContains_SeparatedWords) {
  EXPECT_EQ("foo bar", ConvertIdentifierNameToWords("foo_bar"));
  EXPECT_EQ("foo", ConvertIdentifierNameToWords("_foo_"));
  EXPECT_EQ("foo bar", ConvertIdentifierNameToWords("_foo_bar_"));
  EXPECT_EQ("foo and bar", ConvertIdentifierNameToWords("_foo__and_bar"));
}

TEST(ConvertIdentifierNameToWordsTest, WorksWhenNameIsMixture) {
  EXPECT_EQ("foo bar 123", ConvertIdentifierNameToWords("Foo_bar123"));
  EXPECT_EQ("chapter 11 section 1",
            ConvertIdentifierNameToWords("_Chapter11Section_1_"));
}

TEST(PointeeOfTest, WorksForSmartPointers) {
  EXPECT_TRUE(
      (std::is_same<int, PointeeOf<std::unique_ptr<int>>::type>::value));
  EXPECT_TRUE(
      (std::is_same<std::string,
                    PointeeOf<std::shared_ptr<std::string>>::type>::value));
}

TEST(PointeeOfTest, WorksForRawPointers) {
  EXPECT_TRUE((std::is_same<int, PointeeOf<int*>::type>::value));
  EXPECT_TRUE((std::is_same<const char, PointeeOf<const char*>::type>::value));
  EXPECT_TRUE((std::is_void<PointeeOf<void*>::type>::value));
}

TEST(GetRawPointerTest, WorksForSmartPointers) {
  const char* const raw_p1 = new const char('a');  // NOLINT
  const std::unique_ptr<const char> p1(raw_p1);
  EXPECT_EQ(raw_p1, GetRawPointer(p1));
  double* const raw_p2 = new double(2.5);  // NOLINT
  const std::shared_ptr<double> p2(raw_p2);
  EXPECT_EQ(raw_p2, GetRawPointer(p2));
}

TEST(GetRawPointerTest, WorksForRawPointers) {
  int* p = nullptr;
  EXPECT_TRUE(nullptr == GetRawPointer(p));
  int n = 1;
  EXPECT_EQ(&n, GetRawPointer(&n));
}

// Tests KindOf<T>.

class Base {};
class Derived : public Base {};

TEST(KindOfTest, Bool) {
  EXPECT_EQ(kBool, GMOCK_KIND_OF_(bool));  // NOLINT
}

TEST(KindOfTest, Integer) {
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(char));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(signed char));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(unsigned char));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(short));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(unsigned short));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(int));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(unsigned int));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(long));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(unsigned long));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(wchar_t));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(Int64));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(UInt64));  // NOLINT
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(size_t));  // NOLINT
#if GTEST_OS_LINUX || GTEST_OS_MAC || GTEST_OS_CYGWIN
  // ssize_t is not defined on Windows and possibly some other OSes.
  EXPECT_EQ(kInteger, GMOCK_KIND_OF_(ssize_t));  // NOLINT
#endif
}

TEST(KindOfTest, FloatingPoint) {
  EXPECT_EQ(kFloatingPoint, GMOCK_KIND_OF_(float));  // NOLINT
  EXPECT_EQ(kFloatingPoint, GMOCK_KIND_OF_(double));  // NOLINT
  EXPECT_EQ(kFloatingPoint, GMOCK_KIND_OF_(long double));  // NOLINT
}

TEST(KindOfTest, Other) {
  EXPECT_EQ(kOther, GMOCK_KIND_OF_(void*));  // NOLINT
  EXPECT_EQ(kOther, GMOCK_KIND_OF_(char**));  // NOLINT
  EXPECT_EQ(kOther, GMOCK_KIND_OF_(Base));  // NOLINT
}

// Tests LosslessArithmeticConvertible<T, U>.

TEST(LosslessArithmeticConvertibleTest, BoolToBool) {
  EXPECT_TRUE((LosslessArithmeticConvertible<bool, bool>::value));
}

TEST(LosslessArithmeticConvertibleTest, BoolToInteger) {
  EXPECT_TRUE((LosslessArithmeticConvertible<bool, char>::value));
  EXPECT_TRUE((LosslessArithmeticConvertible<bool, int>::value));
  EXPECT_TRUE(
      (LosslessArithmeticConvertible<bool, unsigned long>::value));  // NOLINT
}

TEST(LosslessArithmeticConvertibleTest, BoolToFloatingPoint) {
  EXPECT_TRUE((LosslessArithmeticConvertible<bool, float>::value));
  EXPECT_TRUE((LosslessArithmeticConvertible<bool, double>::value));
}

TEST(LosslessArithmeticConvertibleTest, IntegerToBool) {
  EXPECT_FALSE((LosslessArithmeticConvertible<unsigned char, bool>::value));
  EXPECT_FALSE((LosslessArithmeticConvertible<int, bool>::value));
}

TEST(LosslessArithmeticConvertibleTest, IntegerToInteger) {
  // Unsigned => larger signed is fine.
  EXPECT_TRUE((LosslessArithmeticConvertible<unsigned char, int>::value));

  // Unsigned => larger unsigned is fine.
  EXPECT_TRUE(
      (LosslessArithmeticConvertible<unsigned short, UInt64>::value)); // NOLINT

  // Signed => unsigned is not fine.
  EXPECT_FALSE((LosslessArithmeticConvertible<short, UInt64>::value)); // NOLINT
  EXPECT_FALSE((LosslessArithmeticConvertible<
      signed char, unsigned int>::value));  // NOLINT

  // Same size and same signedness: fine too.
  EXPECT_TRUE((LosslessArithmeticConvertible<
               unsigned char, unsigned char>::value));
  EXPECT_TRUE((LosslessArithmeticConvertible<int, int>::value));
  EXPECT_TRUE((LosslessArithmeticConvertible<wchar_t, wchar_t>::value));
  EXPECT_TRUE((LosslessArithmeticConvertible<
               unsigned long, unsigned long>::value));  // NOLINT

  // Same size, different signedness: not fine.
  EXPECT_FALSE((LosslessArithmeticConvertible<
                unsigned char, signed char>::value));
  EXPECT_FALSE((LosslessArithmeticConvertible<int, unsigned int>::value));
  EXPECT_FALSE((LosslessArithmeticConvertible<UInt64, Int64>::value));

  // Larger size => smaller size is not fine.
  EXPECT_FALSE((LosslessArithmeticConvertible<long, char>::value));  // NOLINT
  EXPECT_FALSE((LosslessArithmeticConvertible<int, signed char>::value));
  EXPECT_FALSE((LosslessArithmeticConvertible<Int64, unsigned int>::value));
}

TEST(LosslessArithmeticConvertibleTest, IntegerToFloatingPoint) {
  // Integers cannot be losslessly converted to floating-points, as
  // the format of the latter is implementation-defined.
  EXPECT_FALSE((LosslessArithmeticConvertible<char, float>::value));
  EXPECT_FALSE((LosslessArithmeticConvertible<int, double>::value));
  EXPECT_FALSE((LosslessArithmeticConvertible<
                short, long double>::value));  // NOLINT
}

TEST(LosslessArithmeticConvertibleTest, FloatingPointToBool) {
  EXPECT_FALSE((LosslessArithmeticConvertible<float, bool>::value));
  EXPECT_FALSE((LosslessArithmeticConvertible<double, bool>::value));
}

TEST(LosslessArithmeticConvertibleTest, FloatingPointToInteger) {
  EXPECT_FALSE((LosslessArithmeticConvertible<float, long>::value));  // NOLINT
  EXPECT_FALSE((LosslessArithmeticConvertible<double, Int64>::value));
  EXPECT_FALSE((LosslessArithmeticConvertible<long double, int>::value));
}

TEST(LosslessArithmeticConvertibleTest, FloatingPointToFloatingPoint) {
  // Smaller size => larger size is fine.
  EXPECT_TRUE((LosslessArithmeticConvertible<float, double>::value));
  EXPECT_TRUE((LosslessArithmeticConvertible<float, long double>::value));
  EXPECT_TRUE((LosslessArithmeticConvertible<double, long double>::value));

  // Same size: fine.
  EXPECT_TRUE((LosslessArithmeticConvertible<float, float>::value));
  EXPECT_TRUE((LosslessArithmeticConvertible<double, double>::value));

  // Larger size => smaller size is not fine.
  EXPECT_FALSE((LosslessArithmeticConvertible<double, float>::value));
  GTEST_INTENTIONAL_CONST_COND_PUSH_()
  if (sizeof(double) == sizeof(long double)) {  // NOLINT
  GTEST_INTENTIONAL_CONST_COND_POP_()
    // In some implementations (e.g. MSVC), double and long double
    // have the same size.
    EXPECT_TRUE((LosslessArithmeticConvertible<long double, double>::value));
  } else {
    EXPECT_FALSE((LosslessArithmeticConvertible<long double, double>::value));
  }
}

// Tests the TupleMatches() template function.

TEST(TupleMatchesTest, WorksForSize0) {
  std::tuple<> matchers;
  std::tuple<> values;

  EXPECT_TRUE(TupleMatches(matchers, values));
}

TEST(TupleMatchesTest, WorksForSize1) {
  std::tuple<Matcher<int> > matchers(Eq(1));
  std::tuple<int> values1(1), values2(2);

  EXPECT_TRUE(TupleMatches(matchers, values1));
  EXPECT_FALSE(TupleMatches(matchers, values2));
}

TEST(TupleMatchesTest, WorksForSize2) {
  std::tuple<Matcher<int>, Matcher<char> > matchers(Eq(1), Eq('a'));
  std::tuple<int, char> values1(1, 'a'), values2(1, 'b'), values3(2, 'a'),
      values4(2, 'b');

  EXPECT_TRUE(TupleMatches(matchers, values1));
  EXPECT_FALSE(TupleMatches(matchers, values2));
  EXPECT_FALSE(TupleMatches(matchers, values3));
  EXPECT_FALSE(TupleMatches(matchers, values4));
}

TEST(TupleMatchesTest, WorksForSize5) {
  std::tuple<Matcher<int>, Matcher<char>, Matcher<bool>,
             Matcher<long>,  // NOLINT
             Matcher<std::string> >
      matchers(Eq(1), Eq('a'), Eq(true), Eq(2L), Eq("hi"));
  std::tuple<int, char, bool, long, std::string>  // NOLINT
      values1(1, 'a', true, 2L, "hi"), values2(1, 'a', true, 2L, "hello"),
      values3(2, 'a', true, 2L, "hi");

  EXPECT_TRUE(TupleMatches(matchers, values1));
  EXPECT_FALSE(TupleMatches(matchers, values2));
  EXPECT_FALSE(TupleMatches(matchers, values3));
}

// Tests that Assert(true, ...) succeeds.
TEST(AssertTest, SucceedsOnTrue) {
  Assert(true, __FILE__, __LINE__, "This should succeed.");
  Assert(true, __FILE__, __LINE__);  // This should succeed too.
}

// Tests that Assert(false, ...) generates a fatal failure.
TEST(AssertTest, FailsFatallyOnFalse) {
  EXPECT_DEATH_IF_SUPPORTED({
    Assert(false, __FILE__, __LINE__, "This should fail.");
  }, "");

  EXPECT_DEATH_IF_SUPPORTED({
    Assert(false, __FILE__, __LINE__);
  }, "");
}

// Tests that Expect(true, ...) succeeds.
TEST(ExpectTest, SucceedsOnTrue) {
  Expect(true, __FILE__, __LINE__, "This should succeed.");
  Expect(true, __FILE__, __LINE__);  // This should succeed too.
}

// Tests that Expect(false, ...) generates a non-fatal failure.
TEST(ExpectTest, FailsNonfatallyOnFalse) {
  EXPECT_NONFATAL_FAILURE({  // NOLINT
    Expect(false, __FILE__, __LINE__, "This should fail.");
  }, "This should fail");

  EXPECT_NONFATAL_FAILURE({  // NOLINT
    Expect(false, __FILE__, __LINE__);
  }, "Expectation failed");
}

// Tests LogIsVisible().

class LogIsVisibleTest : public ::testing::Test {
 protected:
  void SetUp() override { original_verbose_ = GMOCK_FLAG(verbose); }

  void TearDown() override { GMOCK_FLAG(verbose) = original_verbose_; }

  std::string original_verbose_;
};

TEST_F(LogIsVisibleTest, AlwaysReturnsTrueIfVerbosityIsInfo) {
  GMOCK_FLAG(verbose) = kInfoVerbosity;
  EXPECT_TRUE(LogIsVisible(kInfo));
  EXPECT_TRUE(LogIsVisible(kWarning));
}

TEST_F(LogIsVisibleTest, AlwaysReturnsFalseIfVerbosityIsError) {
  GMOCK_FLAG(verbose) = kErrorVerbosity;
  EXPECT_FALSE(LogIsVisible(kInfo));
  EXPECT_FALSE(LogIsVisible(kWarning));
}

TEST_F(LogIsVisibleTest, WorksWhenVerbosityIsWarning) {
  GMOCK_FLAG(verbose) = kWarningVerbosity;
  EXPECT_FALSE(LogIsVisible(kInfo));
  EXPECT_TRUE(LogIsVisible(kWarning));
}

#if GTEST_HAS_STREAM_REDIRECTION

// Tests the Log() function.

// Verifies that Log() behaves correctly for the given verbosity level
// and log severity.
void TestLogWithSeverity(const std::string& verbosity, LogSeverity severity,
                         bool should_print) {
  const std::string old_flag = GMOCK_FLAG(verbose);
  GMOCK_FLAG(verbose) = verbosity;
  CaptureStdout();
  Log(severity, "Test log.\n", 0);
  if (should_print) {
    EXPECT_THAT(GetCapturedStdout().c_str(),
                ContainsRegex(
                    severity == kWarning ?
                    "^\nGMOCK WARNING:\nTest log\\.\nStack trace:\n" :
                    "^\nTest log\\.\nStack trace:\n"));
  } else {
    EXPECT_STREQ("", GetCapturedStdout().c_str());
  }
  GMOCK_FLAG(verbose) = old_flag;
}

// Tests that when the stack_frames_to_skip parameter is negative,
// Log() doesn't include the stack trace in the output.
TEST(LogTest, NoStackTraceWhenStackFramesToSkipIsNegative) {
  const std::string saved_flag = GMOCK_FLAG(verbose);
  GMOCK_FLAG(verbose) = kInfoVerbosity;
  CaptureStdout();
  Log(kInfo, "Test log.\n", -1);
  EXPECT_STREQ("\nTest log.\n", GetCapturedStdout().c_str());
  GMOCK_FLAG(verbose) = saved_flag;
}

struct MockStackTraceGetter : testing::internal::OsStackTraceGetterInterface {
  std::string CurrentStackTrace(int max_depth, int skip_count) override {
    return (testing::Message() << max_depth << "::" << skip_count << "\n")
        .GetString();
  }
  void UponLeavingGTest() override {}
};

// Tests that in opt mode, a positive stack_frames_to_skip argument is
// treated as 0.
TEST(LogTest, NoSkippingStackFrameInOptMode) {
  MockStackTraceGetter* mock_os_stack_trace_getter = new MockStackTraceGetter;
  GetUnitTestImpl()->set_os_stack_trace_getter(mock_os_stack_trace_getter);

  CaptureStdout();
  Log(kWarning, "Test log.\n", 100);
  const std::string log = GetCapturedStdout();

  std::string expected_trace =
      (testing::Message() << GTEST_FLAG(stack_trace_depth) << "::").GetString();
  std::string expected_message =
      "\nGMOCK WARNING:\n"
      "Test log.\n"
      "Stack trace:\n" +
      expected_trace;
  EXPECT_THAT(log, HasSubstr(expected_message));
  int skip_count = atoi(log.substr(expected_message.size()).c_str());

# if defined(NDEBUG)
  // In opt mode, no stack frame should be skipped.
  const int expected_skip_count = 0;
# else
  // In dbg mode, the stack frames should be skipped.
  const int expected_skip_count = 100;
# endif

  // Note that each inner implementation layer will +1 the number to remove
  // itself from the trace. This means that the value is a little higher than
  // expected, but close enough.
  EXPECT_THAT(skip_count,
              AllOf(Ge(expected_skip_count), Le(expected_skip_count + 10)));

  // Restores the default OS stack trace getter.
  GetUnitTestImpl()->set_os_stack_trace_getter(nullptr);
}

// Tests that all logs are printed when the value of the
// --gmock_verbose flag is "info".
TEST(LogTest, AllLogsArePrintedWhenVerbosityIsInfo) {
  TestLogWithSeverity(kInfoVerbosity, kInfo, true);
  TestLogWithSeverity(kInfoVerbosity, kWarning, true);
}

// Tests that only warnings are printed when the value of the
// --gmock_verbose flag is "warning".
TEST(LogTest, OnlyWarningsArePrintedWhenVerbosityIsWarning) {
  TestLogWithSeverity(kWarningVerbosity, kInfo, false);
  TestLogWithSeverity(kWarningVerbosity, kWarning, true);
}

// Tests that no logs are printed when the value of the
// --gmock_verbose flag is "error".
TEST(LogTest, NoLogsArePrintedWhenVerbosityIsError) {
  TestLogWithSeverity(kErrorVerbosity, kInfo, false);
  TestLogWithSeverity(kErrorVerbosity, kWarning, false);
}

// Tests that only warnings are printed when the value of the
// --gmock_verbose flag is invalid.
TEST(LogTest, OnlyWarningsArePrintedWhenVerbosityIsInvalid) {
  TestLogWithSeverity("invalid", kInfo, false);
  TestLogWithSeverity("invalid", kWarning, true);
}

// Verifies that Log() behaves correctly for the given verbosity level
// and log severity.
std::string GrabOutput(void(*logger)(), const char* verbosity) {
  const std::string saved_flag = GMOCK_FLAG(verbose);
  GMOCK_FLAG(verbose) = verbosity;
  CaptureStdout();
  logger();
  GMOCK_FLAG(verbose) = saved_flag;
  return GetCapturedStdout();
}

class DummyMock {
 public:
  MOCK_METHOD0(TestMethod, void());
  MOCK_METHOD1(TestMethodArg, void(int dummy));
};

void ExpectCallLogger() {
  DummyMock mock;
  EXPECT_CALL(mock, TestMethod());
  mock.TestMethod();
}

// Verifies that EXPECT_CALL logs if the --gmock_verbose flag is set to "info".
TEST(ExpectCallTest, LogsWhenVerbosityIsInfo) {
  EXPECT_THAT(std::string(GrabOutput(ExpectCallLogger, kInfoVerbosity)),
              HasSubstr("EXPECT_CALL(mock, TestMethod())"));
}

// Verifies that EXPECT_CALL doesn't log
// if the --gmock_verbose flag is set to "warning".
TEST(ExpectCallTest, DoesNotLogWhenVerbosityIsWarning) {
  EXPECT_STREQ("", GrabOutput(ExpectCallLogger, kWarningVerbosity).c_str());
}

// Verifies that EXPECT_CALL doesn't log
// if the --gmock_verbose flag is set to "error".
TEST(ExpectCallTest,  DoesNotLogWhenVerbosityIsError) {
  EXPECT_STREQ("", GrabOutput(ExpectCallLogger, kErrorVerbosity).c_str());
}

void OnCallLogger() {
  DummyMock mock;
  ON_CALL(mock, TestMethod());
}

// Verifies that ON_CALL logs if the --gmock_verbose flag is set to "info".
TEST(OnCallTest, LogsWhenVerbosityIsInfo) {
  EXPECT_THAT(std::string(GrabOutput(OnCallLogger, kInfoVerbosity)),
              HasSubstr("ON_CALL(mock, TestMethod())"));
}

// Verifies that ON_CALL doesn't log
// if the --gmock_verbose flag is set to "warning".
TEST(OnCallTest, DoesNotLogWhenVerbosityIsWarning) {
  EXPECT_STREQ("", GrabOutput(OnCallLogger, kWarningVerbosity).c_str());
}

// Verifies that ON_CALL doesn't log if
// the --gmock_verbose flag is set to "error".
TEST(OnCallTest, DoesNotLogWhenVerbosityIsError) {
  EXPECT_STREQ("", GrabOutput(OnCallLogger, kErrorVerbosity).c_str());
}

void OnCallAnyArgumentLogger() {
  DummyMock mock;
  ON_CALL(mock, TestMethodArg(_));
}

// Verifies that ON_CALL prints provided _ argument.
TEST(OnCallTest, LogsAnythingArgument) {
  EXPECT_THAT(std::string(GrabOutput(OnCallAnyArgumentLogger, kInfoVerbosity)),
              HasSubstr("ON_CALL(mock, TestMethodArg(_)"));
}

#endif  // GTEST_HAS_STREAM_REDIRECTION

// Tests StlContainerView.

TEST(StlContainerViewTest, WorksForStlContainer) {
  StaticAssertTypeEq<std::vector<int>,
      StlContainerView<std::vector<int> >::type>();
  StaticAssertTypeEq<const std::vector<double>&,
      StlContainerView<std::vector<double> >::const_reference>();

  typedef std::vector<char> Chars;
  Chars v1;
  const Chars& v2(StlContainerView<Chars>::ConstReference(v1));
  EXPECT_EQ(&v1, &v2);

  v1.push_back('a');
  Chars v3 = StlContainerView<Chars>::Copy(v1);
  EXPECT_THAT(v3, Eq(v3));
}

TEST(StlContainerViewTest, WorksForStaticNativeArray) {
  StaticAssertTypeEq<NativeArray<int>,
      StlContainerView<int[3]>::type>();
  StaticAssertTypeEq<NativeArray<double>,
      StlContainerView<const double[4]>::type>();
  StaticAssertTypeEq<NativeArray<char[3]>,
      StlContainerView<const char[2][3]>::type>();

  StaticAssertTypeEq<const NativeArray<int>,
      StlContainerView<int[2]>::const_reference>();

  int a1[3] = { 0, 1, 2 };
  NativeArray<int> a2 = StlContainerView<int[3]>::ConstReference(a1);
  EXPECT_EQ(3U, a2.size());
  EXPECT_EQ(a1, a2.begin());

  const NativeArray<int> a3 = StlContainerView<int[3]>::Copy(a1);
  ASSERT_EQ(3U, a3.size());
  EXPECT_EQ(0, a3.begin()[0]);
  EXPECT_EQ(1, a3.begin()[1]);
  EXPECT_EQ(2, a3.begin()[2]);

  // Makes sure a1 and a3 aren't aliases.
  a1[0] = 3;
  EXPECT_EQ(0, a3.begin()[0]);
}

TEST(StlContainerViewTest, WorksForDynamicNativeArray) {
  StaticAssertTypeEq<NativeArray<int>,
                     StlContainerView<std::tuple<const int*, size_t> >::type>();
  StaticAssertTypeEq<
      NativeArray<double>,
      StlContainerView<std::tuple<std::shared_ptr<double>, int> >::type>();

  StaticAssertTypeEq<
      const NativeArray<int>,
      StlContainerView<std::tuple<const int*, int> >::const_reference>();

  int a1[3] = { 0, 1, 2 };
  const int* const p1 = a1;
  NativeArray<int> a2 =
      StlContainerView<std::tuple<const int*, int> >::ConstReference(
          std::make_tuple(p1, 3));
  EXPECT_EQ(3U, a2.size());
  EXPECT_EQ(a1, a2.begin());

  const NativeArray<int> a3 = StlContainerView<std::tuple<int*, size_t> >::Copy(
      std::make_tuple(static_cast<int*>(a1), 3));
  ASSERT_EQ(3U, a3.size());
  EXPECT_EQ(0, a3.begin()[0]);
  EXPECT_EQ(1, a3.begin()[1]);
  EXPECT_EQ(2, a3.begin()[2]);

  // Makes sure a1 and a3 aren't aliases.
  a1[0] = 3;
  EXPECT_EQ(0, a3.begin()[0]);
}

// Tests the Function template struct.

TEST(FunctionTest, Nullary) {
  typedef Function<int()> F;  // NOLINT
  EXPECT_EQ(0u, F::ArgumentCount);
  EXPECT_TRUE((std::is_same<int, F::Result>::value));
  EXPECT_TRUE((std::is_same<std::tuple<>, F::ArgumentTuple>::value));
  EXPECT_TRUE((std::is_same<std::tuple<>, F::ArgumentMatcherTuple>::value));
  EXPECT_TRUE((std::is_same<void(), F::MakeResultVoid>::value));
  EXPECT_TRUE((std::is_same<IgnoredValue(), F::MakeResultIgnoredValue>::value));
}

TEST(FunctionTest, Unary) {
  typedef Function<int(bool)> F;  // NOLINT
  EXPECT_EQ(1u, F::ArgumentCount);
  EXPECT_TRUE((std::is_same<int, F::Result>::value));
  EXPECT_TRUE((std::is_same<bool, F::Arg<0>::type>::value));
  EXPECT_TRUE((std::is_same<std::tuple<bool>, F::ArgumentTuple>::value));
  EXPECT_TRUE((
      std::is_same<std::tuple<Matcher<bool>>, F::ArgumentMatcherTuple>::value));
  EXPECT_TRUE((std::is_same<void(bool), F::MakeResultVoid>::value));  // NOLINT
  EXPECT_TRUE((std::is_same<IgnoredValue(bool),                       // NOLINT
                            F::MakeResultIgnoredValue>::value));
}

TEST(FunctionTest, Binary) {
  typedef Function<int(bool, const long&)> F;  // NOLINT
  EXPECT_EQ(2u, F::ArgumentCount);
  EXPECT_TRUE((std::is_same<int, F::Result>::value));
  EXPECT_TRUE((std::is_same<bool, F::Arg<0>::type>::value));
  EXPECT_TRUE((std::is_same<const long&, F::Arg<1>::type>::value));  // NOLINT
  EXPECT_TRUE((std::is_same<std::tuple<bool, const long&>,           // NOLINT
                            F::ArgumentTuple>::value));
  EXPECT_TRUE(
      (std::is_same<std::tuple<Matcher<bool>, Matcher<const long&>>,  // NOLINT
                    F::ArgumentMatcherTuple>::value));
  EXPECT_TRUE((std::is_same<void(bool, const long&),  // NOLINT
                            F::MakeResultVoid>::value));
  EXPECT_TRUE((std::is_same<IgnoredValue(bool, const long&),  // NOLINT
                            F::MakeResultIgnoredValue>::value));
}

TEST(FunctionTest, LongArgumentList) {
  typedef Function<char(bool, int, char*, int&, const long&)> F;  // NOLINT
  EXPECT_EQ(5u, F::ArgumentCount);
  EXPECT_TRUE((std::is_same<char, F::Result>::value));
  EXPECT_TRUE((std::is_same<bool, F::Arg<0>::type>::value));
  EXPECT_TRUE((std::is_same<int, F::Arg<1>::type>::value));
  EXPECT_TRUE((std::is_same<char*, F::Arg<2>::type>::value));
  EXPECT_TRUE((std::is_same<int&, F::Arg<3>::type>::value));
  EXPECT_TRUE((std::is_same<const long&, F::Arg<4>::type>::value));  // NOLINT
  EXPECT_TRUE(
      (std::is_same<std::tuple<bool, int, char*, int&, const long&>,  // NOLINT
                    F::ArgumentTuple>::value));
  EXPECT_TRUE(
      (std::is_same<
          std::tuple<Matcher<bool>, Matcher<int>, Matcher<char*>, Matcher<int&>,
                     Matcher<const long&>>,  // NOLINT
          F::ArgumentMatcherTuple>::value));
  EXPECT_TRUE(
      (std::is_same<void(bool, int, char*, int&, const long&),  // NOLINT
                    F::MakeResultVoid>::value));
  EXPECT_TRUE((
      std::is_same<IgnoredValue(bool, int, char*, int&, const long&),  // NOLINT
                   F::MakeResultIgnoredValue>::value));
}

}  // namespace
}  // namespace internal
}  // namespace testing
