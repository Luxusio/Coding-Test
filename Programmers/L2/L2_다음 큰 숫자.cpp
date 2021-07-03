//// 2021.04.09 22:16
//int get_count(int n) {
//	int count = 0;
//	while (n > 0) {
//		if (n & 1) count++;
//		n >>= 1;
//	}
//	return count;
//}
//
//int solution(int n) {
//	int count = get_count(n);
//	while (count != get_count(++n));
//	return n;
//}