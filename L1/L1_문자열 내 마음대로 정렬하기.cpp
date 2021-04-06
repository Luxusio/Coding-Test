//// 2021.04.04 08:11
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int index;
//
//bool compare(string s1, string s2) {
//	if (s1[index] == s2[index]) {
//		for (int i = 0; i < s1.length(); i++) {
//			if (s1[i] == s2[i]) continue;
//			return s1[i] < s2[i];
//		}
//	}
//	return s1[index] < s2[index];
//}
//
//vector<string> solution(vector<string> strings, int n) {
//	index = n;
//	sort(strings.begin(), strings.end(), compare);
//	return strings;
//}