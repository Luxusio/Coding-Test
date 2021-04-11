//// 2021.04.11 18:16
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<vector<int>> land) {
//	vector<int> dp(4), curr(4);
//	for (int i = land.size() - 1; i >= 0; i--) {
//		for (int j = 0; j < 4; j++) {
//			int max_score = 0;
//			for (int k = 0; k < 4; k++) if (k != j) max_score = max(max_score, dp[k]);
//			curr[j] = max_score + land[i][j];
//		}
//		dp = curr;
//	}
//	return *max_element(dp.begin(), dp.end());
//}