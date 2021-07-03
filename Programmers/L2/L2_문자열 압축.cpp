//// 2021.04.05 16:37
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(string s) {
//	int min_len = s.length();
//	int max_len = s.length() / 2;
//	string original = s;
//	for (int len = 1; len <= max_len; len++) {
//		s = original;
//		for (int i = 0; i < s.length();) {
//			int same_count = 0;
//			string comp_str = s.substr(i, len);
//			for (int j = i + len; j < s.length(); j += len) {
//				if (comp_str == s.substr(j, len)) same_count++;
//				else break;
//			}
//
//			if (same_count != 0) {
//				string temp = "";
//				int digit = 0;
//				int num = same_count + 1;
//				while (num > 0) {
//					temp = (char)(num % 10 + '0') + temp;
//					num /= 10;
//				}
//				digit = temp.length();
//				s = s.substr(0, i) + temp + s.substr(i, len) + s.substr(i + len * (same_count + 1), s.size() - i + len * num);
//				i += digit;
//			}
//			else i += len;
//		}
//		min_len = min(min_len, (int)s.length());
//	}
//	return min_len;
//}
//
//void main() {
//	//solution("aabbaccc");
//	solution("ababcdcdababcdcd");
//}