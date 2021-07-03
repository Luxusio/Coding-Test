//// 2021.04.04 19:40
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int n, int m) {
//	if (n > m) swap(n, m);
//	int gcf = 1, lcm = m; // 최대공약수, 최소공배수
//	for (int i = 1; i <= n; i++)
//		if (n % i == 0 && m % i == 0) gcf = i;
//	while (lcm % n != 0 || lcm % m != 0) lcm++;
//
//	return {gcf, lcm};
//}