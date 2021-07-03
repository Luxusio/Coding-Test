#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;



//long long solution(string s) {
//
//	vector<vector<int>> state;
//
//	long long answer = 0;
//	char left, right;
//	int beauty, l, r, l2, r2;
//	bool mask;
//
//	for (int i = 0; i < s.length(); i++) {
//		left = s[i];
//		beauty = 0;
//		l = i; // left
//		l2 = i; // left 2
//		r2 = i; // right 2
//		mask = true;
//
//		for (int j = i + 1; j < s.length(); j++) {
//			right = s[j];
//			if (right != left) {
//				if (mask) {
//					mask = false;
//					l2 = j;
//				}
//				r2 = j;
//				answer += j - i;
//			}
//			else {
//				if (mask) l2 = j;
//				answer += max(j - l2, r2 - i);
//			}
//		}
//	}
//
//	return answer;
//}


//#include <iostream>
//
//long long solution(string s) {
//	long long answer = 0;
//
//	int diff_idx[26], diff_idx_apply[26];
//	int i, left, right, diff_count, apply, temp;
//	char l;
//
//	for (int i = 0; i < 26; i++) {
//		diff_idx[i] = 1000000;
//		diff_idx_apply[i] = 1;
//	}
//	i = 0;
//	for(i=0;i<s.length();i++) {
//		l = s[i];
//		left = i;
//		temp = l - 'a';
//		if (i >= diff_idx[temp]) {
//			diff_idx_apply[temp] = diff_idx[temp];
//			diff_idx[temp] = 1000000;
//		}
//		apply = diff_idx_apply[temp];
//
//		for (right = i + 1; right < s.length() && l != s[right]; right++);
//		diff_idx[temp] = min(diff_idx[temp], right);
//
//		diff_count = right - left - 1;
//		answer += ((long long) (diff_count * (diff_count + 1) / 2)) << (apply - 1);
//		
//		cout << answer << endl; 
//	}
//
//	
//	
//	return answer;
//}
//
//void main() {
//	//string s = "a";
//	//for (int i = 1; i < 26; i++) {
//	//	s = s + (char)('a' +  i);
//	//	cout << i << " " << solution(s) << " " << s << endl;
//	//}
//
//
//	cout << solution("baby") << endl;
//}