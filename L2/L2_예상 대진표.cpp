//// 2021.04.13 19:35
//int solution(int n, int a, int b) {
//	int answer = 0;
//	a = (--a - a % 2);
//	b = (--b - b % 2);
//	if (a == b) return 1;
//	while (a != b) {
//		a = (a - a % 2) >> 1;
//		b = (b - b % 2) >> 1;
//		answer++;
//	}
//	return answer;
//}