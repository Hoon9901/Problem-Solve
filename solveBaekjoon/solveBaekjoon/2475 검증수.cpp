#include "solveBaekjoon.h"

void baekjoon::p2475() {
	int n[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
		n[i] = n[i] * n[i];
		sum += n[i];
	}
	cout << sum % 10;
}

// �� ���ڸ� ������ ���ϰ� �� ���� 10���� ������ ���ϸ� ��
