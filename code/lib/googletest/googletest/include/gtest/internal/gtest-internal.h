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
// The Google C++ Testing and Mocking Framework (Google Test)
//
// This header file declares functions and macros used internally by
// Google Test.  They are subject to change without notice.

// GOOGLETEST_CM0001 DO NOT DELETE

#ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_INTERNAL_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_INTERNAL_H_

#include "gtest/internal/gtest-port.h"

#if GTEST_OS_LINUX
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
#endif  // GTEST_OS_LINUX

#if GTEST_HAS_EXCEPTIONS
# include <stdexcept>
#endif

#include <ctype.h>
#include <float.h>
#include <string.h>
#include <iomanip>
#include <limits>
#include <map>
#include <set>
#include <string>
#include <type_traits>
#include <vector>

#include "gtest/gtest-message.h"
#include "gtest/internal/gtest-filepath.h"
#include "gtest/internal/gtest-string.h"
#include "gtest/internal/gtest-type-util.h"

// Due to C++ preprocessor weirdness, we need double indirection to
// concatenate two tokens when one of them is __LINE__.  Writing
//
//   foo ## __LINE__
//
// will result in the token foo__LINE__, instead of foo followed by
// the current line number.  For more details, see
// http://www.parashift.com/c++-faq-lite/misc-technical-issues.html#faq-39.6
#define GTEST_CONCAT_TOKEN_(foo, bar) GTEST_CONCAT_TOKEN_IMPL_(foo, bar)
#define GTEST_CONCAT_TOKEN_IMPL_(foo, bar) foo ## bar

// Stringifies its argument.
#define GTEST_STRINGIFY_(name) #name

namespace proto2 { class Message; }

namespace testing {

// Forward declarations.

class AssertionResult;                 // Result of an assertion.
class Message;                         // Represents a failure message.
class Test;                            // Represents a test.
class TestInfo;                        // Information about a test.
class TestPartResult;                  // Result of a test part.
class UnitTest;                        // A collection of test suites.

template <typename T>
::std::string PrintToString(const T& value);

namespace internal {

struct TraceInfo;                      // Information about a trace point.
class TestInfoImpl;                    // Opaque implementation of TestInfo
class UnitTestImpl;                    // Opaque implementation of UnitTest

// The text used in failure messages to indicate the start of the
// stack trace.
GTEST_API_ extern const char kStackTraceMarker[];

// An IgnoredValue object can be implicitly constructed from ANY value.
class IgnoredValue {
  struct Sink {};
 public:
  // This constructor template allows any value to be implicitly
  // converted to IgnoredValue.  The object has no data member and
  // doesn't try to remember anything about the argument.  We
  // deliberately omit the 'explicit' keyword in order to allow the
  // conversion to be implicit.
  // Disable the conversion if T already has a magical conversion operator.
  // Otherwise we get ambiguity.
  template <typename T,
            typename std::enable_if<!std::is_convertible<T, Sink>::value,
                                    int>::type = 0>
  IgnoredValue(const T& /* ignored */) {}  // NOLINT(runtime/explicit)
};

// Appends the user-supplied message to the Google-Test-generated message.
GTEST_API_ std::string AppendUserMessage(
    const std::string& gtest_msg, const Message& user_msg);

#if GTEST_HAS_EXCEPTIONS

GTEST_DISABLE_MSC_WARNINGS_PUSH_(4275 \
/* an exported class was derived from a class that was not exported */)

// This exception is thrown by (and only by) a failed Google Test
// assertion when GTEST_FLAG(throw_on_failure) is true (if exceptions
// are enabled).  We derive it from std::runtime_error, which is for
// errors presumably detectable only at run time.  Since
// std::runtime_error inherits from std::exception, many testing
// frameworks know how to extract and print the message inside it.
class GTEST_API_ GoogleTestFailureException : public ::std::runtime_error {
 public:
  explicit GoogleTestFailureException(const TestPartResult& failure);
};

GTEST_DISABLE_MSC_WARNINGS_POP_()  //  4275

#endif  // GTEST_HAS_EXCEPTIONS

namespace edit_distance {
// Returns the optimal edits to go from 'left' to 'right'.
// All edits cost the same, with replace having lower priority than
// add/remove.
// Simple implementation of the Wagner-Fischer algorithm.
// See http://en.wikipedia.org/wiki/Wagner-Fischer_algorithm
enum EditType { kMatch, kAdd, kRemove, kReplace };
GTEST_API_ std::vector<EditType> CalculateOptimalEdits(
    const std::vector<size_t>& left, const std::vector<size_t>& right);

// Same as above, but the input is represented as strings.
GTEST_API_ std::vector<EditType> CalculateOptimalEdits(
    const std::vector<std::string>& left,
    const std::vector<std::string>& right);

// Create a diff of the input strings in Unified diff format.
GTEST_API_ std::string CreateUnifiedDiff(const std::vector<std::string>& left,
                                         const std::vector<std::string>& right,
                                         size_t context = 2);

}  // namespace edit_distance

// Calculate the diff between 'left' and 'right' and return it in unified diff
// format.
// If not null, stores in 'total_line_count' the total number of lines found
// in left + right.
GTEST_API_ std::string DiffStrings(const std::string& left,
                                   const std::string& right,
                                   size_t* total_line_count);

// Constructs and returns the message for an equality assertion
// (e.g. ASSERT_EQ, EXPECT_STREQ, etc) failure.
//
// The first four parameters are the expressions used in the assertion
// and their values, as strings.  For example, for ASSERT_EQ(foo, bar)
// where foo is 5 and bar is 6, we have:
//
//   expected_expression: "foo"
//   actual_expression:   "bar"
//   expected_value:      "5"
//   actual_value:        "6"
//
// The ignoring_case parameter is true if and only if the assertion is a
// *_STRCASEEQ*.  When it's true, the string " (ignoring case)" will
// be inserted into the message.
GTEST_API_ AssertionResult EqFailure(const char* expected_expression,
                                     const char* actual_expression,
                                     const std::string& expected_value,
                                     const std::string& actual_value,
                                     bool ignoring_case);

// Constructs a failure message for Boolean assertions such as EXPECT_TRUE.
GTEST_API_ std::string GetBoolAssertionFailureMessage(
    const AssertionResult& assertion_result,
    const char* expression_text,
    const char* actual_predicate_value,
    const char* expected_predicate_value);

// This template class represents an IEEE floating-point number
// (either single-precision or double-precision, depending on the
// template parameters).
//
// The purpose of this class is to do more sophisticated number
// comparison.  (Due to round-off error, etc, it's very unlikely that
// two floating-points will be equal exactly.  Hence a naive
// comparison by the == operation often doesn't work.)
//
// Format of IEEE floating-point:
//
//   The most-significant bit being the leftmost, an IEEE
//   floating-point looks like
//
//     sign_bit exponent_bits fraction_bits
//
//   Here, sign_bit is a single bit that designates the sign of the
//   number.
//
//   For float, there are 8 exponent bits and 23 fraction bits.
//
//   For double, there are 11 exponent bits and 52 fraction bits.
//
//   More details can be found at
//   http://en.wikipedia.org/wiki/IEEE_floating-point_standard.
//
// Template parameter:
//
//   RawType: the raw floating-point type (either float or double)
template <typename RawType>
class FloatingPoint {
 public:
  // Defines the unsigned integer type that has the same size as the
  // floating point number.
  typedef typename TypeWithSize<sizeof(RawType)>::UInt Bits;

