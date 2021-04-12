//// 2021.04.312 18:09
//#include <string>
//using namespace std;
//
//string solution(string s) {
//	bool make_upper = true;
//	for (char& c : s) {
//		if (c == ' ') make_upper = true;
//		else if (make_upper) {
//			make_upper = false;
//			if ('a' <= c && c <= 'z') c -= 32;
//		}
//		else if ('A' <= c && c <= 'Z') c += 32;
//	}
//	return s;
//}