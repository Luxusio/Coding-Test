//// 2021.04.13 18:21
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
//bool compare1(pair<string, unordered_map<int, vector<string>>> p1, pair<string, unordered_map<int, vector<string>>> p2) {
//	return p1.first < p2.first;
//}
//
//bool compare2(pair<int, vector<string>> p1, pair<int, vector<string>> p2) {
//	return p1.first < p2.first;
//}
//
//vector<string> solution(vector<string> files) {
//	unordered_map<string, unordered_map<int, vector<string>>> map;
//
//	for (int i = 0; i < files.size();i++) {
//		string head;
//		int status = 0, num = 0;
//		for (int j = 0; j < files[i].length(); j++) {
//			char c = files[i][j];
//			if (status == 0) {
//				if ('0' <= c && c <= '9') status = 1;
//				else head += tolower(c);
//			}
//			if (status == 1) {
//				if ('0' <= c && c <= '9') num = num * 10 + c - '0';
//				else break;
//			}
//		}
//		map[head][num].push_back(files[i]);
//	}
//
//	int idx = 0;
//	vector<string> answer(files.size());
//	vector<pair<string, unordered_map<int, vector<string>>>> vec_map;
//	for (auto p : map) vec_map.push_back(p);
//	sort(vec_map.begin(), vec_map.end(), compare1);
//
//	for (pair<string, unordered_map<int, vector<string>>> p1 : vec_map) {
//		vector<pair<int, vector<string>>> vec;
//		for(auto p : p1.second) vec.push_back(p);
//		sort(vec.begin(), vec.end(), compare2);
//		for (pair<int, vector<string>> p : vec)
//			for (string file : p.second) answer[idx++] = file;
//	}
//	return answer;
//}