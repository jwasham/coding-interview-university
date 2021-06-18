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

"""Tests Google Test's throw-on-failure mode with exceptions disabled.

This script invokes googletest-throw-on-failure-test_ (a program written with
Google Test) with different environments and command line flags.
"""

import os
import gtest_test_utils


# Constants.

# The command line flag for enabling/disabling the throw-on-failure mode.
THROW_ON_FAILURE = 'gtest_throw_on_failure'

# Path to the googletest-throw-on-failure-test_ program, compiled with
# exceptions disabled.
EXE_PATH = gtest_test_utils.GetTestExecutablePath(
    'googletest-throw-on-failure-test_')


# Utilities.


def SetEnvVar(env_var, value):
  """Sets an environment variable to a given value; unsets it when the
  given value is None.
  """

  env_var = env_var.upper()
  if value is not None:
    os.environ[env_var] = value
  elif env_var in os.environ:
    del os.environ[env_var]


def Run(command):
  """Runs a command; returns True/False if its exit code is/isn't 0."""

  print('Running "%s". . .' % ' '.join(command))
  p = gtest_test_utils.Subprocess(command)
  return p.exited and p.exit_code == 0


# The tests.
class ThrowOnFailureTest(gtest_test_utils.TestCase):
  """Tests the throw-on-failure mode."""

  def RunAndVerify(self, env_var_value, flag_value, should_fail):
    """Runs googletest-throw-on-failure-test_ and verifies that it does
    (or does not) exit with a non-zero code.

    Args:
      env_var_value:    value of the GTEST_BREAK_ON_FAILURE environment
                        variable; None if the variable should be unset.
      flag_value:       value of the --gtest_break_on_failure flag;
                        None if the flag should not be present.
      should_fail:      True if and only if the program is expected to fail.
    """

    SetEnvVar(THROW_ON_FAILURE, env_var_value)

    if env_var_value is None:
      env_var_value_msg = ' is not set'
    else:
      env_var_value_msg = '=' + env_var_value

    if flag_value is None:
      flag = ''
    elif flag_value == '0':
      flag = '--%s=0' % THROW_ON_FAILURE
    else:
      flag = '--%s' % THROW_ON_FAILURE

    command = [EXE_PATH]
    if flag:
      command.append(flag)

    if should_fail:
      should_or_not = 'should'
    else:
      should_or_not = 'should not'

    failed = not Run(command)

    SetEnvVar(THROW_ON_FAILURE, None)

    msg = ('when %s%s, an assertion failure in "%s" %s cause a non-zero '
           'exit code.' %
           (THROW_ON_FAILURE, env_var_value_msg, ' '.join(command),
            should_or_not))
    self.assert_(failed == should_fail, msg)

  def testDefaultBehavior(self):
    """Tests the behavior of the default mode."""

    self.RunAndVerify(env_var_value=None, flag_value=None, should_fail=False)

  def testThrowOnFailureEnvVar(self):
    """Tests using the GTEST_THROW_ON_FAILURE environment variable."""

    self.RunAndVerify(env_var_value='0',
                      flag_value=None,
                      should_fail=False)
    self.RunAndVerify(env_var_value='1',
                      flag_value=None,
                      should_fail=True)

  def testThrowOnFailureFlag(self):
    """Tests using the --gtest_throw_on_failure flag."""

    self.RunAndVerify(env_var_value=None,
                      flag_value='0',
                      should_fail=False)
    self.RunAndVerify(env_var_value=None,
                      flag_value='1',
                      should_fail=True)

  def testThrowOnFailureFlagOverridesEnvVar(self):
    """Tests that --gtest_throw_on_failure overrides GTEST_THROW_ON_FAILURE."""

    self.RunAndVerify(env_var_value='0',
                      flag_value='0',
                      should_fail=False)
    self.RunAndVerify(env_var_value='0',
                      flag_value='1',
                      should_fail=True)
    self.RunAndVerify(env_var_value='1',
                      flag_value='0',
                      should_fail=False)
    self.RunAndVerify(env_var_value='1',
                      flag_value='1',
                      should_fail=True)


if __name__ == '__main__':
  gtest_test_utils.Main()
