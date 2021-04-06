//// 2021.04.05 16:56
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//	int time = 0, total_weight = 0;
//	queue<pair<int, int>> moving; // in_time, weight
//	while (!truck_weights.empty() || !moving.empty()) {
//		if (!moving.empty() && time - moving.front().first >= bridge_length) {
//			total_weight -= moving.front().second;
//			moving.pop();
//		}
//		if (!truck_weights.empty() && total_weight + truck_weights[0] <= weight) {
//			total_weight += truck_weights[0];
//			moving.push({ time, truck_weights[0] });
//			truck_weights.erase(truck_weights.begin());
//		}
//		time++;
//	}
//	return time;
//}