  // Constants.

  // # of bits in a number.
  static const size_t kBitCount = 8*sizeof(RawType);

  // # of fraction bits in a number.
  static const size_t kFractionBitCount =
    std::numeric_limits<RawType>::digits - 1;

  // # of exponent bits in a number.
  static const size_t kExponentBitCount = kBitCount - 1 - kFractionBitCount;

  // The mask for the sign bit.
  static const Bits kSignBitMask = static_cast<Bits>(1) << (kBitCount - 1);

  // The mask for the fraction bits.
  static const Bits kFractionBitMask =
    ~static_cast<Bits>(0) >> (kExponentBitCount + 1);

  // The mask for the exponent bits.
  static const Bits kExponentBitMask = ~(kSignBitMask | kFractionBitMask);

  // How many ULP's (Units in the Last Place) we want to tolerate when
  // comparing two numbers.  The larger the value, the more error we
  // allow.  A 0 value means that two numbers must be exactly the same
  // to be considered equal.
  //
  // The maximum error of a single floating-point operation is 0.5
  // units in the last place.  On Intel CPU's, all floating-point
  // calculations are done with 80-bit precision, while double has 64
  // bits.  Therefore, 4 should be enough for ordinary use.
  //
  // See the following article for more details on ULP:
  // http://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/
  static const size_t kMaxUlps = 4;

  // Constructs a FloatingPoint from a raw floating-point number.
  //
  // On an Intel CPU, passing a non-normalized NAN (Not a Number)
  // around may change its bits, although the new value is guaranteed
  // to be also a NAN.  Therefore, don't expect this constructor to
  // preserve the bits in x when x is a NAN.
  explicit FloatingPoint(const RawType& x) { u_.value_ = x; }

  // Static methods

  // Reinterprets a bit pattern as a floating-point number.
  //
  // This function is needed to test the AlmostEquals() method.
  static RawType ReinterpretBits(const Bits bits) {
    FloatingPoint fp(0);
    fp.u_.bits_ = bits;
    return fp.u_.value_;
  }

  // Returns the floating-point number that represent positive infinity.
  static RawType Infinity() {
    return ReinterpretBits(kExponentBitMask);
  }

  // Returns the maximum representable finite floating-point number.
  static RawType Max();

  // Non-static methods

  // Returns the bits that represents this number.
  const Bits &bits() const { return u_.bits_; }

  // Returns the exponent bits of this number.
  Bits exponent_bits() const { return kExponentBitMask & u_.bits_; }

  // Returns the fraction bits of this number.
  Bits fraction_bits() const { return kFractionBitMask & u_.bits_; }

  // Returns the sign bit of this number.
  Bits sign_bit() const { return kSignBitMask & u_.bits_; }

  // Returns true if and only if this is NAN (not a number).
  bool is_nan() const {
    // It's a NAN if the exponent bits are all ones and the fraction
    // bits are not entirely zeros.
    return (exponent_bits() == kExponentBitMask) && (fraction_bits() != 0);
  }

  // Returns true if and only if this number is at most kMaxUlps ULP's away
  // from rhs.  In particular, this function:
  //
  //   - returns false if either number is (or both are) NAN.
  //   - treats really large numbers as almost equal to infinity.
  //   - thinks +0.0 and -0.0 are 0 DLP's apart.
  bool AlmostEquals(const FloatingPoint& rhs) const {
    // The IEEE standard says that any comparison operation involving
    // a NAN must return false.
    if (is_nan() || rhs.is_nan()) return false;

    return DistanceBetweenSignAndMagnitudeNumbers(u_.bits_, rhs.u_.bits_)
        <= kMaxUlps;
  }

 private:
  // The data type used to store the actual floating-point number.
  union FloatingPointUnion {
    RawType value_;  // The raw floating-point number.
    Bits bits_;      // The bits that represent the number.
  };

  // Converts an integer from the sign-and-magnitude representation to
  // the biased representation.  More precisely, let N be 2 to the
  // power of (kBitCount - 1), an integer x is represented by the
  // unsigned number x + N.
  //
  // For instance,
  //
  //   -N + 1 (the most negative number representable using
  //          sign-and-magnitude) is represented by 1;
  //   0      is represented by N; and
  //   N - 1  (the biggest number representable using
  //          sign-and-magnitude) is represented by 2N - 1.
  //
  // Read http://en.wikipedia.org/wiki/Signed_number_representations
  // for more details on signed number representations.
  static Bits SignAndMagnitudeToBiased(const Bits &sam) {
    if (kSignBitMask & sam) {
      // sam represents a negative number.
      return ~sam + 1;
    } else {
      // sam represents a positive number.
      return kSignBitMask | sam;
    }
  }

  // Given two numbers in the sign-and-magnitude representation,
  // returns the distance between them as an unsigned number.
  static Bits DistanceBetweenSignAndMagnitudeNumbers(const Bits &sam1,
                                                     const Bits &sam2) {
    const Bits biased1 = SignAndMagnitudeToBiased(sam1);
    const Bits biased2 = SignAndMagnitudeToBiased(sam2);
    return (biased1 >= biased2) ? (biased1 - biased2) : (biased2 - biased1);
  }

