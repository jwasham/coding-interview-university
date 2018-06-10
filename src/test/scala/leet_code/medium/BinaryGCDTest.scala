package leet_code.medium

import org.scalatest.FlatSpec

class BinaryGCDTest extends FlatSpec {

  it must "compute GCD of positive pairs" in {
    assertResult(12)(BinaryGCD(12, 24))
    assertResult(4)(BinaryGCD(8, 12))
    assertResult(6)(BinaryGCD(54, 24))
  }

  it must "accept matching pair" in {
    assertResult(100)(BinaryGCD(100, 100))
  }

  it must "accept zero" in {
    assertResult(200)(BinaryGCD(200, 0))
  }

  it must "not accept negative values" in {
    assertThrows[IllegalArgumentException](BinaryGCD(-1, 9))
  }

}
