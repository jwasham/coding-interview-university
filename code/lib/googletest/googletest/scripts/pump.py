#!/usr/bin/env python
#
# Copyright 2008, Google Inc.
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

"""pump v0.2.0 - Pretty Useful for Meta Programming.

A tool for preprocessor meta programming.  Useful for generating
repetitive boilerplate code.  Especially useful for writing C++
classes, functions, macros, and templates that need to work with
various number of arguments.

USAGE:
       pump.py SOURCE_FILE

EXAMPLES:
       pump.py foo.cc.pump
         Converts foo.cc.pump to foo.cc.

GRAMMAR:
       CODE ::= ATOMIC_CODE*
       ATOMIC_CODE ::= $var ID = EXPRESSION
           | $var ID = [[ CODE ]]
           | $range ID EXPRESSION..EXPRESSION
           | $for ID SEPARATOR [[ CODE ]]
           | $($)
           | $ID
           | $(EXPRESSION)
           | $if EXPRESSION [[ CODE ]] ELSE_BRANCH
           | [[ CODE ]]
           | RAW_CODE
       SEPARATOR ::= RAW_CODE | EMPTY
       ELSE_BRANCH ::= $else [[ CODE ]]
           | $elif EXPRESSION [[ CODE ]] ELSE_BRANCH
           | EMPTY
       EXPRESSION has Python syntax.
"""

__author__ = 'wan@google.com (Zhanyong Wan)'

import os
import re
import sys


TOKEN_TABLE = [
    (re.compile(r'\$var\s+'), '$var'),
    (re.compile(r'\$elif\s+'), '$elif'),
    (re.compile(r'\$else\s+'), '$else'),
    (re.compile(r'\$for\s+'), '$for'),
    (re.compile(r'\$if\s+'), '$if'),
    (re.compile(r'\$range\s+'), '$range'),
    (re.compile(r'\$[_A-Za-z]\w*'), '$id'),
    (re.compile(r'\$\(\$\)'), '$($)'),
    (re.compile(r'\$'), '$'),
    (re.compile(r'\[\[\n?'), '[['),
    (re.compile(r'\]\]\n?'), ']]'),
    ]


class Cursor:
  """Represents a position (line and column) in a text file."""

  def __init__(self, line=-1, column=-1):
    self.line = line
    self.column = column

  def __eq__(self, rhs):
    return self.line == rhs.line and self.column == rhs.column

  def __ne__(self, rhs):
    return not self == rhs

  def __lt__(self, rhs):
    return self.line < rhs.line or (
        self.line == rhs.line and self.column < rhs.column)

  def __le__(self, rhs):
    return self < rhs or self == rhs

  def __gt__(self, rhs):
    return rhs < self

  def __ge__(self, rhs):
    return rhs <= self

  def __str__(self):
    if self == Eof():
      return 'EOF'
    else:
      return '%s(%s)' % (self.line + 1, self.column)

  def __add__(self, offset):
    return Cursor(self.line, self.column + offset)

  def __sub__(self, offset):
    return Cursor(self.line, self.column - offset)

  def Clone(self):
    """Returns a copy of self."""

    return Cursor(self.line, self.column)


# Special cursor to indicate the end-of-file.
def Eof():
  """Returns the special cursor to denote the end-of-file."""
  return Cursor(-1, -1)


class Token:
  """Represents a token in a Pump source file."""

  def __init__(self, start=None, end=None, value=None, token_type=None):
    if start is None:
      self.start = Eof()
    else:
      self.start = start
    if end is None:
      self.end = Eof()
    else:
      self.end = end
    self.value = value
    self.token_type = token_type

  def __str__(self):
    return 'Token @%s: \'%s\' type=%s' % (
        self.start, self.value, self.token_type)

  def Clone(self):
    """Returns a copy of self."""

    return Token(self.start.Clone(), self.end.Clone(), self.value,
                 self.token_type)


def StartsWith(lines, pos, string):
  """Returns True iff the given position in lines starts with 'string'."""

  return lines[pos.line][pos.column:].startswith(string)


