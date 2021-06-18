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
--gtest_list_tests flag.  This script tests such functionality
by invoking googletest-list-tests-unittest_ (a program written with
Google Test) the command line flags.
"""

import re
import gtest_test_utils

# Constants.

# The command line flag for enabling/disabling listing all tests.
LIST_TESTS_FLAG = 'gtest_list_tests'

# Path to the googletest-list-tests-unittest_ program.
EXE_PATH = gtest_test_utils.GetTestExecutablePath('googletest-list-tests-unittest_')

# The expected output when running googletest-list-tests-unittest_ with
# --gtest_list_tests
EXPECTED_OUTPUT_NO_FILTER_RE = re.compile(r"""FooDeathTest\.
  Test1
Foo\.
  Bar1
  Bar2
  DISABLED_Bar3
Abc\.
  Xyz
  Def
FooBar\.
  Baz
FooTest\.
  Test1
  DISABLED_Test2
  Test3
TypedTest/0\.  # TypeParam = (VeryLo{245}|class VeryLo{239})\.\.\.
  TestA
  TestB
TypedTest/1\.  # TypeParam = int\s*\*( __ptr64)?
  TestA
  TestB
TypedTest/2\.  # TypeParam = .*MyArray<bool,\s*42>
  TestA
  TestB
My/TypeParamTest/0\.  # TypeParam = (VeryLo{245}|class VeryLo{239})\.\.\.
  TestA
  TestB
My/TypeParamTest/1\.  # TypeParam = int\s*\*( __ptr64)?
  TestA
  TestB
My/TypeParamTest/2\.  # TypeParam = .*MyArray<bool,\s*42>
  TestA
  TestB
MyInstantiation/ValueParamTest\.
  TestA/0  # GetParam\(\) = one line
  TestA/1  # GetParam\(\) = two\\nlines
  TestA/2  # GetParam\(\) = a very\\nlo{241}\.\.\.
  TestB/0  # GetParam\(\) = one line
  TestB/1  # GetParam\(\) = two\\nlines
  TestB/2  # GetParam\(\) = a very\\nlo{241}\.\.\.
""")

# The expected output when running googletest-list-tests-unittest_ with
# --gtest_list_tests and --gtest_filter=Foo*.
EXPECTED_OUTPUT_FILTER_FOO_RE = re.compile(r"""FooDeathTest\.
  Test1
Foo\.
  Bar1
  Bar2
  DISABLED_Bar3
FooBar\.
  Baz
FooTest\.
  Test1
  DISABLED_Test2
  Test3
""")

# Utilities.


def Run(args):
  """Runs googletest-list-tests-unittest_ and returns the list of tests printed."""

  return gtest_test_utils.Subprocess([EXE_PATH] + args,
                                     capture_stderr=False).output


# The unit test.


class GTestListTestsUnitTest(gtest_test_utils.TestCase):
  """Tests using the --gtest_list_tests flag to list all tests."""

  def RunAndVerify(self, flag_value, expected_output_re, other_flag):
    """Runs googletest-list-tests-unittest_ and verifies that it prints
    the correct tests.

    Args:
      flag_value:         value of the --gtest_list_tests flag;
                          None if the flag should not be present.
      expected_output_re: regular expression that matches the expected
                          output after running command;
      other_flag:         a different flag to be passed to command
                          along with gtest_list_tests;
                          None if the flag should not be present.
    """

    if flag_value is None:
      flag = ''
      flag_expression = 'not set'
    elif flag_value == '0':
      flag = '--%s=0' % LIST_TESTS_FLAG
      flag_expression = '0'
    else:
      flag = '--%s' % LIST_TESTS_FLAG
      flag_expression = '1'

    args = [flag]

    if other_flag is not None:
      args += [other_flag]

    output = Run(args)

    if expected_output_re:
      self.assert_(
          expected_output_re.match(output),
          ('when %s is %s, the output of "%s" is "%s",\n'
           'which does not match regex "%s"' %
           (LIST_TESTS_FLAG, flag_expression, ' '.join(args), output,
            expected_output_re.pattern)))
    else:
      self.assert_(
          not EXPECTED_OUTPUT_NO_FILTER_RE.match(output),
          ('when %s is %s, the output of "%s" is "%s"'%
           (LIST_TESTS_FLAG, flag_expression, ' '.join(args), output)))

  def testDefaultBehavior(self):
    """Tests the behavior of the default mode."""

    self.RunAndVerify(flag_value=None,
                      expected_output_re=None,
                      other_flag=None)

  def testFlag(self):
    """Tests using the --gtest_list_tests flag."""

    self.RunAndVerify(flag_value='0',
                      expected_output_re=None,
                      other_flag=None)
    self.RunAndVerify(flag_value='1',
                      expected_output_re=EXPECTED_OUTPUT_NO_FILTER_RE,
                      other_flag=None)

  def testOverrideNonFilterFlags(self):
    """Tests that --gtest_list_tests overrides the non-filter flags."""

    self.RunAndVerify(flag_value='1',
                      expected_output_re=EXPECTED_OUTPUT_NO_FILTER_RE,
                      other_flag='--gtest_break_on_failure')

  def testWithFilterFlags(self):
    """Tests that --gtest_list_tests takes into account the
    --gtest_filter flag."""

    self.RunAndVerify(flag_value='1',
                      expected_output_re=EXPECTED_OUTPUT_FILTER_FOO_RE,
                      other_flag='--gtest_filter=Foo*')


if __name__ == '__main__':
  gtest_test_utils.Main()
