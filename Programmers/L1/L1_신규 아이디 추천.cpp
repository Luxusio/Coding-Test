// 2021.03.29 08:40
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string new_id) {
//	string answer = "";
//	
//	// step 1
//	for (char c : new_id) {
//		if ('A' <= c && c <= 'Z') {
//			answer += c + ('a' - 'A');
//		}
//		else {
//			answer += c;
//		}
//	}
//
//	// step 2
//	new_id = answer;
//	answer = "";
//	for (char c : new_id) {
//		if (('a' <= c && c <= 'z') ||
//			('0' <= c && c <= '9') ||
//			c == '-' || c == '_' || c == '.') {
//			answer += c;
//		}
//	}
//
//	// step 3
//	new_id = answer;
//	answer = "";
//	char prev_char = 0;
//	for (char c : new_id) {
//		if (c != '.' || prev_char != c) {
//			answer += c;
//		}
//		prev_char = c;
//	}
//
//	// step 4
//	new_id = answer;
//	answer = "";
//	if (!new_id.empty() && new_id[0] == '.')
//		new_id = new_id.substr(1, new_id.size() - 1);
//	if (new_id[new_id.size() - 1] == '.')
//		new_id = new_id.substr(0, new_id.size() - 1);
//
//	// step 5
//	if (new_id.empty())
//		new_id = "a";
//	
//	// step 6
//	if (new_id.size() >= 16) {
//		new_id = new_id.substr(0, 15);
//		if (new_id[new_id.size() - 1] == '.')
//			new_id = new_id.substr(0, new_id.size() - 1);
//	}
//
//	// step 7
//	while (new_id.size() <= 2) {
//		new_id += new_id[new_id.size() - 1];
//	}
//
//	answer = new_id;
//	return answer;
//}