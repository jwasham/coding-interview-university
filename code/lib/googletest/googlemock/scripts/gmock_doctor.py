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

"""Converts compiler's errors in code using Google Mock to plain English."""

__author__ = 'wan@google.com (Zhanyong Wan)'

import re
import sys

_VERSION = '1.0.3'

_EMAIL = 'googlemock@googlegroups.com'

_COMMON_GMOCK_SYMBOLS = [
    # Matchers
    '_',
    'A',
    'AddressSatisfies',
    'AllOf',
    'An',
    'AnyOf',
    'ContainerEq',
    'Contains',
    'ContainsRegex',
    'DoubleEq',
    'ElementsAre',
    'ElementsAreArray',
    'EndsWith',
    'Eq',
    'Field',
    'FloatEq',
    'Ge',
    'Gt',
    'HasSubstr',
    'IsInitializedProto',
    'Le',
    'Lt',
    'MatcherCast',
    'Matches',
    'MatchesRegex',
    'NanSensitiveDoubleEq',
    'NanSensitiveFloatEq',
    'Ne',
    'Not',
    'NotNull',
    'Pointee',
    'Property',
    'Ref',
    'ResultOf',
    'SafeMatcherCast',
    'StartsWith',
    'StrCaseEq',
    'StrCaseNe',
    'StrEq',
    'StrNe',
    'Truly',
    'TypedEq',
    'Value',

    # Actions
    'Assign',
    'ByRef',
    'DeleteArg',
    'DoAll',
    'DoDefault',
    'IgnoreResult',
    'Invoke',
    'InvokeArgument',
    'InvokeWithoutArgs',
    'Return',
    'ReturnNew',
    'ReturnNull',
    'ReturnRef',
    'SaveArg',
    'SetArgReferee',
    'SetArgPointee',
    'SetArgumentPointee',
    'SetArrayArgument',
    'SetErrnoAndReturn',
    'Throw',
    'WithArg',
    'WithArgs',
    'WithoutArgs',

    # Cardinalities
    'AnyNumber',
    'AtLeast',
    'AtMost',
    'Between',
    'Exactly',

    # Sequences
    'InSequence',
    'Sequence',

    # Misc
    'DefaultValue',
    'Mock',
    ]

# Regex for matching source file path and line number in the compiler's errors.
_GCC_FILE_LINE_RE = r'(?P<file>.*):(?P<line>\d+):(\d+:)?\s+'
_CLANG_FILE_LINE_RE = r'(?P<file>.*):(?P<line>\d+):(?P<column>\d+):\s+'
_CLANG_NON_GMOCK_FILE_LINE_RE = (
    r'(?P<file>.*[/\\^](?!gmock-)[^/\\]+):(?P<line>\d+):(?P<column>\d+):\s+')


def _FindAllMatches(regex, s):
  """Generates all matches of regex in string s."""

  r = re.compile(regex)
  return r.finditer(s)


def _GenericDiagnoser(short_name, long_name, diagnoses, msg):
  """Diagnoses the given disease by pattern matching.

  Can provide different diagnoses for different patterns.

  Args:
    short_name: Short name of the disease.
    long_name:  Long name of the disease.
    diagnoses:  A list of pairs (regex, pattern for formatting the diagnosis
                for matching regex).
    msg:        Compiler's error messages.
  Yields:
    Tuples of the form
      (short name of disease, long name of disease, diagnosis).
  """
  for regex, diagnosis in diagnoses:
    if re.search(regex, msg):
      diagnosis = '%(file)s:%(line)s:' + diagnosis
      for m in _FindAllMatches(regex, msg):
        yield (short_name, long_name, diagnosis % m.groupdict())


