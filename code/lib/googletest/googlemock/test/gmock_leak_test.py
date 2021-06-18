#!/usr/bin/env python
#
# Copyright 2009, Google Inc.
# All rights reserved.
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

"""Tests that leaked mock objects can be caught be Google Mock."""

import gmock_test_utils

PROGRAM_PATH = gmock_test_utils.GetTestExecutablePath('gmock_leak_test_')
TEST_WITH_EXPECT_CALL = [PROGRAM_PATH, '--gtest_filter=*ExpectCall*']
TEST_WITH_ON_CALL = [PROGRAM_PATH, '--gtest_filter=*OnCall*']
TEST_MULTIPLE_LEAKS = [PROGRAM_PATH, '--gtest_filter=*MultipleLeaked*']

environ = gmock_test_utils.environ
SetEnvVar = gmock_test_utils.SetEnvVar

# Tests in this file run a Google-Test-based test program and expect it
# to terminate prematurely.  Therefore they are incompatible with
# the premature-exit-file protocol by design.  Unset the
# premature-exit filepath to prevent Google Test from creating
# the file.
SetEnvVar(gmock_test_utils.PREMATURE_EXIT_FILE_ENV_VAR, None)


class GMockLeakTest(gmock_test_utils.TestCase):

  def testCatchesLeakedMockByDefault(self):
    self.assertNotEqual(
        0,
        gmock_test_utils.Subprocess(TEST_WITH_EXPECT_CALL,
                                    env=environ).exit_code)
    self.assertNotEqual(
        0,
        gmock_test_utils.Subprocess(TEST_WITH_ON_CALL,
                                    env=environ).exit_code)

  def testDoesNotCatchLeakedMockWhenDisabled(self):
    self.assertEquals(
        0,
        gmock_test_utils.Subprocess(TEST_WITH_EXPECT_CALL +
                                    ['--gmock_catch_leaked_mocks=0'],
                                    env=environ).exit_code)
    self.assertEquals(
        0,
        gmock_test_utils.Subprocess(TEST_WITH_ON_CALL +
                                    ['--gmock_catch_leaked_mocks=0'],
                                    env=environ).exit_code)

  def testCatchesLeakedMockWhenEnabled(self):
    self.assertNotEqual(
        0,
        gmock_test_utils.Subprocess(TEST_WITH_EXPECT_CALL +
                                    ['--gmock_catch_leaked_mocks'],
                                    env=environ).exit_code)
    self.assertNotEqual(
        0,
        gmock_test_utils.Subprocess(TEST_WITH_ON_CALL +
                                    ['--gmock_catch_leaked_mocks'],
                                    env=environ).exit_code)

  def testCatchesLeakedMockWhenEnabledWithExplictFlagValue(self):
    self.assertNotEqual(
        0,
        gmock_test_utils.Subprocess(TEST_WITH_EXPECT_CALL +
                                    ['--gmock_catch_leaked_mocks=1'],
                                    env=environ).exit_code)

  def testCatchesMultipleLeakedMocks(self):
    self.assertNotEqual(
        0,
        gmock_test_utils.Subprocess(TEST_MULTIPLE_LEAKS +
                                    ['--gmock_catch_leaked_mocks'],
                                    env=environ).exit_code)


if __name__ == '__main__':
  gmock_test_utils.Main()
