#!/usr/bin/env python
#
# Copyright 2009 Google Inc. All Rights Reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
#
#     * Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above
# copyright notice, this list of conditions and the following disclaimer
# in the documentation and/or other materials provided with the
# distribution.
#     * Neither the name of Google Inc. nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

"""Verifies that test shuffling works."""

import os
import gtest_test_utils

# Command to run the googletest-shuffle-test_ program.
COMMAND = gtest_test_utils.GetTestExecutablePath('googletest-shuffle-test_')

# The environment variables for test sharding.
TOTAL_SHARDS_ENV_VAR = 'GTEST_TOTAL_SHARDS'
SHARD_INDEX_ENV_VAR = 'GTEST_SHARD_INDEX'

TEST_FILTER = 'A*.A:A*.B:C*'

ALL_TESTS = []
ACTIVE_TESTS = []
FILTERED_TESTS = []
SHARDED_TESTS = []

SHUFFLED_ALL_TESTS = []
SHUFFLED_ACTIVE_TESTS = []
SHUFFLED_FILTERED_TESTS = []
SHUFFLED_SHARDED_TESTS = []


def AlsoRunDisabledTestsFlag():
  return '--gtest_also_run_disabled_tests'


def FilterFlag(test_filter):
  return '--gtest_filter=%s' % (test_filter,)


def RepeatFlag(n):
  return '--gtest_repeat=%s' % (n,)


def ShuffleFlag():
  return '--gtest_shuffle'


def RandomSeedFlag(n):
  return '--gtest_random_seed=%s' % (n,)


def RunAndReturnOutput(extra_env, args):
  """Runs the test program and returns its output."""

  environ_copy = os.environ.copy()
  environ_copy.update(extra_env)

  return gtest_test_utils.Subprocess([COMMAND] + args, env=environ_copy).output


def GetTestsForAllIterations(extra_env, args):
  """Runs the test program and returns a list of test lists.

  Args:
    extra_env: a map from environment variables to their values
    args: command line flags to pass to googletest-shuffle-test_

  Returns:
    A list where the i-th element is the list of tests run in the i-th
    test iteration.
  """

  test_iterations = []
  for line in RunAndReturnOutput(extra_env, args).split('\n'):
    if line.startswith('----'):
      tests = []
      test_iterations.append(tests)
    elif line.strip():
      tests.append(line.strip())  # 'TestCaseName.TestName'

  return test_iterations


def GetTestCases(tests):
  """Returns a list of test cases in the given full test names.

  Args:
    tests: a list of full test names

  Returns:
    A list of test cases from 'tests', in their original order.
    Consecutive duplicates are removed.
  """

  test_cases = []
  for test in tests:
    test_case = test.split('.')[0]
    if not test_case in test_cases:
      test_cases.append(test_case)

  return test_cases


def CalculateTestLists():
  """Calculates the list of tests run under different flags."""

  if not ALL_TESTS:
    ALL_TESTS.extend(
        GetTestsForAllIterations({}, [AlsoRunDisabledTestsFlag()])[0])

  if not ACTIVE_TESTS:
    ACTIVE_TESTS.extend(GetTestsForAllIterations({}, [])[0])

  if not FILTERED_TESTS:
    FILTERED_TESTS.extend(
        GetTestsForAllIterations({}, [FilterFlag(TEST_FILTER)])[0])

  if not SHARDED_TESTS:
    SHARDED_TESTS.extend(
        GetTestsForAllIterations({TOTAL_SHARDS_ENV_VAR: '3',
                                  SHARD_INDEX_ENV_VAR: '1'},
                                 [])[0])

  if not SHUFFLED_ALL_TESTS:
    SHUFFLED_ALL_TESTS.extend(GetTestsForAllIterations(
        {}, [AlsoRunDisabledTestsFlag(), ShuffleFlag(), RandomSeedFlag(1)])[0])

  if not SHUFFLED_ACTIVE_TESTS:
    SHUFFLED_ACTIVE_TESTS.extend(GetTestsForAllIterations(
        {}, [ShuffleFlag(), RandomSeedFlag(1)])[0])

  if not SHUFFLED_FILTERED_TESTS:
    SHUFFLED_FILTERED_TESTS.extend(GetTestsForAllIterations(
        {}, [ShuffleFlag(), RandomSeedFlag(1), FilterFlag(TEST_FILTER)])[0])

  if not SHUFFLED_SHARDED_TESTS:
    SHUFFLED_SHARDED_TESTS.extend(
        GetTestsForAllIterations({TOTAL_SHARDS_ENV_VAR: '3',
                                  SHARD_INDEX_ENV_VAR: '1'},
                                 [ShuffleFlag(), RandomSeedFlag(1)])[0])


