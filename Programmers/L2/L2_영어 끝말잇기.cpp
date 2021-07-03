//// 2021.04.12 18:59
//#include <string>
//#include <vector>
//#include <unordered_set>
//using namespace std;
//
//vector<int> solution(int n, vector<string> words) {
//	unordered_set<string> set;
//	int stage = 1, who = 0;
//	char last_char = words[0][0];
//	for (string word : words) {
//		if (word[0] != last_char || set.find(word) != set.end()) break;
//		set.insert(word);
//		last_char = word[word.length() - 1];
//		if (++who == n) {
//			who = 0;
//			stage++;
//		}
//	}
//	if (words.size() == (stage-1) * n + who) return { 0, 0 };
//	return { who+1, stage };
//}