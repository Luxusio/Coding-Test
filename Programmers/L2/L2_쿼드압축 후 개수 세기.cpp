//// 2021.04.13 20:30
//#include <vector>
//using namespace std;
//
//void sum(vector<int>& v1, vector<int> v2) {
//	v1[0] += v2[0]; v1[1] += v2[1];
//}
//
//bool check(vector<vector<int>>& arr, int num) {
//	for (int i = 0; i < arr.size(); i++)
//		for (int j = 0; j < arr.size(); j++)
//			if (arr[i][j] != num) return false;
//	return true;
//}
//
//vector<int> solution(vector<vector<int>> arr) {
//	vector<int> count(2);
//
//	int num = arr[0][0];
//	if (check(arr, num)) {
//		count[num]++;
//	}
//	else if(arr.size() > 1) {
//		int half = arr.size() / 2;
//		vector<vector<int>> arr1(half), arr2(half), arr3(half), arr4(half);
//		for (int i = 0; i < half; i++) {
//			arr1[i] = { arr[i].begin(), arr[i].begin() + half };
//			arr2[i] = { arr[i].begin() + half, arr[i].end() };
//			arr3[i] = { arr[half + i].begin(), arr[half + i].begin() + half };
//			arr4[i] = { arr[half + i].begin() + half, arr[half + i].end() };
//		}
//		sum(count, solution(arr1));
//		sum(count, solution(arr2));
//		sum(count, solution(arr3));
//		sum(count, solution(arr4));
//	}
//
//	return count;
//}