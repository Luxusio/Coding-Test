import java.util.*
import kotlin.collections.ArrayList

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()

    val conferenceList = ArrayList<Pair<Int, Pair<Int, Int>>>(n - 1)
    for (reserved in 0 until n) {
        val start = scanner.nextInt()
        val end = scanner.nextInt()
        conferenceList.add(Pair(end-start, Pair(start, end)))
    }

    conferenceList.sortWith { a, b->
        if (a.second.first != b.second.first)
            a.second.first - b.second.first
        else a.first - b.first
    }

    var answer = 1
    var prev = conferenceList[0]
    for (i in 1 until n) {
        val curr = conferenceList[i]
        if (curr.second.first == prev.second.first && prev.first != 0) {
            continue
        }
        if (curr.second.first >= prev.second.second) {
            answer++
            prev = curr
        }
        else if (curr.second.second < prev.second.second) {
            prev = curr
        }
    }

    print(answer)
}