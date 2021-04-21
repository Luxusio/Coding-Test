#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> gems) {
	unordered_map<string, pair<int, int>> map;
	for (int i = 0; i < gems.size(); i++) {
		auto it = map.find(gems[i]);
		if (it == map.end()) map[gems[i]] = { i, i };
		else it->second.second = i;
	}
	
	int min_end = gems.size(), max_start = -1;
	for (pair<string, pair<int, int>> p : map) {
		max_start = max(p.second.first, max_start);
		min_end = min(p.second.second, min_end);
		cout << p.first << ": " << p.second.first << "~" << p.second.second << "->(" << min_end+1 << ", " << max_start+1 << ")" << endl;
	}

	return { min_end + 1, max_start + 1 };
}