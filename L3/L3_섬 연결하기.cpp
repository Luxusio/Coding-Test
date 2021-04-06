//// 20210324 0859 start
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool Compare(vector<int> w1, vector<int> w2) {
//	return w1[2] < w2[2];
//}
//
//int solution(int n, vector<vector<int>> costs) {
//	sort(costs.begin(), costs.end(), Compare);
//
//	vector<vector<int>> graphs;
//
//	int answer = 0;
//	for (vector<int> way : costs) {
//		int is1 = way[0];
//		int is2 = way[1];
//		int cost = way[2];
//
//		int is1GraphNo = -1;
//		int is2GraphNo = -1;
//		
//		int graph_size = graphs.size();
//		for (int i = 0; i < graph_size; i++) {
//			for (int vertex : graphs[i]) {
//				if (vertex == is1) {
//					is1GraphNo = i;
//				}
//				if (vertex == is2) {
//					is2GraphNo = i;
//				}
//			}
//			if (is1GraphNo != -1 && is2GraphNo != -1) break;
//		}
//
//		
//		if (is1GraphNo == -1 && is2GraphNo == -1) {
//			vector<int> graph{is1, is2};
//			graphs.push_back(graph);
//			answer += cost;
//		}
//		else if (is1GraphNo == -1) {
//			graphs[is2GraphNo].push_back(is1);
//			answer += cost;
//		}
//		else if (is2GraphNo == -1) {
//			graphs[is1GraphNo].push_back(is2);
//			answer += cost;
//		}
//		else if (is1GraphNo != is2GraphNo){
//			vector<int>& graph1 = graphs[is1GraphNo];
//			vector<int> graph2 = graphs[is2GraphNo];
//			
//			graph1.insert(graph1.begin(), graph2.begin(), graph2.end());
//			graphs.erase(graphs.begin() + is2GraphNo);
//
//			answer += cost;
//		}
//	}
//
//	return answer;
//}