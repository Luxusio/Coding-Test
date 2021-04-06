//// 2021.04.03 16:25
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int answer = 0;
//int g_target;
//vector<int> g_numbers;
//
//void dfs(int sum, int idx) {
//	if (idx == g_numbers.size()) {
//		if(sum == g_target) {
//			answer++;
//		}
//	}
//	else {
//		dfs(sum + g_numbers[idx], idx + 1);
//		dfs(sum - g_numbers[idx], idx + 1);
//	}
//}
//
//int solution(vector<int> numbers, int target) {
//	g_numbers = numbers;
//	g_target = target;
//	dfs(0, 0);
//	return answer;
//}