#!/usr/bin/env python
#
# Copyright 2006, Google Inc.
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
"""Unit test for Google Test's --gtest_list_tests flag.

A user can ask Google Test to list all tests by specifying the
--gtest_list_tests flag. If output is requested, via --gtest_output=xml
or --gtest_output=json, the tests are listed, with extra information in the
output file.
This script tests such functionality by invoking gtest_list_output_unittest_
 (a program written with Google Test) the command line flags.
"""

import os
import re
import gtest_test_utils

GTEST_LIST_TESTS_FLAG = '--gtest_list_tests'
GTEST_OUTPUT_FLAG = '--gtest_output'

EXPECTED_XML = """<\?xml version="1.0" encoding="UTF-8"\?>
<testsuites tests="2" name="AllTests">
  <testsuite name="FooTest" tests="2">
    <testcase name="Test1" file=".*gtest_list_output_unittest_.cc" line="43" />
    <testcase name="Test2" file=".*gtest_list_output_unittest_.cc" line="45" />
  </testsuite>
</testsuites>
"""

EXPECTED_JSON = """{
  "tests": 2,
  "name": "AllTests",
  "testsuites": \[
    {
      "name": "FooTest",
      "tests": 2,
      "testsuite": \[
        {
          "name": "Test1",
          "file": ".*gtest_list_output_unittest_.cc",
          "line": 43
        },
        {
          "name": "Test2",
          "file": ".*gtest_list_output_unittest_.cc",
          "line": 45
        }
      \]
    }
  \]
}
"""


class GTestListTestsOutputUnitTest(gtest_test_utils.TestCase):
  """Unit test for Google Test's list tests with output to file functionality.
  """

  def testXml(self):
    """Verifies XML output for listing tests in a Google Test binary.

    Runs a test program that generates an empty XML output, and
    tests that the XML output is expected.
    """
    self._TestOutput('xml', EXPECTED_XML)

  def testJSON(self):
    """Verifies XML output for listing tests in a Google Test binary.

    Runs a test program that generates an empty XML output, and
    tests that the XML output is expected.
    """
    self._TestOutput('json', EXPECTED_JSON)

  def _GetOutput(self, out_format):
    file_path = os.path.join(gtest_test_utils.GetTempDir(),
                             'test_out.' + out_format)
    gtest_prog_path = gtest_test_utils.GetTestExecutablePath(
        'gtest_list_output_unittest_')

    command = ([
        gtest_prog_path,
        '%s=%s:%s' % (GTEST_OUTPUT_FLAG, out_format, file_path),
        '--gtest_list_tests'
    ])
    environ_copy = os.environ.copy()
    p = gtest_test_utils.Subprocess(
        command, env=environ_copy, working_dir=gtest_test_utils.GetTempDir())

    self.assert_(p.exited)
    self.assertEquals(0, p.exit_code)
    with open(file_path) as f:
      result = f.read()
    return result

  def _TestOutput(self, test_format, expected_output):
    actual = self._GetOutput(test_format)
    actual_lines = actual.splitlines()
    expected_lines = expected_output.splitlines()
    line_count = 0
    for actual_line in actual_lines:
      expected_line = expected_lines[line_count]
      expected_line_re = re.compile(expected_line.strip())
      self.assert_(
          expected_line_re.match(actual_line.strip()),
          ('actual output of "%s",\n'
           'which does not match expected regex of "%s"\n'
           'on line %d' % (actual, expected_output, line_count)))
      line_count = line_count + 1


if __name__ == '__main__':
  os.environ['GTEST_STACK_TRACE_DEPTH'] = '1'
  gtest_test_utils.Main()
