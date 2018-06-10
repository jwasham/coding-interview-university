package codingame.practice.easy

object AsciiArt {

  def apply(inputLines: Seq[String], width: Int, text: String): String = {
    val asciiLetters = inputLines.map(_.grouped(width).toList).transpose
      .ensuring(_.size == 27, "Input must have 27 ascii character representations each with given width")
    text.map(c => asciiLetters(indexFor(c))).transpose.map(_.mkString).mkString("\n")
  }

  private def indexFor(c: Char): Int = if (c.isLower) c - 'a' else if (c.isUpper) c - 'A' else 26

}

