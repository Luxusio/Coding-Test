//// 2021.04.03 20:27
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<string> visited(10001);
//bool ticket_used[10001];
//
//bool compare(vector<string> v1, vector<string> v2) {
//	return v1[1] < v2[1];
//}
//
//bool dfs(vector<vector<string>>& tickets, int idx) {
//	if (idx == tickets.size()) {
//		return true;
//	}
//	for (int i = 0; i < tickets.size(); i++) {
//		if (!ticket_used[i] && visited[idx] == tickets[i][0]) {
//			ticket_used[i] = true;
//			visited[idx + 1] = tickets[i][1];
//			if (dfs(tickets, idx + 1))
//				return true;
//			ticket_used[i] = false;
//		}
//	}
//	return false;
//}
//
//vector<string> solution(vector<vector<string>> tickets) {
//	sort(tickets.begin(), tickets.end(), compare);
//
//	visited[0] = "ICN";
//	dfs(tickets, 0);
//
//	return vector<string>(visited.begin(), visited.begin() + tickets.size() + 1);
//}