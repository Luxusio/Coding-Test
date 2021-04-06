//// 2021.03.28 21:20
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//	
//	unordered_map<string, int> participant_map;
//	
//	for (string name : participant) {
//		participant_map[name]++;
//	}
//
//	for (string name : completion) {
//		participant_map[name]--;
//		if (participant_map[name] == 0) {
//			participant_map.erase(name);
//		}
//	}
//
//	return participant_map.begin()->first;
//}