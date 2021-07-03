//// 2021.04.05 08:17
//int solution(int num) {
//	unsigned long long l_num = num;
//	int i = 0;
//	while (l_num != 1 && ++i <= 500) {
//		l_num = (l_num & 0x01) == 0 ? l_num >> 1 : l_num * 3 + 1;
//	}
//	return i > 500 ? -1 : i;
//}