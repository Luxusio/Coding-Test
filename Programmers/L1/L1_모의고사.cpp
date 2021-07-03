//// 20210324 2002
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> answers) {
//
//	vector<vector<int>> repete = { 
//		{ 1, 2, 3, 4, 5 },
//		{ 2, 1, 2, 3, 2, 4, 2, 5 },
//		{ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 }
//	};
//
//	int answer_score = 0;
//	vector<int> answer;
//	
//	for (int i = 0; i < repete.size(); i++) {
//		int sum = 0;
//		int size = repete[i].size();
//		for (int j = 0; j < answers.size(); j++) {
//			if (repete[i][j % size] == answers[j]) {
//				sum++;
//			}
//		}
//
//		if (sum > answer_score) {
//			answer_score = sum;
//			answer.clear();
//			answer.push_back(i + 1);
//		}
//		else if(sum == answer_score) {
//			answer.push_back(i + 1);
//		}
//	}
//
//	return answer;
//}