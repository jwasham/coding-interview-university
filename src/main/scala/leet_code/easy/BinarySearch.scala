package leet_code.easy

object BinarySearch {

  def apply(data: Seq[Int], key: Int): Int = {
    var low = 0
    var high = data.length - 1

    while (low < high) {
      val middle = (low + high) / 2

      if (data(middle) == key) {
        return middle
      }
      if (data(middle) < key) {
        low = middle + 1
      }
      if (data(middle) > key) {
        high = middle - 1
      }
    }
    -1
  }

}
