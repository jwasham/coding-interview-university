package leet_code.medium

import scala.collection.mutable

object BrickWall {

  def apply(wall: Seq[Seq[Int]]): Int = {
    val map = mutable.Map[Int, Int]()

    wall.foreach(row => {
      var dist = 0
      (0 until row.size - 1) foreach (i => {
        dist += row(i)
        map.update(dist, map.getOrElse(dist, 0) + 1)
      })
    })

    // Want least bricks crossed: size - path with most bricks missed
    wall.size - map.values.max
  }

}
