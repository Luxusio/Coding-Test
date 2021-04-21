#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> stones, int k) {
	int low = 0, high = 200000000;
	while (low <= high) {
		int mid = (low + high) / 2;
		int max_len = 0;
		int now_len = 0;

		for (int i = 0; i < stones.size(); i++) {
			if (stones[i] <= mid) now_len++;
			else {
				max_len = max(now_len, max_len);
				now_len = 0;
			}
		}
		max_len = max(now_len, max_len);

		if (max_len >= k) high = mid - 1;
		else low = mid + 1;
	}

	return low;
}