#!/usr/bin/env python
#
# Copyright 2008 Google Inc. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""Driver for starting up Google Mock class generator."""

__author__ = 'nnorwitz@google.com (Neal Norwitz)'

import os
import sys

if __name__ == '__main__':
  # Add the directory of this script to the path so we can import gmock_class.
  sys.path.append(os.path.dirname(__file__))

  from cpp import gmock_class
  # Fix the docstring in case they require the usage.
  gmock_class.__doc__ = gmock_class.__doc__.replace('gmock_class.py', __file__)
  gmock_class.main()
