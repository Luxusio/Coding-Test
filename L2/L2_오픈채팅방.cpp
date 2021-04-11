//// 2021.04.12 07:47
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <sstream>
//using namespace std;
//
//vector<string> solution(vector<string> record) {
//	unordered_map<string, string> map;
//	unordered_map<string, int> ndef;	// not defined
//	int count = 0;
//	for (string s : record) if (s[0] != 'C') count++;
//	vector<string> answer(count);
//	for (int i = record.size() - 1; i >= 0; i--) {
//		vector<string> v(3);
//		stringstream ss(record[i]);
//		string temp;
//		int idx = 0;
//		while (getline(ss, temp, ' ')) v[idx++] = temp;
//
//		auto it = map.find(v[1]);
//		if (it == map.end() && v[0][0] != 'L') {
//			map.insert({ v[1], v[2] });
//			it = map.find(v[1]);
//			auto it2 = ndef.find(v[1]);
//			if (it2 != ndef.end()) answer[it2->second] = it->second + "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
//		}
//
//		if (it == map.end()) ndef.insert({ v[1], --count });
//		else {
//			if (v[0][0] == 'E') answer[--count] = it->second + "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
//			else if (v[0][0] == 'L') answer[--count] = it->second + "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
//		}
//	}
//	return answer;
//}