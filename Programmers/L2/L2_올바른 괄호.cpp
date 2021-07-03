//// 2021.04.09 22:06
//#include <string>
//
//using namespace std;
//
//bool solution(string s)
//{
//	int count = 0;
//	for (char c : s) {
//		count += c == '(' ? 1 : -1;
//		if (count < 0) return false;
//	}
//	return count == 0;
//}