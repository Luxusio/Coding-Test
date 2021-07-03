//// 2021.04.05 09:10
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> d, int budget) {
//	sort(d.begin(), d.end());
//	int answer = 0;
//	for (int b : d) {
//		if (b > budget) break;
//		budget -= b;
//		answer++;
//	}
//	return answer;
//}