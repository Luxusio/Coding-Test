//// 2021.04.03 15:00
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(int n) {
//	string answer = "";
//	while (n > 0) {
//		answer = "124"[(n - 1) % 3] + answer;
//		n = (n - 1) / 3;
//	}
//	return answer;
//}
//
//#include <iostream>
//
//void main() {
//	for (int i = 1; i <= 10; i++) {
//		cout << i << " " << solution(i) << endl;
//	}
//}