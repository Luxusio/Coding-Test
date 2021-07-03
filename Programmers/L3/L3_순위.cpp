// 2021.04.18 16:03
//#include <vector>
//#include <queue>
//using namespace std;
//
//void bfs(vector<vector<pair<int, bool>>>& graph, vector<bool>& visited, int from, bool direction) {
//	queue<int> bfs;
//	bfs.push(from);
//
//	while (!bfs.empty()) {
//		int node = bfs.front(); bfs.pop();
//		visited[node] = true;
//		for (pair<int, bool> conn : graph[node]) {
//			if (conn.second == direction && !visited[conn.first]) bfs.push(conn.first);
//		}
//	}
//}
//
//int solution(int n, vector<vector<int>> results) {
//	vector<vector<pair<int, bool>>> graph(n+1); // player, win
//	for (vector<int> result : results) {
//		graph[result[0]].push_back({ result[1], true });
//		graph[result[1]].push_back({ result[0], false });
//	}
//	
//	int answer = 0;
//	for (int i = 1; i <= n; i++) {
//		vector<bool> visited(n + 1, false);
//		bfs(graph, visited, i, true);
//		bfs(graph, visited, i, false);
//
//		int count = 0;
//		for (int j = 1; j <= n; j++)
//			if (visited[j]) count++;
//		if (count == n) answer++;
//	}
//
//	return answer;
//}
//
//void main() {
//	solution(5, { {4, 3}, {4, 2}, {3, 2}, {1, 2}, {2, 5} });
//}