//// 2021.04.10 18:52
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(vector<int> scoville, int K) {
//	priority_queue<int, vector<int>, greater<int>> queue(scoville.begin(), scoville.end());
//	
//	int idx = 0;
//	while (queue.size() > 1 && queue.top() < K) {
//		int s1 = queue.top(); queue.pop();
//		int s2 = queue.top(); queue.pop();
//		queue.push(s1 + s2 * 2);
//		idx++;
//	}
//
//	return queue.top() < K ? -1 : idx;
//}