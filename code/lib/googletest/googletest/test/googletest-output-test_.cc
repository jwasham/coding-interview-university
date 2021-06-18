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
// The purpose of this file is to generate Google Test output under
// various conditions.  The output will then be verified by
// googletest-output-test.py to ensure that Google Test generates the
// desired messages.  Therefore, most tests in this file are MEANT TO
// FAIL.

#include "gtest/gtest-spi.h"
#include "gtest/gtest.h"
#include "src/gtest-internal-inl.h"

#include <stdlib.h>

#if _MSC_VER
GTEST_DISABLE_MSC_WARNINGS_PUSH_(4127 /* conditional expression is constant */)
#endif  //  _MSC_VER

#if GTEST_IS_THREADSAFE
using testing::ScopedFakeTestPartResultReporter;
using testing::TestPartResultArray;

using testing::internal::Notification;
using testing::internal::ThreadWithParam;
#endif

namespace posix = ::testing::internal::posix;

// Tests catching fatal failures.

// A subroutine used by the following test.
void TestEq1(int x) {
  ASSERT_EQ(1, x);
}

// This function calls a test subroutine, catches the fatal failure it
// generates, and then returns early.
void TryTestSubroutine() {
  // Calls a subrountine that yields a fatal failure.
  TestEq1(2);

  // Catches the fatal failure and aborts the test.
  //
  // The testing::Test:: prefix is necessary when calling
  // HasFatalFailure() outside of a TEST, TEST_F, or test fixture.
  if (testing::Test::HasFatalFailure()) return;

  // If we get here, something is wrong.
  FAIL() << "This should never be reached.";
}

TEST(PassingTest, PassingTest1) {
}

TEST(PassingTest, PassingTest2) {
}

// Tests that parameters of failing parameterized tests are printed in the
// failing test summary.
class FailingParamTest : public testing::TestWithParam<int> {};

TEST_P(FailingParamTest, Fails) {
  EXPECT_EQ(1, GetParam());
}

// This generates a test which will fail. Google Test is expected to print
// its parameter when it outputs the list of all failed tests.
INSTANTIATE_TEST_SUITE_P(PrintingFailingParams,
                         FailingParamTest,
                         testing::Values(2));

// Tests that an empty value for the test suite basename yields just
// the test name without any prior /
class EmptyBasenameParamInst : public testing::TestWithParam<int> {};

TEST_P(EmptyBasenameParamInst, Passes) { EXPECT_EQ(1, GetParam()); }

INSTANTIATE_TEST_SUITE_P(, EmptyBasenameParamInst, testing::Values(1));

static const char kGoldenString[] = "\"Line\0 1\"\nLine 2";

TEST(NonfatalFailureTest, EscapesStringOperands) {
  std::string actual = "actual \"string\"";
  EXPECT_EQ(kGoldenString, actual);

  const char* golden = kGoldenString;
  EXPECT_EQ(golden, actual);
}

TEST(NonfatalFailureTest, DiffForLongStrings) {
  std::string golden_str(kGoldenString, sizeof(kGoldenString) - 1);
  EXPECT_EQ(golden_str, "Line 2");
}

// Tests catching a fatal failure in a subroutine.
TEST(FatalFailureTest, FatalFailureInSubroutine) {
  printf("(expecting a failure that x should be 1)\n");

  TryTestSubroutine();
}

// Tests catching a fatal failure in a nested subroutine.
TEST(FatalFailureTest, FatalFailureInNestedSubroutine) {
  printf("(expecting a failure that x should be 1)\n");

  // Calls a subrountine that yields a fatal failure.
  TryTestSubroutine();

  // Catches the fatal failure and aborts the test.
  //
  // When calling HasFatalFailure() inside a TEST, TEST_F, or test
  // fixture, the testing::Test:: prefix is not needed.
  if (HasFatalFailure()) return;

  // If we get here, something is wrong.
  FAIL() << "This should never be reached.";
}

// Tests HasFatalFailure() after a failed EXPECT check.
TEST(FatalFailureTest, NonfatalFailureInSubroutine) {
  printf("(expecting a failure on false)\n");
  EXPECT_TRUE(false);  // Generates a nonfatal failure
  ASSERT_FALSE(HasFatalFailure());  // This should succeed.
}

// Tests interleaving user logging and Google Test assertions.
TEST(LoggingTest, InterleavingLoggingAndAssertions) {
  static const int a[4] = {
    3, 9, 2, 6
  };

  printf("(expecting 2 failures on (3) >= (a[i]))\n");
  for (int i = 0; i < static_cast<int>(sizeof(a)/sizeof(*a)); i++) {
    printf("i == %d\n", i);
    EXPECT_GE(3, a[i]);
  }
}

// Tests the SCOPED_TRACE macro.

// A helper function for testing SCOPED_TRACE.
void SubWithoutTrace(int n) {
  EXPECT_EQ(1, n);
  ASSERT_EQ(2, n);
}

// Another helper function for testing SCOPED_TRACE.
void SubWithTrace(int n) {
  SCOPED_TRACE(testing::Message() << "n = " << n);

  SubWithoutTrace(n);
}