def _NeedToReturnReferenceDiagnoser(msg):
  """Diagnoses the NRR disease, given the error messages by the compiler."""

  gcc_regex = (r'In member function \'testing::internal::ReturnAction<R>.*\n'
               + _GCC_FILE_LINE_RE + r'instantiated from here\n'
               r'.*gmock-actions\.h.*error: creating array with negative size')
  clang_regex = (r'error:.*array.*negative.*\r?\n'
                 r'(.*\n)*?' +
                 _CLANG_NON_GMOCK_FILE_LINE_RE +
                 r'note: in instantiation of function template specialization '
                 r'\'testing::internal::ReturnAction<(?P<type>.*)>'
                 r'::operator Action<.*>\' requested here')
  clang11_re = (r'use_ReturnRef_instead_of_Return_to_return_a_reference.*'
                r'(.*\n)*?' + _CLANG_NON_GMOCK_FILE_LINE_RE)

  diagnosis = """
You are using a Return() action in a function that returns a reference to
%(type)s.  Please use ReturnRef() instead."""
  return _GenericDiagnoser('NRR', 'Need to Return Reference',
                           [(clang_regex, diagnosis),
                            (clang11_re, diagnosis % {'type': 'a type'}),
                            (gcc_regex, diagnosis % {'type': 'a type'})],
                           msg)


def _NeedToReturnSomethingDiagnoser(msg):
  """Diagnoses the NRS disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE + r'(instantiated from here\n.'
               r'*gmock.*actions\.h.*error: void value not ignored)'
               r'|(error: control reaches end of non-void function)')
  clang_regex1 = (_CLANG_FILE_LINE_RE +
                  r'error: cannot initialize return object '
                  r'of type \'Result\' \(aka \'(?P<return_type>.*)\'\) '
                  r'with an rvalue of type \'void\'')
  clang_regex2 = (_CLANG_FILE_LINE_RE +
                  r'error: cannot initialize return object '
                  r'of type \'(?P<return_type>.*)\' '
                  r'with an rvalue of type \'void\'')
  diagnosis = """
You are using an action that returns void, but it needs to return
%(return_type)s.  Please tell it *what* to return.  Perhaps you can use
the pattern DoAll(some_action, Return(some_value))?"""
  return _GenericDiagnoser(
      'NRS',
      'Need to Return Something',
      [(gcc_regex, diagnosis % {'return_type': '*something*'}),
       (clang_regex1, diagnosis),
       (clang_regex2, diagnosis)],
      msg)


def _NeedToReturnNothingDiagnoser(msg):
  """Diagnoses the NRN disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE + r'instantiated from here\n'
               r'.*gmock-actions\.h.*error: instantiation of '
               r'\'testing::internal::ReturnAction<R>::Impl<F>::value_\' '
               r'as type \'void\'')
  clang_regex1 = (r'error: field has incomplete type '
                  r'\'Result\' \(aka \'void\'\)(\r)?\n'
                  r'(.*\n)*?' +
                  _CLANG_NON_GMOCK_FILE_LINE_RE + r'note: in instantiation '
                  r'of function template specialization '
                  r'\'testing::internal::ReturnAction<(?P<return_type>.*)>'
                  r'::operator Action<void \(.*\)>\' requested here')
  clang_regex2 = (r'error: field has incomplete type '
                  r'\'Result\' \(aka \'void\'\)(\r)?\n'
                  r'(.*\n)*?' +
                  _CLANG_NON_GMOCK_FILE_LINE_RE + r'note: in instantiation '
                  r'of function template specialization '
                  r'\'testing::internal::DoBothAction<.*>'
                  r'::operator Action<(?P<return_type>.*) \(.*\)>\' '
                  r'requested here')
  diagnosis = """
You are using an action that returns %(return_type)s, but it needs to return
void.  Please use a void-returning action instead.

All actions but the last in DoAll(...) must return void.  Perhaps you need
to re-arrange the order of actions in a DoAll(), if you are using one?"""
  return _GenericDiagnoser(
      'NRN',
      'Need to Return Nothing',
      [(gcc_regex, diagnosis % {'return_type': '*something*'}),
       (clang_regex1, diagnosis),
       (clang_regex2, diagnosis)],
      msg)


