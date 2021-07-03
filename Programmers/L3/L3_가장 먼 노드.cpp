//// 2021.04.04 21:42
//#include <vector>
//#include <unordered_set>
//#include <queue>
//
//using namespace std;
//
//bool visited[20001];
//
//int solution(int n, vector<vector<int>> edge) {
//	vector<unordered_set<int>> connection(n + 1);
//	for (vector<int> e : edge) {
//		connection[e[0]].insert(e[1]);
//		connection[e[1]].insert(e[0]);
//	}
//	int now_visited = 0;
//	queue<int> visit, next_visit;
//	visit.push(1);
//	visited[1] = true;
//	while (!visit.empty()) {
//		next_visit = queue<int>();
//		while(!visit.empty()) {
//			int from_node = visit.front();
//			visit.pop();
//			for (int node : connection[from_node]) {
//				if (!visited[node]) {
//					next_visit.push(node);
//					visited[node] = true;
//				}
//			}
//		}
//		if (next_visit.size() == 0) return now_visited;
//		now_visited = next_visit.size();
//		visit = next_visit;
//	}
//
//	return now_visited;
//}
//
//void main() {
//	printf("%d\n", solution(6, { {3, 6},{4, 3},{3, 2},{1, 3},{1, 2},{2, 4},{5, 2} }));
//}