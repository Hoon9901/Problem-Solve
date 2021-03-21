#include "solveBaekjoon.h"

void baekjoon::p8393() {
	int n;
	cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum << endl;
}