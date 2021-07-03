// 2021.03.28 20:50
//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int solution(vector<vector<int>> board, vector<int> moves) {
//	int answer = 0;
//
//	stack<int> basket;
//
//	vector<int> tops;
//	int width = board[0].size();
//	int height = board.size();
//	for (int i = 0; i < width; i++) {
//		int j;
//		for (j = 0; j < height; j++) {
//			if (board[j][i] != 0) {
//				break;
//			}
//		}
//		tops.push_back(j);
//	}
//
//	for (int i = 0; i < moves.size(); i++) {
//		int move = moves[i] - 1;
//		int top = tops[move];
//		if (top != height) {
//			int doll = board[top][move];
//			if (basket.empty()) {
//				basket.push(doll);
//			}
//			else {
//				int top_doll = basket.top();
//				if (doll == top_doll) {
//					basket.pop();
//					answer += 2;
//				} 
//				else {
//					basket.push(doll);
//				}
//			}
//
//			tops[move]++;
//		}
//	}
//
//	return answer;
//}