  FloatingPointUnion u_;
};

// We cannot use std::numeric_limits<T>::max() as it clashes with the max()
// macro defined by <windows.h>.
template <>
inline float FloatingPoint<float>::Max() { return FLT_MAX; }
template <>
inline double FloatingPoint<double>::Max() { return DBL_MAX; }

// Typedefs the instances of the FloatingPoint template class that we
// care to use.
typedef FloatingPoint<float> Float;
typedef FloatingPoint<double> Double;

// In order to catch the mistake of putting tests that use different
// test fixture classes in the same test suite, we need to assign
// unique IDs to fixture classes and compare them.  The TypeId type is
// used to hold such IDs.  The user should treat TypeId as an opaque
// type: the only operation allowed on TypeId values is to compare
// them for equality using the == operator.
typedef const void* TypeId;

template <typename T>
class TypeIdHelper {
 public:
  // dummy_ must not have a const type.  Otherwise an overly eager
  // compiler (e.g. MSVC 7.1 & 8.0) may try to merge
  // TypeIdHelper<T>::dummy_ for different Ts as an "optimization".
  static bool dummy_;
};

template <typename T>
bool TypeIdHelper<T>::dummy_ = false;

// GetTypeId<T>() returns the ID of type T.  Different values will be
// returned for different types.  Calling the function twice with the
// same type argument is guaranteed to return the same ID.
template <typename T>
TypeId GetTypeId() {
  // The compiler is required to allocate a different
  // TypeIdHelper<T>::dummy_ variable for each T used to instantiate
  // the template.  Therefore, the address of dummy_ is guaranteed to
  // be unique.
  return &(TypeIdHelper<T>::dummy_);
}

// Returns the type ID of ::testing::Test.  Always call this instead
// of GetTypeId< ::testing::Test>() to get the type ID of
// ::testing::Test, as the latter may give the wrong result due to a
// suspected linker bug when compiling Google Test as a Mac OS X
// framework.
GTEST_API_ TypeId GetTestTypeId();

// Defines the abstract factory interface that creates instances
// of a Test object.
class TestFactoryBase {
 public:
  virtual ~TestFactoryBase() {}

  // Creates a test instance to run. The instance is both created and destroyed
  // within TestInfoImpl::Run()
  virtual Test* CreateTest() = 0;

 protected:
  TestFactoryBase() {}

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestFactoryBase);
};

// This class provides implementation of TeastFactoryBase interface.
// It is used in TEST and TEST_F macros.
template <class TestClass>
class TestFactoryImpl : public TestFactoryBase {
 public:
  Test* CreateTest() override { return new TestClass; }
};

#if GTEST_OS_WINDOWS

// Predicate-formatters for implementing the HRESULT checking macros
// {ASSERT|EXPECT}_HRESULT_{SUCCEEDED|FAILED}
// We pass a long instead of HRESULT to avoid causing an
// include dependency for the HRESULT type.
GTEST_API_ AssertionResult IsHRESULTSuccess(const char* expr,
                                            long hr);  // NOLINT
GTEST_API_ AssertionResult IsHRESULTFailure(const char* expr,
                                            long hr);  // NOLINT

#endif  // GTEST_OS_WINDOWS

// Types of SetUpTestSuite() and TearDownTestSuite() functions.
using SetUpTestSuiteFunc = void (*)();
using TearDownTestSuiteFunc = void (*)();

struct CodeLocation {
  CodeLocation(const std::string& a_file, int a_line)
      : file(a_file), line(a_line) {}

  std::string file;
  int line;
};

//  Helper to identify which setup function for TestCase / TestSuite to call.
//  Only one function is allowed, either TestCase or TestSute but not both.

// Utility functions to help SuiteApiResolver
using SetUpTearDownSuiteFuncType = void (*)();

inline SetUpTearDownSuiteFuncType GetNotDefaultOrNull(
    SetUpTearDownSuiteFuncType a, SetUpTearDownSuiteFuncType def) {
  return a == def ? nullptr : a;
}

template <typename T>
//  Note that SuiteApiResolver inherits from T because
//  SetUpTestSuite()/TearDownTestSuite() could be protected. Ths way
//  SuiteApiResolver can access them.
struct SuiteApiResolver : T {
  // testing::Test is only forward declared at this point. So we make it a
  // dependend class for the compiler to be OK with it.
  using Test =
      typename std::conditional<sizeof(T) != 0, ::testing::Test, void>::type;

  static SetUpTearDownSuiteFuncType GetSetUpCaseOrSuite(const char* filename,
                                                        int line_num) {
    SetUpTearDownSuiteFuncType test_case_fp =
        GetNotDefaultOrNull(&T::SetUpTestCase, &Test::SetUpTestCase);
    SetUpTearDownSuiteFuncType test_suite_fp =
        GetNotDefaultOrNull(&T::SetUpTestSuite, &Test::SetUpTestSuite);

    GTEST_CHECK_(!test_case_fp || !test_suite_fp)
        << "Test can not provide both SetUpTestSuite and SetUpTestCase, please "
           "make sure there is only one present at "
        << filename << ":" << line_num;

    return test_case_fp != nullptr ? test_case_fp : test_suite_fp;
  }