TEST(SCOPED_TRACETest, AcceptedValues) {
  SCOPED_TRACE("literal string");
  SCOPED_TRACE(std::string("std::string"));
  SCOPED_TRACE(1337);  // streamable type
  const char* null_value = nullptr;
  SCOPED_TRACE(null_value);

  ADD_FAILURE() << "Just checking that all these values work fine.";
}

// Tests that SCOPED_TRACE() obeys lexical scopes.
TEST(SCOPED_TRACETest, ObeysScopes) {
  printf("(expected to fail)\n");

  // There should be no trace before SCOPED_TRACE() is invoked.
  ADD_FAILURE() << "This failure is expected, and shouldn't have a trace.";

  {
    SCOPED_TRACE("Expected trace");
    // After SCOPED_TRACE(), a failure in the current scope should contain
    // the trace.
    ADD_FAILURE() << "This failure is expected, and should have a trace.";
  }

  // Once the control leaves the scope of the SCOPED_TRACE(), there
  // should be no trace again.
  ADD_FAILURE() << "This failure is expected, and shouldn't have a trace.";
}

// Tests that SCOPED_TRACE works inside a loop.
TEST(SCOPED_TRACETest, WorksInLoop) {
  printf("(expected to fail)\n");

  for (int i = 1; i <= 2; i++) {
    SCOPED_TRACE(testing::Message() << "i = " << i);

    SubWithoutTrace(i);
  }
}

// Tests that SCOPED_TRACE works in a subroutine.
TEST(SCOPED_TRACETest, WorksInSubroutine) {
  printf("(expected to fail)\n");

  SubWithTrace(1);
  SubWithTrace(2);
}

// Tests that SCOPED_TRACE can be nested.
TEST(SCOPED_TRACETest, CanBeNested) {
  printf("(expected to fail)\n");

  SCOPED_TRACE("");  // A trace without a message.

  SubWithTrace(2);
}

// Tests that multiple SCOPED_TRACEs can be used in the same scope.
TEST(SCOPED_TRACETest, CanBeRepeated) {
  printf("(expected to fail)\n");

  SCOPED_TRACE("A");
  ADD_FAILURE()
      << "This failure is expected, and should contain trace point A.";

  SCOPED_TRACE("B");
  ADD_FAILURE()
      << "This failure is expected, and should contain trace point A and B.";

  {
    SCOPED_TRACE("C");
    ADD_FAILURE() << "This failure is expected, and should "
                  << "contain trace point A, B, and C.";
  }

  SCOPED_TRACE("D");
  ADD_FAILURE() << "This failure is expected, and should "
                << "contain trace point A, B, and D.";
}

#if GTEST_IS_THREADSAFE
// Tests that SCOPED_TRACE()s can be used concurrently from multiple
// threads.  Namely, an assertion should be affected by
// SCOPED_TRACE()s in its own thread only.

// Here's the sequence of actions that happen in the test:
//
//   Thread A (main)                | Thread B (spawned)
//   ===============================|================================
//   spawns thread B                |
//   -------------------------------+--------------------------------
//   waits for n1                   | SCOPED_TRACE("Trace B");
//                                  | generates failure #1
//                                  | notifies n1
//   -------------------------------+--------------------------------
//   SCOPED_TRACE("Trace A");       | waits for n2
//   generates failure #2           |
//   notifies n2                    |
//   -------------------------------|--------------------------------
//   waits for n3                   | generates failure #3
//                                  | trace B dies
//                                  | generates failure #4
//                                  | notifies n3
//   -------------------------------|--------------------------------
//   generates failure #5           | finishes
//   trace A dies                   |
//   generates failure #6           |
//   -------------------------------|--------------------------------
//   waits for thread B to finish   |

struct CheckPoints {
  Notification n1;
  Notification n2;
  Notification n3;
};

static void ThreadWithScopedTrace(CheckPoints* check_points) {
  {
    SCOPED_TRACE("Trace B");
    ADD_FAILURE()
        << "Expected failure #1 (in thread B, only trace B alive).";
    check_points->n1.Notify();
    check_points->n2.WaitForNotification();

    ADD_FAILURE()
        << "Expected failure #3 (in thread B, trace A & B both alive).";
  }  // Trace B dies here.
  ADD_FAILURE()
      << "Expected failure #4 (in thread B, only trace A alive).";
  check_points->n3.Notify();
}

TEST(SCOPED_TRACETest, WorksConcurrently) {
  printf("(expecting 6 failures)\n");

  CheckPoints check_points;
  ThreadWithParam<CheckPoints*> thread(&ThreadWithScopedTrace, &check_points,
                                       nullptr);
  check_points.n1.WaitForNotification();

  {
    SCOPED_TRACE("Trace A");
    ADD_FAILURE()
        << "Expected failure #2 (in thread A, trace A & B both alive).";
    check_points.n2.Notify();
    check_points.n3.WaitForNotification();

    ADD_FAILURE()
        << "Expected failure #5 (in thread A, only trace A alive).";
  }  // Trace A dies here.
  ADD_FAILURE()
      << "Expected failure #6 (in thread A, no trace alive).";
  thread.Join();
}
#endif  // GTEST_IS_THREADSAFE

