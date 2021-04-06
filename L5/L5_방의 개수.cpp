//// 2021.04.03 13:40
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//
//using namespace std;
//
//inline void cal_move(int& x, int& y, int direction) {
//	if (direction == 0) {
//		y += 1;
//	}
//	else if (direction == 1) {
//		x += 1;
//		y += 1;
//	}
//	else if (direction == 2) {
//		x += 1;
//	}
//	else if (direction == 3) {
//		x += 1;
//		y -= 1;
//	}
//	else if (direction == 4) {
//		y -= 1;
//	}
//	else if (direction == 5) {
//		x -= 1;
//		y -= 1;
//	}
//	else if (direction == 6) {
//		x -= 1;
//	}
//	else if (direction == 7) {
//		x -= 1;
//		y += 1;
//	}
//}
//
//
//
//int solution(vector<int> arrows) {
//	int answer = 0;
//	
//	// x, y, x, y
//	unordered_map<int, unordered_map<int, unordered_map<int, unordered_set<int>>>> points;
//
//	int prev_x, prev_y, x, y;
//	prev_x = 0;
//	prev_y = 0;
//	x = 0;
//	y = 0;
//
//	for (int i = 0; i < arrows.size();i++) {
//		int direction = arrows[i];
//		cal_move(x, y, direction);
//		// 1. 이 선이 이미 존재하는 선인가?
//		// 2. 현재 도달한 점이 이미 존재하는 점인가?
//
//		// current x
//		bool line_exists = false;
//		bool point_exists = false;
//
//		auto xIt = points.find(x);
//		if (xIt != points.end()) {
//			auto yIt = xIt->second.find(y);
//			if (yIt != xIt->second.end()) {
//				point_exists = true;
//				auto xIt2 = yIt->second.find(prev_x);
//				if (xIt2 != yIt->second.end()) {
//					auto yIt2 = xIt2->second.find(prev_y);
//					if (yIt2 != xIt2->second.end()) {
//						line_exists = true;
//					}
//				}
//			}
//		}
//
//		// prev x
//		xIt = points.find(prev_x);
//		if (xIt != points.end()) {
//			auto yIt = xIt->second.find(prev_y);
//			if (yIt != xIt->second.end()) {
//				//point_exists = true;
//				auto xIt2 = yIt->second.find(x);
//				if (xIt2 != yIt->second.end()) {
//					auto yIt2 = xIt2->second.find(y);
//					if (yIt2 != xIt2->second.end()) {
//						line_exists = true;
//					}
//				}
//			}
//		}
//
//		//printf("%dth move(%d, %d:%d) %s %s\n", i + 1, x, y, direction, line_exists ? "true" : "false", point_exists ? "true" : "false");
//
//
//		// if line doesn't exists,
//		// insert new line to map
//		xIt = points.find(prev_x);
//		if (xIt == points.end()) {
//			points[prev_x] = unordered_map<int, unordered_map<int, unordered_set<int>>>();
//			xIt = points.find(prev_x);
//		}
//		auto yIt = xIt->second.find(prev_y);
//		if (yIt == xIt->second.end()) {
//			xIt->second[prev_y] = unordered_map<int, unordered_set<int>>();
//			yIt = xIt->second.find(prev_y);
//		}
//
//		auto xIt2 = yIt->second.find(x);
//		if (xIt2 == yIt->second.end()) {
//			yIt->second[x] = unordered_set<int>();
//			xIt2 = yIt->second.find(x);
//		}
//
//		xIt2->second.insert(y);
//
//		if (!line_exists) {
//
//			if (point_exists) {
//				// if point exists,
//				// this means new figure has been created.
//				answer++;
//				//printf("new shape found!(%d, %d)(%d, %d) %dth\n", prev_x, prev_y, x, y, i+1);
//			}
//
//			// 3. 이 선이 다른 선을 대각선으로 가로지르는가?
//			// Assume prev 0,0, curr 1, 1
//			int qx1, qx2, qy1, qy2; // query x1, x2, y1, y2
//			qx1 = qx2 = prev_x;
//			qy1 = qy2 = prev_y;
//			if (direction == 1) { // query : (0, 1), (1, 0)
//				qy1++;
//				qx2++;
//			}
//			else if (direction == 3) { // query : (1, 0), (0, -1)
//				qx1++;
//				qy2--;
//			}
//			else if (direction == 5) { // query : (0, -1), (-1, 0)
//				qy1--;
//				qx2--;
//			}
//			else if (direction == 7) { // query : (-1, 0), (0, 1)
//				qx1--;
//				qy2++;
//			}
//
//			bool line_across = false;
//
//			// TODO : fix finding algorithm
//			xIt = points.find(qx1);
//			if (xIt != points.end()) {
//				auto yIt = xIt->second.find(qy1);
//				if (yIt != xIt->second.end()) {
//					auto xIt2 = yIt->second.find(qx2);
//					if (xIt2 != yIt->second.end()) {
//						auto yIt2 = xIt2->second.find(qy2);
//						if (yIt2 != xIt2->second.end()) {
//							line_across = true;
//						}
//					}
//				}
//			}
//
//			xIt = points.find(qx2);
//			if (xIt != points.end()) {
//				auto yIt = xIt->second.find(qy2);
//				if (yIt != xIt->second.end()) {
//					auto xIt2 = yIt->second.find(qx1);
//					if (xIt2 != yIt->second.end()) {
//						auto yIt2 = xIt2->second.find(qy1);
//						if (yIt2 != xIt2->second.end()) {
//							line_across = true;
//						}
//					}
//				}
//			}
//
//			if (line_across) {
//				answer++;
//				//printf("new across shape found!(%d, %d)(%d, %d) %dth\n", prev_x, prev_y, x, y, i + 1);
//			}
//
//		}
//
//		prev_x = x;
//		prev_y = y;
//	}
//
//	return answer;
//}
//
//void main() {
//	printf("%d\n", solution({ 2, 0, 2, 4, 4, 7, 2, 5, 0, 6, 3, 2, 7, 2, 5, 0})); // 6
//	printf("%d\n", solution({ 6, 0, 3, 0, 5, 2, 6, 0, 3, 0, 5 })); // 3
//	printf("%d\n", solution({ 6, 5, 2, 7, 1, 4, 2, 4, 6 })); // 3
//	printf("%d\n", solution({ 5, 2, 7, 1, 6, 3 })); // 3
//	printf("%d\n", solution({ 6, 2, 4, 0, 5, 0, 6, 4, 2, 4, 2, 0})); // 3
//}