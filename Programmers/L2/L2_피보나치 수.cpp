//// 2021.04.09 22:03
//int solution(int n) {
//	if (n < 2) return n;
//	int temp, prev = 0, answer = 1;
//	for (int i = 1; i < n; i++) {
//		temp = answer;
//		answer = (answer + prev) % 1234567;
//		prev = temp;
//	}
//	return answer;
//}