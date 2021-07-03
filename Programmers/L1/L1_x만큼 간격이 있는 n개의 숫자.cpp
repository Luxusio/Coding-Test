//// 2021.04.05 08:56
//#include <vector>
//
//using namespace std;
//
//vector<long long> solution(int x, int n) {
//	vector<long long> answer{x};
//	n--;
//	for (int i = 0; i < n; i++) answer.push_back(answer[i] + x);
//	return answer;
//}