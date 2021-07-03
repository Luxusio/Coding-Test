//// 2021.04.19 13:21
//#include <string>
//#include <stack>
//using namespace std;
//
//int solution(string s) {
//	int answer = 0;
//	stack<char> st;
//	for (int i = 0; i < s.length(); i++) {
//		st = stack<char>();
//		bool success = true;
//		for (int j = 0; j < s.length(); j++) {
//			char c = s[(i + j) % s.length()];
//			if (c == '(' || c == '{' || c == '[') st.push(c);
//			else if (c == ')') {
//				if (st.empty()) {
//					success = false;
//					break;
//				}
//				else if (st.top() == '(') st.pop();
//			}
//			else if (c == '}') {
//				if (st.empty()) {
//					success = false;
//					break;
//				}
//				else if (st.top() == '{') st.pop();
//			}
//			else if (c == ']') {
//				if (st.empty()) {
//					success = false;
//					break;
//				}
//				else if (st.top() == '[') st.pop();
//			}
//		}
//		if (success && st.empty()) answer++;
//	}
//	return answer;
//}