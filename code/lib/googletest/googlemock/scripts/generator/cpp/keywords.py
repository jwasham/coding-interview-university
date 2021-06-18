#!/usr/bin/env python
#
# Copyright 2007 Neal Norwitz
# Portions Copyright 2007 Google Inc.
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

"""C++ keywords and helper utilities for determining keywords."""

__author__ = 'nnorwitz@google.com (Neal Norwitz)'


try:
    # Python 3.x
    import builtins
except ImportError:
    # Python 2.x
    import __builtin__ as builtins


if not hasattr(builtins, 'set'):
    # Nominal support for Python 2.3.
    from sets import Set as set


TYPES = set('bool char int long short double float void wchar_t unsigned signed'.split())
TYPE_MODIFIERS = set('auto register const inline extern static virtual volatile mutable'.split())
ACCESS = set('public protected private friend'.split())

CASTS = set('static_cast const_cast dynamic_cast reinterpret_cast'.split())

OTHERS = set('true false asm class namespace using explicit this operator sizeof'.split())
OTHER_TYPES = set('new delete typedef struct union enum typeid typename template'.split())

CONTROL = set('case switch default if else return goto'.split())
EXCEPTION = set('try catch throw'.split())
LOOP = set('while do for break continue'.split())

ALL = TYPES | TYPE_MODIFIERS | ACCESS | CASTS | OTHERS | OTHER_TYPES | CONTROL | EXCEPTION | LOOP


def IsKeyword(token):
    return token in ALL

def IsBuiltinType(token):
    if token in ('virtual', 'inline'):
        # These only apply to methods, they can't be types by themselves.
        return False
    return token in TYPES or token in TYPE_MODIFIERS
