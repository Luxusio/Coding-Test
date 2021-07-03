#include <vector>
#include <algorithm>
using namespace std;

int dfs(int n, vector<int>& money, int now_value, int idx) {
	if (now_value == n) return 1;
	int answer = 0;
	for (int i = idx; i < money.size(); i++) {
		int sum = now_value + money[i];
		if (sum <= n) answer += dfs(n, money, sum, i);
	}
	return answer;
}

int solution(int n, vector<int> money) {
	sort(money.begin(), money.end(), greater<int>());
	return dfs(n, money, 0, 0);
}