// 2021.03.28 20:20
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> numbers) {
//
//	bool* available = new bool[201]();
//
//	for (int i = 0; i < numbers.size(); i++) {
//		for (int j = i + 1; j < numbers.size(); j++) {
//			available[numbers[i] + numbers[j]] = true;
//		}
//	}
//
//	vector<int> answer;
//	for (int i = 0; i <= 200; i++) {
//		if (available[i]) answer.push_back(i);
//	}
//
//	return answer;
//}