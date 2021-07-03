//// 2021.04.05 09:31
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(pair<double, int> p1, pair<double, int> p2) {
//	return p1.first != p2.first ?
//		p1.first > p2.first : p1.second < p2.second;
//}
//
//vector<int> solution(int N, vector<int> stages) {
//	vector<int> clear(N + 2);
//	vector<pair<double, int>> prob; // probability
//	vector<int> answer;
//
//	for (int stage : stages) clear[stage]++;
//	double sum = clear[N+1];
//	for (int i = N; i > 0; i--) {
//		sum += clear[i];
//		prob.push_back({ sum == 0 ? 0 : clear[i] / sum, i });
//	}
//	sort(prob.begin(), prob.end(), compare);
//	
//	for (pair<double, int> p : prob)
//		answer.push_back(p.second);
//	
//	return answer;
//}