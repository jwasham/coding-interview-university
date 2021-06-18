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

"""upload_gmock.py v0.1.0 -- uploads a Google Mock patch for review.

This simple wrapper passes all command line flags and
--cc=googlemock@googlegroups.com to upload.py.

USAGE: upload_gmock.py [options for upload.py]
"""

__author__ = 'wan@google.com (Zhanyong Wan)'

import os
import sys

CC_FLAG = '--cc='
GMOCK_GROUP = 'googlemock@googlegroups.com'


def main():
  # Finds the path to upload.py, assuming it is in the same directory
  # as this file.
  my_dir = os.path.dirname(os.path.abspath(__file__))
  upload_py_path = os.path.join(my_dir, 'upload.py')

  # Adds Google Mock discussion group to the cc line if it's not there
  # already.
  upload_py_argv = [upload_py_path]
  found_cc_flag = False
  for arg in sys.argv[1:]:
    if arg.startswith(CC_FLAG):
      found_cc_flag = True
      cc_line = arg[len(CC_FLAG):]
      cc_list = [addr for addr in cc_line.split(',') if addr]
      if GMOCK_GROUP not in cc_list:
        cc_list.append(GMOCK_GROUP)
      upload_py_argv.append(CC_FLAG + ','.join(cc_list))
    else:
      upload_py_argv.append(arg)

  if not found_cc_flag:
    upload_py_argv.append(CC_FLAG + GMOCK_GROUP)

  # Invokes upload.py with the modified command line flags.
  os.execv(upload_py_path, upload_py_argv)


if __name__ == '__main__':
  main()
