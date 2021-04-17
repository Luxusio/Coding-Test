//// 2021.04.17 17:06
//#include <vector>
//using namespace std;
//
//void move(vector<vector<int>>& log, int from, int to, int other, int amount) {
//	if (amount == 1) log.push_back({ from, to });
//	else {
//		move(log, from, other, to, amount - 1);
//		move(log, from, to, other, 1);
//		move(log, other, to, from, amount - 1);
//	}
//}
//
//vector<vector<int>> solution(int n) {
//	vector<vector<int>> log;
//	move(log, 1, 3, 2, n);
//	return log;
//}
//
//void main() {
//	solution(3);
//}