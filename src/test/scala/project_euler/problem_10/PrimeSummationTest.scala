package project_euler.problem_10

import org.scalatest.FlatSpec

class PrimeSummationTest extends FlatSpec {

  it must "sum primes below given value" in {
    assertResult(2)(PrimeSummation(2))
    assertResult(17)(PrimeSummation(10))
    assertResult(142913828922L)(PrimeSummation(2000000))
  }

  it must "only accept values above 1" in {
    assertThrows[IllegalArgumentException](PrimeSummation(1))
  }

}
