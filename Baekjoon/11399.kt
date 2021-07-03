import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()

    val timeList = ArrayList<Int>(n)
    for (reserved in 0 until n) {
        timeList.add(scanner.nextInt())
    }

    timeList.sortWith { o1, o2 -> o1 - o2 }

    var total = 0
    var sum = 0
    for (i in 0 until n) {
        sum += timeList[i]
        total += sum
    }

    print(total)
}