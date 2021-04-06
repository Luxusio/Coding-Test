//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> a) {
//
//	int size = (int)a.size();
//
//	int* lMin = new int[size];
//	int* rMin = new int[size];
//
//
//	int nowLMin = 2147483647;
//	int nowRMin = 2147483647;
//	
//	int i = 0;
//	int to_size = size-1;
//	while (i < to_size) {
//		if (a[i] < nowLMin) nowLMin = a[i];
//
//		lMin[++i] = nowLMin;
//	}
//
//	i = to_size;
//	while (i > 0) {
//		if (a[i] < nowRMin) nowRMin = a[i];
//
//		rMin[--i] = nowRMin;
//	}
//
//	int answer = 2;
//	for (i = 1; i < to_size; i++) {
//		if (lMin[i] > a[i] || rMin[i] > a[i]) answer++;
//	}
//
//
//	return answer;
//}