  static SetUpTearDownSuiteFuncType GetTearDownCaseOrSuite(const char* filename,
                                                           int line_num) {
    SetUpTearDownSuiteFuncType test_case_fp =
        GetNotDefaultOrNull(&T::TearDownTestCase, &Test::TearDownTestCase);
    SetUpTearDownSuiteFuncType test_suite_fp =
        GetNotDefaultOrNull(&T::TearDownTestSuite, &Test::TearDownTestSuite);

    GTEST_CHECK_(!test_case_fp || !test_suite_fp)
        << "Test can not provide both TearDownTestSuite and TearDownTestCase,"
           " please make sure there is only one present at"
        << filename << ":" << line_num;

    return test_case_fp != nullptr ? test_case_fp : test_suite_fp;
  }
};

// Creates a new TestInfo object and registers it with Google Test;
// returns the created object.
//
// Arguments:
//
//   test_suite_name:   name of the test suite
//   name:             name of the test
//   type_param        the name of the test's type parameter, or NULL if
//                     this is not a typed or a type-parameterized test.
//   value_param       text representation of the test's value parameter,
//                     or NULL if this is not a type-parameterized test.
//   code_location:    code location where the test is defined
//   fixture_class_id: ID of the test fixture class
//   set_up_tc:        pointer to the function that sets up the test suite
//   tear_down_tc:     pointer to the function that tears down the test suite
//   factory:          pointer to the factory that creates a test object.
//                     The newly created TestInfo instance will assume
//                     ownership of the factory object.
GTEST_API_ TestInfo* MakeAndRegisterTestInfo(
    const char* test_suite_name, const char* name, const char* type_param,
    const char* value_param, CodeLocation code_location,
    TypeId fixture_class_id, SetUpTestSuiteFunc set_up_tc,
    TearDownTestSuiteFunc tear_down_tc, TestFactoryBase* factory);

// If *pstr starts with the given prefix, modifies *pstr to be right
// past the prefix and returns true; otherwise leaves *pstr unchanged
// and returns false.  None of pstr, *pstr, and prefix can be NULL.
GTEST_API_ bool SkipPrefix(const char* prefix, const char** pstr);

#if GTEST_HAS_TYPED_TEST || GTEST_HAS_TYPED_TEST_P

GTEST_DISABLE_MSC_WARNINGS_PUSH_(4251 \
/* class A needs to have dll-interface to be used by clients of class B */)

// State of the definition of a type-parameterized test suite.
class GTEST_API_ TypedTestSuitePState {
 public:
  TypedTestSuitePState() : registered_(false) {}

  // Adds the given test name to defined_test_names_ and return true
  // if the test suite hasn't been registered; otherwise aborts the
  // program.
  bool AddTestName(const char* file, int line, const char* case_name,
                   const char* test_name) {
    if (registered_) {
      fprintf(stderr,
              "%s Test %s must be defined before "
              "REGISTER_TYPED_TEST_SUITE_P(%s, ...).\n",
              FormatFileLocation(file, line).c_str(), test_name, case_name);
      fflush(stderr);
      posix::Abort();
    }
    registered_tests_.insert(
        ::std::make_pair(test_name, CodeLocation(file, line)));
    return true;
  }

  bool TestExists(const std::string& test_name) const {
    return registered_tests_.count(test_name) > 0;
  }

  const CodeLocation& GetCodeLocation(const std::string& test_name) const {
    RegisteredTestsMap::const_iterator it = registered_tests_.find(test_name);
    GTEST_CHECK_(it != registered_tests_.end());
    return it->second;
  }

  // Verifies that registered_tests match the test names in
  // defined_test_names_; returns registered_tests if successful, or
  // aborts the program otherwise.
  const char* VerifyRegisteredTestNames(
      const char* file, int line, const char* registered_tests);

 private:
  typedef ::std::map<std::string, CodeLocation> RegisteredTestsMap;

