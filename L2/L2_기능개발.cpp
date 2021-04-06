//// 2021.04.05 10:07
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//	vector<int> answer;
//	while (!progresses.empty()) {
//		for (int i = 0; i < speeds.size(); i++) {
//			progresses[i] += speeds[i];
//		}
//		int count = 0;
//		while (!progresses.empty() && progresses[0] >= 100) {
//			count++;
//			progresses.erase(progresses.begin());
//			speeds.erase(speeds.begin());
//		}
//		if (count != 0) answer.push_back(count);
//	}
//	return answer;
//}