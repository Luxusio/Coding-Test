//// 2021.04.21 12:28
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> A, vector<int> B) {
//	sort(A.begin(), A.end(), greater<int>());
//	sort(B.begin(), B.end(), greater<int>());
//
//	int answer = 0, a_idx = 0;
//	for (int i = 0; i < B.size() && a_idx < A.size(); i++) {
//		while (a_idx < A.size() && B[i] <= A[a_idx]) a_idx++;
//		if (a_idx++ < A.size()) answer++;
//	}
//
//	return answer;
//}