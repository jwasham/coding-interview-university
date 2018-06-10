package leet_code.easy

import org.scalatest.FlatSpec

class ReverseIntTest extends FlatSpec {

  it must "reverse a positive integer" in {
    assertResult(123)(ReverseInt(321))
  }

  it must "lose zeroes" in {
    assertResult(9)(ReverseInt(900))
  }

  it must "accept zero" in {
    assertResult(0)(ReverseInt(0))
  }

  it must "accept negative input" in {
    assertResult(-1002)(ReverseInt(-2001))
  }

  it must "reverse palindromes" in {
    assertResult(1001)(ReverseInt(1001))
    assertResult(-1)(ReverseInt(-1))
  }

  it must "return 0 when overflowing" in {
    assertResult(0)(ReverseInt(Int.MaxValue))
    assertResult(0)(ReverseInt(Int.MinValue))
  }

}
