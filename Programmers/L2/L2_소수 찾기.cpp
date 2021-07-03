//// 20210324 2014
//#include <string>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//
//bool isPrime(int num) {
//	if (num <= 1) return false;
//	int sqrt_num = sqrt(num);
//	for (int i = 2; i <= sqrt_num; i++) {
//		if (num % i == 0) return false;
//	}
//	return true;
//}
//
//vector<int> primes;
//
//void check_match_prime(vector<int> numbers, int nowNum, int left) {
//	if (left-- == 0) {
//		for (int prime : primes) {
//			if (nowNum == prime) return;
//		}
//		if (isPrime(nowNum)) {
//			primes.push_back(nowNum);
//		}
//		return;
//	}
//
//	int i = 0;
//	for (int num : numbers) {
//		vector<int> newNumbers;
//		newNumbers.insert(newNumbers.begin(), numbers.begin(), numbers.end());
//		newNumbers.erase(newNumbers.begin() + i);
//		check_match_prime(newNumbers, nowNum * 10 + num, left);
//		i++;
//	}
//
//}
//
//
//int solution(string numbers) {
//
//	vector<int> card_nums;
//	int i = 0;
//	for (char c : numbers) {
//		card_nums.push_back(c - '0');
//	}
//
//	for (i = 0; i < numbers.size(); i++) {
//		check_match_prime(card_nums, 0, i + 1);
//	}
//
//	int answer = primes.size();
//
//	return answer;
//}