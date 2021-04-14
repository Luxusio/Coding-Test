//// 2021.04.14 11:14
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//struct compare {
//	bool operator()(pair<int, int>& p1, pair<int, int>& p2) {
//		return p1.second > p2.second;
//	}
//};
//
//int solution(int N, vector<vector<int>> road, int K) {
//	int answer = 0, temp;
//	vector<unordered_map<int, int>> map(N + 1);
//	for (vector<int> r : road) {
//		map[r[0]][r[1]] = (temp = map[r[0]][r[1]]) == 0 ? r[2] : min(r[2], temp);
//		map[r[1]][r[0]] = (temp = map[r[1]][r[0]]) == 0 ? r[2] : min(r[2], temp);
//	}
//
//	vector<int> min_distance(N + 1, 2147483647), visited(N + 1, 0);
//	min_distance[1] = 0;
//
//	priority_queue<pair<int, int>, vector<pair<int, int>>, compare> to_visit;
//	to_visit.push(pair<int, int>{ 1, 0 } );
//	while (!to_visit.empty()) {
//		int node = to_visit.top().first; to_visit.pop();
//		if (visited[node]) continue;
//		for (pair<int, int> p : map[node]) {
//			min_distance[p.first] = min(min_distance[node] + p.second, min_distance[p.first]);
//			to_visit.push(pair<int, int>{ p.first, min_distance[p.first] });
//		}
//		visited[node] = true;
//	}
//
//	for (int dist : min_distance) if (dist <= K) answer++;
//	return answer;
//}