//// 2021.04.17 15:58
//#include <vector>
//using namespace std;
//
//long long solution(int n) {
//	if (n < 3) return n;
//	vector<int> dp(n + 1, 0);
//	dp[1] = 1;
//	dp[2] = 2;
//	for (int i = 3; i <= n; i++) {
//		dp[i] = dp[i - 1] + dp[i - 2] % 1234567;
//	}
//	return dp[n];
//}