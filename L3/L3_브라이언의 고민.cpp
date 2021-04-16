#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void rem_space(string& str, int from_last) {
	int pos = str.length() - from_last;
	if (str[pos] == ' ') str = str.substr(0, pos);
}

string solution(string sentence) {
	vector<bool> used(26, false);
	char c1 = 0, c2 = 0;
	int c1_count = 0, c2_count = 0, i, j;
	int c1_first = 0, c1_last = 0, c2_first = 0, c2_last;
	int big_count_at_start = -1;
	int big_count = 0, max_big_count = 0;
	int big_count_c1 = 0, big_count_c2 = 0;
	int max_big_count_c1 = 0, max_big_count_c2 = 0;
	string answer = "";

	for (i = 0; i < sentence.length(); i++) {
		char c = sentence[i];
		cout << answer << endl;
		if (islower(c)) {

			c1 = c;
			c1_count = 1;
			c1_first = i;
			c1_last = i;
			big_count_c1 = 0;
			max_big_count_c1 = 0;

			c2 = 0;
			c2_count = 0;
			c2_first = -1;
			c2_last = -1;
			big_count_c2 = 0;
			max_big_count_c2 = 0;

			// todo : substr sentence for each letter.
			for (j = i + 1; j < sentence.length(); j++) {
				char wc = sentence[j];

				if (islower(wc)) {
					if (wc == c1) {
						c1_count++;
						c1_last = j;
					}
					else if (c2 == 0) {
						c2 = wc;
						c2_first = j;
					}
					else if (wc == c2) {
						c2_count++;
						c2_last = j;
					}
					else {
						// meet c3 = not have been meet
						break;
					}

					if (wc == c1) {
						max_big_count_c1 = max(big_count_c1, max_big_count_c1);
						big_count_c1 = 0;
					}
					else if (wc == c2) {
						max_big_count_c2 = max(big_count_c2, max_big_count_c2);
						big_count_c2 = 0;
					}
				}
				else {
					big_count_c1++;
					big_count_c2++;
				}
			}

			cout << c1 << "(" << c1_count << ", " << c1_first << "~" << c1_last << ") " << c2 << "(" << c2_count << ", " << c2_first << "~" << c2_last << "):" << max_big_count << endl;
			if (c2 == 0 || c1_last < c2_first) {
				// outer or between only
				// how to determine outer or between?
				if (c1_count == 2 && max_big_count_c1 >= 1) {
					cout << "Outer!!" << endl;
					// outer : count=2 && max_big_count >= 1
					if (big_count >= 1) {
						answer = answer.substr(0, answer.length() - 1);
						i--;
					}
					int to = c1_last + 1;
					//answer += " ";
					for (; i <= to; i++) if (isupper(sentence[i])) answer += sentence[i];
					i--;
					answer += " ";
				}
				else if (max_big_count_c1 == 1) {
					cout << "between!!" << endl;
					// between : count>=1 && max_big_count == 1
					if (big_count >= 1) {
						answer = answer.substr(0, answer.length() - 1);
						i--;
					}
					int to = c1_last + 1;
					//answer += " ";
					for (; i <= to; i++) if (isupper(sentence[i])) answer += sentence[i];
					i--;
					answer += " ";
				}
				else return "invaild";

			}
			else {
				// outer and between
				if (c1_count == 2 && max_big_count_c2 == 1) {
					cout << "both!!" << endl;
					//answer += " ";
					for (; i < c1_last; i++) {
						if (isupper(sentence[i])) answer += sentence[i];
					}
					answer += " ";
				}
				else return "invaild";
			}

			big_count = 0;
		}
		else {
			big_count++;
			answer += c;
		}
	}
	
	return answer;
}