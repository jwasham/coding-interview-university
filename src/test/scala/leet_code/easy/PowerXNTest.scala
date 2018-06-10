package leet_code.easy

import org.scalatest.FlatSpec

class PowerXNTest extends FlatSpec {

  it must "compute exponentiation" in {
    assertResult(100)(PowerXN(10, 2))
    assertResult(343)(PowerXN(7, 3))
  }

  it must "accept negative bases" in {
    assertResult(-8)(PowerXN(-2, 3))
    assertResult(160000)(PowerXN(-20, 4))
  }

  it must "return 1 for exponent of 0" in {
    assertResult(1)(PowerXN(10, 0))
    assertResult(1)(PowerXN(-2, 0))
  }

  it must "not accept negative exponents" in {
    assertThrows[IllegalArgumentException](PowerXN(1, -1))
  }

}
