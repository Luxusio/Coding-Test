//// 2021.04.03 17:14
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool visited[51];
//int answer = 100;
//
//void dfs(vector<string>& words, string& target, string now, int count) {
//	if (target == now) {
//		answer = answer < count ? answer : count;
//	}
//	else {
//		for (int i = 0; i < words.size(); i++) {
//			if (!visited[i]) {
//				// can visit check
//				int diff_count = 0;
//				for (int j = 0; j < now.length(); j++) {
//					if (words[i][j] != now[j]) diff_count++;
//				}
//				if (diff_count == 1) {
//					visited[i] = 1;
//					dfs(words, target, words[i], count + 1);
//					visited[i] = 0;
//				}
//			}
//		}
//	}
//}
//
//int solution(string begin, string target, vector<string> words) {
//	dfs(words, target, begin, 0);
//	return answer == 100 ? 0 : answer;
//}