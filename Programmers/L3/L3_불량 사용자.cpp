//// 2021.04.20 17:01
//#include <string>
//#include <vector>
//using namespace std;
//
//vector<bool> ban_case;
//void dfs(vector<vector<bool>>& ban_map, int b_idx, unsigned char visited) {
//	if (b_idx == ban_map.size()) {
//		ban_case[visited] = true;
//		return;
//	}
//
//	bool found = false;
//	for (int i = 0; i < ban_map[b_idx].size(); i++) {
//		if (ban_map[b_idx][i]) {
//			found = true;
//			if (!(visited & (1 << i))) dfs(ban_map, b_idx + 1, visited | (1 << i));
//		}
//	}
//	if (!found) dfs(ban_map, b_idx + 1, visited);
//}
//
//int solution(vector<string> user_id, vector<string> banned_id) {
//	int i, j, k, ban_count = 0;
//	vector<vector<bool>> ban_map(banned_id.size(), vector<bool>(user_id.size(), false));
//	ban_case = vector<bool>(256, false);
//	for (i = 0; i < user_id.size(); i++) {
//		string& id = user_id[i];
//		for (j = 0; j < banned_id.size(); j++) {
//			string& ban_id = banned_id[j];
//			if (id.length() != ban_id.length()) continue;
//			for (k = 0; k < id.length(); k++) {
//				if (id[k] != ban_id[k] && ban_id[k] != '*') break;
//			}
//			if (k == id.length()) ban_map[j][i] = true;
//		}
//	}
//	dfs(ban_map, 0, 0);
//	int answer = 0;
//	for (int i = 0; i < 256; i++) if (ban_case[i]) answer++;
//	return answer;
//}