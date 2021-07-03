////2021.04.12 18:41
//#include <string>
//#include <vector>
//using namespace std;
//
//vector<int> solution(string s) {
//	int zero_count = 0, count = 0, len;
//	while (s.length() > 1) {
//		len = 0; count++;
//		for (char c : s) c == '0' ? zero_count++ : len++;
//		s.clear();
//		while (len > 0) {
//			s = (len & 1 ? '1' : '0') + s;
//			len >>= 1;
//		}
//	}
//	return { count, zero_count };
//}