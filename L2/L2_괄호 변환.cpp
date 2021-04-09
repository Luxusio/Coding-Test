//// 2021.04.09 12:28
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//bool is_right(string s) {
//	int count = 0;
//	for (char c : s) {
//		if (c == '(') count++;
//		else count--;
//		if (count < 0) return false;
//	}
//	return count == 0;
//}
//
//string solution(string p) {
//	if (p.length() == 0) return p;
//
//	int idx;
//	int lc = 0, rc = 0;
//	for (idx = 0; idx < p.length(); idx++) {
//		if (p[idx] == '(') lc++;
//		else rc++;
//		if (lc == rc) break;
//	}
//
//	string u = p.substr(0, ++idx);
//	string v = p.substr(idx);
//
//	if (is_right(u)) return u + solution(v);
//	else {
//		u = u.substr(1, u.length() - 2);
//		for (int i = 0; i < u.length(); i++) {
//			u[i] = u[i] == '(' ? ')' : '(';
//		}
//		return "(" + solution(v) + ")" + u;
//	}
//}