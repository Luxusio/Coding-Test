#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool can_build_check(vector<vector<pair<bool, bool>>>& map, vector<int> b, int n) {
	if (b[1] == 0) return true;
	if (b[2] == 0) { // pillar
		return map[b[1] - 1][b[0]].first ||	// down pillar check
			(b[0] > 0 ? map[b[1]][b[0] - 1].second : false) ||	// left platform check
			map[b[1]][b[0]].second;	// right platform check
	}
	else { // platform
		return map[b[1] - 1][b[0]].first ||	// left pillar check
			(b[0] < n ? map[b[1] - 1][b[0] - 1].first : false) ||	// right pillar check
			((b[0] > 0 && b[0] < n) ? (map[b[1]][b[0] - 1].second && map[b[1]][b[0] + 1].second) : false); // both platform check
	}
}

bool can_remove_check_left(vector<vector<pair<bool, bool>>>& map, int check_x, int check_y) {
	while (check_x > 0 && map[check_y][check_x].second) {
		if (map[check_y - 1][check_x].first) return true;
		check_x--;
	}
	return false;
}

bool can_remove_check_right(vector<vector<pair<bool, bool>>>& map, int check_x, int check_y, int n) {
	while (check_x < n && map[check_y][check_x].second) {
		if (map[check_y - 1][check_x + 1].first) return true;
		check_x++;
	}
	return false;
}

vector<vector<int>> solution(int n, vector<vector<int>> build_frame) {
	vector<vector<pair<bool, bool>>> map(n + 1, vector<pair<bool, bool>>(n + 1, { false, false }));
	for (vector<int> b : build_frame) {
		if (b[3] == 1) { // build
			bool can_build = can_build_check(map, b, n);

			cout << "build " << b[0] << ", " << b[1] << "(" << b[2] << ")" << (can_build ? "true" : "false") << endl;
			if (can_build) {
				if (b[2] == 0) map[b[1]][b[0]].first = true;
				else if (b[2] == 1) map[b[1]][b[0]].second = true;
			}
		}
		else { // remove
			bool can_remove;

			int check_x, check_y;
			if (b[2] == 0) {
				check_y = b[1] + 1;

				bool platform_exists = false;
				bool can_remove_left = true, can_remove_right = true, can_remove_mid = true;



				cout << "remove " << b[0] << ", " << b[1] << "(0)" << (can_remove_left ? "true " : "false ") << (can_remove_right ? "true " : "false ") << (can_remove_mid ? "true " : "false ") << endl;

			}
			else {
				bool can_remove_left = true;
				bool can_remove_right = true;

				cout << "remove " << b[0] << ", " << b[1] << "(1)" << (can_remove_left ? "true " : "false ") << (can_remove_right ? "true " : "false ") << endl;
			}

			if (can_remove) {
				if (b[2] == 0) map[b[1]][b[0]].first = false;
				else if (b[2] == 1) map[b[1]][b[0]].second = false;
			}
		}
	}

	vector<vector<int>> answer;
	for (int x = 0; x <= n; x++) {
		for (int y = 0; y <= n; y++) {
			if (map[y][x].first) {
				answer.push_back({ x, y, 0 });
				cout << x << ", " << y << ", 0" << endl;
			}
			if (map[y][x].second) {
				answer.push_back({ x, y, 1 });
				cout << x << ", " << y << ", 1" << endl;
			}
		}
	}
	
	return answer;
}

void main() {
	//solution(5, { {1, 0, 0, 1}, {1, 1, 1, 1}, {2, 1, 0, 1}, {2, 2, 1, 1}, {5, 0, 0, 1}, {5, 1, 0, 1}, {4, 2, 1, 1}, {3, 2, 1, 1} });
	solution(5, { {0,0,0,1},{2,0,0,1},{4,0,0,1},{0,1,1,1},{1,1,1,1},{2,1,1,1},{3,1,1,1},{2,0,0,0},{1,1,1,0},{2,2,0,1} });
}