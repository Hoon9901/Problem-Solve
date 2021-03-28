#include "solveBaekjoon.h"

int breakEvenPoint(long fixedCost, long makeCost, long price) {
	int cnt = 0;		// ��ǰ ����

	if (makeCost > price)	// ����� ����� �Ǹ� ���ݺ��� �� ũ�� ���ͺб��� -1
		return -1;
	if (price - makeCost <= 0)
		return -1;
	if (fixedCost <= 0)
		return -1;
	cnt = fixedCost / (price - makeCost) + 1;

	return cnt;
}

void baekjoon::p1712() {
	long a, b, c;		// a,b,c 21�� ������ �ڿ���
	long result = 0;
	cin >> a >> b >> c;
	result = breakEvenPoint(a, b, c);
	cout << result;
}


/*
	A �� ���� ���(�ų�)
	B �� ���� ���(�Ѵ� �����)
	C �� ��ǰ ����

	A + B * ���� = �� ��� (���� ��ŭ ����µ� �� ���)
	C * ���� = �� ���� (���� ��ŭ�� �Ǹ� ����)

	A + B * ���� < C * ����
	�� �Ѵ� ������ ���ͺб����̴�.
*/