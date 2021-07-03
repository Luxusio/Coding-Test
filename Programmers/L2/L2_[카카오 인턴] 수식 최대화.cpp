//// 2021.04.13 08:13
//#include <string>
//#include <vector>
//
//#define ABS(a) (a > 0 ? a : -a)
//#define MAX(a, b) (a > b ? a : b)
//
//using namespace std;
//
//struct expr {
//	bool isOp;
//	long long value;
//};
//
//long long getAnswer(vector<expr> exprList, vector<char> priority) {
//	expr e, n1, n2;
//	for (char oper : priority) {
//		vector<expr>::iterator it = exprList.begin();
//		while (it != exprList.end()) {
//			e = *it;
//			if (e.isOp && e.value == oper) {
//				n1 = *(it - 1), n2 = *(it + 1);
//
//				long long temp;
//				if (oper == '+') temp = n1.value + n2.value;
//				else if (oper == '-') temp = n1.value - n2.value;
//				else if (oper == '*') temp = n1.value * n2.value;
//
//				it = exprList.erase(it - 1);
//				it = exprList.erase(it);
//				it = exprList.erase(it);
//				it = exprList.insert(it, { false, temp });
//			}
//			else it++;
//		}
//	}
//	return ABS(exprList[0].value);
//}
//
//long long solution(string expression) {
//	vector<expr> exprList;
//
//	int num;
//	char prev_char = 0;
//	for (char c : expression) {
//		if (c == '+' || c == '-' || c == '*') {
//			exprList.push_back({ false, num });
//			exprList.push_back({ true, c });
//		}
//		else if ('0' <= prev_char && prev_char <= '9') num = num * 10 + c - '0';
//		else num = c - '0';
//		prev_char = c;
//	}
//	exprList.push_back({ false, num });
//
//	long long answer = 0;
//	answer = MAX(answer, getAnswer(exprList, { '+', '-', '*' }));
//	answer = MAX(answer, getAnswer(exprList, { '+', '*', '-' }));
//	answer = MAX(answer, getAnswer(exprList, { '-', '+', '*' }));
//	answer = MAX(answer, getAnswer(exprList, { '-', '*', '+' }));
//	answer = MAX(answer, getAnswer(exprList, { '*', '+', '-' }));
//	answer = MAX(answer, getAnswer(exprList, { '*', '-', '+' }));
//
//	return answer;
//}
