//// 2021.04.10 00:57
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int solution(vector<vector<string>> clothes) {
//	unordered_map<string, vector<string>> map;
//	for (vector<string> v : clothes) map[v[1]].push_back(v[0]);
//
//	int answer = 1;
//	for (pair<string, vector<string>> p : map) answer *= (p.second.size() + 1);
//	return answer - 1;
//}