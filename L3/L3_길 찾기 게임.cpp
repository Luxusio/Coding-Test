//// 2021.04.17 15:00
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct btree {
//	int node;
//	btree* left;
//	btree* right;
//};
//
//btree* build_tree(vector<vector<int>>& nodeinfo, int start, int end) {
//	if (start > end) return nullptr;
//
//	int max_height = -1;
//	int max_idx = -1;
//	for (int i = start; i <= end; i++) {
//		if (nodeinfo[i][1] > max_height) {
//			max_height = nodeinfo[i][1];
//			max_idx = i;
//		}
//	}
//
//	btree* result = new btree;
//	result->node = nodeinfo[max_idx][2];
//	result->left = build_tree(nodeinfo, start, max_idx - 1);
//	result->right = build_tree(nodeinfo, max_idx + 1, end);
//	return result;
//}
//
//void preorder(btree& tree, vector<int>& vec, int& idx) {
//	vec[idx++] = tree.node;
//	if (tree.left != nullptr) preorder(*tree.left, vec, idx);
//	if (tree.right != nullptr) preorder(*tree.right, vec, idx);
//}
//
//void postorder(btree& tree, vector<int>& vec, int& idx) {
//	if (tree.left != nullptr) postorder(*tree.left, vec, idx);
//	if (tree.right != nullptr) postorder(*tree.right, vec, idx);
//	vec[idx++] = tree.node;
//}
//
//vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
//	for (int i = 0; i < nodeinfo.size(); i++) nodeinfo[i].push_back(i + 1);
//	sort(nodeinfo.begin(), nodeinfo.end());
//	btree* tree = build_tree(nodeinfo, 0, nodeinfo.size() - 1);
//
//	vector<vector<int>> answer(2, vector<int>(nodeinfo.size()));
//	int idx = 0; preorder(*tree, answer[0], idx);
//	idx = 0; postorder(*tree, answer[1], idx);
//	return answer;
//}
//
//void main() {
//	solution({ {5,3},{11,5},{13,3},{3,5},{6,1},{1,3},{8,6},{7,2},{2,2} });
//}