def FindFirstInLine(line, token_table):
  best_match_start = -1
  for (regex, token_type) in token_table:
    m = regex.search(line)
    if m:
      # We found regex in lines
      if best_match_start < 0 or m.start() < best_match_start:
        best_match_start = m.start()
        best_match_length = m.end() - m.start()
        best_match_token_type = token_type

  if best_match_start < 0:
    return None

  return (best_match_start, best_match_length, best_match_token_type)


def FindFirst(lines, token_table, cursor):
  """Finds the first occurrence of any string in strings in lines."""

  start = cursor.Clone()
  cur_line_number = cursor.line
  for line in lines[start.line:]:
    if cur_line_number == start.line:
      line = line[start.column:]
    m = FindFirstInLine(line, token_table)
    if m:
      # We found a regex in line.
      (start_column, length, token_type) = m
      if cur_line_number == start.line:
        start_column += start.column
      found_start = Cursor(cur_line_number, start_column)
      found_end = found_start + length
      return MakeToken(lines, found_start, found_end, token_type)
    cur_line_number += 1
  # We failed to find str in lines
  return None


def SubString(lines, start, end):
  """Returns a substring in lines."""

  if end == Eof():
    end = Cursor(len(lines) - 1, len(lines[-1]))

  if start >= end:
    return ''

  if start.line == end.line:
    return lines[start.line][start.column:end.column]

  result_lines = ([lines[start.line][start.column:]] +
                  lines[start.line + 1:end.line] +
                  [lines[end.line][:end.column]])
  return ''.join(result_lines)


def StripMetaComments(str):
  """Strip meta comments from each line in the given string."""

  # First, completely remove lines containing nothing but a meta
  # comment, including the trailing \n.
  str = re.sub(r'^\s*\$\$.*\n', '', str)

  # Then, remove meta comments from contentful lines.
  return re.sub(r'\s*\$\$.*', '', str)


def MakeToken(lines, start, end, token_type):
  """Creates a new instance of Token."""

  return Token(start, end, SubString(lines, start, end), token_type)


def ParseToken(lines, pos, regex, token_type):
  line = lines[pos.line][pos.column:]
  m = regex.search(line)
  if m and not m.start():
    return MakeToken(lines, pos, pos + m.end(), token_type)
  else:
    print 'ERROR: %s expected at %s.' % (token_type, pos)
    sys.exit(1)


ID_REGEX = re.compile(r'[_A-Za-z]\w*')
EQ_REGEX = re.compile(r'=')
REST_OF_LINE_REGEX = re.compile(r'.*?(?=$|\$\$)')
OPTIONAL_WHITE_SPACES_REGEX = re.compile(r'\s*')
WHITE_SPACE_REGEX = re.compile(r'\s')
DOT_DOT_REGEX = re.compile(r'\.\.')


def Skip(lines, pos, regex):
  line = lines[pos.line][pos.column:]
  m = re.search(regex, line)
  if m and not m.start():
    return pos + m.end()
  else:
    return pos


def SkipUntil(lines, pos, regex, token_type):
  line = lines[pos.line][pos.column:]
  m = re.search(regex, line)
  if m:
    return pos + m.start()
  else:
    print ('ERROR: %s expected on line %s after column %s.' %
           (token_type, pos.line + 1, pos.column))
    sys.exit(1)


def ParseExpTokenInParens(lines, pos):
  def ParseInParens(pos):
    pos = Skip(lines, pos, OPTIONAL_WHITE_SPACES_REGEX)
    pos = Skip(lines, pos, r'\(')
    pos = Parse(pos)
    pos = Skip(lines, pos, r'\)')
    return pos

  def Parse(pos):
    pos = SkipUntil(lines, pos, r'\(|\)', ')')
    if SubString(lines, pos, pos + 1) == '(':
      pos = Parse(pos + 1)
      pos = Skip(lines, pos, r'\)')
      return Parse(pos)
    else:
      return pos

  start = pos.Clone()
  pos = ParseInParens(pos)
  return MakeToken(lines, start, pos, 'exp')


def RStripNewLineFromToken(token):
  if token.value.endswith('\n'):
    return Token(token.start, token.end, token.value[:-1], token.token_type)
  else:
    return token


