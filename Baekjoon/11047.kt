import java.util.*

fun main() {

    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    var k = scanner.nextInt()

    val valueList = ArrayList<Int>(n)
    for (reserved in 0 until n) {
        valueList.add(scanner.nextInt())
    }

    var sum = 0
    for (value in valueList.reversed()) {
        sum += k / value
        k %= value
    }

    print(sum)
}
