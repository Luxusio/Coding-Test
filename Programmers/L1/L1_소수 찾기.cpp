//// 2021.04.04 18:25
//#include <math.h>
//
//using namespace std;
//
//bool sieve[1000001];
//
//int solution(int n) {
//	int from = 2;
//	int to = sqrt(n);
//	while (from <= to) {
//		int num = from;
//		for (int i = num * 2; i <= n; i += num) sieve[i] = 1;
//		while (sieve[++from] == 1);
//	}
//	int answer = 0;
//	for (int i = 2; i <= n; i++) if (!sieve[i]) answer++;
//	return answer;
//}