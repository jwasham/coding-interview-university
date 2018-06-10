package leet_code.easy

import org.scalatest.FlatSpec

class BinarySearchTest extends FlatSpec {

  it must "find index of element in sorted data" in {
    assertResult(2)(BinarySearch(Array(1, 2, 3, 4, 5, 6), 3))
    assertResult(4)(BinarySearch(Array(1, 5, 15, 45, 135, 315), 135))
  }

  it must "return -1 if element not in data" in {
    assertResult(-1)(BinarySearch(Array(1, 2, 3), 4))
  }

}