def TokenizeLines(lines, pos):
  while True:
    found = FindFirst(lines, TOKEN_TABLE, pos)
    if not found:
      yield MakeToken(lines, pos, Eof(), 'code')
      return

    if found.start == pos:
      prev_token = None
      prev_token_rstripped = None
    else:
      prev_token = MakeToken(lines, pos, found.start, 'code')
      prev_token_rstripped = RStripNewLineFromToken(prev_token)

    if found.token_type == '$var':
      if prev_token_rstripped:
        yield prev_token_rstripped
      yield found
      id_token = ParseToken(lines, found.end, ID_REGEX, 'id')
      yield id_token
      pos = Skip(lines, id_token.end, OPTIONAL_WHITE_SPACES_REGEX)

      eq_token = ParseToken(lines, pos, EQ_REGEX, '=')
      yield eq_token
      pos = Skip(lines, eq_token.end, r'\s*')

      if SubString(lines, pos, pos + 2) != '[[':
        exp_token = ParseToken(lines, pos, REST_OF_LINE_REGEX, 'exp')
        yield exp_token
        pos = Cursor(exp_token.end.line + 1, 0)
    elif found.token_type == '$for':
      if prev_token_rstripped:
        yield prev_token_rstripped
      yield found
      id_token = ParseToken(lines, found.end, ID_REGEX, 'id')
      yield id_token
      pos = Skip(lines, id_token.end, WHITE_SPACE_REGEX)
    elif found.token_type == '$range':
      if prev_token_rstripped:
        yield prev_token_rstripped
      yield found
      id_token = ParseToken(lines, found.end, ID_REGEX, 'id')
      yield id_token
      pos = Skip(lines, id_token.end, OPTIONAL_WHITE_SPACES_REGEX)

      dots_pos = SkipUntil(lines, pos, DOT_DOT_REGEX, '..')
      yield MakeToken(lines, pos, dots_pos, 'exp')
      yield MakeToken(lines, dots_pos, dots_pos + 2, '..')
      pos = dots_pos + 2
      new_pos = Cursor(pos.line + 1, 0)
      yield MakeToken(lines, pos, new_pos, 'exp')
      pos = new_pos
    elif found.token_type == '$':
      if prev_token:
        yield prev_token
      yield found
      exp_token = ParseExpTokenInParens(lines, found.end)
      yield exp_token
      pos = exp_token.end
    elif (found.token_type == ']]' or found.token_type == '$if' or
          found.token_type == '$elif' or found.token_type == '$else'):
      if prev_token_rstripped:
        yield prev_token_rstripped
      yield found
      pos = found.end
    else:
      if prev_token:
        yield prev_token
      yield found
      pos = found.end


def Tokenize(s):
  """A generator that yields the tokens in the given string."""
  if s != '':
    lines = s.splitlines(True)
    for token in TokenizeLines(lines, Cursor(0, 0)):
      yield token


class CodeNode:
  def __init__(self, atomic_code_list=None):
    self.atomic_code = atomic_code_list


class VarNode:
  def __init__(self, identifier=None, atomic_code=None):
    self.identifier = identifier
    self.atomic_code = atomic_code


class RangeNode:
  def __init__(self, identifier=None, exp1=None, exp2=None):
    self.identifier = identifier
    self.exp1 = exp1
    self.exp2 = exp2


class ForNode:
  def __init__(self, identifier=None, sep=None, code=None):
    self.identifier = identifier
    self.sep = sep
    self.code = code


class ElseNode:
  def __init__(self, else_branch=None):
    self.else_branch = else_branch


class IfNode:
  def __init__(self, exp=None, then_branch=None, else_branch=None):
    self.exp = exp
    self.then_branch = then_branch
    self.else_branch = else_branch


class RawCodeNode:
  def __init__(self, token=None):
    self.raw_code = token


class LiteralDollarNode:
  def __init__(self, token):
    self.token = token


class ExpNode:
  def __init__(self, token, python_exp):
    self.token = token
    self.python_exp = python_exp


def PopFront(a_list):
  head = a_list[0]
  a_list[:1] = []
  return head