class GTestShuffleUnitTest(gtest_test_utils.TestCase):
  """Tests test shuffling."""

  def setUp(self):
    CalculateTestLists()

  def testShufflePreservesNumberOfTests(self):
    self.assertEqual(len(ALL_TESTS), len(SHUFFLED_ALL_TESTS))
    self.assertEqual(len(ACTIVE_TESTS), len(SHUFFLED_ACTIVE_TESTS))
    self.assertEqual(len(FILTERED_TESTS), len(SHUFFLED_FILTERED_TESTS))
    self.assertEqual(len(SHARDED_TESTS), len(SHUFFLED_SHARDED_TESTS))

  def testShuffleChangesTestOrder(self):
    self.assert_(SHUFFLED_ALL_TESTS != ALL_TESTS, SHUFFLED_ALL_TESTS)
    self.assert_(SHUFFLED_ACTIVE_TESTS != ACTIVE_TESTS, SHUFFLED_ACTIVE_TESTS)
    self.assert_(SHUFFLED_FILTERED_TESTS != FILTERED_TESTS,
                 SHUFFLED_FILTERED_TESTS)
    self.assert_(SHUFFLED_SHARDED_TESTS != SHARDED_TESTS,
                 SHUFFLED_SHARDED_TESTS)

  def testShuffleChangesTestCaseOrder(self):
    self.assert_(GetTestCases(SHUFFLED_ALL_TESTS) != GetTestCases(ALL_TESTS),
                 GetTestCases(SHUFFLED_ALL_TESTS))
    self.assert_(
        GetTestCases(SHUFFLED_ACTIVE_TESTS) != GetTestCases(ACTIVE_TESTS),
        GetTestCases(SHUFFLED_ACTIVE_TESTS))
    self.assert_(
        GetTestCases(SHUFFLED_FILTERED_TESTS) != GetTestCases(FILTERED_TESTS),
        GetTestCases(SHUFFLED_FILTERED_TESTS))
    self.assert_(
        GetTestCases(SHUFFLED_SHARDED_TESTS) != GetTestCases(SHARDED_TESTS),
        GetTestCases(SHUFFLED_SHARDED_TESTS))

  def testShuffleDoesNotRepeatTest(self):
    for test in SHUFFLED_ALL_TESTS:
      self.assertEqual(1, SHUFFLED_ALL_TESTS.count(test),
                       '%s appears more than once' % (test,))
    for test in SHUFFLED_ACTIVE_TESTS:
      self.assertEqual(1, SHUFFLED_ACTIVE_TESTS.count(test),
                       '%s appears more than once' % (test,))
    for test in SHUFFLED_FILTERED_TESTS:
      self.assertEqual(1, SHUFFLED_FILTERED_TESTS.count(test),
                       '%s appears more than once' % (test,))
    for test in SHUFFLED_SHARDED_TESTS:
      self.assertEqual(1, SHUFFLED_SHARDED_TESTS.count(test),
                       '%s appears more than once' % (test,))

  def testShuffleDoesNotCreateNewTest(self):
    for test in SHUFFLED_ALL_TESTS:
      self.assert_(test in ALL_TESTS, '%s is an invalid test' % (test,))
    for test in SHUFFLED_ACTIVE_TESTS:
      self.assert_(test in ACTIVE_TESTS, '%s is an invalid test' % (test,))
    for test in SHUFFLED_FILTERED_TESTS:
      self.assert_(test in FILTERED_TESTS, '%s is an invalid test' % (test,))
    for test in SHUFFLED_SHARDED_TESTS:
      self.assert_(test in SHARDED_TESTS, '%s is an invalid test' % (test,))

  def testShuffleIncludesAllTests(self):
    for test in ALL_TESTS:
      self.assert_(test in SHUFFLED_ALL_TESTS, '%s is missing' % (test,))
    for test in ACTIVE_TESTS:
      self.assert_(test in SHUFFLED_ACTIVE_TESTS, '%s is missing' % (test,))
    for test in FILTERED_TESTS:
      self.assert_(test in SHUFFLED_FILTERED_TESTS, '%s is missing' % (test,))
    for test in SHARDED_TESTS:
      self.assert_(test in SHUFFLED_SHARDED_TESTS, '%s is missing' % (test,))

  def testShuffleLeavesDeathTestsAtFront(self):
    non_death_test_found = False
    for test in SHUFFLED_ACTIVE_TESTS:
      if 'DeathTest.' in test:
        self.assert_(not non_death_test_found,
                     '%s appears after a non-death test' % (test,))
      else:
        non_death_test_found = True

  def _VerifyTestCasesDoNotInterleave(self, tests):
    test_cases = []
    for test in tests:
      [test_case, _] = test.split('.')
      if test_cases and test_cases[-1] != test_case:
        test_cases.append(test_case)
        self.assertEqual(1, test_cases.count(test_case),
                         'Test case %s is not grouped together in %s' %
                         (test_case, tests))

  def testShuffleDoesNotInterleaveTestCases(self):
    self._VerifyTestCasesDoNotInterleave(SHUFFLED_ALL_TESTS)
    self._VerifyTestCasesDoNotInterleave(SHUFFLED_ACTIVE_TESTS)
    self._VerifyTestCasesDoNotInterleave(SHUFFLED_FILTERED_TESTS)
    self._VerifyTestCasesDoNotInterleave(SHUFFLED_SHARDED_TESTS)

  def testShuffleRestoresOrderAfterEachIteration(self):
    # Get the test lists in all 3 iterations, using random seed 1, 2,
    # and 3 respectively.  Google Test picks a different seed in each
    # iteration, and this test depends on the current implementation
    # picking successive numbers.  This dependency is not ideal, but
    # makes the test much easier to write.
    [tests_in_iteration1, tests_in_iteration2, tests_in_iteration3] = (
        GetTestsForAllIterations(
            {}, [ShuffleFlag(), RandomSeedFlag(1), RepeatFlag(3)]))

    # Make sure running the tests with random seed 1 gets the same
    # order as in iteration 1 above.
    [tests_with_seed1] = GetTestsForAllIterations(
        {}, [ShuffleFlag(), RandomSeedFlag(1)])
    self.assertEqual(tests_in_iteration1, tests_with_seed1)

    # Make sure running the tests with random seed 2 gets the same
    # order as in iteration 2 above.  Success means that Google Test
    # correctly restores the test order before re-shuffling at the
    # beginning of iteration 2.
    [tests_with_seed2] = GetTestsForAllIterations(
        {}, [ShuffleFlag(), RandomSeedFlag(2)])
    self.assertEqual(tests_in_iteration2, tests_with_seed2)

    # Make sure running the tests with random seed 3 gets the same
    # order as in iteration 3 above.  Success means that Google Test
    # correctly restores the test order before re-shuffling at the
    # beginning of iteration 3.
    [tests_with_seed3] = GetTestsForAllIterations(
        {}, [ShuffleFlag(), RandomSeedFlag(3)])
    self.assertEqual(tests_in_iteration3, tests_with_seed3)

  def testShuffleGeneratesNewOrderInEachIteration(self):
    [tests_in_iteration1, tests_in_iteration2, tests_in_iteration3] = (
        GetTestsForAllIterations(
            {}, [ShuffleFlag(), RandomSeedFlag(1), RepeatFlag(3)]))

    self.assert_(tests_in_iteration1 != tests_in_iteration2,
                 tests_in_iteration1)
    self.assert_(tests_in_iteration1 != tests_in_iteration3,
                 tests_in_iteration1)
    self.assert_(tests_in_iteration2 != tests_in_iteration3,
                 tests_in_iteration2)

  def testShuffleShardedTestsPreservesPartition(self):
    # If we run M tests on N shards, the same M tests should be run in
    # total, regardless of the random seeds used by the shards.
    [tests1] = GetTestsForAllIterations({TOTAL_SHARDS_ENV_VAR: '3',
                                         SHARD_INDEX_ENV_VAR: '0'},
                                        [ShuffleFlag(), RandomSeedFlag(1)])
    [tests2] = GetTestsForAllIterations({TOTAL_SHARDS_ENV_VAR: '3',
                                         SHARD_INDEX_ENV_VAR: '1'},
                                        [ShuffleFlag(), RandomSeedFlag(20)])
    [tests3] = GetTestsForAllIterations({TOTAL_SHARDS_ENV_VAR: '3',
                                         SHARD_INDEX_ENV_VAR: '2'},
                                        [ShuffleFlag(), RandomSeedFlag(25)])
    sorted_sharded_tests = tests1 + tests2 + tests3
    sorted_sharded_tests.sort()
    sorted_active_tests = []
    sorted_active_tests.extend(ACTIVE_TESTS)
    sorted_active_tests.sort()
    self.assertEqual(sorted_active_tests, sorted_sharded_tests)

if __name__ == '__main__':
  gtest_test_utils.Main()
