package leet_code.easy

object ReverseInt {

  def apply(in: Int): Int = {
    val neg = in < 0
    var varIn = if (neg) in * -1 else in

    var out = 0
    while (varIn > 0) {
      val lowestDigit = varIn % 10
      val newOut = out * 10 + lowestDigit
      // Overflow check
      if ((newOut - lowestDigit) / 10 != out) return 0
      out = newOut
      varIn /= 10
    }
    if (neg) out * -1 else out
  }

}
