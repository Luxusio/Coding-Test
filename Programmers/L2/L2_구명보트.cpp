//// 2021.04.09 11:56
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//	sort(people.begin(), people.end(), greater<int>());
//
//	int l = 0;
//	int r = people.size() - 1;
//	int temp;
//
//	while (l <= r) {
//		temp = l++;
//		if (l <= r && people[temp] + people[r] <= limit) r--;
//	}
//	return l;
//}