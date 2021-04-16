#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void trim_last(string& str) {
	int pos = str.length() - 1;
	if (pos >= 0 && str[pos] == ' ') str = str.substr(0, pos);
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
		if (islower(c)) {
			if (used[c - 'a']) return "invalid";

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
						if (used[wc - 'a']) return "invalid";
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

			if (c2 == 0 || c1_last < c2_first) {
				// outer or between only
				// how to determine outer or between?
				if (c1_count == 2 && max_big_count_c1 >= 1) {
					// outer : count=2 && max_big_count >= 1
					//if (big_count >= 1) {
					//	answer = answer.substr(0, answer.length() - 1);
					//	i--;
					//}
					int to = c1_last;
					trim_last(answer);
					answer += " ";
					for (; i <= to; i++) if (isupper(sentence[i])) answer += sentence[i];
					sentence = sentence.substr(i);
					i = -1;
					answer += " ";
				}
				else if (max_big_count_c1 <= 1) {
					if (big_count < 1) return "invalid";
					// between : count>=1 && max_big_count == 1
					answer = answer.substr(0, answer.length() - 1);
					i--;
					int to = c1_last + 1;
					trim_last(answer);
					answer += " ";
					for (; i <= to; i++) if (isupper(sentence[i])) answer += sentence[i];
					sentence = sentence.substr(i);
					i = -1;
					answer += " ";
				}
				else return "invalid";
				used[c1 - 'a'] = true;
			}
			else {
				// outer and between
				if (c1_count == 2 && max_big_count_c2 == 1) {
					trim_last(answer);
					answer += " ";
					int to = c1_last - 1;
					for (; i <= to; i++) {
						if (isupper(sentence[i])) answer += sentence[i];
					}
					sentence = sentence.substr(i + 1);
					i = -1;
					answer += " ";
					used[c1 - 'a'] = true;
					used[c2 - 'a'] = true;
				}
				else return "invalid";
			}

			big_count = 0;
		}
		else {
			big_count++;
			answer += c;
		}
	}

	if (answer[0] == ' ') answer = answer.substr(1);
	trim_last(answer);
	return answer;
}