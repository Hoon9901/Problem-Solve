#include "solveBaekjoon.h"

void baekjoon::���ǹ�::p_2753() {
	int year;
	cin >> year;

	if (year % 4 == 0) { // 4�� ��� �̸鼭
		if (year % 100 != 0) { // 100�� ����� �ƴҋ�
			cout << true;
		}
		else if (year % 400 == 0) { // 400�� ����϶�	cout << true;
			cout << true;
		}
		else
			cout << false;
	}
	else cout << false;
}