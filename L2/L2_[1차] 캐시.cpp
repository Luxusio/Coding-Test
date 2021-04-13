//// 2021.04.13 14:25
//#include <string>
//#include <vector>
//#include <list>
//#include <algorithm>
//using namespace std;
//
//int solution(int cacheSize, vector<string> cities) {
//	list<string> cache;
//	int time = 0;
//	for (string city : cities) {
//		transform(city.begin(), city.end(), city.begin(), [](unsigned char c) { return tolower(c); });
//		auto it = cache.begin();
//		for (; it != cache.end(); it++) if (*it == city) break;
//		if (it != cache.end()) cache.erase(it);
//		else time += 4;
//		time++;
//		cache.push_back(city);
//		if (cache.size() > cacheSize) cache.pop_front();
//	}
//	return time;
//}