def PushFront(a_list, elem):
  a_list[:0] = [elem]


def PopToken(a_list, token_type=None):
  token = PopFront(a_list)
  if token_type is not None and token.token_type != token_type:
    print 'ERROR: %s expected at %s' % (token_type, token.start)
    print 'ERROR: %s found instead' % (token,)
    sys.exit(1)

  return token


def PeekToken(a_list):
  if not a_list:
    return None

  return a_list[0]


def ParseExpNode(token):
  python_exp = re.sub(r'([_A-Za-z]\w*)', r'self.GetValue("\1")', token.value)
  return ExpNode(token, python_exp)


def ParseElseNode(tokens):
  def Pop(token_type=None):
    return PopToken(tokens, token_type)

  next = PeekToken(tokens)
  if not next:
    return None
  if next.token_type == '$else':
    Pop('$else')
    Pop('[[')
    code_node = ParseCodeNode(tokens)
    Pop(']]')
    return code_node
  elif next.token_type == '$elif':
    Pop('$elif')
    exp = Pop('code')
    Pop('[[')
    code_node = ParseCodeNode(tokens)
    Pop(']]')
    inner_else_node = ParseElseNode(tokens)
    return CodeNode([IfNode(ParseExpNode(exp), code_node, inner_else_node)])
  elif not next.value.strip():
    Pop('code')
    return ParseElseNode(tokens)
  else:
    return None


def ParseAtomicCodeNode(tokens):
  def Pop(token_type=None):
    return PopToken(tokens, token_type)

  head = PopFront(tokens)
  t = head.token_type
  if t == 'code':
    return RawCodeNode(head)
  elif t == '$var':
    id_token = Pop('id')
    Pop('=')
    next = PeekToken(tokens)
    if next.token_type == 'exp':
      exp_token = Pop()
      return VarNode(id_token, ParseExpNode(exp_token))
    Pop('[[')
    code_node = ParseCodeNode(tokens)
    Pop(']]')
    return VarNode(id_token, code_node)
  elif t == '$for':
    id_token = Pop('id')
    next_token = PeekToken(tokens)
    if next_token.token_type == 'code':
      sep_token = next_token
      Pop('code')
    else:
      sep_token = None
    Pop('[[')
    code_node = ParseCodeNode(tokens)
    Pop(']]')
    return ForNode(id_token, sep_token, code_node)
  elif t == '$if':
    exp_token = Pop('code')
    Pop('[[')
    code_node = ParseCodeNode(tokens)
    Pop(']]')
    else_node = ParseElseNode(tokens)
    return IfNode(ParseExpNode(exp_token), code_node, else_node)
  elif t == '$range':
    id_token = Pop('id')
    exp1_token = Pop('exp')
    Pop('..')
    exp2_token = Pop('exp')
    return RangeNode(id_token, ParseExpNode(exp1_token),
                     ParseExpNode(exp2_token))
  elif t == '$id':
    return ParseExpNode(Token(head.start + 1, head.end, head.value[1:], 'id'))
  elif t == '$($)':
    return LiteralDollarNode(head)
  elif t == '$':
    exp_token = Pop('exp')
    return ParseExpNode(exp_token)
  elif t == '[[':
    code_node = ParseCodeNode(tokens)
    Pop(']]')
    return code_node
  else:
    PushFront(tokens, head)
    return None


def ParseCodeNode(tokens):
  atomic_code_list = []
  while True:
    if not tokens:
      break
    atomic_code_node = ParseAtomicCodeNode(tokens)
    if atomic_code_node:
      atomic_code_list.append(atomic_code_node)
    else:
      break
  return CodeNode(atomic_code_list)


def ParseToAST(pump_src_text):
  """Convert the given Pump source text into an AST."""
  tokens = list(Tokenize(pump_src_text))
  code_node = ParseCodeNode(tokens)
  return code_node