  bool registered_;
  RegisteredTestsMap registered_tests_;
};

//  Legacy API is deprecated but still available
#ifndef GTEST_REMOVE_LEGACY_TEST_CASEAPI_
using TypedTestCasePState = TypedTestSuitePState;
#endif  //  GTEST_REMOVE_LEGACY_TEST_CASEAPI_

GTEST_DISABLE_MSC_WARNINGS_POP_()  //  4251

// Skips to the first non-space char after the first comma in 'str';
// returns NULL if no comma is found in 'str'.
inline const char* SkipComma(const char* str) {
  const char* comma = strchr(str, ',');
  if (comma == nullptr) {
    return nullptr;
  }
  while (IsSpace(*(++comma))) {}
  return comma;
}

// Returns the prefix of 'str' before the first comma in it; returns
// the entire string if it contains no comma.
inline std::string GetPrefixUntilComma(const char* str) {
  const char* comma = strchr(str, ',');
  return comma == nullptr ? str : std::string(str, comma);
}

// Splits a given string on a given delimiter, populating a given
// vector with the fields.
void SplitString(const ::std::string& str, char delimiter,
                 ::std::vector< ::std::string>* dest);

// The default argument to the template below for the case when the user does
// not provide a name generator.
struct DefaultNameGenerator {
  template <typename T>
  static std::string GetName(int i) {
    return StreamableToString(i);
  }
};

template <typename Provided = DefaultNameGenerator>
struct NameGeneratorSelector {
  typedef Provided type;
};

template <typename NameGenerator>
void GenerateNamesRecursively(Types0, std::vector<std::string>*, int) {}

template <typename NameGenerator, typename Types>
void GenerateNamesRecursively(Types, std::vector<std::string>* result, int i) {
  result->push_back(NameGenerator::template GetName<typename Types::Head>(i));
  GenerateNamesRecursively<NameGenerator>(typename Types::Tail(), result,
                                          i + 1);
}

template <typename NameGenerator, typename Types>
std::vector<std::string> GenerateNames() {
  std::vector<std::string> result;
  GenerateNamesRecursively<NameGenerator>(Types(), &result, 0);
  return result;
}

// TypeParameterizedTest<Fixture, TestSel, Types>::Register()
// registers a list of type-parameterized tests with Google Test.  The
// return value is insignificant - we just need to return something
// such that we can call this function in a namespace scope.
//
// Implementation note: The GTEST_TEMPLATE_ macro declares a template
// template parameter.  It's defined in gtest-type-util.h.
template <GTEST_TEMPLATE_ Fixture, class TestSel, typename Types>
class TypeParameterizedTest {
 public:
  // 'index' is the index of the test in the type list 'Types'
  // specified in INSTANTIATE_TYPED_TEST_SUITE_P(Prefix, TestSuite,
  // Types).  Valid values for 'index' are [0, N - 1] where N is the
  // length of Types.
  static bool Register(const char* prefix, const CodeLocation& code_location,
                       const char* case_name, const char* test_names, int index,
                       const std::vector<std::string>& type_names =
                           GenerateNames<DefaultNameGenerator, Types>()) {
    typedef typename Types::Head Type;
    typedef Fixture<Type> FixtureClass;
    typedef typename GTEST_BIND_(TestSel, Type) TestClass;

    // First, registers the first type-parameterized test in the type
    // list.
    MakeAndRegisterTestInfo(
        (std::string(prefix) + (prefix[0] == '\0' ? "" : "/") + case_name +
         "/" + type_names[static_cast<size_t>(index)])
            .c_str(),
        StripTrailingSpaces(GetPrefixUntilComma(test_names)).c_str(),
        GetTypeName<Type>().c_str(),
        nullptr,  // No value parameter.
        code_location, GetTypeId<FixtureClass>(),
        SuiteApiResolver<TestClass>::GetSetUpCaseOrSuite(
            code_location.file.c_str(), code_location.line),
        SuiteApiResolver<TestClass>::GetTearDownCaseOrSuite(
            code_location.file.c_str(), code_location.line),
        new TestFactoryImpl<TestClass>);

    // Next, recurses (at compile time) with the tail of the type list.
    return TypeParameterizedTest<Fixture, TestSel,
                                 typename Types::Tail>::Register(prefix,
                                                                 code_location,
                                                                 case_name,
                                                                 test_names,
                                                                 index + 1,
                                                                 type_names);
  }
};

// The base case for the compile time recursion.
template <GTEST_TEMPLATE_ Fixture, class TestSel>
class TypeParameterizedTest<Fixture, TestSel, Types0> {
 public:
  static bool Register(const char* /*prefix*/, const CodeLocation&,
                       const char* /*case_name*/, const char* /*test_names*/,
                       int /*index*/,
                       const std::vector<std::string>& =
                           std::vector<std::string>() /*type_names*/) {
    return true;
  }
};

// TypeParameterizedTestSuite<Fixture, Tests, Types>::Register()
// registers *all combinations* of 'Tests' and 'Types' with Google
// Test.  The return value is insignificant - we just need to return
// something such that we can call this function in a namespace scope.
template <GTEST_TEMPLATE_ Fixture, typename Tests, typename Types>
class TypeParameterizedTestSuite {
 public:
  static bool Register(const char* prefix, CodeLocation code_location,
                       const TypedTestSuitePState* state, const char* case_name,
                       const char* test_names,
                       const std::vector<std::string>& type_names =
                           GenerateNames<DefaultNameGenerator, Types>()) {
    std::string test_name = StripTrailingSpaces(
        GetPrefixUntilComma(test_names));
    if (!state->TestExists(test_name)) {
      fprintf(stderr, "Failed to get code location for test %s.%s at %s.",
              case_name, test_name.c_str(),
              FormatFileLocation(code_location.file.c_str(),
                                 code_location.line).c_str());
      fflush(stderr);
      posix::Abort();
    }
    const CodeLocation& test_location = state->GetCodeLocation(test_name);

    typedef typename Tests::Head Head;

    // First, register the first test in 'Test' for each type in 'Types'.
    TypeParameterizedTest<Fixture, Head, Types>::Register(
        prefix, test_location, case_name, test_names, 0, type_names);

    // Next, recurses (at compile time) with the tail of the test list.
    return TypeParameterizedTestSuite<Fixture, typename Tests::Tail,
                                      Types>::Register(prefix, code_location,
                                                       state, case_name,
                                                       SkipComma(test_names),
                                                       type_names);
  }
};

// The base case for the compile time recursion.
template <GTEST_TEMPLATE_ Fixture, typename Types>
class TypeParameterizedTestSuite<Fixture, Templates0, Types> {
 public:
  static bool Register(const char* /*prefix*/, const CodeLocation&,
                       const TypedTestSuitePState* /*state*/,
                       const char* /*case_name*/, const char* /*test_names*/,
                       const std::vector<std::string>& =
                           std::vector<std::string>() /*type_names*/) {
    return true;
  }
};

#endif  // GTEST_HAS_TYPED_TEST || GTEST_HAS_TYPED_TEST_P

// Returns the current OS stack trace as an std::string.
//
// The maximum number of stack frames to be included is specified by
// the gtest_stack_trace_depth flag.  The skip_count parameter
// specifies the number of top frames to be skipped, which doesn't
// count against the number of frames to be included.
//
// For example, if Foo() calls Bar(), which in turn calls
// GetCurrentOsStackTraceExceptTop(..., 1), Foo() will be included in
// the trace but Bar() and GetCurrentOsStackTraceExceptTop() won't.
GTEST_API_ std::string GetCurrentOsStackTraceExceptTop(
    UnitTest* unit_test, int skip_count);

// Helpers for suppressing warnings on unreachable code or constant
// condition.

// Always returns true.
GTEST_API_ bool AlwaysTrue();

// Always returns false.
inline bool AlwaysFalse() { return !AlwaysTrue(); }

// Helper for suppressing false warning from Clang on a const char*
// variable declared in a conditional expression always being NULL in
// the else branch.
struct GTEST_API_ ConstCharPtr {
  ConstCharPtr(const char* str) : value(str) {}
  operator bool() const { return true; }
  const char* value;
};

// A simple Linear Congruential Generator for generating random
// numbers with a uniform distribution.  Unlike rand() and srand(), it
// doesn't use global state (and therefore can't interfere with user
// code).  Unlike rand_r(), it's portable.  An LCG isn't very random,
// but it's good enough for our purposes.
class GTEST_API_ Random {
 public:
  static const UInt32 kMaxRange = 1u << 31;

  explicit Random(UInt32 seed) : state_(seed) {}

  void Reseed(UInt32 seed) { state_ = seed; }

  // Generates a random number from [0, range).  Crashes if 'range' is
  // 0 or greater than kMaxRange.
  UInt32 Generate(UInt32 range);

