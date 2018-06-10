package project_euler.problem_10

import com.google.common.math.LongMath.isPrime

object PrimeSummation {

  def apply(n: Long): Long = {
    require(n > 1)
    (2L to n) filter isPrime sum
  }

}
