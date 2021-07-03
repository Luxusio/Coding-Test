//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct task {
//	int startTime;
//	int endTime;
//} Task;
//
//bool compare(Task t1, Task t2) {
//	return t1.startTime < t2.startTime;
//}
//
//int solution(vector<string> lines) {
//
//	vector<Task> taskList;
//	vector<int> taskAmountListFromStart;
//	vector<int> taskAmountListFromEnd;
//
//	for (int i = 0; i < lines.size(); i++) {
//		string str = lines[i];
//
//		char idx = 11;
//		int h = (str[idx++] - 48) * 10 + (str[idx++] - 48);
//		idx++;
//		int m = (str[idx++] - 48) * 10 + (str[idx++] - 48);
//		idx++;
//		int s = (str[idx++] - 48) * 10 + (str[idx++] - 48);
//		// idx = 19
//		idx++;
//		int sMini = (str[idx++] - 48) * 100 + (str[idx++] - 48) * 10 + (str[idx++] - 48);
//
//		int endTime = (((h * 60 + m) * 60) + s) * 1000 + sMini;
//
//		idx++;
//		int mul = 1000;
//		int duration = (str[idx++] - 48) * mul;
//		char c;
//		while ((c = str[idx++]) != 's') {
//			if (c == '.') continue;
//			mul /= 10;
//			duration += (c - 48) * mul;
//		}
//
//		taskList.push_back(Task{ endTime - duration + 1, endTime });
//		taskAmountListFromStart.push_back(0);
//		taskAmountListFromEnd.push_back(0);
//	}
//
//	// sort
//	sort(taskList.begin(), taskList.end(), compare);
//	//merge_sort(taskList, 0, taskList.size());
//
//	for (int i = 0; i < taskList.size(); i++) {
//		printf("%d, %d\n", taskList[i].startTime, taskList[i].endTime);
//	}
//
//	// calculate taskAmount
//	for (int i = 0; i < taskList.size(); i++) {
//
//		int startFrom = taskList[i].startTime;
//		int startTo = startFrom + 1000;
//
//		int endFrom = taskList[i].endTime;
//		int endTo = endFrom + 1000;
//
//		for (int j = 0; j < taskList.size(); j++) {
//			int startTime = taskList[j].startTime;
//			int endTime = taskList[j].endTime;
//
//			// check start
//			if (startFrom <= endTime && startTime < startTo) taskAmountListFromStart[i]++;
//
//			// check end
//			if (endFrom <= endTime && startTime < endTo) taskAmountListFromEnd[i]++;
//		}
//
//		// check end
//	}
//
//	int answer = 0;
//	for (int i = 0; i < taskAmountListFromStart.size(); i++) {
//		if (answer < taskAmountListFromStart[i]) answer = taskAmountListFromStart[i];
//		if (answer < taskAmountListFromEnd[i]) answer = taskAmountListFromEnd[i];
//	}
//
//	return answer;
//}