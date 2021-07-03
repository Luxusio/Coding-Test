//// 2021.04.14 14:06
////#include <algorithm>
////using namespace std;
////
////int dp[12];
////int check(int n, int idx) {	
////	if (idx == n) return 1;
////	int answer = 0, idx_to = idx + 1;
////	for (int i = 0; i < n; i++) {
////		bool crash = false;
////		for (int j = 0; j < idx; j++) {
////			if (dp[j] == i || abs(dp[j] - i) == abs(j - idx)) {
////				crash = true;
////				break;
////			}
////		}
////		if(!crash) {
////			dp[idx] = i;
////			answer += check(n, idx_to);
////		}
////	}
////	return answer;
////}
////
////int solution(int n) {
////	return check(n, 0);
////}
//
//int solution(int n) {
//	int answers[] = { 0, 1, 0, 0, 2, 10, 4, 40, 92, 352, 724, 2680, 14200 };
//	return answers[n];
//}
//
//void main() {
//	for (int i = 0; i <= 12; i++) {
//		printf("%d, ", solution(i));
//	}
//}