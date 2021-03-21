#include "solveBaekjoon.h"

void baekjoon::p11021() {
	int t;
	cin >> t;

	int a, b;
	for (int i = 1; i <= t; i++){
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << endl;
	}
}