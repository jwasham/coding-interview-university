package project_euler.problem_50

import org.scalatest.FlatSpec

class LongestPrimeSumTest extends FlatSpec {

  it must "find longest consecutive prime sum below given value" in {
    assertResult(41)(LongestPrimeSum(100))
    assertResult(953)(LongestPrimeSum(1000))
    assertResult(9521)(LongestPrimeSum(10000))
    assertResult(92951)(LongestPrimeSum(100000))
  }

  ignore must "large values" in {
    assertResult(997651)(LongestPrimeSum(1000000))
    assertResult(9951191)(LongestPrimeSum(10000000))
  }

  it must "only accept values above 2" in {
    assertThrows[IllegalArgumentException](LongestPrimeSum(2))
  }

}
