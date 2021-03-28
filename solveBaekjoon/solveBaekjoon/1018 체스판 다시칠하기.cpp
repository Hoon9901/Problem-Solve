#include "solveBaekjoon.h"

string whiteBoard[8] = {
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"}
};

string blackBoard[8] = {
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"}
};

string board[50];		// 입력 받을 보드

// 시작점이 W인 체스보드 기준으로 색칠해야할 칸 수
int whiteChange(int y, int x) {
	int cnt = 0;
	for (int i = y; i < y + 8; i++) {
		for (int j = x; j < x + 8; j++) {
			if (board[i][j] != whiteBoard[i - y][j - x])
				cnt++;
		}
	}
	return cnt;
}
// 시작점이 B인 체스보드 기준으로 색칠해야할 칸 수
int blackChange(int y, int x) {
	int cnt = 0;
	for (int i = y; i < y + 8; i++) {
		for (int j = x; j < x + 8; j++) {
			if (board[i][j] != blackBoard[i - y][j - x])
				cnt++;
		}
	}
	return cnt;
}

void baekjoon::p1018() {
	int n, m;
	cin >> n >> m;

	int result = 2500;		// 50*50 = 2500개를 준다 최소값을 구하기위해
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			int temp = min(whiteChange(i, j), blackChange(i, j));	// W으로 바꾼거와, B로 바꾼거 둘중 작은값을 temp에 넣는다.
			result = min(result, temp);
		}
	}

	cout << result;
}

/*
* 시작점이 W인 체스보드와
* 시작점이 B인 체스보드를 만들고
* 입력받은 보드에서 
* W보드와 B보드와 다른 색깔의 총합을 구하면됨.
* 
*/