//// 2021.04.11 18:25
//#include <string>
//#include <algorithm>
//using namespace std;
//
//string solution(string s) {
//	bool is_minus = false;
//	int num = 0, min_num = 2147483647, max_num = -2147483647;
//	for (char c : s) {
//		if (c == ' ') {
//			if (is_minus) num = -num;
//			min_num = min(num, min_num);
//			max_num = max(num, max_num);
//			num = 0;
//			is_minus = false;
//		}
//		else if (c == '-') is_minus = true;
//		else num = num * 10 + c - '0';
//	}
//	if (is_minus) num = -num;
//	min_num = min(num, min_num);
//	max_num = max(num, max_num);
//	return to_string(min_num) + " " + to_string(max_num);
//}