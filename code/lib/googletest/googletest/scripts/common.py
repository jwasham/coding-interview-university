# Copyright 2013 Google Inc. All Rights Reserved.
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

"""Shared utilities for writing scripts for Google Test/Mock."""

__author__ = 'wan@google.com (Zhanyong Wan)'


import os
import re


# Matches the line from 'svn info .' output that describes what SVN
# path the current local directory corresponds to.  For example, in
# a googletest SVN workspace's trunk/test directory, the output will be:
#
# URL: https://googletest.googlecode.com/svn/trunk/test
_SVN_INFO_URL_RE = re.compile(r'^URL: https://(\w+)\.googlecode\.com/svn(.*)')


def GetCommandOutput(command):
  """Runs the shell command and returns its stdout as a list of lines."""

  f = os.popen(command, 'r')
  lines = [line.strip() for line in f.readlines()]
  f.close()
  return lines


def GetSvnInfo():
  """Returns the project name and the current SVN workspace's root path."""

  for line in GetCommandOutput('svn info .'):
    m = _SVN_INFO_URL_RE.match(line)
    if m:
      project = m.group(1)  # googletest or googlemock
      rel_path = m.group(2)
      root = os.path.realpath(rel_path.count('/') * '../')
      return project, root

  return None, None


def GetSvnTrunk():
  """Returns the current SVN workspace's trunk root path."""

  _, root = GetSvnInfo()
  return root + '/trunk' if root else None


def IsInGTestSvn():
  project, _ = GetSvnInfo()
  return project == 'googletest'


def IsInGMockSvn():
  project, _ = GetSvnInfo()
  return project == 'googlemock'
