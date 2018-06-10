package leet_code.medium

import scala.collection.mutable.ListBuffer

object GenerateParenthesis {

  def apply(n: Int): Set[String] = {
    require(n > -1)
    compute(ListBuffer[String](), "", 0, 0, 2 * n).toSet
  }

  private def compute(output: ListBuffer[String], temp: String, open: Int, close: Int, size: Int): Seq[String] = {
    if (temp.length == size) output += temp
    if (open < size / 2) compute(output, temp + "(", open + 1, close, size)
    if (close < open) compute(output, temp + ")", open, close + 1, size)
    output
  }

}
