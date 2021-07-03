//// 2021.04.09 23:31
//#include <vector>
//#include <list>
//
//using namespace std;
//
//bool visit(vector<vector<int>>& maps, list<pair<int, int>>& curr_went, int x, int y) {
//	if (maps[y][x]) {
//		maps[y][x] = 0;
//		curr_went.push_back({ x, y });
//		return true;
//	}
//	return false;
//}
//
//int solution(vector<vector<int>> maps)
//{
//	list<pair<int, int>> went = { {0, 0} };
//	bool found = false;
//	int distance = 1;
//	int max_y = maps.size() - 1, max_x = maps[0].size() - 1;
//
//	while (!went.empty()) {
//		list<pair<int, int>> curr_went;
//		for (pair<int, int> p : went) {
//			if (p.first + 1 <= max_x) visit(maps, curr_went, p.first + 1, p.second);
//			if (p.first - 1 >= 0) visit(maps, curr_went, p.first - 1, p.second);
//			if (p.second + 1 <= max_y) visit(maps, curr_went, p.first, p.second + 1);
//			if (p.second - 1 >= 0) visit(maps, curr_went, p.first, p.second - 1);
//		}
//		distance++;
//		if (!maps[max_y][max_x]) {
//			found = true;
//			break;
//		}
//		went = curr_went;
//	}
//	return found ? distance : -1;
//}
//
//void main() {
//	solution({{1,0,1,1,1},{1,0,1,0,1},{1,0,1,1,1},{1,1,1,0,1},{0,0,0,0,1}});
//}