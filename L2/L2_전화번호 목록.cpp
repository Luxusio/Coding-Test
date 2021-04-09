//// 2021.04.10 02:06
//#include <string>
//#include <vector>
//#include <unordered_set>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(string s1, string s2) {
//	return s1.length() > s2.length();
//}
//
//bool solution(vector<string> phone_book) {
//	sort(phone_book.begin(), phone_book.end(), compare);
//	unordered_set<string> set;
//	for (string phone : phone_book) {
//		if (set.find(phone) != set.end()) return false;
//		for (int i = 1; i < phone.length(); i++) {
//			set.insert(phone.substr(0, i));
//		}
//	}
//	return true;
//}