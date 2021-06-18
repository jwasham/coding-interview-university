#!/usr/bin/env python
# Copyright 2018, Google Inc.
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

"""Unit test for the gtest_json_output module."""

import json
import os
import gtest_json_test_utils
import gtest_test_utils

GTEST_OUTPUT_SUBDIR = 'json_outfiles'
GTEST_OUTPUT_1_TEST = 'gtest_xml_outfile1_test_'
GTEST_OUTPUT_2_TEST = 'gtest_xml_outfile2_test_'

EXPECTED_1 = {
    u'tests':
        1,
    u'failures':
        0,
    u'disabled':
        0,
    u'errors':
        0,
    u'time':
        u'*',
    u'timestamp':
        u'*',
    u'name':
        u'AllTests',
    u'testsuites': [{
        u'name':
            u'PropertyOne',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'TestSomeProperties',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'time': u'*',
            u'timestamp': u'*',
            u'classname': u'PropertyOne',
            u'SetUpProp': u'1',
            u'TestSomeProperty': u'1',
            u'TearDownProp': u'1',
        }],
    }],
}

EXPECTED_2 = {
    u'tests':
        1,
    u'failures':
        0,
    u'disabled':
        0,
    u'errors':
        0,
    u'time':
        u'*',
    u'timestamp':
        u'*',
    u'name':
        u'AllTests',
    u'testsuites': [{
        u'name':
            u'PropertyTwo',
        u'tests':
            1,
        u'failures':
            0,
        u'disabled':
            0,
        u'errors':
            0,
        u'time':
            u'*',
        u'timestamp':
            u'*',
        u'testsuite': [{
            u'name': u'TestSomeProperties',
            u'status': u'RUN',
            u'result': u'COMPLETED',
            u'timestamp': u'*',
            u'time': u'*',
            u'classname': u'PropertyTwo',
            u'SetUpProp': u'2',
            u'TestSomeProperty': u'2',
            u'TearDownProp': u'2',
        }],
    }],
}


class GTestJsonOutFilesTest(gtest_test_utils.TestCase):
  """Unit test for Google Test's JSON output functionality."""

  def setUp(self):
    # We want the trailing '/' that the last "" provides in os.path.join, for
    # telling Google Test to create an output directory instead of a single file
    # for xml output.
    self.output_dir_ = os.path.join(gtest_test_utils.GetTempDir(),
                                    GTEST_OUTPUT_SUBDIR, '')
    self.DeleteFilesAndDir()

  def tearDown(self):
    self.DeleteFilesAndDir()

  def DeleteFilesAndDir(self):
    try:
      os.remove(os.path.join(self.output_dir_, GTEST_OUTPUT_1_TEST + '.json'))
    except os.error:
      pass
    try:
      os.remove(os.path.join(self.output_dir_, GTEST_OUTPUT_2_TEST + '.json'))
    except os.error:
      pass
    try:
      os.rmdir(self.output_dir_)
    except os.error:
      pass

  def testOutfile1(self):
    self._TestOutFile(GTEST_OUTPUT_1_TEST, EXPECTED_1)

  def testOutfile2(self):
    self._TestOutFile(GTEST_OUTPUT_2_TEST, EXPECTED_2)

  def _TestOutFile(self, test_name, expected):
    gtest_prog_path = gtest_test_utils.GetTestExecutablePath(test_name)
    command = [gtest_prog_path, '--gtest_output=json:%s' % self.output_dir_]
    p = gtest_test_utils.Subprocess(command,
                                    working_dir=gtest_test_utils.GetTempDir())
    self.assert_(p.exited)
    self.assertEquals(0, p.exit_code)

    output_file_name1 = test_name + '.json'
    output_file1 = os.path.join(self.output_dir_, output_file_name1)
    output_file_name2 = 'lt-' + output_file_name1
    output_file2 = os.path.join(self.output_dir_, output_file_name2)
    self.assert_(os.path.isfile(output_file1) or os.path.isfile(output_file2),
                 output_file1)

    if os.path.isfile(output_file1):
      with open(output_file1) as f:
        actual = json.load(f)
    else:
      with open(output_file2) as f:
        actual = json.load(f)
    self.assertEqual(expected, gtest_json_test_utils.normalize(actual))


if __name__ == '__main__':
  os.environ['GTEST_STACK_TRACE_DEPTH'] = '0'
  gtest_test_utils.Main()
