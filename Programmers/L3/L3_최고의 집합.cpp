//// 2021.04.17 17:23
//#include <vector>
//using namespace std;
//
//vector<int> solution(int n, int s) {
//	if (n > s) return { -1 };
//	vector<int> answer(n, s / n);
//	for (int i = answer.size() - s % n; i < answer.size(); i++) answer[i]++;
//	return answer;
//}