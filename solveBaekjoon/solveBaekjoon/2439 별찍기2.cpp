#include "solveBaekjoon.h"

void baekjoon::p2439() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - (i+1); j++) {
			cout << ' ';
		}
		for (int j = 0; j <= i; j++) {
			cout << '*';
		}
		cout << endl;
	}
}