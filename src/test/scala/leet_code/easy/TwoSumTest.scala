package leet_code.easy

import org.scalatest.FlatSpec

class TwoSumTest extends FlatSpec {

  it must "find indices of elements that sum to target" in {
    assertResult(Set(2, 3))(TwoSum(Array(1, 2, 3, 4, 5, 6), 7))
    assertResult(Set(5, 6))(TwoSum(Array(3, 2, 1, 0, -1, -2, -3), -5))
  }

  it must "return empty if target cant be summed" in {
    assertResult(Set.empty)(TwoSum(Array(1, 2, 3, 4, 5, 6), 80))
  }
}
