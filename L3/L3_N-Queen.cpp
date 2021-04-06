//#include <string>
//#include <vector>
//
//using namespace std;
//
//
//int map[13];
//int map_size;
//int answer;
//
//bool isValid(int depth) {
//	depth--;
//	for (int i = 0; i < depth; i++) {
//		if (map[i] == map[depth]) return false;
//		if (abs(map[i] - map[depth]) == abs(i - depth)) return false;
//	}
//	return true;
//}
//
//void dfs(int depth) {
//	if (depth > map_size) {
//		answer++;
//	}
//	else {
//		for (int i = 0; i < map_size; i++) {
//			map[depth] = i;
//			if (isValid(depth)) {
//				dfs(depth + 1);
//			}
//			else {
//				map[depth] = 0;
//			}
//		}
//	}
//}
//
//int solution(int n) {
//	map_size = n;
//
//	for (int i = 0; i < n; i++) {
//		map[0] = i;
//		dfs(1);
//	}
//
//	return answer;
//}
//
//void main() {
//	solution(4);
//}