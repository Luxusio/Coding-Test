fun main() {
    val t = readLine()!!.toInt()
    val ns = ArrayList<Int>(t)
    for (i in 0 until t) {
        ns.add(readLine()!!.toInt())
    }

    val dp = Array(11) { 0 }
    dp[1] = 1
    dp[2] = 2
    dp[3] = 4
    for (n in ns) {
        for (i in 4..n) {
            dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1]
        }
        println(dp[n])
    }
}