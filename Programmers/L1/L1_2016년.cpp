//// 2021.03.29 20:20
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(int a, int b) {
//
//	int day_count = 0;
//	int month_size[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	a--;
//	for (int i = 0; i < a; i++) {
//		day_count += month_size[i];
//	}
//	day_count += b;
//
//	string name[] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
//	string answer = name[(day_count + 4) % 7];
//
//	return answer;
//}