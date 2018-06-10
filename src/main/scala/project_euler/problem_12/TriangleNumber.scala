package project_euler.problem_12

import java.lang.Math.sqrt

import scala.collection.immutable.Stream.from

object TriangleNumber {

  def apply(n: Long): Long = {
    require(n > 0)
    from(1) map (triangleNumber(_)) dropWhile (numDivisors(_) <= n) head
  }

  private def triangleNumber(n: Long): Long = (n + 1) * n / 2

  private def numDivisors(n: Long): Long = (1L to sqrt(n).toLong).count(n % _ == 0) * 2

}
