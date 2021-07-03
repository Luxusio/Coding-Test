//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//
//	unsigned long long curr_value = 0;
//	unsigned long long prev_value = 1;
//	unsigned long long temp = 1;
//
//	n++;
//	for (int i = 0; i < n; i++) {
//		temp = curr_value;
//		curr_value += prev_value;
//		//printf("%d\n", curr_value);
//		curr_value %= 1000000007;
//		prev_value = temp;
//	}
//
//	int answer = curr_value;
//
//
//	return answer;
//}