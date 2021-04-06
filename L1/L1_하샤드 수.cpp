//// 2021.04.05 08:44
//bool solution(int x) {
//	int digit_sum = 0;
//	int original = x;
//	while (x > 0) {
//		digit_sum += x % 10;
//		x /= 10;
//	}
//	return original % digit_sum == 0;
//}