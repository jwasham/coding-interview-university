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

"""Unit test utilities for gtest_json_output."""

import re


def normalize(obj):
  """Normalize output object.

  Args:
     obj: Google Test's JSON output object to normalize.

  Returns:
     Normalized output without any references to transient information that may
     change from run to run.
  """
  def _normalize(key, value):
    if key == 'time':
      return re.sub(r'^\d+(\.\d+)?s$', '*', value)
    elif key == 'timestamp':
      return re.sub(r'^\d{4}-\d\d-\d\dT\d\d:\d\d:\d\dZ$', '*', value)
    elif key == 'failure':
      value = re.sub(r'^.*[/\\](.*:)\d+\n', '\\1*\n', value)
      return re.sub(r'Stack trace:\n(.|\n)*', 'Stack trace:\n*', value)
    else:
      return normalize(value)
  if isinstance(obj, dict):
    return {k: _normalize(k, v) for k, v in obj.items()}
  if isinstance(obj, list):
    return [normalize(x) for x in obj]
  else:
    return obj