// Tests basic functionality of the ScopedTrace utility (most of its features
// are already tested in SCOPED_TRACETest).
TEST(ScopedTraceTest, WithExplicitFileAndLine) {
  testing::ScopedTrace trace("explicit_file.cc", 123, "expected trace message");
  ADD_FAILURE() << "Check that the trace is attached to a particular location.";
}

TEST(DisabledTestsWarningTest,
     DISABLED_AlsoRunDisabledTestsFlagSuppressesWarning) {
  // This test body is intentionally empty.  Its sole purpose is for
  // verifying that the --gtest_also_run_disabled_tests flag
  // suppresses the "YOU HAVE 12 DISABLED TESTS" warning at the end of
  // the test output.
}

// Tests using assertions outside of TEST and TEST_F.
//
// This function creates two failures intentionally.
void AdHocTest() {
  printf("The non-test part of the code is expected to have 2 failures.\n\n");
  EXPECT_TRUE(false);
  EXPECT_EQ(2, 3);
}

// Runs all TESTs, all TEST_Fs, and the ad hoc test.
int RunAllTests() {
  AdHocTest();
  return RUN_ALL_TESTS();
}

// Tests non-fatal failures in the fixture constructor.
class NonFatalFailureInFixtureConstructorTest : public testing::Test {
 protected:
  NonFatalFailureInFixtureConstructorTest() {
    printf("(expecting 5 failures)\n");
    ADD_FAILURE() << "Expected failure #1, in the test fixture c'tor.";
  }

  ~NonFatalFailureInFixtureConstructorTest() override {
    ADD_FAILURE() << "Expected failure #5, in the test fixture d'tor.";
  }

  void SetUp() override { ADD_FAILURE() << "Expected failure #2, in SetUp()."; }

  void TearDown() override {
    ADD_FAILURE() << "Expected failure #4, in TearDown.";
  }
};

TEST_F(NonFatalFailureInFixtureConstructorTest, FailureInConstructor) {
  ADD_FAILURE() << "Expected failure #3, in the test body.";
}

// Tests fatal failures in the fixture constructor.
class FatalFailureInFixtureConstructorTest : public testing::Test {
 protected:
  FatalFailureInFixtureConstructorTest() {
    printf("(expecting 2 failures)\n");
    Init();
  }

  ~FatalFailureInFixtureConstructorTest() override {
    ADD_FAILURE() << "Expected failure #2, in the test fixture d'tor.";
  }

  void SetUp() override {
    ADD_FAILURE() << "UNEXPECTED failure in SetUp().  "
                  << "We should never get here, as the test fixture c'tor "
                  << "had a fatal failure.";
  }

  void TearDown() override {
    ADD_FAILURE() << "UNEXPECTED failure in TearDown().  "
                  << "We should never get here, as the test fixture c'tor "
                  << "had a fatal failure.";
  }

 private:
  void Init() {
    FAIL() << "Expected failure #1, in the test fixture c'tor.";
  }
};

TEST_F(FatalFailureInFixtureConstructorTest, FailureInConstructor) {
  ADD_FAILURE() << "UNEXPECTED failure in the test body.  "
                << "We should never get here, as the test fixture c'tor "
                << "had a fatal failure.";
}

// Tests non-fatal failures in SetUp().
class NonFatalFailureInSetUpTest : public testing::Test {
 protected:
  ~NonFatalFailureInSetUpTest() override { Deinit(); }

  void SetUp() override {
    printf("(expecting 4 failures)\n");
    ADD_FAILURE() << "Expected failure #1, in SetUp().";
  }

  void TearDown() override { FAIL() << "Expected failure #3, in TearDown()."; }

 private:
  void Deinit() {
    FAIL() << "Expected failure #4, in the test fixture d'tor.";
  }
};

TEST_F(NonFatalFailureInSetUpTest, FailureInSetUp) {
  FAIL() << "Expected failure #2, in the test function.";
}

// Tests fatal failures in SetUp().
class FatalFailureInSetUpTest : public testing::Test {
 protected:
  ~FatalFailureInSetUpTest() override { Deinit(); }

  void SetUp() override {
    printf("(expecting 3 failures)\n");
    FAIL() << "Expected failure #1, in SetUp().";
  }

  void TearDown() override { FAIL() << "Expected failure #2, in TearDown()."; }

 private:
  void Deinit() {
    FAIL() << "Expected failure #3, in the test fixture d'tor.";
  }
};

TEST_F(FatalFailureInSetUpTest, FailureInSetUp) {
  FAIL() << "UNEXPECTED failure in the test function.  "
         << "We should never get here, as SetUp() failed.";
}

TEST(AddFailureAtTest, MessageContainsSpecifiedFileAndLineNumber) {
  ADD_FAILURE_AT("foo.cc", 42) << "Expected nonfatal failure in foo.cc";
}

TEST(GtestFailAtTest, MessageContainsSpecifiedFileAndLineNumber) {
  GTEST_FAIL_AT("foo.cc", 42) << "Expected fatal failure in foo.cc";
}

#if GTEST_IS_THREADSAFE

