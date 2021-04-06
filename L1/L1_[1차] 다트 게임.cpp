//// 2021.04.05 09:53
//#include <string>
//
//using namespace std;
//
//int solution(string dartResult) {
//	int game[3];
//	int now_game = -1;
//	for (int i = 0; i < dartResult.length();i++) {
//		char c = dartResult[i];
//		if ('0' <= c && c <= '9') {
//			game[++now_game] = c - '0';
//			c = dartResult[++i];
//			if ('0' <= c && c <= '9') {
//				game[now_game] = game[now_game] * 10 + c - '0';
//				c = dartResult[++i];
//			}
//			if (c == 'D') game[now_game] *= game[now_game];
//			else if (c == 'T') game[now_game] *= game[now_game] * game[now_game];
//		}
//		else if (c == '*') {
//			game[now_game] *= 2;
//			if (now_game != 0) game[now_game - 1] *= 2;
//		}
//		else if (c == '#') {
//			game[now_game] = -game[now_game];
//		}
//	}
//	return game[0] + game[1] + game[2];
//}