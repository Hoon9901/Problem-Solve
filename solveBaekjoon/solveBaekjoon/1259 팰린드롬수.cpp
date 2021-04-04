#include "solveBaekjoon.h"

bool IsPalindromeNum(string num);

void baekjoon::p1259() {
	string input = "";
	while (true) {
		cin >> input;
		if (input == "0") break;

		if (IsPalindromeNum(input)) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
}

bool IsPalindromeNum(string num) {
	for (int i = 0; i < num.length() / 2; i++) {
		if (num[i] != num[num.length() - 1 - i]) {
			return false;
		}
	}
	return true;
}

// 앞에서 읽거나 뒤에서 읽어도 같은거
/*
	121		Y
	1 2, 2 1


	1 2 3 2 1
	0 1 2 3 4
	[2-0],[1-1],[0-2] == [2+0],[3+1],[4+2]

	length / 2 = mid

	010 무의미한 0은 없다.

	1231	N

*/
