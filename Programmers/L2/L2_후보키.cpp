//// 2021.04.13 16:59
//#include <string>
//#include <vector>
//#include <unordered_set>
//#include <list>
//using namespace std;
//
//int solution(vector<vector<string>> relation) {
//	int amount = relation[0].size();
//	unordered_set<string> set;
//	list<unordered_set<int>> answer_list, temp_l_list, l_list = { {} };
//
//	for (int i = 0; i < amount; i++) {
//		for (unordered_set<int> l : l_list) {
//			for (int j = l.empty() ? 0 : *l.cbegin() + 1; j < amount; j++) {
//				unordered_set<int> temp_list = l;
//				temp_list.insert(j);
//				bool crash = false;
//
//				for (unordered_set<int> answer : answer_list) {
//					int count = 0;
//					for (int num : answer) if (temp_list.find(num) != temp_list.end()) count++;
//					if (count == answer.size()) {
//						crash = true;
//						break;
//					}
//				}
//				if (crash) continue;
//
//				bool is_unique = true;
//				for (vector<string> vec : relation) {
//					string temp = "";
//					for (int key : temp_list) temp += vec[key] + " ";
//					if (set.find(temp) != set.end()) {
//						is_unique = false;
//						break;
//					}
//					set.insert(temp);
//				}
//				set.clear();
//
//				if (is_unique) answer_list.push_back(temp_list);
//				else temp_l_list.push_back(temp_list);
//			}
//		}
//		l_list = temp_l_list;
//		temp_l_list.clear();
//	}
//
//	return answer_list.size();
//}