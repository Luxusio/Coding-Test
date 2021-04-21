//// 2021.04.21 19:24
//#include <string>
//#include <vector>
//#include <unordered_set>
//#include <unordered_map>
//using namespace std;
//
//vector<int> solution(vector<string> gems) {
//	unordered_set<string> all_kinds;
//	unordered_map<string, int> map;
//	for (string& s : gems) all_kinds.insert(s);
//
//	int begin = 0, end = 0, mb = 0, me = gems.size() - 1;
//	for (end = 0; end < gems.size(); end++) {
//		map[gems[end]]++;
//		while (map.size() == all_kinds.size()) {
//			if (end - begin < me - mb) {
//				mb = begin;
//				me = end;
//			}
//			auto it = map.find(gems[begin++]);
//			if ((--it->second) == 0) map.erase(it);
//		}
//	}
//
//	return { mb + 1, me + 1 };
//}