package project_euler.problem_12

import org.scalatest.FlatSpec

class TriangleNumberTest extends FlatSpec {

  it must "find first triangle number with divisor count above given value" in {
    assertResult(28)(TriangleNumber(5))
    assertResult(76576500L)(TriangleNumber(500L))
  }

  it must "only accept values above 0" in {
    assertThrows[IllegalArgumentException](TriangleNumber(0))
  }

}
