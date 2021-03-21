#include "solveBaekjoon.h"

void baekjoon::p15552() {
	int t;
	cin.tie(NULL);  ios::sync_with_stdio(false);
	cin >> t;

	int n1, n2;
	for (int i = 0; i < t; i++) {
		cin >> n1 >> n2;
		cout << n1 + n2 << '\n';
	}
}