def _IncompleteByReferenceArgumentDiagnoser(msg):
  """Diagnoses the IBRA disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE + r'instantiated from here\n'
               r'.*gtest-printers\.h.*error: invalid application of '
               r'\'sizeof\' to incomplete type \'(?P<type>.*)\'')

  clang_regex = (r'.*gtest-printers\.h.*error: invalid application of '
                 r'\'sizeof\' to an incomplete type '
                 r'\'(?P<type>.*)( const)?\'\r?\n'
                 r'(.*\n)*?' +
                 _CLANG_NON_GMOCK_FILE_LINE_RE +
                 r'note: in instantiation of member function '
                 r'\'testing::internal2::TypeWithoutFormatter<.*>::'
                 r'PrintValue\' requested here')
  diagnosis = """
In order to mock this function, Google Mock needs to see the definition
of type "%(type)s" - declaration alone is not enough.  Either #include
the header that defines it, or change the argument to be passed
by pointer."""

  return _GenericDiagnoser('IBRA', 'Incomplete By-Reference Argument Type',
                           [(gcc_regex, diagnosis),
                            (clang_regex, diagnosis)],
                           msg)


def _OverloadedFunctionMatcherDiagnoser(msg):
  """Diagnoses the OFM disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE + r'error: no matching function for '
               r'call to \'Truly\(<unresolved overloaded function type>\)')
  clang_regex = (_CLANG_FILE_LINE_RE + r'error: no matching function for '
                 r'call to \'Truly')
  diagnosis = """
The argument you gave to Truly() is an overloaded function.  Please tell
your compiler which overloaded version you want to use.

For example, if you want to use the version whose signature is
  bool Foo(int n);
you should write
  Truly(static_cast<bool (*)(int n)>(Foo))"""
  return _GenericDiagnoser('OFM', 'Overloaded Function Matcher',
                           [(gcc_regex, diagnosis),
                            (clang_regex, diagnosis)],
                           msg)


def _OverloadedFunctionActionDiagnoser(msg):
  """Diagnoses the OFA disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE + r'error: no matching function for call to '
               r'\'Invoke\(<unresolved overloaded function type>')
  clang_regex = (_CLANG_FILE_LINE_RE + r'error: no matching '
                 r'function for call to \'Invoke\'\r?\n'
                 r'(.*\n)*?'
                 r'.*\bgmock-generated-actions\.h:\d+:\d+:\s+'
                 r'note: candidate template ignored:\s+'
                 r'couldn\'t infer template argument \'FunctionImpl\'')
  diagnosis = """
Function you are passing to Invoke is overloaded.  Please tell your compiler
which overloaded version you want to use.

For example, if you want to use the version whose signature is
  bool MyFunction(int n, double x);
you should write something like
  Invoke(static_cast<bool (*)(int n, double x)>(MyFunction))"""
  return _GenericDiagnoser('OFA', 'Overloaded Function Action',
                           [(gcc_regex, diagnosis),
                            (clang_regex, diagnosis)],
                           msg)


def _OverloadedMethodActionDiagnoser(msg):
  """Diagnoses the OMA disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE + r'error: no matching function for '
               r'call to \'Invoke\(.+, <unresolved overloaded function '
               r'type>\)')
  clang_regex = (_CLANG_FILE_LINE_RE + r'error: no matching function '
                 r'for call to \'Invoke\'\r?\n'
                 r'(.*\n)*?'
                 r'.*\bgmock-generated-actions\.h:\d+:\d+: '
                 r'note: candidate function template not viable: '
                 r'requires .*, but 2 (arguments )?were provided')
  diagnosis = """
The second argument you gave to Invoke() is an overloaded method.  Please
tell your compiler which overloaded version you want to use.

For example, if you want to use the version whose signature is
  class Foo {
    ...
    bool Bar(int n, double x);
  };
you should write something like
  Invoke(foo, static_cast<bool (Foo::*)(int n, double x)>(&Foo::Bar))"""
  return _GenericDiagnoser('OMA', 'Overloaded Method Action',
                           [(gcc_regex, diagnosis),
                            (clang_regex, diagnosis)],
                           msg)


