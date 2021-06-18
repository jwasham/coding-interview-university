// Copyright 2007, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


// Google Mock - a framework for writing C++ mock classes.
//
// This file implements Matcher<const string&>, Matcher<string>, and
// utilities for defining matchers.

#include "gmock/gmock-matchers.h"
#include "gmock/gmock-generated-matchers.h"

#include <string.h>
#include <iostream>
#include <sstream>
#include <string>

namespace testing {
namespace internal {

// Returns the description for a matcher defined using the MATCHER*()
// macro where the user-supplied description string is "", if
// 'negation' is false; otherwise returns the description of the
// negation of the matcher.  'param_values' contains a list of strings
// that are the print-out of the matcher's parameters.
GTEST_API_ std::string FormatMatcherDescription(bool negation,
                                                const char* matcher_name,
                                                const Strings& param_values) {
  std::string result = ConvertIdentifierNameToWords(matcher_name);
  if (param_values.size() >= 1) result += " " + JoinAsTuple(param_values);
  return negation ? "not (" + result + ")" : result;
}

// FindMaxBipartiteMatching and its helper class.
//
// Uses the well-known Ford-Fulkerson max flow method to find a maximum
// bipartite matching. Flow is considered to be from left to right.
// There is an implicit source node that is connected to all of the left
// nodes, and an implicit sink node that is connected to all of the
// right nodes. All edges have unit capacity.
//
// Neither the flow graph nor the residual flow graph are represented
// explicitly. Instead, they are implied by the information in 'graph' and
// a vector<int> called 'left_' whose elements are initialized to the
// value kUnused. This represents the initial state of the algorithm,
// where the flow graph is empty, and the residual flow graph has the
// following edges:
//   - An edge from source to each left_ node
//   - An edge from each right_ node to sink
//   - An edge from each left_ node to each right_ node, if the
//     corresponding edge exists in 'graph'.
//
// When the TryAugment() method adds a flow, it sets left_[l] = r for some
// nodes l and r. This induces the following changes:
//   - The edges (source, l), (l, r), and (r, sink) are added to the
//     flow graph.
//   - The same three edges are removed from the residual flow graph.
//   - The reverse edges (l, source), (r, l), and (sink, r) are added
//     to the residual flow graph, which is a directional graph
//     representing unused flow capacity.
//
// When the method augments a flow (moving left_[l] from some r1 to some
// other r2), this can be thought of as "undoing" the above steps with
// respect to r1 and "redoing" them with respect to r2.
//
// It bears repeating that the flow graph and residual flow graph are
// never represented explicitly, but can be derived by looking at the
// information in 'graph' and in left_.
//
// As an optimization, there is a second vector<int> called right_ which
// does not provide any new information. Instead, it enables more
// efficient queries about edges entering or leaving the right-side nodes
// of the flow or residual flow graphs. The following invariants are
// maintained:
//
// left[l] == kUnused or right[left[l]] == l
// right[r] == kUnused or left[right[r]] == r
//
// . [ source ]                                        .
// .   |||                                             .
// .   |||                                             .
// .   ||\--> left[0]=1  ---\    right[0]=-1 ----\     .
// .   ||                   |                    |     .
// .   |\---> left[1]=-1    \--> right[1]=0  ---\|     .
// .   |                                        ||     .
// .   \----> left[2]=2  ------> right[2]=2  --\||     .
// .                                           |||     .
// .         elements           matchers       vvv     .
// .                                         [ sink ]  .
//
// See Also:
//   [1] Cormen, et al (2001). "Section 26.2: The Ford-Fulkerson method".
//       "Introduction to Algorithms (Second ed.)", pp. 651-664.
//   [2] "Ford-Fulkerson algorithm", Wikipedia,
//       'http://en.wikipedia.org/wiki/Ford%E2%80%93Fulkerson_algorithm'
class MaxBipartiteMatchState {
 public:
  explicit MaxBipartiteMatchState(const MatchMatrix& graph)
      : graph_(&graph),
        left_(graph_->LhsSize(), kUnused),
        right_(graph_->RhsSize(), kUnused) {}

