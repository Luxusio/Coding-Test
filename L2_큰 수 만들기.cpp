//// 2021.04.06 18:53
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//string solution(string number, int k) {
//	if (is_sorted(number.begin(), number.end(), greater<char>())) return number.substr(0, number.length()-k);
//	for (int i = 0; i < number.size() && k > 0; i++) {
//		int idx = distance(number.begin(), max_element(number.begin() + i, number.begin() + i + k + 1));
//		k -= idx - i;
//		number = number.substr(0, i) + number.substr(idx);
//	}
//	return number;
//}
//
//#include <iostream>
//void main() {
//	cout << solution("9999", 2);
//}