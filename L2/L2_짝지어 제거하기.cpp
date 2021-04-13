//// 2021.04.13 14:38
//#include <string>
//#include <stack>
//using namespace std;
//
//int solution(string s) {
//	stack<char> diff_stack;
//	for (int i = 0; i < s.length(); i++) {
//		diff_stack.push(s[i]);
//		while (diff_stack.size() > 1) {
//			char c1 = diff_stack.top(); diff_stack.pop();
//			char c2 = diff_stack.top(); diff_stack.pop();
//			if (c1 != c2) {
//				diff_stack.push(c2);
//				diff_stack.push(c1);
//				break;
//			}
//		}
//	}
//	return diff_stack.empty();
//}