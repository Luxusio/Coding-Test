//// 2021.04.08 16:11
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int solution(string name) {
//	int answer = 0;
//	auto cursor = 0;
//	while (1) {
// 		answer += min(name[cursor] - 'A', 'Z' - name[cursor] + 1);
//		name[cursor] = 'A';
//
//		int l_dist = 0;
//		int left = cursor;
//		do {
//			if (name[left] != 'A') break;
//			left = left == 0 ? name.length() - 1 : left - 1;
//			l_dist++;
//		} while (left != cursor);
//
//		int r_dist = 0;
//		int right = cursor;
//		do {
//			if (name[right] != 'A') break;
//			right = right + 1 == name.length() ? 0 : right + 1;
//			r_dist++;
//		} while (right != cursor);
//
//		if (cursor == left && cursor == right) break;
//		if (l_dist < r_dist) {
//			cursor = left;
//			answer += l_dist;
//		}
//		else {
//			cursor = right;
//			answer += r_dist;
//		}
//	}
//
//	return answer;
//}
//
//#include <iostream>
//void main() {
//	cout << solution("JAZ") << endl;
//}