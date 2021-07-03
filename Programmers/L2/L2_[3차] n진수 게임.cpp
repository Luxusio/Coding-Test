//// 2021.04.11 00:25
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(int n, int t, int m, int p) {
//	string answer = "";
//	vector<char> num = { 0 };
//	p--;
//
//	int digit = 0;
//	int order = 0;
//
//	while (answer.length() < t) {
//		if (order == p) {
//			answer += num[digit] + (num[digit] < 10 ? '0' : 'A' - 10);
//		}
//
//		order = (order + 1) % m;
//		digit--;
//
//		if(digit == -1) {
//			num[0]++;
//			for (int i = 0; i < num.size(); i++) {
//				if (num[i] == n) {
//					num[i] = 0;
//					if (i + 1 == num.size()) num.push_back(0);
//					num[i + 1]++;
//				}
//				else break;
//			}
//			digit = num.size() - 1;
//		}
//	}
//
//	return answer;
//}