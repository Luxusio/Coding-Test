fun main() {
    val n = readLine()!!.toInt()
    val dp = Array(5001) { -1 }
    dp[3] = 1
    dp[5] = 1
    for (i in 6..n) {
        if (dp[i - 3] != -1) dp[i] = dp[i - 3] + 1
        if (dp[i - 5] != -1) dp[i] = dp[i - 5] + 1
    }
    print(dp[n])
}