import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter

val dp: Array<Pair<Int, Int>?> = arrayOfNulls(41)
fun f(n: Int): Pair<Int, Int> {
    if (dp[n] != null) return dp[n]!!
    val r1 = f(n-1)
    val r2 = f(n - 2)
    dp[n] = Pair(r1.first + r2.first, r1.second + r2.second)
    return dp[n]!!
}
fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val bw = BufferedWriter(OutputStreamWriter(System.out))

    val n = br.readLine().toInt()
    val caseList = ArrayList<Int>(n)
    for (reserved in 0 until n) {
        caseList.add(br.readLine().toInt())
    }

    dp[0] = Pair(1, 0)
    dp[1] = Pair(0, 1)
    for (case in caseList) {
        val r = f(case)
        bw.write("${r.first} ${r.second}\n")
    }
    bw.flush()
    bw.close()
}