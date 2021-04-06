//// 2021.04.04 15:07
//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int n, vector<int> times) {
//	long long answer = 0;
//	long long start = 0;
//	long long end = (long long) 1 << 62;
//
//	while (start <= end) {
//		long long mid = (start + end) / 2;
//		long long people = n;
//		for (int time : times) {
//			people -= mid / time;
//			if (people < 0) break;
//		}
//		if (people > 0) {
//			start = mid + 1;
//		}
//		else {
//			end = mid - 1;
//			answer = mid;
//		}
//	}
//
//	return answer;
//}
//
//void main() {
//	printf("%d\n", solution(6, {7, 10}));
//}