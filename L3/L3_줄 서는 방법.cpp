//// 2021.04.21 20:06
//#include <vector>
//using namespace std;
//
//vector<int> solution(int n, long long k) {
//	vector<int> answer(n), numbers(n);
//	vector<long long> factorial(n + 1, 1);
//	for (int i = 0; i < n; i++) numbers[i] = i + 1;
//	for (int i = 1; i < n; i++) factorial[i + 1] = i * factorial[i];
//	k--;
//
//	for (int i = n; i > 1; i--) {
//		int idx = k / factorial[i];
//		k -= idx * factorial[i];
//		answer[n - i] = numbers[idx];
//		numbers.erase(numbers.begin() + idx);
//	}
//	answer[n - 1] = numbers[0];
//	return answer;
//}
//
//#include <iostream>
//void main() {
//
//	for (int i = 1; i <= 120; i++) {
//		vector<int> vec = solution(5, i);
//		for (int v : vec) cout << v << " ";
//		cout << endl;
//	}
//}