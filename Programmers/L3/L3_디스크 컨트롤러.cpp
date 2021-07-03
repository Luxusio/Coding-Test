//// 2021.04.18 22:01
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//struct compare {
//	bool operator()(vector<int> v1, vector<int> v2) {
//		return v1[1] > v2[1];
//	}
//};
//
//int solution(vector<vector<int>> jobs) {
//	sort(jobs.begin(), jobs.end());
//
//	int idx = 0, time = 0, total_time = 0;
//	priority_queue<vector<int>, vector<vector<int>>, compare> heap;
//
//	while (idx < jobs.size() || !heap.empty()) {
//		while (idx < jobs.size() && jobs[idx][0] <= time)
//			heap.push(jobs[idx++]);
//
//		if (heap.empty())
//			time = jobs[idx][0]; // warp time
//		else {
//			vector<int> job = heap.top(); heap.pop();
//			total_time += time - job[0] + job[1];
//			time += job[1];
//		}
//	}
//
//	return total_time / jobs.size();
//}