 private:
  UInt32 state_;
  GTEST_DISALLOW_COPY_AND_ASSIGN_(Random);
};

// Turns const U&, U&, const U, and U all into U.
#define GTEST_REMOVE_REFERENCE_AND_CONST_(T) \
  typename std::remove_const<typename std::remove_reference<T>::type>::type

// IsAProtocolMessage<T>::value is a compile-time bool constant that's
// true if and only if T is type proto2::Message or a subclass of it.
template <typename T>
struct IsAProtocolMessage
    : public bool_constant<
          std::is_convertible<const T*, const ::proto2::Message*>::value> {};

// When the compiler sees expression IsContainerTest<C>(0), if C is an
// STL-style container class, the first overload of IsContainerTest
// will be viable (since both C::iterator* and C::const_iterator* are
// valid types and NULL can be implicitly converted to them).  It will
// be picked over the second overload as 'int' is a perfect match for
// the type of argument 0.  If C::iterator or C::const_iterator is not
// a valid type, the first overload is not viable, and the second
// overload will be picked.  Therefore, we can determine whether C is
// a container class by checking the type of IsContainerTest<C>(0).
// The value of the expression is insignificant.
//
// In C++11 mode we check the existence of a const_iterator and that an
// iterator is properly implemented for the container.
//
// For pre-C++11 that we look for both C::iterator and C::const_iterator.
// The reason is that C++ injects the name of a class as a member of the
// class itself (e.g. you can refer to class iterator as either
// 'iterator' or 'iterator::iterator').  If we look for C::iterator
// only, for example, we would mistakenly think that a class named
// iterator is an STL container.
//
// Also note that the simpler approach of overloading
// IsContainerTest(typename C::const_iterator*) and
// IsContainerTest(...) doesn't work with Visual Age C++ and Sun C++.
typedef int IsContainer;
template <class C,
          class Iterator = decltype(::std::declval<const C&>().begin()),
          class = decltype(::std::declval<const C&>().end()),
          class = decltype(++::std::declval<Iterator&>()),
          class = decltype(*::std::declval<Iterator>()),
          class = typename C::const_iterator>
IsContainer IsContainerTest(int /* dummy */) {
  return 0;
}

typedef char IsNotContainer;
template <class C>
IsNotContainer IsContainerTest(long /* dummy */) { return '\0'; }

// Trait to detect whether a type T is a hash table.
// The heuristic used is that the type contains an inner type `hasher` and does
// not contain an inner type `reverse_iterator`.
// If the container is iterable in reverse, then order might actually matter.
template <typename T>
struct IsHashTable {
 private:
  template <typename U>
  static char test(typename U::hasher*, typename U::reverse_iterator*);
  template <typename U>
  static int test(typename U::hasher*, ...);
  template <typename U>
  static char test(...);

 public:
  static const bool value = sizeof(test<T>(nullptr, nullptr)) == sizeof(int);
};

template <typename T>
const bool IsHashTable<T>::value;

template <typename C,
          bool = sizeof(IsContainerTest<C>(0)) == sizeof(IsContainer)>
struct IsRecursiveContainerImpl;

template <typename C>
struct IsRecursiveContainerImpl<C, false> : public std::false_type {};

// Since the IsRecursiveContainerImpl depends on the IsContainerTest we need to
// obey the same inconsistencies as the IsContainerTest, namely check if
// something is a container is relying on only const_iterator in C++11 and
// is relying on both const_iterator and iterator otherwise
template <typename C>
struct IsRecursiveContainerImpl<C, true> {
  using value_type = decltype(*std::declval<typename C::const_iterator>());
  using type =
      std::is_same<typename std::remove_const<
                       typename std::remove_reference<value_type>::type>::type,
                   C>;
};

// IsRecursiveContainer<Type> is a unary compile-time predicate that
// evaluates whether C is a recursive container type. A recursive container
// type is a container type whose value_type is equal to the container type
// itself. An example for a recursive container type is
// boost::filesystem::path, whose iterator has a value_type that is equal to
// boost::filesystem::path.
template <typename C>
struct IsRecursiveContainer : public IsRecursiveContainerImpl<C>::type {};

// Utilities for native arrays.

// ArrayEq() compares two k-dimensional native arrays using the
// elements' operator==, where k can be any integer >= 0.  When k is
// 0, ArrayEq() degenerates into comparing a single pair of values.

template <typename T, typename U>
bool ArrayEq(const T* lhs, size_t size, const U* rhs);

// This generic version is used when k is 0.
template <typename T, typename U>
inline bool ArrayEq(const T& lhs, const U& rhs) { return lhs == rhs; }

// This overload is used when k >= 1.
template <typename T, typename U, size_t N>
inline bool ArrayEq(const T(&lhs)[N], const U(&rhs)[N]) {
  return internal::ArrayEq(lhs, N, rhs);
}

// This helper reduces code bloat.  If we instead put its logic inside
// the previous ArrayEq() function, arrays with different sizes would
// lead to different copies of the template code.
template <typename T, typename U>
bool ArrayEq(const T* lhs, size_t size, const U* rhs) {
  for (size_t i = 0; i != size; i++) {
    if (!internal::ArrayEq(lhs[i], rhs[i]))
      return false;
  }
  return true;
}

// Finds the first element in the iterator range [begin, end) that
// equals elem.  Element may be a native array type itself.
template <typename Iter, typename Element>
Iter ArrayAwareFind(Iter begin, Iter end, const Element& elem) {
  for (Iter it = begin; it != end; ++it) {
    if (internal::ArrayEq(*it, elem))
      return it;
  }
  return end;
}

// CopyArray() copies a k-dimensional native array using the elements'
// operator=, where k can be any integer >= 0.  When k is 0,
// CopyArray() degenerates into copying a single value.

template <typename T, typename U>
void CopyArray(const T* from, size_t size, U* to);

// This generic version is used when k is 0.
template <typename T, typename U>
inline void CopyArray(const T& from, U* to) { *to = from; }

// This overload is used when k >= 1.
template <typename T, typename U, size_t N>
inline void CopyArray(const T(&from)[N], U(*to)[N]) {
  internal::CopyArray(from, N, *to);
}

// This helper reduces code bloat.  If we instead put its logic inside
// the previous CopyArray() function, arrays with different sizes
// would lead to different copies of the template code.
template <typename T, typename U>
void CopyArray(const T* from, size_t size, U* to) {
  for (size_t i = 0; i != size; i++) {
    internal::CopyArray(from[i], to + i);
  }
}

// The relation between an NativeArray object (see below) and the
// native array it represents.
// We use 2 different structs to allow non-copyable types to be used, as long
// as RelationToSourceReference() is passed.
struct RelationToSourceReference {};
struct RelationToSourceCopy {};

// Adapts a native array to a read-only STL-style container.  Instead
// of the complete STL container concept, this adaptor only implements
// members useful for Google Mock's container matchers.  New members
// should be added as needed.  To simplify the implementation, we only
// support Element being a raw type (i.e. having no top-level const or
// reference modifier).  It's the client's responsibility to satisfy
// this requirement.  Element can be an array type itself (hence
// multi-dimensional arrays are supported).
template <typename Element>
class NativeArray {
 public:
  // STL-style container typedefs.
  typedef Element value_type;
  typedef Element* iterator;
  typedef const Element* const_iterator;

