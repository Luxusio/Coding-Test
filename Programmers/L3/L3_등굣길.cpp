//// 2021.04.15 08:19
//#include <vector>
//using namespace std;
//
//int solution(int m, int n, vector<vector<int>> puddles) {
//	vector<vector<bool>> blocked(n, vector<bool>(m));
//	vector<vector<int>> values(n, vector<int>(m));
//	for (vector<int> v : puddles) blocked[v[1] - 1][v[0] - 1] = -1;
//	values[0][0] = 1;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (blocked[i][j]) continue;
//			if (i > 0) values[i][j] = (values[i][j] + values[i - 1][j]) % 1000000007;
//			if (j > 0) values[i][j] = (values[i][j] + values[i][j - 1]) % 1000000007;
//		}
//	}
//	return values[n-1][m-1];
//}