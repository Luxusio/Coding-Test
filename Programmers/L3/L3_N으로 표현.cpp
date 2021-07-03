//// 2021.04.02 22:10
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//#define min(a, b) (a < b ? a : b)
//
//using namespace std;
//
//unordered_map<int, int> map;
//int comp_number;
//
//bool check(unordered_map<int, int>& new_map, int calculate_value, char new_count) {
//	if (calculate_value == comp_number) {
//		return true;
//	}
//	if (calculate_value != 0 && (
//		map.find(calculate_value) == map.end() || 
//		new_count < map[calculate_value])) {
//		auto nmIt = new_map.find(calculate_value);
//		if (nmIt != new_map.end()) {
//			new_map[calculate_value] = min(nmIt->second, new_count);
//		}
//		else {
//			new_map[calculate_value] = new_count;
//		}
//	}
//
//	return false;
// }
//
//int solution(int N, int number) {
//	comp_number = number;
//	int mul = 0;
//	for (int i = 1; i <= 8; i++) {
//		mul = mul * 10 + N;
//		map[mul] = i;
//		if (mul == number) return i;
//	}
//	
//	int min_answer = 9;
//	for (int i = 0; i < 9; i++) {
//		unordered_map<int, int> new_map;
//
//		int prev_num, now_num;
//		char prev_count, now_count;
//
//		unordered_map<int, int>::iterator it, it2;
//		for (it = map.begin(); it != map.end(); it++) {
//			prev_num = it->first;
//			prev_count = it->second;
//			
//			for (it2 = it; it2 != map.end(); it2++) {
//				now_num = it2->first;
//				now_count = it2->second;
//
//				int new_count = prev_count + now_count;
//				if (new_count <= 8) {
//					if (check(new_map, now_num + prev_num, new_count)) min_answer = min(min_answer, new_count);
//					if (check(new_map, now_num - prev_num, new_count)) min_answer = min(min_answer, new_count);
//					if (check(new_map, prev_num - now_num, new_count)) min_answer = min(min_answer, new_count);
//					long long cal_num = (long long) now_num * prev_num;
//					if (-2147483647 < cal_num && cal_num < 2147483647)
//						if (check(new_map, cal_num, new_count)) min_answer = min(min_answer, new_count);
//					if (check(new_map, cal_num, new_count)) min_answer = min(min_answer, new_count);
//					if (check(new_map, now_num / prev_num, new_count)) min_answer = min(min_answer, new_count);
//					if (check(new_map, prev_num / now_num, new_count)) min_answer = min(min_answer, new_count);
//
//				}
//			}
//
//		}
//
//		auto mapIt = map.begin();
//		for (it = new_map.begin(); it != new_map.end(); it++) {
//			mapIt = map.find(it->first);
//			if (mapIt == map.end()) map[it->first] = it->second;
//			else map[it->first] = min(mapIt->second, it->second);
//		}
//
//	}
//
//	return min_answer == 9 ? -1 : min_answer;
//}
//
//void main() {
//
//	printf("%d\n", solution(5, 12));
//
//}