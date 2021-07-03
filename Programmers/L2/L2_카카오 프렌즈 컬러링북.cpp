//// 2021.04.09 20:25
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<vector<int>> g_picture;
//int g_m;
//int g_n;
//
//int get_area_size(int x, int y, int color) {
//	if (g_picture[y][x] != color) return 0;
//	g_picture[y][x] = 0;
//
//	int sum = 1;
//	if (x + 1 < g_n) sum += get_area_size(x + 1, y, color);
//	if (x - 1 >= 0) sum += get_area_size(x - 1, y, color);
//	if (y + 1 < g_m) sum += get_area_size(x, y + 1, color);
//	if (y - 1 >= 0) sum += get_area_size(x, y - 1, color);
//
//	return sum;
//}
//
//vector<int> solution(int m, int n, vector<vector<int>> picture) {
//	g_m = m;
//	g_n = n;
//	g_picture = picture;
//
//	int count = 0;
//	int max_size = 0;
//
//	for (int y = 0; y < g_m; y++) {
//		for (int x = 0; x < g_n; x++) {
//			if (g_picture[y][x] != 0) {
//				int size = get_area_size(x, y, g_picture[y][x]);
//				max_size = max(max_size, size);
//				count++;
//			}
//		}
//	}
//
//	return { count, max_size };
//}