// A unary function that may die.
void DieIf(bool should_die) {
  GTEST_CHECK_(!should_die) << " - death inside DieIf().";
}

// Tests running death tests in a multi-threaded context.

// Used for coordination between the main and the spawn thread.
struct SpawnThreadNotifications {
  SpawnThreadNotifications() {}

  Notification spawn_thread_started;
  Notification spawn_thread_ok_to_terminate;

 private:
  GTEST_DISALLOW_COPY_AND_ASSIGN_(SpawnThreadNotifications);
};

// The function to be executed in the thread spawn by the
// MultipleThreads test (below).
static void ThreadRoutine(SpawnThreadNotifications* notifications) {
  // Signals the main thread that this thread has started.
  notifications->spawn_thread_started.Notify();

  // Waits for permission to finish from the main thread.
  notifications->spawn_thread_ok_to_terminate.WaitForNotification();
}

// This is a death-test test, but it's not named with a DeathTest
// suffix.  It starts threads which might interfere with later
// death tests, so it must run after all other death tests.
class DeathTestAndMultiThreadsTest : public testing::Test {
 protected:
  // Starts a thread and waits for it to begin.
  void SetUp() override {
    thread_.reset(new ThreadWithParam<SpawnThreadNotifications*>(
        &ThreadRoutine, &notifications_, nullptr));
    notifications_.spawn_thread_started.WaitForNotification();
  }
  // Tells the thread to finish, and reaps it.
  // Depending on the version of the thread library in use,
  // a manager thread might still be left running that will interfere
  // with later death tests.  This is unfortunate, but this class
  // cleans up after itself as best it can.
  void TearDown() override {
    notifications_.spawn_thread_ok_to_terminate.Notify();
  }

 private:
  SpawnThreadNotifications notifications_;
  std::unique_ptr<ThreadWithParam<SpawnThreadNotifications*> > thread_;
};

#endif  // GTEST_IS_THREADSAFE

// The MixedUpTestSuiteTest test case verifies that Google Test will fail a
// test if it uses a different fixture class than what other tests in
// the same test case use.  It deliberately contains two fixture
// classes with the same name but defined in different namespaces.

// The MixedUpTestSuiteWithSameTestNameTest test case verifies that
// when the user defines two tests with the same test case name AND
// same test name (but in different namespaces), the second test will
// fail.

namespace foo {

class MixedUpTestSuiteTest : public testing::Test {
};

TEST_F(MixedUpTestSuiteTest, FirstTestFromNamespaceFoo) {}
TEST_F(MixedUpTestSuiteTest, SecondTestFromNamespaceFoo) {}

class MixedUpTestSuiteWithSameTestNameTest : public testing::Test {
};

TEST_F(MixedUpTestSuiteWithSameTestNameTest,
       TheSecondTestWithThisNameShouldFail) {}

}  // namespace foo

namespace bar {

class MixedUpTestSuiteTest : public testing::Test {
};

// The following two tests are expected to fail.  We rely on the
// golden file to check that Google Test generates the right error message.
TEST_F(MixedUpTestSuiteTest, ThisShouldFail) {}
TEST_F(MixedUpTestSuiteTest, ThisShouldFailToo) {}

class MixedUpTestSuiteWithSameTestNameTest : public testing::Test {
};

// Expected to fail.  We rely on the golden file to check that Google Test
// generates the right error message.
TEST_F(MixedUpTestSuiteWithSameTestNameTest,
       TheSecondTestWithThisNameShouldFail) {}

}  // namespace bar

// The following two test cases verify that Google Test catches the user
// error of mixing TEST and TEST_F in the same test case.  The first
// test case checks the scenario where TEST_F appears before TEST, and
// the second one checks where TEST appears before TEST_F.

class TEST_F_before_TEST_in_same_test_case : public testing::Test {
};

TEST_F(TEST_F_before_TEST_in_same_test_case, DefinedUsingTEST_F) {}

// Expected to fail.  We rely on the golden file to check that Google Test
// generates the right error message.
TEST(TEST_F_before_TEST_in_same_test_case, DefinedUsingTESTAndShouldFail) {}

class TEST_before_TEST_F_in_same_test_case : public testing::Test {
};

TEST(TEST_before_TEST_F_in_same_test_case, DefinedUsingTEST) {}

// Expected to fail.  We rely on the golden file to check that Google Test
// generates the right error message.
TEST_F(TEST_before_TEST_F_in_same_test_case, DefinedUsingTEST_FAndShouldFail) {
}

// Used for testing EXPECT_NONFATAL_FAILURE() and EXPECT_FATAL_FAILURE().
int global_integer = 0;

// Tests that EXPECT_NONFATAL_FAILURE() can reference global variables.
TEST(ExpectNonfatalFailureTest, CanReferenceGlobalVariables) {
  global_integer = 0;
  EXPECT_NONFATAL_FAILURE({
    EXPECT_EQ(1, global_integer) << "Expected non-fatal failure.";
  }, "Expected non-fatal failure.");
}

