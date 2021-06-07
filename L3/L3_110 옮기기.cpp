#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> s) {
	for (int i = 0; i < s.size(); i++) {
		string& str = s[i];
		vector<char> stack(s[i].size());
		int count110 = 0, top = 0, idx, str_top = 0;

		for (char c : str) {
			if (c == '0' && top >= 2 &&
				stack[top - 1] == '1' && stack[top - 2] == '1') {
				count110++;
				top -= 2;
			}
			else stack[top++] = c;
		}

		for (idx = top - 1; idx >= 0; idx--) {
			if (stack[idx] == '0') break;
		}
		idx++;

		for (int j = 0; j < idx; j++) {
			str[str_top++] = stack[j];
		}
		for (int j = 0; j < count110; j++) {
			str[str_top++] = '1';
			str[str_top++] = '1';
			str[str_top++] = '0';
		}
		for (int j = idx; j < top; j++) {
			str[str_top++] = stack[j];
		}
	}
	return s;
}