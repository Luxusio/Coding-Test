//// 2021.04.11 16:36
//int solution(int n) {
//	int answer = 1, sum = 0, min = 0, to = n / 2 + 1;
//	for (int max = 1; max <= to; max++) {
//		sum += max;
//		while (sum > n && min < max) sum -= ++min;
//		if (sum == n) answer++;
//	}
//
//	return answer;
//}