#include "solveBaekjoon.h"

void baekjoon::Á¶°Ç¹®::p_14681() {
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0) {
		cout << 1;
	}
	else if (x < 0 && y > 0) {
		cout << 2;
	}
	else if (x < 0 && y < 0) {
		cout << 3;
	}
	else cout << 4;
}