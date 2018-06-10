package leet_code.medium

import org.scalatest.FlatSpec

class ThreeSumTest extends FlatSpec {

  it must "find all values which sum to zero" in {
    assertResult(Set(Seq(-1, 0, 1), Seq(-1, -1, 2)))(ThreeSum(-1, 0, 1, 2, -1, -4))
  }

}
