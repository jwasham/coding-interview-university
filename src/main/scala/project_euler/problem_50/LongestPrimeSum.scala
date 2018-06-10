package project_euler.problem_50

import com.google.common.math.LongMath.isPrime

object LongestPrimeSum {

  def apply(n: Long): Long = {
    require(n > 2)
    val primes = (2L to n) filter isPrime
    var best = (2L, 1L)

    for (i <- primes.indices) {
      var current = (0L, 0L)
      for (j <- i until primes.length if n > current._1) {
        if (current._2 > best._2 && isPrime(current._1)) {
          best = current
        }
        current = (current._1 + primes(j), current._2 + 1)
      }
    }
    best._1
  }

}
