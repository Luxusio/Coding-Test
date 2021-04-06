// 2021.03.29 09:20
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//	vector<int> answer;
//	
//	for (vector<int> command : commands) {
//		int from = command[0] - 1;
//		int to = command[1];
//		int idx = command[2] - 1;
//
//		vector<int> array_part(array.begin() + from, array.begin() + to);
//		sort(array_part.begin(), array_part.end());
//		answer.push_back(array_part[idx]);
//	}
//	
//	return answer;
//}