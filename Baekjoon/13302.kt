import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter
import java.lang.Integer.min
import java.util.*

var n = 0
val dp = Array(101) { Array(101) { Int.MAX_VALUE } }
val restDays = Array(101) { false }

fun dfs(date: Int, coupon: Int): Int {
    if (date > n) return 0
    var answer = dp[date][coupon]
    if (answer != Int.MAX_VALUE) return answer
    if (restDays[date]) {
        answer = dfs(date + 1, coupon)
    }
    else {
        answer = min(answer, dfs(date + 1, coupon) + 10000)
        answer = min(answer, dfs(date + 3, coupon + 1) + 25000)
        answer = min(answer, dfs(date + 5, coupon + 2) + 37000)
        if (coupon >= 3) answer = min(answer, dfs(date + 1, coupon - 3))
    }
    dp[date][coupon] = answer
    return answer
}

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))

    val st = StringTokenizer(br.readLine(), " ")
    n = st.nextToken().toInt()
    if (st.nextToken().toInt() > 0) {
        for (restDay in br.readLine().split(' ')) {
            restDays[restDay.toInt()] = true
        }
    }

    bw.write(dfs(1, 0).toString())
    bw.flush()
    bw.close()
}