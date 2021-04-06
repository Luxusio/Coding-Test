//// 2021.04.03 15:19
//#include <string>
//#include <vector>
//using namespace std;
//
//int solution(string skill, vector<string> skill_trees) {
//	int answer = skill_trees.size();
//	vector<char> learn_before(26);
//	for (int i = 0; i < skill.length(); i++) learn_before[skill[i] - 'A'] = i + 1;
//	
//	for (string tree : skill_trees) {
//		int to_learn = 1;
//		for (char c : tree) {
//			int learn_idx = learn_before[c - 'A'];
//			if (to_learn < learn_idx) {
//				answer--;
//				break;
//			}
//			else if (to_learn == learn_idx) to_learn++;
//		}
//	}
//
//	return answer;
//}