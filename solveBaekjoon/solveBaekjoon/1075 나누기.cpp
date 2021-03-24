#include "solveBaekjoon.h"

void baekjoon::p1075() {
	int n, f; // n = 나눠야할 대상, f = 나누는 값
	cin >> n >> f;
	// 나머지 없이 나눠질때까지.
	int num1 = (n / 100) * 100; // 2자리수 이상의 값 추출
	int count = 0;
	while ((num1 + count) % f != 0) { // 나머지 없이 나눠질떄까지 반복
		count++;
	}

	if (count < 10) { // 한자리면 0붙여서 출력
		cout << "0" << count;
	}
	else
		cout << count;
}