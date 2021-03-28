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

string board[50];		// �Է� ���� ����

// �������� W�� ü������ �������� ��ĥ�ؾ��� ĭ ��
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
// �������� B�� ü������ �������� ��ĥ�ؾ��� ĭ ��
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

	int result = 2500;		// 50*50 = 2500���� �ش� �ּҰ��� ���ϱ�����
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			int temp = min(whiteChange(i, j), blackChange(i, j));	// W���� �ٲ۰ſ�, B�� �ٲ۰� ���� �������� temp�� �ִ´�.
			result = min(result, temp);
		}
	}

	cout << result;
}

/*
* �������� W�� ü�������
* �������� B�� ü�����带 �����
* �Է¹��� ���忡�� 
* W����� B����� �ٸ� ������ ������ ���ϸ��.
* 
*/