// Tests that EXPECT_NONFATAL_FAILURE() can reference local variables
// (static or not).
TEST(ExpectNonfatalFailureTest, CanReferenceLocalVariables) {
  int m = 0;
  static int n;
  n = 1;
  EXPECT_NONFATAL_FAILURE({
    EXPECT_EQ(m, n) << "Expected non-fatal failure.";
  }, "Expected non-fatal failure.");
}

// Tests that EXPECT_NONFATAL_FAILURE() succeeds when there is exactly
// one non-fatal failure and no fatal failure.
TEST(ExpectNonfatalFailureTest, SucceedsWhenThereIsOneNonfatalFailure) {
  EXPECT_NONFATAL_FAILURE({
    ADD_FAILURE() << "Expected non-fatal failure.";
  }, "Expected non-fatal failure.");
}

// Tests that EXPECT_NONFATAL_FAILURE() fails when there is no
// non-fatal failure.
TEST(ExpectNonfatalFailureTest, FailsWhenThereIsNoNonfatalFailure) {
  printf("(expecting a failure)\n");
  EXPECT_NONFATAL_FAILURE({
  }, "");
}

// Tests that EXPECT_NONFATAL_FAILURE() fails when there are two
// non-fatal failures.
TEST(ExpectNonfatalFailureTest, FailsWhenThereAreTwoNonfatalFailures) {
  printf("(expecting a failure)\n");
  EXPECT_NONFATAL_FAILURE({
    ADD_FAILURE() << "Expected non-fatal failure 1.";
    ADD_FAILURE() << "Expected non-fatal failure 2.";
  }, "");
}

// Tests that EXPECT_NONFATAL_FAILURE() fails when there is one fatal
// failure.
TEST(ExpectNonfatalFailureTest, FailsWhenThereIsOneFatalFailure) {
  printf("(expecting a failure)\n");
  EXPECT_NONFATAL_FAILURE({
    FAIL() << "Expected fatal failure.";
  }, "");
}

// Tests that EXPECT_NONFATAL_FAILURE() fails when the statement being
// tested returns.
TEST(ExpectNonfatalFailureTest, FailsWhenStatementReturns) {
  printf("(expecting a failure)\n");
  EXPECT_NONFATAL_FAILURE({
    return;
  }, "");
}

#if GTEST_HAS_EXCEPTIONS

// Tests that EXPECT_NONFATAL_FAILURE() fails when the statement being
// tested throws.
TEST(ExpectNonfatalFailureTest, FailsWhenStatementThrows) {
  printf("(expecting a failure)\n");
  try {
    EXPECT_NONFATAL_FAILURE({
      throw 0;
    }, "");
  } catch(int) {  // NOLINT
  }
}

#endif  // GTEST_HAS_EXCEPTIONS

// Tests that EXPECT_FATAL_FAILURE() can reference global variables.
TEST(ExpectFatalFailureTest, CanReferenceGlobalVariables) {
  global_integer = 0;
  EXPECT_FATAL_FAILURE({
    ASSERT_EQ(1, global_integer) << "Expected fatal failure.";
  }, "Expected fatal failure.");
}

// Tests that EXPECT_FATAL_FAILURE() can reference local static
// variables.
TEST(ExpectFatalFailureTest, CanReferenceLocalStaticVariables) {
  static int n;
  n = 1;
  EXPECT_FATAL_FAILURE({
    ASSERT_EQ(0, n) << "Expected fatal failure.";
  }, "Expected fatal failure.");
}

// Tests that EXPECT_FATAL_FAILURE() succeeds when there is exactly
// one fatal failure and no non-fatal failure.
TEST(ExpectFatalFailureTest, SucceedsWhenThereIsOneFatalFailure) {
  EXPECT_FATAL_FAILURE({
    FAIL() << "Expected fatal failure.";
  }, "Expected fatal failure.");
}

// Tests that EXPECT_FATAL_FAILURE() fails when there is no fatal
// failure.
TEST(ExpectFatalFailureTest, FailsWhenThereIsNoFatalFailure) {
  printf("(expecting a failure)\n");
  EXPECT_FATAL_FAILURE({
  }, "");
}

// A helper for generating a fatal failure.
void FatalFailure() {
  FAIL() << "Expected fatal failure.";
}

// Tests that EXPECT_FATAL_FAILURE() fails when there are two
// fatal failures.
TEST(ExpectFatalFailureTest, FailsWhenThereAreTwoFatalFailures) {
  printf("(expecting a failure)\n");
  EXPECT_FATAL_FAILURE({
    FatalFailure();
    FatalFailure();
  }, "");
}

// Tests that EXPECT_FATAL_FAILURE() fails when there is one non-fatal
// failure.
TEST(ExpectFatalFailureTest, FailsWhenThereIsOneNonfatalFailure) {
  printf("(expecting a failure)\n");
  EXPECT_FATAL_FAILURE({
    ADD_FAILURE() << "Expected non-fatal failure.";
  }, "");
}

// Tests that EXPECT_FATAL_FAILURE() fails when the statement being
// tested returns.
TEST(ExpectFatalFailureTest, FailsWhenStatementReturns) {
  printf("(expecting a failure)\n");
  EXPECT_FATAL_FAILURE({
    return;
  }, "");
}

