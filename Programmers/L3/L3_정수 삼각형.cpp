//// 20210323 start
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> triangle) {
//
//	int height = (int)triangle.size();
//
//	int* remember = new int[height];
//	for (int i = 0; i < height; i++) remember[i] = 0;
//
//	for (int i = 0; i < height; i++) {
//		int left = 0;
//		for (int j = 0; j <= i; j++) {
//			int right = j == i ? 0 : remember[j];
//
//			remember[j] = (left > right ? left : right) + triangle[i][j];
//			left = right;
//		}
//	}
//
//	int answer = 0;
//	for (int i = 0; i < height; i++) {
//		if (answer < remember[i]) answer = remember[i];
//	}
//
//	return answer;
//}