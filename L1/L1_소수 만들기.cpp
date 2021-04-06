//// 2021.04.05 09:03
//#include <vector>
//#include <math.h>
//using namespace std;
//
//bool is_prime(int num) {
//	if (num < 2) return num;
//	int to = sqrt(num);
//	for (int i = 2; i <= to; i++) {
//		if (num % i == 0) return false;
//	}
//	return true;
//}
//
//int solution(vector<int> nums) {
//	int answer = 0;
//	for (int i = 0; i < nums.size(); i++) {
//		for (int j = i + 1; j < nums.size(); j++) {
//			for (int k = j + 1; k < nums.size(); k++) {
//				if (is_prime(nums[i] + nums[j] + nums[k])) answer++;
//			}
//		}
//	}
//	return answer;
//}