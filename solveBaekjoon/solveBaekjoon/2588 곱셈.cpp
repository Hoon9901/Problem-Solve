#include "solveBaekjoon.h"

void baekjoon::출력::multiple() {
	int num1, num2;
	cin >> num1 >> num2;

	int n3, n4, n5; // N의 자리의 숫자로 곱한 값 저장

	n3 = num1 * (num2 % 10);
	n4 = num1 * ((num2 % 100) / 10);	
	n5 = num1 * (num2 / 100); 

	int result = num1 * num2;
	cout << n3 << endl << n4 << endl << n5 << endl << result;
}