//// 2021.04.04 18:34
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string s, int n) {
//	string answer = "";
//	for (char c : s) {
//		if (c == ' ') answer += c;
//		else if ('a' <= c && c <= 'z') answer += (c + n - 'a') % 26 + 'a';
//		else answer += (c + n - 'A') % 26 + 'A';
//	}
//	return answer;
//}