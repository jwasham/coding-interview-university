package leet_code.medium

import org.scalatest.FlatSpec

class BrickWallTest extends FlatSpec {

  it must "find least bricks crossed" in {
    assertResult(2)(BrickWall(List(List(1, 2, 2, 1), List(3, 1, 2), List(1, 3, 2), List(2, 4), List(3, 1, 2), List(1, 3, 1, 1))))
  }

}
