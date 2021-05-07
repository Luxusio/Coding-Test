//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(int distance, vector<int> rocks, int n) {
//	sort(rocks.begin(), rocks.end());
//	vector<int> distances;
//	distances.push_back(rocks[0]);
//	for (int i = 1; i < rocks.size();i++) {
//		distances.push_back(rocks[i] - rocks[i - 1]);
//	}
//	distances.push_back(distance - rocks[rocks.size()-1]);
//
//	for (int d : distances) {
//		printf("%d ", d);
//	}
//	printf("\n");
//
//	for (int i = 0; i < n; i++) {
//		auto min = min_element(distances.begin(), distances.end());
//		if (min == distances.end() - 1) *(min - 1) += *min;
//		else *(min + 1) += *min;
//		distances.erase(min);
//
//		for (int d : distances) {
//			printf("%d ", d);
//		}
//		printf("\n");
//
//	}
//
//	return *min_element(distances.begin(), distances.end());
//}