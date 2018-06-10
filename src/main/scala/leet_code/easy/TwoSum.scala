package leet_code.easy

import scala.collection.mutable

object TwoSum {

  def apply(ints: Seq[Int], target: Int): Set[Int] = {
    val map = mutable.Map[Int, Int]()
    for (i <- ints.indices) {
      if (map.contains(ints(i))) return Set(map(ints(i)), i)
      map(target - ints(i)) = i
    }
    Set.empty
  }

}
