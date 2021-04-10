//// 2021.04.10 21:36
//#include <string>
//#include <vector>
//#include <unordered_set>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(unordered_set<int> v1, unordered_set<int> v2) {
//	return v1.size() < v2.size();
//}
//
//vector<int> solution(string s) {
//	int to = s.length() - 1;
//
//	vector<unordered_set<int>> vec(1);
//	int vec_idx = 0;
//	int num = 0;
//	bool open = false;
//	for (int i = 1; i < to; i++) {
//		char c = s[i];
//		if (c == '{') open = true;
//		else if (c == '}') {
//			vec[vec_idx].insert(num);
//			num = 0;
//			open = false;
//		}
//		else if (c == ',') {
//			if (open) {
//				vec[vec_idx].insert(num);
//				num = 0;
//			}
//			else {
//				vec.push_back(unordered_set<int>());
//				vec_idx++;
//			}
//		}
//		else num = num * 10 + c - '0';
//	}
//
//	sort(vec.begin(), vec.end(), compare);
//	vector<int> answer;
//	for (unordered_set<int> v : vec) {
//		for (int num : answer) v.erase(num);
//		answer.push_back(*v.begin());
//	}
//	return answer;
//}
//
//void main() {
//	solution("{{2},{2,1},{2,1,3},{2,1,3,4}}");
//}