  // Constructs from a native array. References the source.
  NativeArray(const Element* array, size_t count, RelationToSourceReference) {
    InitRef(array, count);
  }

  // Constructs from a native array. Copies the source.
  NativeArray(const Element* array, size_t count, RelationToSourceCopy) {
    InitCopy(array, count);
  }

  // Copy constructor.
  NativeArray(const NativeArray& rhs) {
    (this->*rhs.clone_)(rhs.array_, rhs.size_);
  }

  ~NativeArray() {
    if (clone_ != &NativeArray::InitRef)
      delete[] array_;
  }

  // STL-style container methods.
  size_t size() const { return size_; }
  const_iterator begin() const { return array_; }
  const_iterator end() const { return array_ + size_; }
  bool operator==(const NativeArray& rhs) const {
    return size() == rhs.size() &&
        ArrayEq(begin(), size(), rhs.begin());
  }

 private:
  static_assert(!std::is_const<Element>::value, "Type must not be const");
  static_assert(!std::is_reference<Element>::value,
                "Type must not be a reference");

  // Initializes this object with a copy of the input.
  void InitCopy(const Element* array, size_t a_size) {
    Element* const copy = new Element[a_size];
    CopyArray(array, a_size, copy);
    array_ = copy;
    size_ = a_size;
    clone_ = &NativeArray::InitCopy;
  }

  // Initializes this object with a reference of the input.
  void InitRef(const Element* array, size_t a_size) {
    array_ = array;
    size_ = a_size;
    clone_ = &NativeArray::InitRef;
  }

  const Element* array_;
  size_t size_;
  void (NativeArray::*clone_)(const Element*, size_t);

  GTEST_DISALLOW_ASSIGN_(NativeArray);
};

// Backport of std::index_sequence.
template <size_t... Is>
struct IndexSequence {
  using type = IndexSequence;
};

// Double the IndexSequence, and one if plus_one is true.
template <bool plus_one, typename T, size_t sizeofT>
struct DoubleSequence;
template <size_t... I, size_t sizeofT>
struct DoubleSequence<true, IndexSequence<I...>, sizeofT> {
  using type = IndexSequence<I..., (sizeofT + I)..., 2 * sizeofT>;
};
template <size_t... I, size_t sizeofT>
struct DoubleSequence<false, IndexSequence<I...>, sizeofT> {
  using type = IndexSequence<I..., (sizeofT + I)...>;
};

// Backport of std::make_index_sequence.
// It uses O(ln(N)) instantiation depth.
template <size_t N>
struct MakeIndexSequence
    : DoubleSequence<N % 2 == 1, typename MakeIndexSequence<N / 2>::type,
                     N / 2>::type {};

template <>
struct MakeIndexSequence<0> : IndexSequence<> {};

// FIXME: This implementation of ElemFromList is O(1) in instantiation depth,
// but it is O(N^2) in total instantiations. Not sure if this is the best
// tradeoff, as it will make it somewhat slow to compile.
template <typename T, size_t, size_t>
struct ElemFromListImpl {};

template <typename T, size_t I>
struct ElemFromListImpl<T, I, I> {
  using type = T;
};

// Get the Nth element from T...
// It uses O(1) instantiation depth.
template <size_t N, typename I, typename... T>
struct ElemFromList;

template <size_t N, size_t... I, typename... T>
struct ElemFromList<N, IndexSequence<I...>, T...>
    : ElemFromListImpl<T, N, I>... {};

template <typename... T>
class FlatTuple;

template <typename Derived, size_t I>
struct FlatTupleElemBase;

template <typename... T, size_t I>
struct FlatTupleElemBase<FlatTuple<T...>, I> {
  using value_type =
      typename ElemFromList<I, typename MakeIndexSequence<sizeof...(T)>::type,
                            T...>::type;
  FlatTupleElemBase() = default;
  explicit FlatTupleElemBase(value_type t) : value(std::move(t)) {}
  value_type value;
};

template <typename Derived, typename Idx>
struct FlatTupleBase;

template <size_t... Idx, typename... T>
struct FlatTupleBase<FlatTuple<T...>, IndexSequence<Idx...>>
    : FlatTupleElemBase<FlatTuple<T...>, Idx>... {
  using Indices = IndexSequence<Idx...>;
  FlatTupleBase() = default;
  explicit FlatTupleBase(T... t)
      : FlatTupleElemBase<FlatTuple<T...>, Idx>(std::move(t))... {}
};

// Analog to std::tuple but with different tradeoffs.
// This class minimizes the template instantiation depth, thus allowing more
// elements that std::tuple would. std::tuple has been seen to require an
// instantiation depth of more than 10x the number of elements in some
// implementations.
// FlatTuple and ElemFromList are not recursive and have a fixed depth
// regardless of T...
// MakeIndexSequence, on the other hand, it is recursive but with an
// instantiation depth of O(ln(N)).
template <typename... T>
class FlatTuple
    : private FlatTupleBase<FlatTuple<T...>,
                            typename MakeIndexSequence<sizeof...(T)>::type> {
  using Indices = typename FlatTuple::FlatTupleBase::Indices;

 public:
  FlatTuple() = default;
  explicit FlatTuple(T... t) : FlatTuple::FlatTupleBase(std::move(t)...) {}

  template <size_t I>
  const typename ElemFromList<I, Indices, T...>::type& Get() const {
    return static_cast<const FlatTupleElemBase<FlatTuple, I>*>(this)->value;
  }

  template <size_t I>
  typename ElemFromList<I, Indices, T...>::type& Get() {
    return static_cast<FlatTupleElemBase<FlatTuple, I>*>(this)->value;
  }
};

// Utility functions to be called with static_assert to induce deprecation
// warnings.
GTEST_INTERNAL_DEPRECATED(
    "INSTANTIATE_TEST_CASE_P is deprecated, please use "
    "INSTANTIATE_TEST_SUITE_P")
constexpr bool InstantiateTestCase_P_IsDeprecated() { return true; }

GTEST_INTERNAL_DEPRECATED(
    "TYPED_TEST_CASE_P is deprecated, please use "
    "TYPED_TEST_SUITE_P")
constexpr bool TypedTestCase_P_IsDeprecated() { return true; }

GTEST_INTERNAL_DEPRECATED(
    "TYPED_TEST_CASE is deprecated, please use "
    "TYPED_TEST_SUITE")
constexpr bool TypedTestCaseIsDeprecated() { return true; }

GTEST_INTERNAL_DEPRECATED(
    "REGISTER_TYPED_TEST_CASE_P is deprecated, please use "
    "REGISTER_TYPED_TEST_SUITE_P")
constexpr bool RegisterTypedTestCase_P_IsDeprecated() { return true; }

GTEST_INTERNAL_DEPRECATED(
    "INSTANTIATE_TYPED_TEST_CASE_P is deprecated, please use "
    "INSTANTIATE_TYPED_TEST_SUITE_P")
constexpr bool InstantiateTypedTestCase_P_IsDeprecated() { return true; }

}  // namespace internal
}  // namespace testing