class Env:
  def __init__(self):
    self.variables = []
    self.ranges = []

  def Clone(self):
    clone = Env()
    clone.variables = self.variables[:]
    clone.ranges = self.ranges[:]
    return clone

  def PushVariable(self, var, value):
    # If value looks like an int, store it as an int.
    try:
      int_value = int(value)
      if ('%s' % int_value) == value:
        value = int_value
    except Exception:
      pass
    self.variables[:0] = [(var, value)]

  def PopVariable(self):
    self.variables[:1] = []

  def PushRange(self, var, lower, upper):
    self.ranges[:0] = [(var, lower, upper)]

  def PopRange(self):
    self.ranges[:1] = []

  def GetValue(self, identifier):
    for (var, value) in self.variables:
      if identifier == var:
        return value

    print 'ERROR: meta variable %s is undefined.' % (identifier,)
    sys.exit(1)

  def EvalExp(self, exp):
    try:
      result = eval(exp.python_exp)
    except Exception, e:
      print 'ERROR: caught exception %s: %s' % (e.__class__.__name__, e)
      print ('ERROR: failed to evaluate meta expression %s at %s' %
             (exp.python_exp, exp.token.start))
      sys.exit(1)
    return result

  def GetRange(self, identifier):
    for (var, lower, upper) in self.ranges:
      if identifier == var:
        return (lower, upper)

    print 'ERROR: range %s is undefined.' % (identifier,)
    sys.exit(1)


class Output:
  def __init__(self):
    self.string = ''

  def GetLastLine(self):
    index = self.string.rfind('\n')
    if index < 0:
      return ''

    return self.string[index + 1:]

  def Append(self, s):
    self.string += s


def RunAtomicCode(env, node, output):
  if isinstance(node, VarNode):
    identifier = node.identifier.value.strip()
    result = Output()
    RunAtomicCode(env.Clone(), node.atomic_code, result)
    value = result.string
    env.PushVariable(identifier, value)
  elif isinstance(node, RangeNode):
    identifier = node.identifier.value.strip()
    lower = int(env.EvalExp(node.exp1))
    upper = int(env.EvalExp(node.exp2))
    env.PushRange(identifier, lower, upper)
  elif isinstance(node, ForNode):
    identifier = node.identifier.value.strip()
    if node.sep is None:
      sep = ''
    else:
      sep = node.sep.value
    (lower, upper) = env.GetRange(identifier)
    for i in range(lower, upper + 1):
      new_env = env.Clone()
      new_env.PushVariable(identifier, i)
      RunCode(new_env, node.code, output)
      if i != upper:
        output.Append(sep)
  elif isinstance(node, RawCodeNode):
    output.Append(node.raw_code.value)
  elif isinstance(node, IfNode):
    cond = env.EvalExp(node.exp)
    if cond:
      RunCode(env.Clone(), node.then_branch, output)
    elif node.else_branch is not None:
      RunCode(env.Clone(), node.else_branch, output)
  elif isinstance(node, ExpNode):
    value = env.EvalExp(node)
    output.Append('%s' % (value,))
  elif isinstance(node, LiteralDollarNode):
    output.Append('$')
  elif isinstance(node, CodeNode):
    RunCode(env.Clone(), node, output)
  else:
    print 'BAD'
    print node
    sys.exit(1)


def RunCode(env, code_node, output):
  for atomic_code in code_node.atomic_code:
    RunAtomicCode(env, atomic_code, output)


def IsSingleLineComment(cur_line):
  return '//' in cur_line


def IsInPreprocessorDirective(prev_lines, cur_line):
  if cur_line.lstrip().startswith('#'):
    return True
  return prev_lines and prev_lines[-1].endswith('\\')


def WrapComment(line, output):
  loc = line.find('//')
  before_comment = line[:loc].rstrip()
  if before_comment == '':
    indent = loc
  else:
    output.append(before_comment)
    indent = len(before_comment) - len(before_comment.lstrip())
  prefix = indent*' ' + '// '
  max_len = 80 - len(prefix)
  comment = line[loc + 2:].strip()
  segs = [seg for seg in re.split(r'(\w+\W*)', comment) if seg != '']
  cur_line = ''
  for seg in segs:
    if len((cur_line + seg).rstrip()) < max_len:
      cur_line += seg
    else:
      if cur_line.strip() != '':
        output.append(prefix + cur_line.rstrip())
      cur_line = seg.lstrip()
  if cur_line.strip() != '':
    output.append(prefix + cur_line.strip())


