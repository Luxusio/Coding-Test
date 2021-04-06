// 2021.03.29 10:34
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct Number {
//	int num;
//	int mul;
//};
//
//bool compare(Number n1, Number n2) {
//	return (n1.num * n2.mul + n2.num) > (n2.num * n1.mul + n1.num);
//}
//
//string solution(vector<int> numbers) {
//	string answer = "";
//
//	vector<Number> number_list;
//	for (int num : numbers) {
//		int mul = 10000;
//		while (num / mul == 0 && mul > 1) {
//			mul /= 10;
//		}
//		mul *= 10;
//		number_list.push_back({ num, mul });
//	}
//
//	sort(number_list.begin(), number_list.end(), compare);
//	for (Number num : number_list) {
//		int div = num.mul / 10;
//		while (div >= 1) {
//			answer += ((num.num / div) % 10) + '0';
//			div /= 10;
//		}
//	}
//
//	while (answer.size() > 1 && answer[0] == '0') {
//		answer = answer.substr(1, answer.size() - 1);
//	}
//
//	return answer;
//}