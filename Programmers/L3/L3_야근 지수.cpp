//// 2021.04.20 15:13
//#include <vector>
//#include <queue>
//using namespace std;
//
//long long solution(int n, vector<int> works) {
//	priority_queue<int, vector<int>> heap(works.begin(), works.end());
//	for (int i = 0; i < n && !heap.empty(); i++) {
//		int value = heap.top() - 1; heap.pop();
//		if (value > 0) heap.push(value);
//	}
//
//	long long answer = 0;
//	while (!heap.empty()) {
//		answer += heap.top() * heap.top();
//		heap.pop();
//	}
//	return answer;
//}