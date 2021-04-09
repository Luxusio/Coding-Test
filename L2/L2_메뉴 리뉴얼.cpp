//// 2021.04.09 21:55
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//vector<string> g_orders;
//unordered_map<string, int> menu;
//bool can_search[21];
//
//void search_menu(string s, string check, int left_len, int len, int idx_from) {
//	if (left_len-- > 0) {
//		for(int i=idx_from;i<s.length();i++) {
//			if (can_search[i]) {
//				can_search[i] = false;
//				search_menu(s, check + s[i], left_len, len, i);
//				can_search[i] = true;
//			}
//		}
//	}
//	else {
//		if (menu.find(check) != menu.end()) return; // already found
//		bool c_check[26];
//		fill_n(c_check, 26, 0);
//		for (char c : check) c_check[c - 'A'] = true;
//
//		int s_count = 0;
//		for (string s : g_orders) {
//			int c_count = 0;
//			for (char c : s) if (c_check[c - 'A']) c_count++;
//			if (c_count == len) s_count++;
//		}
//		if(s_count >= 2) {
//			menu.insert({ check, s_count });
//		}
//	}
//}
//
//
//bool compare(pair<string, int> p1, pair<string, int> p2) {
//	return p1.second != p2.second ?
//		p1.second > p2.second : p1.first < p2.first;
//}
//
//vector<string> solution(vector<string> orders, vector<int> course) {
//	for (string& s : orders) sort(s.begin(), s.end());
//	g_orders = orders;
//
//	for (int len : course) {
//		for (string s : orders) {
//			fill_n(can_search, 21, true);
//			search_menu(s, string(), len, len, 0);
//		}
//	}
//
//	vector<pair<string, int>> v_menu(menu.size());
//	int i = 0;
//	for (pair<string, int> p : menu) v_menu[i++] = p;
//	sort(v_menu.begin(), v_menu.end(), compare);
//
//	vector<string> answer;
//
//	int max_len[11];
//	fill_n(max_len, 11, 0);
//	for (pair<string, int> p : v_menu) {
//		if (p.second >= max_len[p.first.length()]) {
//			max_len[p.first.length()] = p.second;
//			answer.push_back(p.first);
//		}
//	}
//	sort(answer.begin(), answer.end());
//	return answer;
//}