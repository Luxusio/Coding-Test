//// 2021.03.29 19:37
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(int n, vector<int> lost, vector<int> reserve) {
//
//	sort(lost.begin(), lost.end());
//	sort(reserve.begin(), reserve.end());
//
//	vector<int>::iterator lostIt = lost.begin();
//	for (lostIt = lost.begin(); lostIt != lost.end(); lostIt++) {
//		for (int j = 0; j < reserve.size(); j++) {
//			if (*lostIt == reserve[j]) {
//				lostIt = lost.erase(lostIt) - 1;
//				reserve.erase(reserve.begin() + j);
//				break;
//			}
//		}
//	}
//	int answer = n - lost.size();
//
//	for (int i = 0; i < lost.size(); i++) {
//		for (int j = 0; j < reserve.size(); j++) {
//			if (lost[i] == reserve[j] - 1 || lost[i] == reserve[j] + 1) {
//				//reserve.erase(reserve.begin() + j);
//				reserve[j] = -10;
//				answer++;
//				break;
//			}
//		}
//	}
//
//	return answer;
//}
//
//void main() {
//	solution(7, { 2, 4, 5, 6, 7 }, { 1, 3, 4, 5, 6, 7 });
//}