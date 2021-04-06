//// 2021.04.05 10:27
//#include <iostream>
//using namespace std;
//
//long long solution(int w, int h) {
//	if(w > h) swap(w, h);
//	int gcf = 1; // 최대공약수
//	for (int i = gcf; i <= w; i++) if (w % i == 0 && h % i == 0) gcf = i;
//	return ((long long) w * h) - (w / gcf + h / gcf - 1) * gcf;
//}