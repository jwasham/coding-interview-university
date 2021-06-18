#!/usr/bin/env python
#
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

"""Script for branching Google Test/Mock wiki pages for a new version.

SYNOPSIS
       release_docs.py NEW_RELEASE_VERSION

       Google Test and Google Mock's external user documentation is in
       interlinked wiki files.  When we release a new version of
       Google Test or Google Mock, we need to branch the wiki files
       such that users of a specific version of Google Test/Mock can
       look up documenation relevant for that version.  This script
       automates that process by:

         - branching the current wiki pages (which document the
           behavior of the SVN trunk head) to pages for the specified
           version (e.g. branching FAQ.wiki to V2_6_FAQ.wiki when
           NEW_RELEASE_VERSION is 2.6);
         - updating the links in the branched files to point to the branched
           version (e.g. a link in V2_6_FAQ.wiki that pointed to
           Primer.wiki#Anchor will now point to V2_6_Primer.wiki#Anchor).

       NOTE: NEW_RELEASE_VERSION must be a NEW version number for
       which the wiki pages don't yet exist; otherwise you'll get SVN
       errors like "svn: Path 'V1_7_PumpManual.wiki' is not a
       directory" when running the script.

EXAMPLE
       $ cd PATH/TO/GTEST_SVN_WORKSPACE/trunk
       $ scripts/release_docs.py 2.6  # create wiki pages for v2.6
       $ svn status                   # verify the file list
       $ svn diff                     # verify the file contents
       $ svn commit -m "release wiki pages for v2.6"
"""

__author__ = 'wan@google.com (Zhanyong Wan)'

import os
import re
import sys

import common


# Wiki pages that shouldn't be branched for every gtest/gmock release.
GTEST_UNVERSIONED_WIKIS = ['DevGuide.wiki']
GMOCK_UNVERSIONED_WIKIS = [
    'DesignDoc.wiki',
    'DevGuide.wiki',
    'KnownIssues.wiki'
    ]


def DropWikiSuffix(wiki_filename):
  """Removes the .wiki suffix (if any) from the given filename."""

  return (wiki_filename[:-len('.wiki')] if wiki_filename.endswith('.wiki')
          else wiki_filename)


class WikiBrancher(object):
  """Branches ..."""

  def __init__(self, dot_version):
    self.project, svn_root_path = common.GetSvnInfo()
    if self.project not in ('googletest', 'googlemock'):
      sys.exit('This script must be run in a gtest or gmock SVN workspace.')
    self.wiki_dir = svn_root_path + '/wiki'
    # Turn '2.6' to 'V2_6_'.
    self.version_prefix = 'V' + dot_version.replace('.', '_') + '_'
    self.files_to_branch = self.GetFilesToBranch()
    page_names = [DropWikiSuffix(f) for f in self.files_to_branch]
    # A link to Foo.wiki is in one of the following forms:
    #   [Foo words]
    #   [Foo#Anchor words]
    #   [http://code.google.com/.../wiki/Foo words]
    #   [http://code.google.com/.../wiki/Foo#Anchor words]
    # We want to replace 'Foo' with 'V2_6_Foo' in the above cases.
    self.search_for_re = re.compile(
        # This regex matches either
        #   [Foo
        # or
        #   /wiki/Foo
        # followed by a space or a #, where Foo is the name of an
        # unversioned wiki page.
        r'(\[|/wiki/)(%s)([ #])' % '|'.join(page_names))
    self.replace_with = r'\1%s\2\3' % (self.version_prefix,)

  def GetFilesToBranch(self):
    """Returns a list of .wiki file names that need to be branched."""

    unversioned_wikis = (GTEST_UNVERSIONED_WIKIS if self.project == 'googletest'
                         else GMOCK_UNVERSIONED_WIKIS)
    return [f for f in os.listdir(self.wiki_dir)
            if (f.endswith('.wiki') and
                not re.match(r'^V\d', f) and  # Excluded versioned .wiki files.
                f not in unversioned_wikis)]

  def BranchFiles(self):
    """Branches the .wiki files needed to be branched."""

    print 'Branching %d .wiki files:' % (len(self.files_to_branch),)
    os.chdir(self.wiki_dir)
    for f in self.files_to_branch:
      command = 'svn cp %s %s%s' % (f, self.version_prefix, f)
      print command
      os.system(command)

  def UpdateLinksInBranchedFiles(self):

    for f in self.files_to_branch:
      source_file = os.path.join(self.wiki_dir, f)
      versioned_file = os.path.join(self.wiki_dir, self.version_prefix + f)
      print 'Updating links in %s.' % (versioned_file,)
      text = file(source_file, 'r').read()
      new_text = self.search_for_re.sub(self.replace_with, text)
      file(versioned_file, 'w').write(new_text)


def main():
  if len(sys.argv) != 2:
    sys.exit(__doc__)

  brancher = WikiBrancher(sys.argv[1])
  brancher.BranchFiles()
  brancher.UpdateLinksInBranchedFiles()


if __name__ == '__main__':
  main()