def _MockObjectPointerDiagnoser(msg):
  """Diagnoses the MOP disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE + r'error: request for member '
               r'\'gmock_(?P<method>.+)\' in \'(?P<mock_object>.+)\', '
               r'which is of non-class type \'(.*::)*(?P<class_name>.+)\*\'')
  clang_regex = (_CLANG_FILE_LINE_RE + r'error: member reference type '
                 r'\'(?P<class_name>.*?) *\' is a pointer; '
                 r'(did you mean|maybe you meant) to use \'->\'\?')
  diagnosis = """
The first argument to ON_CALL() and EXPECT_CALL() must be a mock *object*,
not a *pointer* to it.  Please write '*(%(mock_object)s)' instead of
'%(mock_object)s' as your first argument.

For example, given the mock class:

  class %(class_name)s : public ... {
    ...
    MOCK_METHOD0(%(method)s, ...);
  };

and the following mock instance:

  %(class_name)s* mock_ptr = ...

you should use the EXPECT_CALL like this:

  EXPECT_CALL(*mock_ptr, %(method)s(...));"""

  return _GenericDiagnoser(
      'MOP',
      'Mock Object Pointer',
      [(gcc_regex, diagnosis),
       (clang_regex, diagnosis % {'mock_object': 'mock_object',
                                  'method': 'method',
                                  'class_name': '%(class_name)s'})],
       msg)


def _NeedToUseSymbolDiagnoser(msg):
  """Diagnoses the NUS disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE + r'error: \'(?P<symbol>.+)\' '
               r'(was not declared in this scope|has not been declared)')
  clang_regex = (_CLANG_FILE_LINE_RE +
                 r'error: (use of undeclared identifier|unknown type name|'
                 r'no template named) \'(?P<symbol>[^\']+)\'')
  diagnosis = """
'%(symbol)s' is defined by Google Mock in the testing namespace.
Did you forget to write
  using testing::%(symbol)s;
?"""
  for m in (list(_FindAllMatches(gcc_regex, msg)) +
            list(_FindAllMatches(clang_regex, msg))):
    symbol = m.groupdict()['symbol']
    if symbol in _COMMON_GMOCK_SYMBOLS:
      yield ('NUS', 'Need to Use Symbol', diagnosis % m.groupdict())


def _NeedToUseReturnNullDiagnoser(msg):
  """Diagnoses the NRNULL disease, given the error messages by the compiler."""

  gcc_regex = ('instantiated from \'testing::internal::ReturnAction<R>'
               '::operator testing::Action<Func>\(\) const.*\n' +
               _GCC_FILE_LINE_RE + r'instantiated from here\n'
               r'.*error: no matching function for call to \'ImplicitCast_\('
               r'(:?long )?int&\)')
  clang_regex = (r'\bgmock-actions.h:.* error: no matching function for '
                 r'call to \'ImplicitCast_\'\r?\n'
                 r'(.*\n)*?' +
                 _CLANG_NON_GMOCK_FILE_LINE_RE + r'note: in instantiation '
                 r'of function template specialization '
                 r'\'testing::internal::ReturnAction<(int|long)>::operator '
                 r'Action<(?P<type>.*)\(\)>\' requested here')
  diagnosis = """
You are probably calling Return(NULL) and the compiler isn't sure how to turn
NULL into %(type)s. Use ReturnNull() instead.
Note: the line number may be off; please fix all instances of Return(NULL)."""
  return _GenericDiagnoser(
      'NRNULL', 'Need to use ReturnNull',
      [(clang_regex, diagnosis),
       (gcc_regex, diagnosis % {'type': 'the right type'})],
      msg)


