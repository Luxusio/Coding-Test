#include <vector>
#include <queue>
using namespace std;

void bfs(int n, vector<vector<pair<int, bool>>>& graph, vector<bool>& decided, bool direction) {
	vector<bool> visited;

	// 1. find deepest node
	int deepest = 1;
	bool found = true;
	while (found) {
		found = false;
		for (pair<int, bool> conn : graph[deepest]) {
			if (conn.second != direction) {
				found = true;
				deepest = conn.first;
				break;
			}
		}
	}

	// 2. bfs
	queue<int> to_bfs, bfs;
	to_bfs.push(deepest);
	while (!to_bfs.empty()) {
		int bfs_start = to_bfs.front(); to_bfs.pop();
		bfs.push(bfs_start);
		for (pair<int, bool> conn : graph[bfs_start]) {
			if (conn.second == direction && !decided[conn.first]) to_bfs.push(conn.first);
		}
		visited = decided;
		while (!bfs.empty()) {
			int node = bfs.front(); bfs.pop();
			visited[node] = true;
			for (pair<int, bool> conn : graph[node]) {
				if (conn.second == direction && !visited[conn.first]) bfs.push(conn.first);
			}
		}
		int count = 0;
		for (bool b : visited) if (b) count++;
		if (count == n) decided[bfs_start] = true;
		else break;
	}
}

int solution(int n, vector<vector<int>> results) {
	vector<vector<pair<int, bool>>> graph(n+1); // player, win
	vector<bool> decided(n + 1, false), visited;
	for (vector<int> result : results) {
		graph[result[0]].push_back({ result[1], true });
		graph[result[1]].push_back({ result[0], false });
	}
	bfs(n, graph, decided, false);
	bfs(n, graph, decided, true);

	int answer = 0;
	for (bool b : decided) if (b) answer++;
	return answer;
}

void main() {
	solution(5, { {4, 3}, {4, 2}, {3, 2}, {1, 2}, {2, 5} });
}