#if GTEST_HAS_EXCEPTIONS

// Tests that EXPECT_FATAL_FAILURE() fails when the statement being
// tested throws.
TEST(ExpectFatalFailureTest, FailsWhenStatementThrows) {
  printf("(expecting a failure)\n");
  try {
    EXPECT_FATAL_FAILURE({
      throw 0;
    }, "");
  } catch(int) {  // NOLINT
  }
}

#endif  // GTEST_HAS_EXCEPTIONS

// This #ifdef block tests the output of value-parameterized tests.

std::string ParamNameFunc(const testing::TestParamInfo<std::string>& info) {
  return info.param;
}

class ParamTest : public testing::TestWithParam<std::string> {
};

TEST_P(ParamTest, Success) {
  EXPECT_EQ("a", GetParam());
}

TEST_P(ParamTest, Failure) {
  EXPECT_EQ("b", GetParam()) << "Expected failure";
}

INSTANTIATE_TEST_SUITE_P(PrintingStrings,
                         ParamTest,
                         testing::Values(std::string("a")),
                         ParamNameFunc);

// This #ifdef block tests the output of typed tests.
#if GTEST_HAS_TYPED_TEST

template <typename T>
class TypedTest : public testing::Test {
};

TYPED_TEST_SUITE(TypedTest, testing::Types<int>);

TYPED_TEST(TypedTest, Success) {
  EXPECT_EQ(0, TypeParam());
}

TYPED_TEST(TypedTest, Failure) {
  EXPECT_EQ(1, TypeParam()) << "Expected failure";
}

typedef testing::Types<char, int> TypesForTestWithNames;

template <typename T>
class TypedTestWithNames : public testing::Test {};

class TypedTestNames {
 public:
  template <typename T>
  static std::string GetName(int i) {
    if (std::is_same<T, char>::value)
      return std::string("char") + ::testing::PrintToString(i);
    if (std::is_same<T, int>::value)
      return std::string("int") + ::testing::PrintToString(i);
  }
};

TYPED_TEST_SUITE(TypedTestWithNames, TypesForTestWithNames, TypedTestNames);

TYPED_TEST(TypedTestWithNames, Success) {}

TYPED_TEST(TypedTestWithNames, Failure) { FAIL(); }

#endif  // GTEST_HAS_TYPED_TEST

// This #ifdef block tests the output of type-parameterized tests.
#if GTEST_HAS_TYPED_TEST_P

template <typename T>
class TypedTestP : public testing::Test {
};

TYPED_TEST_SUITE_P(TypedTestP);

TYPED_TEST_P(TypedTestP, Success) {
  EXPECT_EQ(0U, TypeParam());
}

TYPED_TEST_P(TypedTestP, Failure) {
  EXPECT_EQ(1U, TypeParam()) << "Expected failure";
}

REGISTER_TYPED_TEST_SUITE_P(TypedTestP, Success, Failure);

typedef testing::Types<unsigned char, unsigned int> UnsignedTypes;
INSTANTIATE_TYPED_TEST_SUITE_P(Unsigned, TypedTestP, UnsignedTypes);

class TypedTestPNames {
 public:
  template <typename T>
  static std::string GetName(int i) {
    if (std::is_same<T, unsigned char>::value) {
      return std::string("unsignedChar") + ::testing::PrintToString(i);
    }
    if (std::is_same<T, unsigned int>::value) {
      return std::string("unsignedInt") + ::testing::PrintToString(i);
    }
  }
};

INSTANTIATE_TYPED_TEST_SUITE_P(UnsignedCustomName, TypedTestP, UnsignedTypes,
                              TypedTestPNames);

#endif  // GTEST_HAS_TYPED_TEST_P

#if GTEST_HAS_DEATH_TEST

// We rely on the golden file to verify that tests whose test case
// name ends with DeathTest are run first.

TEST(ADeathTest, ShouldRunFirst) {
}

# if GTEST_HAS_TYPED_TEST

// We rely on the golden file to verify that typed tests whose test
// case name ends with DeathTest are run first.

template <typename T>
class ATypedDeathTest : public testing::Test {
};

typedef testing::Types<int, double> NumericTypes;
TYPED_TEST_SUITE(ATypedDeathTest, NumericTypes);

TYPED_TEST(ATypedDeathTest, ShouldRunFirst) {
}

# endif  // GTEST_HAS_TYPED_TEST

# if GTEST_HAS_TYPED_TEST_P


// We rely on the golden file to verify that type-parameterized tests
// whose test case name ends with DeathTest are run first.

template <typename T>
class ATypeParamDeathTest : public testing::Test {
};

TYPED_TEST_SUITE_P(ATypeParamDeathTest);

TYPED_TEST_P(ATypeParamDeathTest, ShouldRunFirst) {
}

REGISTER_TYPED_TEST_SUITE_P(ATypeParamDeathTest, ShouldRunFirst);

INSTANTIATE_TYPED_TEST_SUITE_P(My, ATypeParamDeathTest, NumericTypes);

# endif  // GTEST_HAS_TYPED_TEST_P

#endif  // GTEST_HAS_DEATH_TEST