def _TypeInTemplatedBaseDiagnoser(msg):
  """Diagnoses the TTB disease, given the error messages by the compiler."""

  # This version works when the type is used as the mock function's return
  # type.
  gcc_4_3_1_regex_type_in_retval = (
      r'In member function \'int .*\n' + _GCC_FILE_LINE_RE +
      r'error: a function call cannot appear in a constant-expression')
  gcc_4_4_0_regex_type_in_retval = (
      r'error: a function call cannot appear in a constant-expression'
      + _GCC_FILE_LINE_RE + r'error: template argument 1 is invalid\n')
  # This version works when the type is used as the mock function's sole
  # parameter type.
  gcc_regex_type_of_sole_param = (
      _GCC_FILE_LINE_RE +
      r'error: \'(?P<type>.+)\' was not declared in this scope\n'
      r'.*error: template argument 1 is invalid\n')
  # This version works when the type is used as a parameter of a mock
  # function that has multiple parameters.
  gcc_regex_type_of_a_param = (
      r'error: expected `;\' before \'::\' token\n'
      + _GCC_FILE_LINE_RE +
      r'error: \'(?P<type>.+)\' was not declared in this scope\n'
      r'.*error: template argument 1 is invalid\n'
      r'.*error: \'.+\' was not declared in this scope')
  clang_regex_type_of_retval_or_sole_param = (
      _CLANG_FILE_LINE_RE +
      r'error: use of undeclared identifier \'(?P<type>.*)\'\n'
      r'(.*\n)*?'
      r'(?P=file):(?P=line):\d+: error: '
      r'non-friend class member \'Result\' cannot have a qualified name'
      )
  clang_regex_type_of_a_param = (
      _CLANG_FILE_LINE_RE +
      r'error: C\+\+ requires a type specifier for all declarations\n'
      r'(.*\n)*?'
      r'(?P=file):(?P=line):(?P=column): error: '
      r'C\+\+ requires a type specifier for all declarations'
      )
  clang_regex_unknown_type = (
      _CLANG_FILE_LINE_RE +
      r'error: unknown type name \'(?P<type>[^\']+)\''
      )

  diagnosis = """
In a mock class template, types or typedefs defined in the base class
template are *not* automatically visible.  This is how C++ works.  Before
you can use a type or typedef named %(type)s defined in base class Base<T>, you
need to make it visible.  One way to do it is:

  typedef typename Base<T>::%(type)s %(type)s;"""

  for diag in _GenericDiagnoser(
      'TTB', 'Type in Template Base',
      [(gcc_4_3_1_regex_type_in_retval, diagnosis % {'type': 'Foo'}),
       (gcc_4_4_0_regex_type_in_retval, diagnosis % {'type': 'Foo'}),
       (gcc_regex_type_of_sole_param, diagnosis),
       (gcc_regex_type_of_a_param, diagnosis),
       (clang_regex_type_of_retval_or_sole_param, diagnosis),
       (clang_regex_type_of_a_param, diagnosis % {'type': 'Foo'})],
      msg):
    yield diag
  # Avoid overlap with the NUS pattern.
  for m in _FindAllMatches(clang_regex_unknown_type, msg):
    type_ = m.groupdict()['type']
    if type_ not in _COMMON_GMOCK_SYMBOLS:
      yield ('TTB', 'Type in Template Base', diagnosis % m.groupdict())


def _WrongMockMethodMacroDiagnoser(msg):
  """Diagnoses the WMM disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE +
               r'.*this_method_does_not_take_(?P<wrong_args>\d+)_argument.*\n'
               r'.*\n'
               r'.*candidates are.*FunctionMocker<[^>]+A(?P<args>\d+)\)>')
  clang_regex = (_CLANG_NON_GMOCK_FILE_LINE_RE +
                 r'error:.*array.*negative.*r?\n'
                 r'(.*\n)*?'
                 r'(?P=file):(?P=line):(?P=column): error: too few arguments '
                 r'to function call, expected (?P<args>\d+), '
                 r'have (?P<wrong_args>\d+)')
  clang11_re = (_CLANG_NON_GMOCK_FILE_LINE_RE +
                r'.*this_method_does_not_take_'
                r'(?P<wrong_args>\d+)_argument.*')
  diagnosis = """
