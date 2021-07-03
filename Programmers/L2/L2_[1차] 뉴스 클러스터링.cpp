//// 2021.04.13 13:58
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
//int solution(string str1, string str2) {
//	unordered_map<string, int> map1, map2;
//	transform(str1.begin(), str1.end(), str1.begin(), [](unsigned char c) { return tolower(c); });
//	transform(str2.begin(), str2.end(), str2.begin(), [](unsigned char c) { return tolower(c); });
//	string temp;
//	for (int i = str1.size() - 2; i >= 0; i--)
//		if ('a' <= (temp = str1.substr(i, 2))[0] && temp[0] <= 'z' && 'a' <= temp[1] && temp[1] <= 'z') map1[temp]++;
//	for (int i = str2.size() - 2; i >= 0; i--)
//		if ('a' <= (temp = str2.substr(i, 2))[0] && temp[0] <= 'z' && 'a' <= temp[1] && temp[1] <= 'z') map2[temp]++;
//
//	int gyo = 0, hap = 0;
//	while (!map1.empty()) {
//		auto it1 = map1.begin();
//		auto it2 = map2.find(it1->first);
//		if (it2 != map2.end()) {
//			gyo++;
//			if (--it2->second == 0) map2.erase(it2);
//		}
//		hap++;
//		if (--it1->second == 0) map1.erase(it1);
//	}
//	for (pair<string, int> p : map2) hap += p.second;
//
//	if (hap == 0) return 65536;
//	return 65536 * gyo / hap;
//}
//
//void main() {
//	solution("FRANCH", "french");
//}