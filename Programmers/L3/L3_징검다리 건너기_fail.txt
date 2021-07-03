#include <vector>
#include <queue>
using namespace std;

struct compare {
	bool operator()(pair<int, int> p1, pair<int, int> p2) {
		return p1.second > p2.second;
	}
};

int solution(vector<int> stones, int k) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, compare> heap;
	vector<int> distance(stones.size(), 1);
	vector<int> end(stones.size(), -1);
	for (int i = 0; i < stones.size(); i++) heap.push({ i, stones[i] });
	
	while (!heap.empty()) {
		pair<int, int> p = heap.top(); heap.pop();

		int rvalue = p.first < stones.size() - 1 ? distance[p.first + 1] : 1;
		int lvalue = p.first > 0 ? distance[p.first - 1] : 1;
		distance[p.first] = rvalue + lvalue;

		if (lvalue > 1) {
			if (rvalue > 1) { // both
				int temp = end[p.first - 1];
				end[p.first - 1] = end[p.first + 1];
				end[p.first + 1] = temp;
				distance[end[p.first - 1]] = distance[p.first];
				distance[end[p.first + 1]] = distance[p.first];
			}
			else { // left only
				end[p.first] = end[p.first - 1];
				end[end[p.first - 1]] = p.first;
				distance[end[p.first]] = distance[p.first];
			}
		}
		else if (rvalue > 1) { // right only
			end[p.first] = end[p.first + 1];
			end[end[p.first + 1]] = p.first;
			distance[end[p.first]] = distance[p.first];
		}
		else end[p.first] = p.first;

		if (distance[p.first] > k) return p.second;
	}

	return 0;
}