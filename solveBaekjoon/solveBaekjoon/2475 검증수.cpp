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

// 각 숫자를 제곱후 합하고 그 값을 10으로 나머지 구하면 됨
