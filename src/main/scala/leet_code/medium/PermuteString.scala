package leet_code.medium

import scala.collection.mutable

object PermuteString {

  def apply(s: String): Set[String] = {
    compute("", s, mutable.Set[String]()).toSet
  }

  private def compute(prefix: String, string: String, res: mutable.Set[String]): Seq[String] = {
    if (string.length == 0 && !res.contains(prefix)) res += prefix
    else string.indices foreach (i => compute(prefix + string.charAt(i), string.substring(0, i) + string.substring(i + 1, string.length), res))
    res.toSeq
  }


}
