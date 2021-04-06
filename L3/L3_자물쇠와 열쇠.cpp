//// 2021.03.29 22:00
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
//	bool answer = true;
//
//	int key_size = key.size();
//	int lock_size = key.size();
//
//	// make all possible rotates
//	vector<vector<vector<int>>> rotates = { key, key, key, key };
//	int sub_from = key.size() - 1;
//	for (int i = 1; i < 4; i++) {
//		for (int y = 0; y < key.size(); y++) {
//			for (int x = 0; x < key.size(); x++) {
//				rotates[i][sub_from - x][y] = rotates[i - 1][y][x];
//			}
//		}
//	}
//
//	int from = key.size() * -1;
//	int to = lock.size() + 1;
//	for (int r = 0; r < 4; r++) {
//		for (int key_y = from; key_y < to; key_y++) {
//			for (int key_x = from; key_x <= to; key_x++) {
//				int count = 0;
//				for (int y = 0; y < lock.size(); y++) {
//					for (int x = 0; x < lock[y].size(); x++) {
//						int value_lock = lock[y][x];
//						int value_key = 0;
//						int key_pos_x = -key_x + x;
//						int key_pos_y = -key_y + y;
//
//						if ((0 <= key_pos_x && key_pos_x < key.size()) &&
//							(0 <= key_pos_y && key_pos_y < key.size()))
//							value_key = rotates[r][key_pos_y][key_pos_x];
//
//						if ((value_lock == 0 && value_key == 1) ||
//							(value_lock == 1 && value_key == 0)) count++;
//
//					}
//				}
//				if (count == (lock.size()*lock.size()))
//					return true;
//			}
//		}
//	}
//
//	return false;
//}
//
//void main() {
//	solution({ {0, 0, 0}, {1, 0, 0}, {0, 1, 1} }, { {1, 1, 1}, {1, 1, 0}, {1, 0, 1} });
//}