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

"""Unit test utilities for Google C++ Mocking Framework."""

import os
import sys

# Determines path to gtest_test_utils and imports it.
SCRIPT_DIR = os.path.dirname(__file__) or '.'

# isdir resolves symbolic links.
gtest_tests_util_dir = os.path.join(SCRIPT_DIR, '../../googletest/test')
if os.path.isdir(gtest_tests_util_dir):
  GTEST_TESTS_UTIL_DIR = gtest_tests_util_dir
else:
  GTEST_TESTS_UTIL_DIR = os.path.join(SCRIPT_DIR, '../../googletest/test')
sys.path.append(GTEST_TESTS_UTIL_DIR)

# pylint: disable=C6204
import gtest_test_utils


def GetSourceDir():
  """Returns the absolute path of the directory where the .py files are."""

  return gtest_test_utils.GetSourceDir()


def GetTestExecutablePath(executable_name):
  """Returns the absolute path of the test binary given its name.

  The function will print a message and abort the program if the resulting file
  doesn't exist.

  Args:
    executable_name: name of the test binary that the test script runs.

  Returns:
    The absolute path of the test binary.
  """

  return gtest_test_utils.GetTestExecutablePath(executable_name)


def GetExitStatus(exit_code):
  """Returns the argument to exit(), or -1 if exit() wasn't called.

  Args:
    exit_code: the result value of os.system(command).
  """

  if os.name == 'nt':
    # On Windows, os.WEXITSTATUS() doesn't work and os.system() returns
    # the argument to exit() directly.
    return exit_code
  else:
    # On Unix, os.WEXITSTATUS() must be used to extract the exit status
    # from the result of os.system().
    if os.WIFEXITED(exit_code):
      return os.WEXITSTATUS(exit_code)
    else:
      return -1


# Suppresses the "Invalid const name" lint complaint
# pylint: disable-msg=C6409

# Exposes utilities from gtest_test_utils.
Subprocess = gtest_test_utils.Subprocess
TestCase = gtest_test_utils.TestCase
environ = gtest_test_utils.environ
SetEnvVar = gtest_test_utils.SetEnvVar
PREMATURE_EXIT_FILE_ENV_VAR = gtest_test_utils.PREMATURE_EXIT_FILE_ENV_VAR

# pylint: enable-msg=C6409


def Main():
  """Runs the unit test."""

  gtest_test_utils.Main()
