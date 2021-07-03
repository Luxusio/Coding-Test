//// 2021.04.03 17:01
//#include <string>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//unordered_set<int> not_visited;
//int g_n;
//
//void dfs(vector<vector<int>>& computers, int now_node) {
//	for (int i = 0; i < g_n; i++) {
//		// have to connected, not myself, not visited
//		if (computers[now_node][i] == 1 &&
//			now_node != i &&
//			not_visited.find(i) != not_visited.end()) {
//			not_visited.erase(not_visited.find(i));
//			dfs(computers, i);
//		}
//	}
//}
//
//int solution(int n, vector<vector<int>> computers) {
//	g_n = n;
//	int answer = 0;
//	for (int i = 0; i < n; i++) not_visited.insert(i);
//
//	while (!not_visited.empty()) {
//		int now_node = *not_visited.begin();
//		not_visited.erase(not_visited.begin());
//		answer++;
//
//		dfs(computers, now_node);
//	}
//
//	return answer;
//}