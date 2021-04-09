//// 2021.04.09 17:18
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int n) {
//	vector<int> answer(n * (n + 1) / 2);
//	int count = 0;
//	int x = 0, y = -1;
//	int dir = -1;
//	for (int i = n; i > 0; i--) {
//		dir = (dir + 1) % 3;
//
//		for (int j = 0; j < i; j++) {
//			if (dir == 0) y++;
//			else if (dir == 1) x++;
//			else if (dir == 2) {
//				x--;
//				y--;
//			}
//			answer[y * (y + 1) / 2 + x] = ++count;
//		}
//	}
//
//	return answer;
//}