// Tests various failure conditions of
// EXPECT_{,NON}FATAL_FAILURE{,_ON_ALL_THREADS}.
class ExpectFailureTest : public testing::Test {
 public:  // Must be public and not protected due to a bug in g++ 3.4.2.
  enum FailureMode {
    FATAL_FAILURE,
    NONFATAL_FAILURE
  };
  static void AddFailure(FailureMode failure) {
    if (failure == FATAL_FAILURE) {
      FAIL() << "Expected fatal failure.";
    } else {
      ADD_FAILURE() << "Expected non-fatal failure.";
    }
  }
};

TEST_F(ExpectFailureTest, ExpectFatalFailure) {
  // Expected fatal failure, but succeeds.
  printf("(expecting 1 failure)\n");
  EXPECT_FATAL_FAILURE(SUCCEED(), "Expected fatal failure.");
  // Expected fatal failure, but got a non-fatal failure.
  printf("(expecting 1 failure)\n");
  EXPECT_FATAL_FAILURE(AddFailure(NONFATAL_FAILURE), "Expected non-fatal "
                       "failure.");
  // Wrong message.
  printf("(expecting 1 failure)\n");
  EXPECT_FATAL_FAILURE(AddFailure(FATAL_FAILURE), "Some other fatal failure "
                       "expected.");
}

TEST_F(ExpectFailureTest, ExpectNonFatalFailure) {
  // Expected non-fatal failure, but succeeds.
  printf("(expecting 1 failure)\n");
  EXPECT_NONFATAL_FAILURE(SUCCEED(), "Expected non-fatal failure.");
  // Expected non-fatal failure, but got a fatal failure.
  printf("(expecting 1 failure)\n");
  EXPECT_NONFATAL_FAILURE(AddFailure(FATAL_FAILURE), "Expected fatal failure.");
  // Wrong message.
  printf("(expecting 1 failure)\n");
  EXPECT_NONFATAL_FAILURE(AddFailure(NONFATAL_FAILURE), "Some other non-fatal "
                          "failure.");
}

#if GTEST_IS_THREADSAFE

class ExpectFailureWithThreadsTest : public ExpectFailureTest {
 protected:
  static void AddFailureInOtherThread(FailureMode failure) {
    ThreadWithParam<FailureMode> thread(&AddFailure, failure, nullptr);
    thread.Join();
  }
};

TEST_F(ExpectFailureWithThreadsTest, ExpectFatalFailure) {
  // We only intercept the current thread.
  printf("(expecting 2 failures)\n");
  EXPECT_FATAL_FAILURE(AddFailureInOtherThread(FATAL_FAILURE),
                       "Expected fatal failure.");
}

TEST_F(ExpectFailureWithThreadsTest, ExpectNonFatalFailure) {
  // We only intercept the current thread.
  printf("(expecting 2 failures)\n");
  EXPECT_NONFATAL_FAILURE(AddFailureInOtherThread(NONFATAL_FAILURE),
                          "Expected non-fatal failure.");
}

typedef ExpectFailureWithThreadsTest ScopedFakeTestPartResultReporterTest;

// Tests that the ScopedFakeTestPartResultReporter only catches failures from
// the current thread if it is instantiated with INTERCEPT_ONLY_CURRENT_THREAD.
TEST_F(ScopedFakeTestPartResultReporterTest, InterceptOnlyCurrentThread) {
  printf("(expecting 2 failures)\n");
  TestPartResultArray results;
  {
    ScopedFakeTestPartResultReporter reporter(
        ScopedFakeTestPartResultReporter::INTERCEPT_ONLY_CURRENT_THREAD,
        &results);
    AddFailureInOtherThread(FATAL_FAILURE);
    AddFailureInOtherThread(NONFATAL_FAILURE);
  }
  // The two failures should not have been intercepted.
  EXPECT_EQ(0, results.size()) << "This shouldn't fail.";
}

#endif  // GTEST_IS_THREADSAFE

TEST_F(ExpectFailureTest, ExpectFatalFailureOnAllThreads) {
  // Expected fatal failure, but succeeds.
  printf("(expecting 1 failure)\n");
  EXPECT_FATAL_FAILURE_ON_ALL_THREADS(SUCCEED(), "Expected fatal failure.");
  // Expected fatal failure, but got a non-fatal failure.
  printf("(expecting 1 failure)\n");
  EXPECT_FATAL_FAILURE_ON_ALL_THREADS(AddFailure(NONFATAL_FAILURE),
                                      "Expected non-fatal failure.");
  // Wrong message.
  printf("(expecting 1 failure)\n");
  EXPECT_FATAL_FAILURE_ON_ALL_THREADS(AddFailure(FATAL_FAILURE),
                                      "Some other fatal failure expected.");
}

TEST_F(ExpectFailureTest, ExpectNonFatalFailureOnAllThreads) {
  // Expected non-fatal failure, but succeeds.
  printf("(expecting 1 failure)\n");
  EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(SUCCEED(), "Expected non-fatal "
                                         "failure.");
  // Expected non-fatal failure, but got a fatal failure.
  printf("(expecting 1 failure)\n");
  EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(AddFailure(FATAL_FAILURE),
                                         "Expected fatal failure.");
  // Wrong message.
  printf("(expecting 1 failure)\n");
  EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(AddFailure(NONFATAL_FAILURE),
                                         "Some other non-fatal failure.");
}

