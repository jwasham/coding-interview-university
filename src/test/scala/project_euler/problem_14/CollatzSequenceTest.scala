package project_euler.problem_14

import org.scalatest.FlatSpec

class CollatzSequenceTest extends FlatSpec {

  it must "find starting number with longest sequence below given value" in {
    assertResult(9)(CollatzSequence(14))
    assertResult(77031)(CollatzSequence(100000))
  }

  ignore must "large values" in {
    assertResult(837799)(CollatzSequence(1000000))
    assertResult(8400511)(CollatzSequence(10000000))
  }

  it must "only accept values above 1" in {
    assertThrows[IllegalArgumentException](CollatzSequence(0))
  }

}
