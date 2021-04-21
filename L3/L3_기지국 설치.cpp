// 2021.04.22 08:17
#include <vector>
#include <algorithm>
using namespace std;

inline int add(int distance, int max_cover) {
	return distance <= 0 ? 0 : (distance / max_cover) + (distance % max_cover != 0 ? 1 : 0);;
}

int solution(int n, vector<int> stations, int w) {
	int need = 0, max_cover = w * 2 + 1, from = 0, to = 0;
	for (int i = 0; i < stations.size(); i++) {
		to = max(stations[i] - w, to);
		need += add(to - from - 1, max_cover);
		from = min(stations[i] + w, n);
	}
	return need + add(n - from, max_cover);
}