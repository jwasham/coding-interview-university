package leet_code.medium

object BinaryGCD {

  def apply(a: Int, b: Int): Int = {
    require(a > -1 && b > -1)
    if (a == b) a
    else if (a == 0) b
    else if (b == 0) a
    else if (isEven(a)) {
      if (isEven(b)) apply(a >> 1, b >> 1) << 1 else apply(a >> 1, b)
    }
    else {
      if (isEven(b)) apply(a, b >> 1) else apply(Math.abs(a - b) >> 1, Math.min(a, b))
    }
  }

  private def isEven(n: Int): Boolean = (n & 1) == 0

}
