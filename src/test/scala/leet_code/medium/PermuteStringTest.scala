package leet_code.medium

import org.scalatest.FlatSpec

class PermuteStringTest extends FlatSpec {

  it must "compute all string permutations" in {
    assertResult(Set("a"))(PermuteString("a"))
    assertResult(Set("ab", "ba"))(PermuteString("ab"))
    assertResult(Set("abc", "acb", "bac", "bca", "cab", "cba"))(PermuteString("abc"))
  }

}
