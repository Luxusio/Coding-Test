import java.util.*
import kotlin.collections.ArrayList

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()

    val distanceList = ArrayList<Int>(n - 1)
    for (reserved in 0 until n - 1) {
        distanceList.add(scanner.nextInt())
    }

    val priceList = ArrayList<Int>(n)
    for (reserved in 0 until n) {
        priceList.add(scanner.nextInt())
    }

    var totalPrice = 0L
    var minPrice = Long.MAX_VALUE
    for (idx in 0 until n - 1) {
        if (priceList[idx] < minPrice) minPrice = priceList[idx].toLong()
        totalPrice += minPrice * distanceList[idx]
    }

    print(totalPrice)
}