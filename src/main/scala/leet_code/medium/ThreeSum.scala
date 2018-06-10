package leet_code.medium

import scala.collection.mutable

object ThreeSum {

  def apply(in: Int*): Set[Seq[Int]] = {
    require(in.length >= 3)
    val res = mutable.Set[Seq[Int]]()
    val nums = in.sorted

    var main = 0
    while (main < nums.length - 2 && 0 > nums(main)) {
      var low = main + 1
      var high = nums.length - 1

      while (low < high) {
        val sum = nums(main) + nums(low) + nums(high)

        if (sum == 0) res += Seq(nums(main), nums(low), nums(high))
        if (sum <= 0) {
          while (low + 1 < high && nums(low) == nums(low + 1)) {
            low += 1
          }
          low += 1
        }
        if (sum >= 0) {
          while (low < high - 1 && nums(high) == nums(high - 1)) {
            high -= 1
          }
          high -= 1
        }
      }
      while (main + 1 < nums.length - 2 && nums(main) == nums(main + 1)) {
        main += 1
      }
      main += 1
    }
    res.toSet
  }

}
