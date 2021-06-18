#!/usr/bin/env python
#
# Copyright 2018 Google LLC. All rights reserved.
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
"""Verifies that Google Test uses filter provided via testbridge."""

import os

import gtest_test_utils

binary_name = 'gtest_testbridge_test_'
COMMAND = gtest_test_utils.GetTestExecutablePath(binary_name)
TESTBRIDGE_NAME = 'TESTBRIDGE_TEST_ONLY'


def Assert(condition):
  if not condition:
    raise AssertionError


class GTestTestFilterTest(gtest_test_utils.TestCase):

  def testTestExecutionIsFiltered(self):
    """Tests that the test filter is picked up from the testbridge env var."""
    subprocess_env = os.environ.copy()

    subprocess_env[TESTBRIDGE_NAME] = '*.TestThatSucceeds'
    p = gtest_test_utils.Subprocess(COMMAND, env=subprocess_env)

    self.assertEquals(0, p.exit_code)

    Assert('filter = *.TestThatSucceeds' in p.output)
    Assert('[       OK ] TestFilterTest.TestThatSucceeds' in p.output)
    Assert('[  PASSED  ] 1 test.' in p.output)


if __name__ == '__main__':
  gtest_test_utils.Main()
