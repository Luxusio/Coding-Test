//// 2021.04.17 15:24
//#include <string>
//using namespace std;
//
//int solution(string s) {
//	for (int length = s.length(); length > 0; length--) {
//		int i_to = s.length() - length;
//		int half = length / 2;
//		for (int i = 0; i <= i_to; i++) {
//			bool same = true;
//			for (int j = 0; j < half; j++) {
//				if (s[i + j] != s[i + length - j - 1]) {
//					same = false;
//					break;
//				}
//			}
//			if (same) return length;
//		}
//	}
//	return 1;
//}