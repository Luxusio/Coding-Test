//// 2021.04.20 14:46
//#include <vector>
//using namespace std;
//
//bool can_build_check(vector<vector<pair<bool, bool>>>& map, vector<int> b, int n) {
//	if (b[1] == 0) return true;
//	if (b[2] == 0) { // pillar
//		return map[b[1] - 1][b[0]].first ||	// down pillar check
//			(b[0] > 0 ? map[b[1]][b[0] - 1].second : false) ||	// left platform check
//			map[b[1]][b[0]].second;	// right platform check
//	}
//	else { // platform
//		return map[b[1] - 1][b[0]].first ||	// left pillar check
//			(b[0] < n ? map[b[1] - 1][b[0] + 1].first : false) ||	// right pillar check
//			((b[0] > 0 && b[0] < n) ? (map[b[1]][b[0] - 1].second && map[b[1]][b[0] + 1].second) : false); // both platform check
//	}
//}
//
//vector<vector<int>> solution(int n, vector<vector<int>> build_frame) {
//	vector<vector<pair<bool, bool>>> map(n + 1, vector<pair<bool, bool>>(n + 1, { false, false }));
//	for (vector<int> b : build_frame) {
//		if (b[3] == 1) { // build
//			bool can_build = can_build_check(map, b, n);
//
//			if (can_build) {
//				if (b[2] == 0) map[b[1]][b[0]].first = true;
//				else map[b[1]][b[0]].second = true;
//			}
//		}
//		else { // remove
//			int check_lx, check_rx, check_y;
//			if (b[2] == 0) {
//				check_y = b[1] + 1;
//				check_lx = b[0] - 1;
//				check_rx = b[0];
//				map[b[1]][b[0]].first = false;
//			}
//			else {
//				check_y = b[1];
//				check_lx = b[0] - 1;
//				check_rx = b[0] + 1;
//				map[b[1]][b[0]].second = false;
//			}
//
//			// check left platform
//			bool can_remove_left = map[check_y][check_lx].second ? can_build_check(map, { check_lx, check_y, 1, 1 }, n) :
//				map[check_y][check_lx + 1].first ? can_build_check(map, { check_lx + 1, check_y, 0, 1 }, n) : true;
//
//			// check right platform
//			bool can_remove_right = map[check_y][check_rx].second ? can_build_check(map, { check_rx, check_y, 1, 1 }, n) :
//				map[check_y][check_rx].first ? can_build_check(map, { check_rx, check_y, 0, 1 }, n) : true;
//
//			if (!(can_remove_left && can_remove_right)) {
//				if (b[2] == 0) map[b[1]][b[0]].first = true;
//				else map[b[1]][b[0]].second = true;
//			}
//		}
//	}
//
//	vector<vector<int>> answer;
//	for (int x = 0; x <= n; x++) {
//		for (int y = 0; y <= n; y++) {
//			if (map[y][x].first) answer.push_back({ x, y, 0 });
//			if (map[y][x].second) answer.push_back({ x, y, 1 });
//		}
//	}
//
//	return answer;
//}
//
//void main() {
//	solution(5, { {1, 0, 0, 1}, {1, 1, 1, 1}, {2, 1, 0, 1}, {2, 2, 1, 1}, {5, 0, 0, 1}, {5, 1, 0, 1}, {4, 2, 1, 1}, {3, 2, 1, 1}, {5, 1, 0, 0 } });
//	//solution(5, { {0,0,0,1},{2,0,0,1},{4,0,0,1},{0,1,1,1},{1,1,1,1},{2,1,1,1},{3,1,1,1},{2,0,0,0},{1,1,1,0},{2,2,0,1} });
//}