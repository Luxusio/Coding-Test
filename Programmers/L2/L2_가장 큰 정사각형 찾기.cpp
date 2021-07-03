//// 2021.04.10 01:46
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<vector<int>> board)
//{
//	int big = 0;
//	for (vector<int> v : board) {
//		if (find(v.begin(), v.end(), 1) != v.end()) {
//			big = 1;
//			break;
//		}
//	}
//
//	int y_from = board.size() - 2;
//	int x_from = board[0].size() - 2;
//
//	while(x_from >= 0 || y_from >= 0) {
//		x_from = max(x_from, 0);
//		y_from = max(y_from, 0);
//
//		for (int i = x_from; i >= 0; i--) {
//			if (board[y_from][i]) {
//				int m = min(board[y_from + 1][i + 1], min(board[y_from + 1][i], board[y_from][i + 1]));
//				if (m > 0) {
//					board[y_from][i] = m + 1;
//					big = max(m + 1, big);
//				}
//			}
//		}
//
//		for (int i = y_from; i >= 0; i--) {
//			if (board[i][x_from]) {
//				int m = min(board[i + 1][x_from + 1], min(board[i + 1][x_from], board[i][x_from + 1]));
//				if (m > 0) {
//					board[i][x_from] = m + 1;
//					big = max(m + 1, big);
//				}
//			}
//		}
//
//		x_from--;
//		y_from--;
//	}
//
//	return big * big;
//}