#include "solveBaekjoon.h"

void baekjoon::p1075() {
	int n, f; // n = �������� ���, f = ������ ��
	cin >> n >> f;
	// ������ ���� ������������.
	int num1 = (n / 100) * 100; // 2�ڸ��� �̻��� �� ����
	int count = 0;
	while ((num1 + count) % f != 0) { // ������ ���� ������������ �ݺ�
		count++;
	}

	if (count < 10) { // ���ڸ��� 0�ٿ��� ���
		cout << "0" << count;
	}
	else
		cout << count;
}