  // Returns the edges of a maximal match, each in the form {left, right}.
  ElementMatcherPairs Compute() {
    // 'seen' is used for path finding { 0: unseen, 1: seen }.
    ::std::vector<char> seen;
    // Searches the residual flow graph for a path from each left node to
    // the sink in the residual flow graph, and if one is found, add flow
    // to the graph. It's okay to search through the left nodes once. The
    // edge from the implicit source node to each previously-visited left
    // node will have flow if that left node has any path to the sink
    // whatsoever. Subsequent augmentations can only add flow to the
    // network, and cannot take away that previous flow unit from the source.
    // Since the source-to-left edge can only carry one flow unit (or,
    // each element can be matched to only one matcher), there is no need
    // to visit the left nodes more than once looking for augmented paths.
    // The flow is known to be possible or impossible by looking at the
    // node once.
    for (size_t ilhs = 0; ilhs < graph_->LhsSize(); ++ilhs) {
      // Reset the path-marking vector and try to find a path from
      // source to sink starting at the left_[ilhs] node.
      GTEST_CHECK_(left_[ilhs] == kUnused)
          << "ilhs: " << ilhs << ", left_[ilhs]: " << left_[ilhs];
      // 'seen' initialized to 'graph_->RhsSize()' copies of 0.
      seen.assign(graph_->RhsSize(), 0);
      TryAugment(ilhs, &seen);
    }
    ElementMatcherPairs result;
    for (size_t ilhs = 0; ilhs < left_.size(); ++ilhs) {
      size_t irhs = left_[ilhs];
      if (irhs == kUnused) continue;
      result.push_back(ElementMatcherPair(ilhs, irhs));
    }
    return result;
  }

 private:
  static const size_t kUnused = static_cast<size_t>(-1);

  // Perform a depth-first search from left node ilhs to the sink.  If a
  // path is found, flow is added to the network by linking the left and
  // right vector elements corresponding each segment of the path.
  // Returns true if a path to sink was found, which means that a unit of
  // flow was added to the network. The 'seen' vector elements correspond
  // to right nodes and are marked to eliminate cycles from the search.
  //
  // Left nodes will only be explored at most once because they
  // are accessible from at most one right node in the residual flow
  // graph.
  //
  // Note that left_[ilhs] is the only element of left_ that TryAugment will
  // potentially transition from kUnused to another value. Any other
  // left_ element holding kUnused before TryAugment will be holding it
  // when TryAugment returns.
  //
  bool TryAugment(size_t ilhs, ::std::vector<char>* seen) {
    for (size_t irhs = 0; irhs < graph_->RhsSize(); ++irhs) {
      if ((*seen)[irhs]) continue;
      if (!graph_->HasEdge(ilhs, irhs)) continue;
      // There's an available edge from ilhs to irhs.
      (*seen)[irhs] = 1;
      // Next a search is performed to determine whether
      // this edge is a dead end or leads to the sink.
      //
      // right_[irhs] == kUnused means that there is residual flow from
      // right node irhs to the sink, so we can use that to finish this
      // flow path and return success.
      //
      // Otherwise there is residual flow to some ilhs. We push flow
      // along that path and call ourselves recursively to see if this
      // ultimately leads to sink.
      if (right_[irhs] == kUnused || TryAugment(right_[irhs], seen)) {
        // Add flow from left_[ilhs] to right_[irhs].
        left_[ilhs] = irhs;
        right_[irhs] = ilhs;
        return true;
      }
    }
    return false;
  }

  const MatchMatrix* graph_;  // not owned
  // Each element of the left_ vector represents a left hand side node
  // (i.e. an element) and each element of right_ is a right hand side
  // node (i.e. a matcher). The values in the left_ vector indicate
  // outflow from that node to a node on the right_ side. The values
  // in the right_ indicate inflow, and specify which left_ node is
  // feeding that right_ node, if any. For example, left_[3] == 1 means
  // there's a flow from element #3 to matcher #1. Such a flow would also
  // be redundantly represented in the right_ vector as right_[1] == 3.
  // Elements of left_ and right_ are either kUnused or mutually
  // referent. Mutually referent means that left_[right_[i]] = i and
  // right_[left_[i]] = i.
  ::std::vector<size_t> left_;
  ::std::vector<size_t> right_;

