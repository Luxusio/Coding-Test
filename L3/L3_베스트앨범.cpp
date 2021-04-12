//// 2021.04.13 07:54
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
//bool compare1(pair<int, vector<pair<int, int>>> p1, pair<int, vector<pair<int, int>>> p2) {
//	return p1.first > p2.first;
//}
//
//bool compare2(pair<int, int> p1, pair<int, int> p2) {
//	return p1.second != p2.second ? p1.second > p2.second : p1.first < p2.first;
//}
//
//vector<int> solution(vector<string> genres, vector<int> plays) {
//	unordered_map<string, pair<int, vector<pair<int, int>>>> map;
//	for (int i = 0; i < genres.size(); i++) {
//		map[genres[i]].second.push_back({ i, plays[i] });
//		map[genres[i]].first += plays[i];
//	}
//	vector<pair<int, vector<pair<int, int>>>> vec;
//	for (pair<string, pair<int, vector<pair<int, int>>>> p : map) vec.push_back(p.second);
//	sort(vec.begin(), vec.end(), compare1);
//	map.empty();
//
//	vector<int> answer;
//	for (pair<int, vector<pair<int, int>>> p : vec) {
//		sort(p.second.begin(), p.second.end(), compare2);
//		answer.push_back(p.second[0].first);
//		if (p.second.size() > 1) answer.push_back(p.second[1].first);
//	}
//	return answer;
//}