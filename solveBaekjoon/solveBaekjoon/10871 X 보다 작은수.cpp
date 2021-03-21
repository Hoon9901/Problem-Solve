#include "solveBaekjoon.h"

void baekjoon::p10871() {
	int n, x;
	cin >> n >> x;

	int * a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (x > a[i]) cout << a[i] << ' ';
	}
}