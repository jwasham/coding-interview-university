package leet_code.easy

object PowerXN {

  def apply(base: Int, exponent: Int): Int = {
    require(exponent > -1)
    if (exponent == 0) return 1
    val temp = apply(base, exponent / 2)
    if (exponent % 2 == 0) {
      temp * temp
    }
    else {
      base * temp * temp
    }
  }

}
