//// 2021.04.12 18:02
//#include <string>
//#include <vector>
//using namespace std;
//
//int solution(string dirs) {
//	vector<vector<bool>> map(11 * 11, { false, false, false, false }); // U D R L
//	int move, px, py, x = 5, y = 5, answer = 0;
//	for (char c : dirs) {
//		px = x; py = y;
//
//		if (c == 'U') { y--; move = 0; }
//		else if (c == 'D') { y++; move = 1; }
//		else if (c == 'R') { x++; move = 2; }
//		else if (c == 'L') { x--; move = 3; }
//
//		if (x < 0 || x == 11 || y < 0 || y == 11) {
//			x = px;
//			y = py;
//		}
//		else if (!map[y * 11 + x][move]) {
//			map[y * 11 + x][move] = true;
//			answer++;
//			if (move == 0) map[py * 11 + px][1] = true;
//			else if (move == 1) map[py * 11 + px][0] = true;
//			else if (move == 2) map[py * 11 + px][3] = true;
//			else if (move == 3) map[py * 11 + px][2] = true;
//		}
//	}
//
//	return answer;
//}