//// 2021.04.04 14:32
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> citations) {
//	sort(citations.begin(), citations.end(), greater<int>());
//	int i;
//	for (i = 0; i < citations.size(); i++) {
//		if (citations[i] <= i) return i;
//	}
//	return i;
//}