// 2021.03.29 20:00
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//
//	vector<int> trinary;
//	while (n > 0) {
//		trinary.push_back(n % 3);
//		n /= 3;
//	}
//
//	int answer = 0;
//	int mul = 1;
//	for (int i = trinary.size() - 1; i >= 0; i--) {
//		answer += trinary[i] * mul;
//		mul *= 3;
//	}
//
//	return answer;
//}