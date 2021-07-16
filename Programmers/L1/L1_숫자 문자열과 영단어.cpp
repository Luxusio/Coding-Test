//#include <string>
//#include <unordered_map>
//using namespace std;
//
//int solution(string s) {
//	unordered_map<string, int> map = {
//		{ "0", 0 }, { "zero", 0 }, 
//		{ "1", 1 }, { "one", 1 }, 
//		{ "2", 2 }, { "two", 2 }, 
//		{ "3", 3 }, { "three", 3 }, 
//		{ "4", 4 }, { "four", 4 }, 
//		{ "5", 5 }, { "five", 5 }, 
//		{ "6", 6 }, { "six", 6 }, 
//		{ "7", 7 }, { "seven", 7 }, 
//		{ "8", 8 }, { "eight", 8 }, 
//		{ "9", 9 }, { "nine", 9 }, 
//	};
//
//	int from = 0, answer = 0;
//	for (int i = 1; i <= s.length(); i++) {
//		auto result = map.find(s.substr(from, i - from));
//		if (result != map.end()) {
//			answer = (answer * 10) + result->second;
//			from = i;
//		}
//	}
//	return answer;
//}