class DynamicFixture : public testing::Test {
 protected:
  DynamicFixture() { printf("DynamicFixture()\n"); }
  ~DynamicFixture() override { printf("~DynamicFixture()\n"); }
  void SetUp() override { printf("DynamicFixture::SetUp\n"); }
  void TearDown() override { printf("DynamicFixture::TearDown\n"); }

  static void SetUpTestSuite() { printf("DynamicFixture::SetUpTestSuite\n"); }
  static void TearDownTestSuite() {
    printf("DynamicFixture::TearDownTestSuite\n");
  }
};

template <bool Pass>
class DynamicTest : public DynamicFixture {
 public:
  void TestBody() override { EXPECT_TRUE(Pass); }
};

auto dynamic_test = (
    // Register two tests with the same fixture correctly.
    testing::RegisterTest(
        "DynamicFixture", "DynamicTestPass", nullptr, nullptr, __FILE__,
        __LINE__, []() -> DynamicFixture* { return new DynamicTest<true>; }),
    testing::RegisterTest(
        "DynamicFixture", "DynamicTestFail", nullptr, nullptr, __FILE__,
        __LINE__, []() -> DynamicFixture* { return new DynamicTest<false>; }),

    // Register the same fixture with another name. That's fine.
    testing::RegisterTest(
        "DynamicFixtureAnotherName", "DynamicTestPass", nullptr, nullptr,
        __FILE__, __LINE__,
        []() -> DynamicFixture* { return new DynamicTest<true>; }),

    // Register two tests with the same fixture incorrectly.
    testing::RegisterTest(
        "BadDynamicFixture1", "FixtureBase", nullptr, nullptr, __FILE__,
        __LINE__, []() -> DynamicFixture* { return new DynamicTest<true>; }),
    testing::RegisterTest(
        "BadDynamicFixture1", "TestBase", nullptr, nullptr, __FILE__, __LINE__,
        []() -> testing::Test* { return new DynamicTest<true>; }),

    // Register two tests with the same fixture incorrectly by ommiting the
    // return type.
    testing::RegisterTest(
        "BadDynamicFixture2", "FixtureBase", nullptr, nullptr, __FILE__,
        __LINE__, []() -> DynamicFixture* { return new DynamicTest<true>; }),
    testing::RegisterTest("BadDynamicFixture2", "Derived", nullptr, nullptr,
                          __FILE__, __LINE__,
                          []() { return new DynamicTest<true>; }));

// Two test environments for testing testing::AddGlobalTestEnvironment().

class FooEnvironment : public testing::Environment {
 public:
  void SetUp() override { printf("%s", "FooEnvironment::SetUp() called.\n"); }

  void TearDown() override {
    printf("%s", "FooEnvironment::TearDown() called.\n");
    FAIL() << "Expected fatal failure.";
  }
};

class BarEnvironment : public testing::Environment {
 public:
  void SetUp() override { printf("%s", "BarEnvironment::SetUp() called.\n"); }

  void TearDown() override {
    printf("%s", "BarEnvironment::TearDown() called.\n");
    ADD_FAILURE() << "Expected non-fatal failure.";
  }
};

// The main function.
//
// The idea is to use Google Test to run all the tests we have defined (some
// of them are intended to fail), and then compare the test results
// with the "golden" file.
int main(int argc, char **argv) {
  testing::GTEST_FLAG(print_time) = false;

  // We just run the tests, knowing some of them are intended to fail.
  // We will use a separate Python script to compare the output of
  // this program with the golden file.

  // It's hard to test InitGoogleTest() directly, as it has many
  // global side effects.  The following line serves as a sanity test
  // for it.
  testing::InitGoogleTest(&argc, argv);
  bool internal_skip_environment_and_ad_hoc_tests =
      std::count(argv, argv + argc,
                 std::string("internal_skip_environment_and_ad_hoc_tests")) > 0;

#if GTEST_HAS_DEATH_TEST
  if (testing::internal::GTEST_FLAG(internal_run_death_test) != "") {
    // Skip the usual output capturing if we're running as the child
    // process of an threadsafe-style death test.
# if GTEST_OS_WINDOWS
    posix::FReopen("nul:", "w", stdout);
# else
    posix::FReopen("/dev/null", "w", stdout);
# endif  // GTEST_OS_WINDOWS
    return RUN_ALL_TESTS();
  }
#endif  // GTEST_HAS_DEATH_TEST

  if (internal_skip_environment_and_ad_hoc_tests)
    return RUN_ALL_TESTS();

  // Registers two global test environments.
  // The golden file verifies that they are set up in the order they
  // are registered, and torn down in the reverse order.
  testing::AddGlobalTestEnvironment(new FooEnvironment);
  testing::AddGlobalTestEnvironment(new BarEnvironment);
#if _MSC_VER
GTEST_DISABLE_MSC_WARNINGS_POP_()  //  4127
#endif  //  _MSC_VER
  return RunAllTests();
}
