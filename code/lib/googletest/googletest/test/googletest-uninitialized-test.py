#!/usr/bin/env python
#
# Copyright 2008, Google Inc.
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

"""Verifies that Google Test warns the user when not initialized properly."""

import gtest_test_utils

COMMAND = gtest_test_utils.GetTestExecutablePath('googletest-uninitialized-test_')


def Assert(condition):
  if not condition:
    raise AssertionError


def AssertEq(expected, actual):
  if expected != actual:
    print('Expected: %s' % (expected,))
    print('  Actual: %s' % (actual,))
    raise AssertionError


def TestExitCodeAndOutput(command):
  """Runs the given command and verifies its exit code and output."""

  # Verifies that 'command' exits with code 1.
  p = gtest_test_utils.Subprocess(command)
  if p.exited and p.exit_code == 0:
    Assert('IMPORTANT NOTICE' in p.output);
  Assert('InitGoogleTest' in p.output)


class GTestUninitializedTest(gtest_test_utils.TestCase):
  def testExitCodeAndOutput(self):
    TestExitCodeAndOutput(COMMAND)


if __name__ == '__main__':
  gtest_test_utils.Main()
