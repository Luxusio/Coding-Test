//// 2021.04.12 17:46
//#include <vector>
//using namespace std;
//
//int solution(vector<int> arr) {
//	int answer = 1;
//	int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
//	for (int i = 0; i < arr.size(); i++) {
//		for (int prime : primes) {
//			if (arr[i] == 1) break;
//			while (arr[i] % prime == 0) {
//				for (int j = i; j < arr.size(); j++)
//					if (arr[j] % prime == 0) arr[j] /= prime;
//				answer *= prime;
//			}
//		}
//	}
//	return answer;
//}