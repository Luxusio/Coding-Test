//// 2021.04.04 19:31
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(vector<int> numbers, string hand) {
//	string answer = "";
//	vector<char> l = { 1, 4 };
//	vector<char> r = { 3, 4 };
//	bool use_right = hand == "right";
//	vector<vector<char>> position = {
//		{2, 4},
//		{1, 1}, {2, 1}, {3, 1},
//		{1, 2}, {2, 2}, {3, 2},
//		{1, 3}, {2, 3}, {3, 3}
//	};
//	for (int num : numbers) {
//		bool move_r;
//		if (position[num][0] == 1) move_r = false;
//		else if (position[num][0] == 3) move_r = true;
//		else {
//			int l_dist = abs(position[num][0] - l[0]) + abs(position[num][1] - l[1]);
//			int r_dist = abs(position[num][0] - r[0]) + abs(position[num][1] - r[1]);
//			if (l_dist < r_dist) move_r = false;
//			else if (l_dist > r_dist) move_r = true;
//			else move_r = use_right;
//		}
//
//		if (move_r) {
//			r = position[num];
//			answer += "R";
//		}
//		else {
//			l = position[num];
//			answer += "L";
//		}
//	}
//
//	return answer;
//}