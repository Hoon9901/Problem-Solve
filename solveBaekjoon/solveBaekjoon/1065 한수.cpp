#include "solveBaekjoon.h"

int isHasNum(int n) {
	if (n < 100) { // 100 �ر��� �� �Ѽ� 
		return 1;
	}
	else if (n < 1000) {
		int n1 = n / 100; // n �� �ڸ����� �� ����
		int n2 = n % 100 / 10;
		int n3 = n % 10;
		if (n1 - n2 == n2 - n3) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}

void baekjoon::p1065() {
	int N; // n <= 1000, natural num
	cin >> N;
	int ans = 0; // �Ѽ��� ����
	for (int i = 1; i <= N; i++) {
		ans += isHasNum(i);
	}
	cout << ans << '\n';
}

/*
 n1 - n2 == n2 - n3(����)
 1 - 2  == 2 - 3 
   -1        -1
 3 -  2 ==  2 - 1
   1          1
 1 - 0  == 0 - 1
    1    !=  -1

*/