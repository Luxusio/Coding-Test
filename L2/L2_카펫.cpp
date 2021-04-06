// 2021.03.28 20:20
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int brown, int yellow) {
//	
//	int sum = (brown / 2) + 2;
//	int height = 3;
//	int width = sum - height;
//	while (width >= height) {
//		if ((width - 2) * (height - 2) == yellow)
//			return {width, height};
//
//		height++;
//		width = sum - height;
//	}
//
//	return {0, 0};
//}