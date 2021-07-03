// 2021.04.03 15:48
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> priorities, int location) {
//	int answer = 0;
//	list<pair<int, int>> priority_list;
//	for (int i = 0; i < priorities.size(); i++) {
//		priority_list.push_back({ i, priorities[i] });
//	}
//	while (!priority_list.empty()) {
//		int max_priority = 0;
//		for (pair<int, int> p : priority_list) {
//			max_priority = max(max_priority, p.second);
//		}
//		if (priority_list.front().second < max_priority) {
//			priority_list.push_back(priority_list.front());
//			priority_list.pop_front();
//		}
//		else {
//			answer++;
//			if (priority_list.front().first == location) return answer;
//			priority_list.pop_front();
//		}
//	}
//
//	return answer;
//}