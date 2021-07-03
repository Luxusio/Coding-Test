//// 2021.04.18 10:46
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//string solution(int n, int t, int m, vector<string> timetable) {
//	vector<int> queue(timetable.size());
//	for (int i = 0; i < timetable.size(); i++) {
//		queue[i] = stoi(timetable[i].substr(0, 2)) * 60 + stoi(timetable[i].substr(3, 5));
//	}
//	sort(queue.begin(), queue.end());
//	int queue_from = 0;
//	int time = 9 * 60 - t;
//	int seat_left = 0;
//	int time_to = min(time + t * n, 60 * 24 - 1);
//
//	for (int i = 0; i < n; i++) {
//		time += t;
//		for (seat_left = m; seat_left > 0 && queue_from < queue.size(); seat_left--) {
//			if (time >= queue[queue_from]) queue_from++;
//			else break;
//		}
//	}
//
//	if (seat_left <= 0) {
//		// no left seat
//		time = queue[queue_from - 1] - 1;
//	}
//	else {
//		// there left seat
//		time = time_to;
//	}
//
//	return { (char)(time / 600 + '0'), (char)(time / 60 % 10 + '0'), ':', (char)(time % 60 / 10 + '0'), (char)(time % 60 % 10 + '0') };
//}