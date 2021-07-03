//// 2021.04.04 18:30
//#include <string>
//
//using namespace std;
//
//int solution(string s) {
//	int answer = 0;
//	bool plus = true;
//	for (char c : s) {
//		if (c == '+') plus = true;
//		else if (c == '-') plus = false;
//		else answer = answer * 10 + c - '0';
//	}
//	return plus ? answer : -answer;
//}