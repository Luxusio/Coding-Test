//// 2021.04.03 14:30
//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//vector<int> solution(vector<int> prices) {
//	vector<int> answer(prices.size());
//	stack<pair<int, int>> st; // idx, price
//
//	for (int i = 0; i < prices.size();i++) {
//		int price = prices[i];
//		
//		while (!st.empty() && price < st.top().second) {
//			int idx = st.top().first;
//			answer[idx] = i - idx;
//			st.pop();
//		}
//
//		st.push({ i, price });
//	}
//
//	int last_idx = prices.size() - 1;
//	while (!st.empty()) {
//		answer[st.top().first] = last_idx - st.top().first;
//		st.pop();
//	}
//
//	return answer;
//}