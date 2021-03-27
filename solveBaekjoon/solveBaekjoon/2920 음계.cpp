#include "solveBaekjoon.h"

void baekjoon::p2475() {
	int n[8]; // 8���� ����, 1~8���� �ѹ����� ����
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
1���� 8���� ���ʴ�� �����Ѵٸ� ascending,
8���� 1���� ���ʴ�� �����Ѵٸ� descending,
�� �� �ƴ϶�� mixed
*/