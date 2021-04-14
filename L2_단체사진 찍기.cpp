//// 2021.12.15
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//struct condition {
//	char idx1;
//	char idx2;
//	char op;
//	char value;
//};
//
//int check(const vector<condition>& conditions, vector<int> left, vector<int> position, int idx) {
//	if (idx == 8) {
//		for (condition con : conditions) {
//			int distance = abs(position[con.idx1] - position[con.idx2]) - 1;
//			if (con.op == '<') { if (distance >= con.value) return 0; }
//			else if (con.op == '>') { if (distance <= con.value) return 0; }
//			else { if (distance != con.value) return 0; }
//		}
//		return 1;
//	}
//	else {
//		int n_idx = idx + 1;
//		int answer = 0;
//		vector<int> temp1, temp2;
//		for (int i = 0; i < left.size(); i++) {
//			temp1 = left; temp2 = position;
//			temp2[temp1[i]] = idx;
//			temp1.erase(temp1.begin() + i);
//			answer += check(conditions, temp1, temp2, n_idx);
//		}
//		return answer;
//	}
//}
//
//int solution(int n, vector<string> data) {
//	vector<char> converter = { 0, 0, 1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0};
//	vector<condition> conditions(data.size());
//	for (int i = 0; i < data.size();i++) conditions[i] = { converter[data[i][0] - 'A'], converter[data[i][2] - 'A'], data[i][3], (char) (data[i][4] - '0') };
//	return check(conditions, { 0, 1, 2, 3, 4, 5, 6, 7 }, vector<int>(8), 0);
//}
//
//void main() {
//
//	cout << solution(2, { "N~F=0", "R~T>2" }) << endl;
//	//solution(2, { "N~F=0", "R~T>2" });
//
//}