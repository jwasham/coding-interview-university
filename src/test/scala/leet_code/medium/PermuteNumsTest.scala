package leet_code.medium

import org.scalatest.FlatSpec

class PermuteNumsTest extends FlatSpec {

  it must "generate all permutations from distinct set" in {
    assertResult(Set(Seq(1)))(PermuteNums(1))
    assertResult(Set(Seq(2, 1), Seq(1, 2)))(PermuteNums(1, 2))
    assertResult(Set(Seq(1, 2, 3), Seq(1, 3, 2), Seq(2, 1, 3), Seq(2, 3, 1), Seq(3, 2, 1), Seq(3, 1, 2)))(PermuteNums(1, 2, 3))
  }

}
