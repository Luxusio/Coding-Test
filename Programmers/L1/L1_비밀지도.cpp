//// 2021.04.05 09:14
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
//	vector<string> answer;
//	for (int i = 0; i < n; i++) {
//		int r = arr1[i] | arr2[i];
//		answer.push_back("");
//		for (int j = n - 1; j >= 0; j--) {
//			answer[i] += r & 1 << j ? '#' : ' ';
//		}
//	}
//	return answer;
//}