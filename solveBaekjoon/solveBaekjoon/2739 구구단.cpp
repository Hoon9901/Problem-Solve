#include "solveBaekjoon.h"

void baekjoon::p2739() {
	int n;
	cin >> n;
	for (int i = 1; i <= 9; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
}