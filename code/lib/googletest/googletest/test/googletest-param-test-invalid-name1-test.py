#!/usr/bin/env python
#
# Copyright 2015 Google Inc. All rights reserved.
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

binary_name = 'googletest-param-test-invalid-name1-test_'
COMMAND = gtest_test_utils.GetTestExecutablePath(binary_name)


def Assert(condition):
  if not condition:
    raise AssertionError


def TestExitCodeAndOutput(command):
  """Runs the given command and verifies its exit code and output."""

  err = ('Parameterized test name \'"InvalidWithQuotes"\' is invalid')

  p = gtest_test_utils.Subprocess(command)
  Assert(p.terminated_by_signal)

  # Verify the output message contains appropriate output
  Assert(err in p.output)


class GTestParamTestInvalidName1Test(gtest_test_utils.TestCase):

  def testExitCodeAndOutput(self):
    TestExitCodeAndOutput(COMMAND)


if __name__ == '__main__':
  gtest_test_utils.Main()
