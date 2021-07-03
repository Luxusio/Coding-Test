//// 2021.04.04 18:50
//int c[10];
//long long solution(long long n) {
//	long long answer = 0;
//	while (n > 0) {
//		c[n % 10]++;
//		n /= 10;
//	}
//	for (int i = 9; i >= 0; i--) {
//		for (int j = 0; j < c[i]; j++) answer = answer * 10 + i;
//	}
//	return answer;
//}