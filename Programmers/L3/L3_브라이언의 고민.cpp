//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//bool rule1(string& sentence, char c, int from, int to) {
//	int big_count = 0;
//
//	cout << "rule1(" << c << "):";
//	for (from--, to++; from <= to; from++) {
//		cout << sentence[from] << "" << big_count << ", ";
//		if (isupper(sentence[from])) big_count++;
//		else {
//			if (sentence[from] != c || big_count != 1) return false;
//			big_count = 0;
//		}
//	}
//	cout << endl;
//	return true;
//}
//
//bool rule2(string& sentence, char c, int from, int to) {
//	char inside = 0;
//	to--;
//	cout << "rule2:";
//	for (int i = from + 1; i <= to; i++) {
//		cout << sentence[from] << " ";
//		if (islower(sentence[i])) {
//			if (inside == 0) {
//				inside = sentence[i];
//				if (!rule1(sentence, inside, from + 1, to - 1)) return false;
//			}
//			else if (inside != sentence[i]) return false;
//		}
//	}
//	cout << endl;
//	return true;
//}
//
//string solution(string sentence) {
//	string answer = "";
//	for (int i = 0; i < sentence.length(); i++) {
//		char c = sentence[i];
//		
//		if (isupper(c)) {
//			if (i == sentence.length() - 1 || isupper(sentence[i + 1])) {
//				// big / big 
//				answer = answer + c + " ";
//			}
//			else {
//				// big / small
//				char special = sentence[i + 1];
//				int start = i + 1;
//				int end = i + 1;
//				int count = 1;
//				for (int j = i + 2; j < sentence.length(); j++) {
//					if (sentence[j] == special) {
//						count++;
//						end = j;
//					}
//				}
//				cout << "sc " << special << ":" << count << endl;
//
//				cout << "1(" << sentence[i] << ")";
//				if (rule1(sentence, special, start, end)) {
//					int to = end + 1;
//					for (i = start - 1; i <= to; i++) {
//						if (isupper(sentence[i])) answer += sentence[i];
//					}
//					sentence = sentence.substr(i);
//					i = -1;
//					answer += " ";
//				}
//				else if (count == 2 && rule2(sentence, special, start, end)) {
//					//int to = end + 1;
//					for (i = start; i <= end; i++) {
//						if (isupper(sentence[i])) answer += sentence[i];
//					}
//					sentence = sentence.substr(i);
//					i = -1;
//					answer += " ";
//				}
//				else return "invalid";
//			}
//		}
//		else {
//			char special = c;
//			int start = i;
//			int end = i;
//			int count = 1;
//			for (int j = i + 1; j < sentence.length(); j++) {
//				if (sentence[j] == c) {
//					count++;
//					end = j;
//				}
//			}
//			if (count == 2) {
//				cout << "2";
//				if (rule2(sentence, special, start, end)) {
//					for (i = start; i <= end; i++) {
//						if (isupper(sentence[i])) answer += sentence[i];
//					}
//					sentence = sentence.substr(i);
//					i = -1;
//					answer += " ";
//				}
//				else return "invalid";
//			}
//			else {
//				cout << "2";
//				if (rule1(sentence, special, start, end)) {
//					int to = end + 1;
//					for (i = start - 1; i <= to; i++) {
//						if (isupper(sentence[i])) answer += sentence[i];
//					}
//					sentence = sentence.substr(i);
//					i = -1;
//					answer += " ";
//				}
//				else return "invalid";
//			}
//		}
//		cout << sentence << ":" << answer << endl;
//	}
//
//	int pos = answer.length() - 1;
//	if (pos >= 0 && answer[pos] == ' ') answer = answer.substr(0, pos);
//	return answer;
//}