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

"""Unit test utilities for gtest_xml_output"""

import re
from xml.dom import minidom, Node
import gtest_test_utils

GTEST_DEFAULT_OUTPUT_FILE = 'test_detail.xml'

class GTestXMLTestCase(gtest_test_utils.TestCase):
  """
  Base class for tests of Google Test's XML output functionality.
  """


  def AssertEquivalentNodes(self, expected_node, actual_node):
    """
    Asserts that actual_node (a DOM node object) is equivalent to
    expected_node (another DOM node object), in that either both of
    them are CDATA nodes and have the same value, or both are DOM
    elements and actual_node meets all of the following conditions:

    *  It has the same tag name as expected_node.
    *  It has the same set of attributes as expected_node, each with
       the same value as the corresponding attribute of expected_node.
       Exceptions are any attribute named "time", which needs only be
       convertible to a floating-point number and any attribute named
       "type_param" which only has to be non-empty.
    *  It has an equivalent set of child nodes (including elements and
       CDATA sections) as expected_node.  Note that we ignore the
       order of the children as they are not guaranteed to be in any
       particular order.
    """

    if expected_node.nodeType == Node.CDATA_SECTION_NODE:
      self.assertEquals(Node.CDATA_SECTION_NODE, actual_node.nodeType)
      self.assertEquals(expected_node.nodeValue, actual_node.nodeValue)
      return

    self.assertEquals(Node.ELEMENT_NODE, actual_node.nodeType)
    self.assertEquals(Node.ELEMENT_NODE, expected_node.nodeType)
    self.assertEquals(expected_node.tagName, actual_node.tagName)

    expected_attributes = expected_node.attributes
    actual_attributes   = actual_node  .attributes
    self.assertEquals(
        expected_attributes.length, actual_attributes.length,
        'attribute numbers differ in element %s:\nExpected: %r\nActual: %r' % (
            actual_node.tagName, expected_attributes.keys(),
            actual_attributes.keys()))
    for i in range(expected_attributes.length):
      expected_attr = expected_attributes.item(i)
      actual_attr   = actual_attributes.get(expected_attr.name)
      self.assert_(
          actual_attr is not None,
          'expected attribute %s not found in element %s' %
          (expected_attr.name, actual_node.tagName))
      self.assertEquals(
          expected_attr.value, actual_attr.value,
          ' values of attribute %s in element %s differ: %s vs %s' %
          (expected_attr.name, actual_node.tagName,
           expected_attr.value, actual_attr.value))

    expected_children = self._GetChildren(expected_node)
    actual_children = self._GetChildren(actual_node)
    self.assertEquals(
        len(expected_children), len(actual_children),
        'number of child elements differ in element ' + actual_node.tagName)
    for child_id, child in expected_children.items():
      self.assert_(child_id in actual_children,
                   '<%s> is not in <%s> (in element %s)' %
                   (child_id, actual_children, actual_node.tagName))
      self.AssertEquivalentNodes(child, actual_children[child_id])

  identifying_attribute = {
      'testsuites': 'name',
      'testsuite': 'name',
      'testcase': 'name',
      'failure': 'message',
      'property': 'name',
  }

  def _GetChildren(self, element):
    """
    Fetches all of the child nodes of element, a DOM Element object.
    Returns them as the values of a dictionary keyed by the IDs of the
    children.  For <testsuites>, <testsuite>, <testcase>, and <property>
    elements, the ID is the value of their "name" attribute; for <failure>
    elements, it is the value of the "message" attribute; for <properties>
    elements, it is the value of their parent's "name" attribute plus the
    literal string "properties"; CDATA sections and non-whitespace
    text nodes are concatenated into a single CDATA section with ID
    "detail".  An exception is raised if any element other than the above
    four is encountered, if two child elements with the same identifying
    attributes are encountered, or if any other type of node is encountered.
    """

    children = {}
    for child in element.childNodes:
      if child.nodeType == Node.ELEMENT_NODE:
        if child.tagName == 'properties':
          self.assert_(child.parentNode is not None,
                       'Encountered <properties> element without a parent')
          child_id = child.parentNode.getAttribute('name') + '-properties'
        else:
          self.assert_(child.tagName in self.identifying_attribute,
                       'Encountered unknown element <%s>' % child.tagName)
          child_id = child.getAttribute(
              self.identifying_attribute[child.tagName])
        self.assert_(child_id not in children)
        children[child_id] = child
      elif child.nodeType in [Node.TEXT_NODE, Node.CDATA_SECTION_NODE]:
        if 'detail' not in children:
          if (child.nodeType == Node.CDATA_SECTION_NODE or
              not child.nodeValue.isspace()):
            children['detail'] = child.ownerDocument.createCDATASection(
                child.nodeValue)
        else:
          children['detail'].nodeValue += child.nodeValue
      else:
        self.fail('Encountered unexpected node type %d' % child.nodeType)
    return children

  def NormalizeXml(self, element):
    """
    Normalizes Google Test's XML output to eliminate references to transient
    information that may change from run to run.

    *  The "time" attribute of <testsuites>, <testsuite> and <testcase>
       elements is replaced with a single asterisk, if it contains
       only digit characters.
    *  The "timestamp" attribute of <testsuites> elements is replaced with a
       single asterisk, if it contains a valid ISO8601 datetime value.
    *  The "type_param" attribute of <testcase> elements is replaced with a
       single asterisk (if it sn non-empty) as it is the type name returned
       by the compiler and is platform dependent.
    *  The line info reported in the first line of the "message"
       attribute and CDATA section of <failure> elements is replaced with the
       file's basename and a single asterisk for the line number.
    *  The directory names in file paths are removed.
    *  The stack traces are removed.
    """

    if element.tagName in ('testsuites', 'testsuite', 'testcase'):
      timestamp = element.getAttributeNode('timestamp')
      timestamp.value = re.sub(r'^\d{4}-\d\d-\d\dT\d\d:\d\d:\d\d$',
                               '*', timestamp.value)
    if element.tagName in ('testsuites', 'testsuite', 'testcase'):
      time = element.getAttributeNode('time')
      time.value = re.sub(r'^\d+(\.\d+)?$', '*', time.value)
      type_param = element.getAttributeNode('type_param')
      if type_param and type_param.value:
        type_param.value = '*'
    elif element.tagName == 'failure':
      source_line_pat = r'^.*[/\\](.*:)\d+\n'
      # Replaces the source line information with a normalized form.
      message = element.getAttributeNode('message')
      message.value = re.sub(source_line_pat, '\\1*\n', message.value)
      for child in element.childNodes:
        if child.nodeType == Node.CDATA_SECTION_NODE:
          # Replaces the source line information with a normalized form.
          cdata = re.sub(source_line_pat, '\\1*\n', child.nodeValue)
          # Removes the actual stack trace.
          child.nodeValue = re.sub(r'Stack trace:\n(.|\n)*',
                                   'Stack trace:\n*', cdata)
    for child in element.childNodes:
      if child.nodeType == Node.ELEMENT_NODE:
        self.NormalizeXml(child)