#define GTEST_MESSAGE_AT_(file, line, message, result_type) \
  ::testing::internal::AssertHelper(result_type, file, line, message) \
    = ::testing::Message()

#define GTEST_MESSAGE_(message, result_type) \
  GTEST_MESSAGE_AT_(__FILE__, __LINE__, message, result_type)

#define GTEST_FATAL_FAILURE_(message) \
  return GTEST_MESSAGE_(message, ::testing::TestPartResult::kFatalFailure)

#define GTEST_NONFATAL_FAILURE_(message) \
  GTEST_MESSAGE_(message, ::testing::TestPartResult::kNonFatalFailure)

#define GTEST_SUCCESS_(message) \
  GTEST_MESSAGE_(message, ::testing::TestPartResult::kSuccess)

#define GTEST_SKIP_(message) \
  return GTEST_MESSAGE_(message, ::testing::TestPartResult::kSkip)

// Suppress MSVC warning 4072 (unreachable code) for the code following
// statement if it returns or throws (or doesn't return or throw in some
// situations).
#define GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement) \
  if (::testing::internal::AlwaysTrue()) { statement; }

#define GTEST_TEST_THROW_(statement, expected_exception, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::ConstCharPtr gtest_msg = "") { \
    bool gtest_caught_expected = false; \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (expected_exception const&) { \
      gtest_caught_expected = true; \
    } \
    catch (...) { \
      gtest_msg.value = \
          "Expected: " #statement " throws an exception of type " \
          #expected_exception ".\n  Actual: it throws a different type."; \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__); \
    } \
    if (!gtest_caught_expected) { \
      gtest_msg.value = \
          "Expected: " #statement " throws an exception of type " \
          #expected_exception ".\n  Actual: it throws nothing."; \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__): \
      fail(gtest_msg.value)

#define GTEST_TEST_NO_THROW_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (...) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testnothrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testnothrow_, __LINE__): \
      fail("Expected: " #statement " doesn't throw an exception.\n" \
           "  Actual: it throws.")

#define GTEST_TEST_ANY_THROW_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    bool gtest_caught_any = false; \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (...) { \
      gtest_caught_any = true; \
    } \
    if (!gtest_caught_any) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testanythrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testanythrow_, __LINE__): \
      fail("Expected: " #statement " throws an exception.\n" \
           "  Actual: it doesn't.")


// Implements Boolean test assertions such as EXPECT_TRUE. expression can be
// either a boolean expression or an AssertionResult. text is a textual
// represenation of expression as it was passed into the EXPECT_TRUE.
#define GTEST_TEST_BOOLEAN_(expression, text, actual, expected, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (const ::testing::AssertionResult gtest_ar_ = \
      ::testing::AssertionResult(expression)) \
    ; \
  else \
    fail(::testing::internal::GetBoolAssertionFailureMessage(\
        gtest_ar_, text, #actual, #expected).c_str())

#define GTEST_TEST_NO_FATAL_FAILURE_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    ::testing::internal::HasNewFatalFailureHelper gtest_fatal_failure_checker; \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    if (gtest_fatal_failure_checker.has_new_fatal_failure()) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testnofatal_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testnofatal_, __LINE__): \
      fail("Expected: " #statement " doesn't generate new fatal " \
           "failures in the current thread.\n" \
           "  Actual: it does.")

// Expands to the name of the class that implements the given test.
#define GTEST_TEST_CLASS_NAME_(test_suite_name, test_name) \
  test_suite_name##_##test_name##_Test

// Helper macro for defining tests.
#define GTEST_TEST_(test_suite_name, test_name, parent_class, parent_id)      \
  static_assert(sizeof(GTEST_STRINGIFY_(test_suite_name)) > 1,                \
                "test_suite_name must not be empty");                         \
  static_assert(sizeof(GTEST_STRINGIFY_(test_name)) > 1,                      \
                "test_name must not be empty");                               \
  class GTEST_TEST_CLASS_NAME_(test_suite_name, test_name)                    \
      : public parent_class {                                                 \
   public:                                                                    \
    GTEST_TEST_CLASS_NAME_(test_suite_name, test_name)() {}                   \
                                                                              \
   private:                                                                   \
    virtual void TestBody();                                                  \
    static ::testing::TestInfo* const test_info_ GTEST_ATTRIBUTE_UNUSED_;     \
    GTEST_DISALLOW_COPY_AND_ASSIGN_(GTEST_TEST_CLASS_NAME_(test_suite_name,   \
                                                           test_name));       \
  };                                                                          \
                                                                              \
  ::testing::TestInfo* const GTEST_TEST_CLASS_NAME_(test_suite_name,          \
                                                    test_name)::test_info_ =  \
      ::testing::internal::MakeAndRegisterTestInfo(                           \
          #test_suite_name, #test_name, nullptr, nullptr,                     \
          ::testing::internal::CodeLocation(__FILE__, __LINE__), (parent_id), \
          ::testing::internal::SuiteApiResolver<                              \
              parent_class>::GetSetUpCaseOrSuite(__FILE__, __LINE__),         \
          ::testing::internal::SuiteApiResolver<                              \
              parent_class>::GetTearDownCaseOrSuite(__FILE__, __LINE__),      \
          new ::testing::internal::TestFactoryImpl<GTEST_TEST_CLASS_NAME_(    \
              test_suite_name, test_name)>);                                  \
  void GTEST_TEST_CLASS_NAME_(test_suite_name, test_name)::TestBody()

#endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_INTERNAL_H_
