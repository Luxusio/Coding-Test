fun main() {
    val t = readLine()!!.toInt()
    val ns = ArrayList<Int>(t)
    for (i in 0 until t) {
        ns.add(readLine()!!.toInt())
    }

    val dp = Array(101) { 0L }
    dp[1] = 1
    dp[2] = 1
    dp[3] = 1
    dp[4] = 2
    dp[5] = 2
    for (i in 6..100) {
        dp[i] = dp[i - 1] + dp[i - 5]
    }

    for (n in ns) {
        println(dp[n])
    }
}