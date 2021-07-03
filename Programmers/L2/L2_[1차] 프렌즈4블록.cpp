//// 2021.04.13 19:21
//#include <string>
//#include <vector>
//using namespace std;
//
//int solution(int m, int n, vector<string> board) {
//	vector<vector<bool>> boom(m, vector<bool>(n, false));
//	int answer = 0, i_to = m - 1, j_to = n - 1;
//	bool found;
//
//	do {
//		found = false;
//		for (int i = 0; i < i_to; i++) {
//			for (int j = 0; j < j_to; j++) {
//				char c = board[i][j];
//				if (c == 0) continue;
//				if (c == board[i + 1][j] && c == board[i][j + 1] && c == board[i + 1][j + 1]) {
//					if (!boom[i][j]) { boom[i][j] = true; answer++; }
//					if (!boom[i + 1][j]) { boom[i + 1][j] = true; answer++; }
//					if (!boom[i][j + 1]) { boom[i][j + 1] = true; answer++; }
//					if (!boom[i + 1][j + 1]) { boom[i + 1][j + 1] = true; answer++; }
//					found = true;
//				}
//			}
//		}
//		for (int i = i_to; i >= 0; i--) {
//			for (int j = 0; j < n; j++) {
//				if (boom[i][j]) {
//					boom[i][j] = false;
//					board[i][j] = 0;
//				}
//			}
//		}
//		for (int j = 0; j < n; j++) {
//			int count = 0;
//			for (int i = i_to; i >= 0; i--) {
//				if (board[i][j] == 0) count++;
//				else board[i + count][j] = board[i][j];
//			}
//			for (int i = 0; i < count; i++) board[i][j] = 0;
//		}
//		
//	} while (found);
//
//	return answer;
//}