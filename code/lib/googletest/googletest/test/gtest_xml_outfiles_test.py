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

"""Unit test for the gtest_xml_output module."""

import os
from xml.dom import minidom, Node
import gtest_test_utils
import gtest_xml_test_utils

GTEST_OUTPUT_SUBDIR = "xml_outfiles"
GTEST_OUTPUT_1_TEST = "gtest_xml_outfile1_test_"
GTEST_OUTPUT_2_TEST = "gtest_xml_outfile2_test_"

EXPECTED_XML_1 = """<?xml version="1.0" encoding="UTF-8"?>
<testsuites tests="1" failures="0" disabled="0" errors="0" time="*" timestamp="*" name="AllTests">
  <testsuite name="PropertyOne" tests="1" failures="0" disabled="0" errors="0" time="*" timestamp="*">
    <testcase name="TestSomeProperties" status="run" result="completed" time="*" timestamp="*" classname="PropertyOne">
      <properties>
        <property name="SetUpProp" value="1"/>
        <property name="TestSomeProperty" value="1"/>
        <property name="TearDownProp" value="1"/>
      </properties>
    </testcase>
  </testsuite>
</testsuites>
"""

EXPECTED_XML_2 = """<?xml version="1.0" encoding="UTF-8"?>
<testsuites tests="1" failures="0" disabled="0" errors="0" time="*" timestamp="*" name="AllTests">
  <testsuite name="PropertyTwo" tests="1" failures="0" disabled="0" errors="0" time="*" timestamp="*">
    <testcase name="TestSomeProperties" status="run" result="completed" time="*" timestamp="*" classname="PropertyTwo">
      <properties>
        <property name="SetUpProp" value="2"/>
        <property name="TestSomeProperty" value="2"/>
        <property name="TearDownProp" value="2"/>
      </properties>
    </testcase>
  </testsuite>
</testsuites>
"""


class GTestXMLOutFilesTest(gtest_xml_test_utils.GTestXMLTestCase):
  """Unit test for Google Test's XML output functionality."""

  def setUp(self):
    # We want the trailing '/' that the last "" provides in os.path.join, for
    # telling Google Test to create an output directory instead of a single file
    # for xml output.
    self.output_dir_ = os.path.join(gtest_test_utils.GetTempDir(),
                                    GTEST_OUTPUT_SUBDIR, "")
    self.DeleteFilesAndDir()

  def tearDown(self):
    self.DeleteFilesAndDir()

  def DeleteFilesAndDir(self):
    try:
      os.remove(os.path.join(self.output_dir_, GTEST_OUTPUT_1_TEST + ".xml"))
    except os.error:
      pass
    try:
      os.remove(os.path.join(self.output_dir_, GTEST_OUTPUT_2_TEST + ".xml"))
    except os.error:
      pass
    try:
      os.rmdir(self.output_dir_)
    except os.error:
      pass

  def testOutfile1(self):
    self._TestOutFile(GTEST_OUTPUT_1_TEST, EXPECTED_XML_1)

  def testOutfile2(self):
    self._TestOutFile(GTEST_OUTPUT_2_TEST, EXPECTED_XML_2)

  def _TestOutFile(self, test_name, expected_xml):
    gtest_prog_path = gtest_test_utils.GetTestExecutablePath(test_name)
    command = [gtest_prog_path, "--gtest_output=xml:%s" % self.output_dir_]
    p = gtest_test_utils.Subprocess(command,
                                    working_dir=gtest_test_utils.GetTempDir())
    self.assert_(p.exited)
    self.assertEquals(0, p.exit_code)

    output_file_name1 = test_name + ".xml"
    output_file1 = os.path.join(self.output_dir_, output_file_name1)
    output_file_name2 = 'lt-' + output_file_name1
    output_file2 = os.path.join(self.output_dir_, output_file_name2)
    self.assert_(os.path.isfile(output_file1) or os.path.isfile(output_file2),
                 output_file1)

    expected = minidom.parseString(expected_xml)
    if os.path.isfile(output_file1):
      actual = minidom.parse(output_file1)
    else:
      actual = minidom.parse(output_file2)
    self.NormalizeXml(actual.documentElement)
    self.AssertEquivalentNodes(expected.documentElement,
                               actual.documentElement)
    expected.unlink()
    actual.unlink()


if __name__ == "__main__":
  os.environ["GTEST_STACK_TRACE_DEPTH"] = "0"
  gtest_test_utils.Main()
