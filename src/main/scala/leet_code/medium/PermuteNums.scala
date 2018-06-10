package leet_code.medium

import scala.collection.mutable.ListBuffer

object PermuteNums {

  def apply(nums: Int*): Set[Seq[Int]] = {
    compute(nums, ListBuffer[Seq[Int]](), ListBuffer[Int](), ListBuffer[Int]()).toSet
  }

  private def compute(a: Seq[Int], out: ListBuffer[Seq[Int]], temp: ListBuffer[Int], skip: ListBuffer[Int]): Seq[Seq[Int]] = {
    if (temp.size == a.length) out += temp.clone

    for (i <- a.indices) {
      if (!skip.contains(i)) {
        temp += a(i)
        skip += i
        compute(a, out, temp, skip)
        temp.remove(temp.size - 1)
        skip.remove(skip.size - 1)
      }
    }
    out
  }

}
