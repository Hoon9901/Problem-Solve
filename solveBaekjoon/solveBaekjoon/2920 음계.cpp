#include "solveBaekjoon.h"

void baekjoon::p2475() {
	int n[8]; // 8개의 숫자, 1~8까지 한번씩만 등장
	int ans = 0;
	for (int i = 0; i < 8; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < 7; i++) {
		if (n[i] - n[i+1] == -1) { // ascend
			ans = 1;
		}
		else if (n[i] - n[i+1] == 1) { // descend
			ans = 2;
		}
		else { // mixed
			ans = 3;
			break;
		}
	}
	(ans == 1) ? cout << "ascending" : (ans == 2) ? cout << "descending" : cout << "mixed";
}

/*
1부터 8까지 차례대로 연주한다면 ascending,
8부터 1까지 차례대로 연주한다면 descending,
둘 다 아니라면 mixed
*/