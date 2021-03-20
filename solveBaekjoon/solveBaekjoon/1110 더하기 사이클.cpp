#include "solveBaekjoon.h"

void baekjoon::p1110() {
	int n; //  0 <= n <= 99
	cin >> n;

	int count = 0;
	int newNum = n;
	do{
		int tens = newNum / 10;
		int units = newNum % 10;
		int sum = tens + units;

		newNum = (units * 10) + (sum % 10);
		count++;
	} while (n != newNum);
	cout << count << endl;
}