//// 2021.04.05 08:00
//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//vector<int> solution(vector<string> operations) {
//	priority_queue<int, vector<int>, greater<int>> sq;	// small queue
//	priority_queue<int> bq; // big queue
//	int count = 0;
//
//	for (string s : operations) {
//		if (s[0] == 'I') {
//			int num = 0;
//			bool is_plus = true;
//			for (int i = 2; i < s.length(); i++) {
//				if (s[i] == '-') is_plus = false;
//				else num = num * 10 + s[i] - '0';
//			}
//			if (!is_plus) num = -num;
//			sq.push(num);
//			bq.push(num);
//			count++;
//		}
//		else if (count != 0) {
//			if (s[2] == '1') bq.pop();
//			else sq.pop();
//			count--;
//		}
//		if (count == 0) {
//			sq = priority_queue<int, vector<int>, greater<int>>();
//			bq = priority_queue<int>();
//		}
//	}
//
//	if (count == 0) return { 0, 0 };
//	return {bq.top(), sq.top()};
//}