#!/usr/bin/env python
#
# Copyright 2008 Google Inc.  All Rights Reserved.
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

"""Generate Google Mock classes from base classes.

This program will read in a C++ source file and output the Google Mock
classes for the specified classes.  If no class is specified, all
classes in the source file are emitted.

Usage:
  gmock_class.py header-file.h [ClassName]...

Output is sent to stdout.
"""

__author__ = 'nnorwitz@google.com (Neal Norwitz)'


import os
import re
import sys

from cpp import ast
from cpp import utils

# Preserve compatibility with Python 2.3.
try:
  _dummy = set
except NameError:
  import sets
  set = sets.Set

_VERSION = (1, 0, 1)  # The version of this script.
# How many spaces to indent.  Can set me with the INDENT environment variable.
_INDENT = 2


def _GenerateMethods(output_lines, source, class_node):
  function_type = (ast.FUNCTION_VIRTUAL | ast.FUNCTION_PURE_VIRTUAL |
                   ast.FUNCTION_OVERRIDE)
  ctor_or_dtor = ast.FUNCTION_CTOR | ast.FUNCTION_DTOR
  indent = ' ' * _INDENT

  for node in class_node.body:
    # We only care about virtual functions.
    if (isinstance(node, ast.Function) and
        node.modifiers & function_type and
        not node.modifiers & ctor_or_dtor):
      # Pick out all the elements we need from the original function.
      const = ''
      if node.modifiers & ast.FUNCTION_CONST:
        const = 'CONST_'
      return_type = 'void'
      if node.return_type:
        # Add modifiers like 'const'.
        modifiers = ''
        if node.return_type.modifiers:
          modifiers = ' '.join(node.return_type.modifiers) + ' '
        return_type = modifiers + node.return_type.name
        template_args = [arg.name for arg in node.return_type.templated_types]
        if template_args:
          return_type += '<' + ', '.join(template_args) + '>'
          if len(template_args) > 1:
            for line in [
                '// The following line won\'t really compile, as the return',
                '// type has multiple template arguments.  To fix it, use a',
                '// typedef for the return type.']:
              output_lines.append(indent + line)
        if node.return_type.pointer:
          return_type += '*'
        if node.return_type.reference:
          return_type += '&'
        num_parameters = len(node.parameters)
        if len(node.parameters) == 1:
          first_param = node.parameters[0]
          if source[first_param.start:first_param.end].strip() == 'void':
            # We must treat T(void) as a function with no parameters.
            num_parameters = 0
      tmpl = ''
      if class_node.templated_types:
        tmpl = '_T'
      mock_method_macro = 'MOCK_%sMETHOD%d%s' % (const, num_parameters, tmpl)

      args = ''
      if node.parameters:
        # Due to the parser limitations, it is impossible to keep comments
        # while stripping the default parameters.  When defaults are
        # present, we choose to strip them and comments (and produce
        # compilable code).
        # TODO(nnorwitz@google.com): Investigate whether it is possible to
        # preserve parameter name when reconstructing parameter text from
        # the AST.
        if len([param for param in node.parameters if param.default]) > 0:
          args = ', '.join(param.type.name for param in node.parameters)
        else:
          # Get the full text of the parameters from the start
          # of the first parameter to the end of the last parameter.
          start = node.parameters[0].start
          end = node.parameters[-1].end
          # Remove // comments.
          args_strings = re.sub(r'//.*', '', source[start:end])
          # Condense multiple spaces and eliminate newlines putting the
          # parameters together on a single line.  Ensure there is a
          # space in an argument which is split by a newline without
          # intervening whitespace, e.g.: int\nBar
          args = re.sub('  +', ' ', args_strings.replace('\n', ' '))

      # Create the mock method definition.
      output_lines.extend(['%s%s(%s,' % (indent, mock_method_macro, node.name),
                           '%s%s(%s));' % (indent*3, return_type, args)])


def _GenerateMocks(filename, source, ast_list, desired_class_names):
  processed_class_names = set()
  lines = []
  for node in ast_list:
    if (isinstance(node, ast.Class) and node.body and
        # desired_class_names being None means that all classes are selected.
        (not desired_class_names or node.name in desired_class_names)):
      class_name = node.name
      parent_name = class_name
      processed_class_names.add(class_name)
      class_node = node
      # Add namespace before the class.
      if class_node.namespace:
        lines.extend(['namespace %s {' % n for n in class_node.namespace])  # }
        lines.append('')

      # Add template args for templated classes.
      if class_node.templated_types:
        # TODO(paulchang): The AST doesn't preserve template argument order,
        # so we have to make up names here.
        # TODO(paulchang): Handle non-type template arguments (e.g.
        # template<typename T, int N>).
        template_arg_count = len(class_node.templated_types.keys())
        template_args = ['T%d' % n for n in range(template_arg_count)]
        template_decls = ['typename ' + arg for arg in template_args]
        lines.append('template <' + ', '.join(template_decls) + '>')
        parent_name += '<' + ', '.join(template_args) + '>'

      # Add the class prolog.
      lines.append('class Mock%s : public %s {'  # }
                   % (class_name, parent_name))
      lines.append('%spublic:' % (' ' * (_INDENT // 2)))

      # Add all the methods.
      _GenerateMethods(lines, source, class_node)

      # Close the class.
      if lines:
        # If there are no virtual methods, no need for a public label.
        if len(lines) == 2:
          del lines[-1]

        # Only close the class if there really is a class.
        lines.append('};')
        lines.append('')  # Add an extra newline.

      # Close the namespace.
      if class_node.namespace:
        for i in range(len(class_node.namespace)-1, -1, -1):
          lines.append('}  // namespace %s' % class_node.namespace[i])
        lines.append('')  # Add an extra newline.

  if desired_class_names:
    missing_class_name_list = list(desired_class_names - processed_class_names)
    if missing_class_name_list:
      missing_class_name_list.sort()
      sys.stderr.write('Class(es) not found in %s: %s\n' %
                       (filename, ', '.join(missing_class_name_list)))
  elif not processed_class_names:
    sys.stderr.write('No class found in %s\n' % filename)

  return lines


def main(argv=sys.argv):
  if len(argv) < 2:
    sys.stderr.write('Google Mock Class Generator v%s\n\n' %
                     '.'.join(map(str, _VERSION)))
    sys.stderr.write(__doc__)
    return 1

  global _INDENT
  try:
    _INDENT = int(os.environ['INDENT'])
  except KeyError:
    pass
  except:
    sys.stderr.write('Unable to use indent of %s\n' % os.environ.get('INDENT'))

  filename = argv[1]
  desired_class_names = None  # None means all classes in the source file.
  if len(argv) >= 3:
    desired_class_names = set(argv[2:])
  source = utils.ReadFile(filename)
  if source is None:
    return 1

  builder = ast.BuilderFromSource(source, filename)
  try:
    entire_ast = filter(None, builder.Generate())
  except KeyboardInterrupt:
    return
  except:
    # An error message was already printed since we couldn't parse.
    sys.exit(1)
  else:
    lines = _GenerateMocks(filename, source, entire_ast, desired_class_names)
    sys.stdout.write('\n'.join(lines))


if __name__ == '__main__':
  main(sys.argv)
