#include "solveBaekjoon.h"

void baekjoon::p11022() {
	int t;
	cin >> t;

	int a, b;
	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": "<< a << " + " << b << " = " << a + b << endl;
	}
}