  GTEST_DISALLOW_ASSIGN_(MaxBipartiteMatchState);
};

const size_t MaxBipartiteMatchState::kUnused;

GTEST_API_ ElementMatcherPairs FindMaxBipartiteMatching(const MatchMatrix& g) {
  return MaxBipartiteMatchState(g).Compute();
}

static void LogElementMatcherPairVec(const ElementMatcherPairs& pairs,
                                     ::std::ostream* stream) {
  typedef ElementMatcherPairs::const_iterator Iter;
  ::std::ostream& os = *stream;
  os << "{";
  const char* sep = "";
  for (Iter it = pairs.begin(); it != pairs.end(); ++it) {
    os << sep << "\n  ("
       << "element #" << it->first << ", "
       << "matcher #" << it->second << ")";
    sep = ",";
  }
  os << "\n}";
}

bool MatchMatrix::NextGraph() {
  for (size_t ilhs = 0; ilhs < LhsSize(); ++ilhs) {
    for (size_t irhs = 0; irhs < RhsSize(); ++irhs) {
      char& b = matched_[SpaceIndex(ilhs, irhs)];
      if (!b) {
        b = 1;
        return true;
      }
      b = 0;
    }
  }
  return false;
}

void MatchMatrix::Randomize() {
  for (size_t ilhs = 0; ilhs < LhsSize(); ++ilhs) {
    for (size_t irhs = 0; irhs < RhsSize(); ++irhs) {
      char& b = matched_[SpaceIndex(ilhs, irhs)];
      b = static_cast<char>(rand() & 1);  // NOLINT
    }
  }
}

std::string MatchMatrix::DebugString() const {
  ::std::stringstream ss;
  const char* sep = "";
  for (size_t i = 0; i < LhsSize(); ++i) {
    ss << sep;
    for (size_t j = 0; j < RhsSize(); ++j) {
      ss << HasEdge(i, j);
    }
    sep = ";";
  }
  return ss.str();
}

void UnorderedElementsAreMatcherImplBase::DescribeToImpl(
    ::std::ostream* os) const {
  switch (match_flags()) {
    case UnorderedMatcherRequire::ExactMatch:
      if (matcher_describers_.empty()) {
        *os << "is empty";
        return;
      }
      if (matcher_describers_.size() == 1) {
        *os << "has " << Elements(1) << " and that element ";
        matcher_describers_[0]->DescribeTo(os);
        return;
      }
      *os << "has " << Elements(matcher_describers_.size())
          << " and there exists some permutation of elements such that:\n";
      break;
    case UnorderedMatcherRequire::Superset:
      *os << "a surjection from elements to requirements exists such that:\n";
      break;
    case UnorderedMatcherRequire::Subset:
      *os << "an injection from elements to requirements exists such that:\n";
      break;
  }

  const char* sep = "";
  for (size_t i = 0; i != matcher_describers_.size(); ++i) {
    *os << sep;
    if (match_flags() == UnorderedMatcherRequire::ExactMatch) {
      *os << " - element #" << i << " ";
    } else {
      *os << " - an element ";
    }
    matcher_describers_[i]->DescribeTo(os);
    if (match_flags() == UnorderedMatcherRequire::ExactMatch) {
      sep = ", and\n";
    } else {
      sep = "\n";
    }
  }
}

void UnorderedElementsAreMatcherImplBase::DescribeNegationToImpl(
    ::std::ostream* os) const {
  switch (match_flags()) {
    case UnorderedMatcherRequire::ExactMatch:
      if (matcher_describers_.empty()) {
        *os << "isn't empty";
        return;
      }
      if (matcher_describers_.size() == 1) {
        *os << "doesn't have " << Elements(1) << ", or has " << Elements(1)
            << " that ";
        matcher_describers_[0]->DescribeNegationTo(os);
        return;
      }
      *os << "doesn't have " << Elements(matcher_describers_.size())
          << ", or there exists no permutation of elements such that:\n";
      break;
    case UnorderedMatcherRequire::Superset:
      *os << "no surjection from elements to requirements exists such that:\n";
      break;
    case UnorderedMatcherRequire::Subset:
      *os << "no injection from elements to requirements exists such that:\n";
      break;
  }
  const char* sep = "";
  for (size_t i = 0; i != matcher_describers_.size(); ++i) {
    *os << sep;
    if (match_flags() == UnorderedMatcherRequire::ExactMatch) {
      *os << " - element #" << i << " ";
    } else {
      *os << " - an element ";
    }
    matcher_describers_[i]->DescribeTo(os);
    if (match_flags() == UnorderedMatcherRequire::ExactMatch) {
      sep = ", and\n";
    } else {
      sep = "\n";
    }
  }
}

// Checks that all matchers match at least one element, and that all
// elements match at least one matcher. This enables faster matching
// and better error reporting.
// Returns false, writing an explanation to 'listener', if and only
// if the success criteria are not met.
bool UnorderedElementsAreMatcherImplBase::VerifyMatchMatrix(
    const ::std::vector<std::string>& element_printouts,
    const MatchMatrix& matrix, MatchResultListener* listener) const {
  bool result = true;
  ::std::vector<char> element_matched(matrix.LhsSize(), 0);
  ::std::vector<char> matcher_matched(matrix.RhsSize(), 0);

  for (size_t ilhs = 0; ilhs < matrix.LhsSize(); ilhs++) {
    for (size_t irhs = 0; irhs < matrix.RhsSize(); irhs++) {
      char matched = matrix.HasEdge(ilhs, irhs);
      element_matched[ilhs] |= matched;
      matcher_matched[irhs] |= matched;
    }
  }

  if (match_flags() & UnorderedMatcherRequire::Superset) {
    const char* sep =
        "where the following matchers don't match any elements:\n";
    for (size_t mi = 0; mi < matcher_matched.size(); ++mi) {
      if (matcher_matched[mi]) continue;
      result = false;
      if (listener->IsInterested()) {
        *listener << sep << "matcher #" << mi << ": ";
        matcher_describers_[mi]->DescribeTo(listener->stream());
        sep = ",\n";
      }
    }
  }

  if (match_flags() & UnorderedMatcherRequire::Subset) {
    const char* sep =
        "where the following elements don't match any matchers:\n";
    const char* outer_sep = "";
    if (!result) {
      outer_sep = "\nand ";
    }
    for (size_t ei = 0; ei < element_matched.size(); ++ei) {
      if (element_matched[ei]) continue;
      result = false;
      if (listener->IsInterested()) {
        *listener << outer_sep << sep << "element #" << ei << ": "
                  << element_printouts[ei];
        sep = ",\n";
        outer_sep = "";
      }
    }
  }
  return result;
}

bool UnorderedElementsAreMatcherImplBase::FindPairing(
    const MatchMatrix& matrix, MatchResultListener* listener) const {
  ElementMatcherPairs matches = FindMaxBipartiteMatching(matrix);

  size_t max_flow = matches.size();
  if ((match_flags() & UnorderedMatcherRequire::Superset) &&
      max_flow < matrix.RhsSize()) {
    if (listener->IsInterested()) {
      *listener << "where no permutation of the elements can satisfy all "
                   "matchers, and the closest match is "
                << max_flow << " of " << matrix.RhsSize()
                << " matchers with the pairings:\n";
      LogElementMatcherPairVec(matches, listener->stream());
    }
    return false;
  }
  if ((match_flags() & UnorderedMatcherRequire::Subset) &&
      max_flow < matrix.LhsSize()) {
    if (listener->IsInterested()) {
      *listener
          << "where not all elements can be matched, and the closest match is "
          << max_flow << " of " << matrix.RhsSize()
          << " matchers with the pairings:\n";
      LogElementMatcherPairVec(matches, listener->stream());
    }
    return false;
  }

  if (matches.size() > 1) {
    if (listener->IsInterested()) {
      const char* sep = "where:\n";
      for (size_t mi = 0; mi < matches.size(); ++mi) {
        *listener << sep << " - element #" << matches[mi].first
                  << " is matched by matcher #" << matches[mi].second;
        sep = ",\n";
      }
    }
  }
  return true;
}

}  // namespace internal
}  // namespace testing
