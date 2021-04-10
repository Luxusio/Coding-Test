//// 2021.04.10 21:04
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<vector<int>> db(24);
//
//inline void add_elements(vector<int>& search, int value) {
//	int size = search.size();
//	for (int i = 0; i < size; i++) search.push_back(search[i] + value);
//}
//
//vector<string> split(string s, string delimiter, int size) {
//	vector<string> result(size);
//	int idx = 0, start = 0, end, d_len = delimiter.length();
//
//	while ((end = s.find(delimiter, start)) != string::npos) {
//		result[idx++] = s.substr(start, end - start);
//		start = end + d_len;
//	}
//	result[idx] = s.substr(start);
//
//	return result;
//}
//
//vector<int> solution(vector<string> info, vector<string> query) {
//	for (string i : info) {
//		vector<string> v = split(i, " ", 5);
//
//		int idx = 0;
//		if (v[0][0] == 'j') idx += 8;
//		else if (v[0][0] == 'p') idx += 16;
//		if (v[1][0] == 'f') idx += 4;
//		if (v[2][0] == 's') idx += 2;
//		if (v[3][0] == 'p') idx += 1;
//
//		int score = 0;
//		for (char c : v[4]) score = score * 10 + c - '0';
//		db[idx].push_back(score);
//	}
//
//	for (vector<int>& v : db) sort(v.begin(), v.end());
//
//	vector<int> answer;
//	for (string q : query) {
//		vector<string> v = split(q, " and ", 5);
//
//		vector<int> search;
//		if (v[0][0] == '-') search = { 0, 8, 16 };
//		else if (v[0][0] == 'c') search.push_back(0);
//		else if (v[0][0] == 'j') search.push_back(8);
//		else search.push_back(16);
//
//		if (v[1][0] == '-') add_elements(search, 4);
//		else if (v[1][0] == 'f') for (int& idx : search) idx += 4;
//
//		if (v[2][0] == '-') add_elements(search, 2);
//		else if (v[2][0] == 's') for (int& idx : search) idx += 2;
//
//		if (v[3][0] == '-') add_elements(search, 1);
//		else if (v[3][0] == 'p') for (int& idx : search) idx += 1;
//
//		int count = 0;
//		int score = 0;
//		string s_score = v[3].substr(v[3].find(' ') + 1);
//		for (char c : s_score) score = score * 10 + c - '0';
//		for (int s_idx : search) {
//			int idx = -1;
//			while (++idx < db[s_idx].size() && db[s_idx][idx] < score);
//			count += db[s_idx].size() - idx;
//		}
//		answer.push_back(count);
//	}
//
//	return answer;
//}
//
//void main() {
//	solution({ "java backend junior pizza 150", "python frontend senior chicken 210", "python frontend senior chicken 150", "cpp backend senior pizza 260", "java backend junior chicken 80", "python backend senior chicken 50" }, { "java and backend and junior and pizza 100", "python and frontend and senior and chicken 200", "cpp and - and senior and pizza 250", "- and backend and senior and - 150", "- and - and - and chicken 100", "- and - and - and - 150" });
//}