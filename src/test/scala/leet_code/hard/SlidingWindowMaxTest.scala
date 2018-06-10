package leet_code.hard

import org.scalatest.FlatSpec

class SlidingWindowMaxTest extends FlatSpec {

  it must "find max element in each step of sliding window" in {
    assertResult(Array(3, 3, 5, 5, 6, 7))(SlidingWindowMax(Array(1, 3, -1, -3, 5, 3, 6, 7), 3))
    assertResult(Array(6, 7))(SlidingWindowMax(Array(1, 3, -1, -3, 5, 3, 6, 7), 7))
  }

  it must "only accept window size greater than 0" in {
    assertThrows[IllegalArgumentException](SlidingWindowMax(Seq.empty, 0))
  }

  it must "only accept window size less than input length" in {
    assertThrows[IllegalArgumentException](SlidingWindowMax(Seq.empty, 1))
  }

}
