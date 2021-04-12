//// 2021.04.12 19:50
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool compare(vector<int> v1, vector<int> v2) {
//	return v1[0] > v2[0];
//}
//
//int solution(vector<vector<int>> routes) {
//	sort(routes.begin(), routes.end(), compare);
//	int answer = 0;
//	while (!routes.empty()) {
//		int position = routes[0][0];
//		answer++;
//		for (int i = 0; i < routes.size();i++) {
//			if (routes[i][0] <= position && position <= routes[i][1])
//				routes.erase(routes.begin() + i--);
//		}
//	}
//	return answer;
//}
//
//void main() {
//	solution({{-20, 15}, { -14, -5 }, { -18, -13 }, { -5, -3 }});
//}