def WrapCode(line, line_concat, output):
  indent = len(line) - len(line.lstrip())
  prefix = indent*' '  # Prefix of the current line
  max_len = 80 - indent - len(line_concat)  # Maximum length of the current line
  new_prefix = prefix + 4*' '  # Prefix of a continuation line
  new_max_len = max_len - 4  # Maximum length of a continuation line
  # Prefers to wrap a line after a ',' or ';'.
  segs = [seg for seg in re.split(r'([^,;]+[,;]?)', line.strip()) if seg != '']
  cur_line = ''  # The current line without leading spaces.
  for seg in segs:
    # If the line is still too long, wrap at a space.
    while cur_line == '' and len(seg.strip()) > max_len:
      seg = seg.lstrip()
      split_at = seg.rfind(' ', 0, max_len)
      output.append(prefix + seg[:split_at].strip() + line_concat)
      seg = seg[split_at + 1:]
      prefix = new_prefix
      max_len = new_max_len

    if len((cur_line + seg).rstrip()) < max_len:
      cur_line = (cur_line + seg).lstrip()
    else:
      output.append(prefix + cur_line.rstrip() + line_concat)
      prefix = new_prefix
      max_len = new_max_len
      cur_line = seg.lstrip()
  if cur_line.strip() != '':
    output.append(prefix + cur_line.strip())


def WrapPreprocessorDirective(line, output):
  WrapCode(line, ' \\', output)


def WrapPlainCode(line, output):
  WrapCode(line, '', output)


def IsMultiLineIWYUPragma(line):
  return re.search(r'/\* IWYU pragma: ', line)


def IsHeaderGuardIncludeOrOneLineIWYUPragma(line):
  return (re.match(r'^#(ifndef|define|endif\s*//)\s*[\w_]+\s*$', line) or
          re.match(r'^#include\s', line) or
          # Don't break IWYU pragmas, either; that causes iwyu.py problems.
          re.search(r'// IWYU pragma: ', line))


def WrapLongLine(line, output):
  line = line.rstrip()
  if len(line) <= 80:
    output.append(line)
  elif IsSingleLineComment(line):
    if IsHeaderGuardIncludeOrOneLineIWYUPragma(line):
      # The style guide made an exception to allow long header guard lines,
      # includes and IWYU pragmas.
      output.append(line)
    else:
      WrapComment(line, output)
  elif IsInPreprocessorDirective(output, line):
    if IsHeaderGuardIncludeOrOneLineIWYUPragma(line):
      # The style guide made an exception to allow long header guard lines,
      # includes and IWYU pragmas.
      output.append(line)
    else:
      WrapPreprocessorDirective(line, output)
  elif IsMultiLineIWYUPragma(line):
    output.append(line)
  else:
    WrapPlainCode(line, output)


def BeautifyCode(string):
  lines = string.splitlines()
  output = []
  for line in lines:
    WrapLongLine(line, output)
  output2 = [line.rstrip() for line in output]
  return '\n'.join(output2) + '\n'


def ConvertFromPumpSource(src_text):
  """Return the text generated from the given Pump source text."""
  ast = ParseToAST(StripMetaComments(src_text))
  output = Output()
  RunCode(Env(), ast, output)
  return BeautifyCode(output.string)


def main(argv):
  if len(argv) == 1:
    print __doc__
    sys.exit(1)

  file_path = argv[-1]
  output_str = ConvertFromPumpSource(file(file_path, 'r').read())
  if file_path.endswith('.pump'):
    output_file_path = file_path[:-5]
  else:
    output_file_path = '-'
  if output_file_path == '-':
    print output_str,
  else:
    output_file = file(output_file_path, 'w')
    output_file.write('// This file was GENERATED by command:\n')
    output_file.write('//     %s %s\n' %
                      (os.path.basename(__file__), os.path.basename(file_path)))
    output_file.write('// DO NOT EDIT BY HAND!!!\n\n')
    output_file.write(output_str)
    output_file.close()


if __name__ == '__main__':
  main(sys.argv)
