//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string s) {
//	string answer = "";
//
//	int len = s.length();
//
//
//	int idx = 0;
//	for (int i = 0; i < len; i++) {
//		char c = s[i];
//		
//		if (c == ' ') {
//			idx = 0;
//			answer += " ";
//		}
//		else {
//			if (65 <= c && c <= 90) {
//				c += 32;
//			}
//
//			// Big letter
//			if (idx % 2 == 0) {
//				answer += (c - 32);
//			}
//			// small letter
//			else {
//				answer += c;
//			}
//			idx++;
//		}
//	}
//
//	return answer;
//}
