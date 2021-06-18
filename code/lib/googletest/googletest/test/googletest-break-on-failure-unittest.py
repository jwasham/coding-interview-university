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

"""Unit test for Google Test's break-on-failure mode.

A user can ask Google Test to seg-fault when an assertion fails, using
either the GTEST_BREAK_ON_FAILURE environment variable or the
--gtest_break_on_failure flag.  This script tests such functionality
by invoking googletest-break-on-failure-unittest_ (a program written with
Google Test) with different environments and command line flags.
"""

import os
import gtest_test_utils

# Constants.

IS_WINDOWS = os.name == 'nt'

# The environment variable for enabling/disabling the break-on-failure mode.
BREAK_ON_FAILURE_ENV_VAR = 'GTEST_BREAK_ON_FAILURE'

# The command line flag for enabling/disabling the break-on-failure mode.
BREAK_ON_FAILURE_FLAG = 'gtest_break_on_failure'

# The environment variable for enabling/disabling the throw-on-failure mode.
THROW_ON_FAILURE_ENV_VAR = 'GTEST_THROW_ON_FAILURE'

# The environment variable for enabling/disabling the catch-exceptions mode.
CATCH_EXCEPTIONS_ENV_VAR = 'GTEST_CATCH_EXCEPTIONS'

# Path to the googletest-break-on-failure-unittest_ program.
EXE_PATH = gtest_test_utils.GetTestExecutablePath(
    'googletest-break-on-failure-unittest_')


environ = gtest_test_utils.environ
SetEnvVar = gtest_test_utils.SetEnvVar

# Tests in this file run a Google-Test-based test program and expect it
# to terminate prematurely.  Therefore they are incompatible with
# the premature-exit-file protocol by design.  Unset the
# premature-exit filepath to prevent Google Test from creating
# the file.
SetEnvVar(gtest_test_utils.PREMATURE_EXIT_FILE_ENV_VAR, None)


def Run(command):
  """Runs a command; returns 1 if it was killed by a signal, or 0 otherwise."""

  p = gtest_test_utils.Subprocess(command, env=environ)
  if p.terminated_by_signal:
    return 1
  else:
    return 0


# The tests.


class GTestBreakOnFailureUnitTest(gtest_test_utils.TestCase):
  """Tests using the GTEST_BREAK_ON_FAILURE environment variable or
  the --gtest_break_on_failure flag to turn assertion failures into
  segmentation faults.
  """

  def RunAndVerify(self, env_var_value, flag_value, expect_seg_fault):
    """Runs googletest-break-on-failure-unittest_ and verifies that it does
    (or does not) have a seg-fault.

    Args:
      env_var_value:    value of the GTEST_BREAK_ON_FAILURE environment
                        variable; None if the variable should be unset.
      flag_value:       value of the --gtest_break_on_failure flag;
                        None if the flag should not be present.
      expect_seg_fault: 1 if the program is expected to generate a seg-fault;
                        0 otherwise.
    """

    SetEnvVar(BREAK_ON_FAILURE_ENV_VAR, env_var_value)

    if env_var_value is None:
      env_var_value_msg = ' is not set'
    else:
      env_var_value_msg = '=' + env_var_value

    if flag_value is None:
      flag = ''
    elif flag_value == '0':
      flag = '--%s=0' % BREAK_ON_FAILURE_FLAG
    else:
      flag = '--%s' % BREAK_ON_FAILURE_FLAG

    command = [EXE_PATH]
    if flag:
      command.append(flag)

    if expect_seg_fault:
      should_or_not = 'should'
    else:
      should_or_not = 'should not'

    has_seg_fault = Run(command)

    SetEnvVar(BREAK_ON_FAILURE_ENV_VAR, None)

    msg = ('when %s%s, an assertion failure in "%s" %s cause a seg-fault.' %
           (BREAK_ON_FAILURE_ENV_VAR, env_var_value_msg, ' '.join(command),
            should_or_not))
    self.assert_(has_seg_fault == expect_seg_fault, msg)

  def testDefaultBehavior(self):
    """Tests the behavior of the default mode."""

    self.RunAndVerify(env_var_value=None,
                      flag_value=None,
                      expect_seg_fault=0)

  def testEnvVar(self):
    """Tests using the GTEST_BREAK_ON_FAILURE environment variable."""

    self.RunAndVerify(env_var_value='0',
                      flag_value=None,
                      expect_seg_fault=0)
    self.RunAndVerify(env_var_value='1',
                      flag_value=None,
                      expect_seg_fault=1)

  def testFlag(self):
    """Tests using the --gtest_break_on_failure flag."""

    self.RunAndVerify(env_var_value=None,
                      flag_value='0',
                      expect_seg_fault=0)
    self.RunAndVerify(env_var_value=None,
                      flag_value='1',
                      expect_seg_fault=1)

  def testFlagOverridesEnvVar(self):
    """Tests that the flag overrides the environment variable."""

    self.RunAndVerify(env_var_value='0',
                      flag_value='0',
                      expect_seg_fault=0)
    self.RunAndVerify(env_var_value='0',
                      flag_value='1',
                      expect_seg_fault=1)
    self.RunAndVerify(env_var_value='1',
                      flag_value='0',
                      expect_seg_fault=0)
    self.RunAndVerify(env_var_value='1',
                      flag_value='1',
                      expect_seg_fault=1)

  def testBreakOnFailureOverridesThrowOnFailure(self):
    """Tests that gtest_break_on_failure overrides gtest_throw_on_failure."""

    SetEnvVar(THROW_ON_FAILURE_ENV_VAR, '1')
    try:
      self.RunAndVerify(env_var_value=None,
                        flag_value='1',
                        expect_seg_fault=1)
    finally:
      SetEnvVar(THROW_ON_FAILURE_ENV_VAR, None)

  if IS_WINDOWS:
    def testCatchExceptionsDoesNotInterfere(self):
      """Tests that gtest_catch_exceptions doesn't interfere."""

      SetEnvVar(CATCH_EXCEPTIONS_ENV_VAR, '1')
      try:
        self.RunAndVerify(env_var_value='1',
                          flag_value='1',
                          expect_seg_fault=1)
      finally:
        SetEnvVar(CATCH_EXCEPTIONS_ENV_VAR, None)


if __name__ == '__main__':
  gtest_test_utils.Main()