You are using MOCK_METHOD%(wrong_args)s to define a mock method that has
%(args)s arguments. Use MOCK_METHOD%(args)s (or MOCK_CONST_METHOD%(args)s,
MOCK_METHOD%(args)s_T, MOCK_CONST_METHOD%(args)s_T as appropriate) instead."""
  return _GenericDiagnoser('WMM', 'Wrong MOCK_METHODn Macro',
                           [(gcc_regex, diagnosis),
                            (clang11_re, diagnosis % {'wrong_args': 'm',
                                                      'args': 'n'}),
                            (clang_regex, diagnosis)],
                           msg)


def _WrongParenPositionDiagnoser(msg):
  """Diagnoses the WPP disease, given the error messages by the compiler."""

  gcc_regex = (_GCC_FILE_LINE_RE +
               r'error:.*testing::internal::MockSpec<.* has no member named \''
               r'(?P<method>\w+)\'')
  clang_regex = (_CLANG_NON_GMOCK_FILE_LINE_RE +
                 r'error: no member named \'(?P<method>\w+)\' in '
                 r'\'testing::internal::MockSpec<.*>\'')
  diagnosis = """
The closing parenthesis of ON_CALL or EXPECT_CALL should be *before*
".%(method)s".  For example, you should write:
  EXPECT_CALL(my_mock, Foo(_)).%(method)s(...);
instead of:
  EXPECT_CALL(my_mock, Foo(_).%(method)s(...));"""
  return _GenericDiagnoser('WPP', 'Wrong Parenthesis Position',
                           [(gcc_regex, diagnosis),
                            (clang_regex, diagnosis)],
                           msg)


_DIAGNOSERS = [
    _IncompleteByReferenceArgumentDiagnoser,
    _MockObjectPointerDiagnoser,
    _NeedToReturnNothingDiagnoser,
    _NeedToReturnReferenceDiagnoser,
    _NeedToReturnSomethingDiagnoser,
    _NeedToUseReturnNullDiagnoser,
    _NeedToUseSymbolDiagnoser,
    _OverloadedFunctionActionDiagnoser,
    _OverloadedFunctionMatcherDiagnoser,
    _OverloadedMethodActionDiagnoser,
    _TypeInTemplatedBaseDiagnoser,
    _WrongMockMethodMacroDiagnoser,
    _WrongParenPositionDiagnoser,
    ]


def Diagnose(msg):
  """Generates all possible diagnoses given the compiler error message."""

  msg = re.sub(r'\x1b\[[^m]*m', '', msg)  # Strips all color formatting.
  # Assuming the string is using the UTF-8 encoding, replaces the left and
  # the right single quote characters with apostrophes.
  msg = re.sub(r'(\xe2\x80\x98|\xe2\x80\x99)', "'", msg)

  diagnoses = []
  for diagnoser in _DIAGNOSERS:
    for diag in diagnoser(msg):
      diagnosis = '[%s - %s]\n%s' % diag
      if not diagnosis in diagnoses:
        diagnoses.append(diagnosis)
  return diagnoses


def main():
  print ('Google Mock Doctor v%s - '
         'diagnoses problems in code using Google Mock.' % _VERSION)

  if sys.stdin.isatty():
    print ('Please copy and paste the compiler errors here.  Press c-D when '
           'you are done:')
  else:
    print ('Waiting for compiler errors on stdin . . .')

  msg = sys.stdin.read().strip()
  diagnoses = Diagnose(msg)
  count = len(diagnoses)
  if not count:
    print ("""
Your compiler complained:
8<------------------------------------------------------------
%s
------------------------------------------------------------>8

Uh-oh, I'm not smart enough to figure out what the problem is. :-(
However...
If you send your source code and the compiler's error messages to
%s, you can be helped and I can get smarter --
win-win for us!""" % (msg, _EMAIL))
  else:
    print ('------------------------------------------------------------')
    print ('Your code appears to have the following',)
    if count > 1:
      print ('%s diseases:' % (count,))
    else:
      print ('disease:')
    i = 0
    for d in diagnoses:
      i += 1
      if count > 1:
        print ('\n#%s:' % (i,))
      print (d)
    print ("""
How did I do?  If you think I'm wrong or unhelpful, please send your
source code and the compiler's error messages to %s.
Then you can be helped and I can get smarter -- I promise I won't be upset!""" %
           _EMAIL)


if __name__ == '__main__':
  main()
