package project_euler.problem_14

import scala.collection.immutable.Stream.iterate

object CollatzSequence {

  def apply(n: Int): Int = {
    require(n > 1)
    ((1 to n) map (n => n -> collatzSequenceLength(n)) maxBy (_._2))._1
  }

  private def collatzSequenceLength(start: Int): Int = iterate(start)(nextInSequence) takeWhile (_ != 1) size

  private def nextInSequence(n: Int): Int = if (n % 2 == 0) n / 2 else n * 3 + 1

}
