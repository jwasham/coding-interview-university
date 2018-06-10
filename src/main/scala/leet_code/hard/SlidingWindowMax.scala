package leet_code.hard

object SlidingWindowMax {

  def apply(nums: Seq[Int], k: Int): Seq[Int] = {
    require(1 <= k && k <= nums.length)
    nums.sliding(k).map(_.max).toSeq
  }

}
