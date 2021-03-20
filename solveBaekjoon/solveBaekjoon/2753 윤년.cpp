#include "solveBaekjoon.h"

void baekjoon::조건문::p_2753() {
	int year;
	cin >> year;

	if (year % 4 == 0) { // 4의 배수 이면서
		if (year % 100 != 0) { // 100의 배수가 아닐떄
			cout << true;
		}
		else if (year % 400 == 0) { // 400의 배수일때	cout << true;
			cout << true;
		}
		else
			cout << false;
	}
	else cout << false;
}