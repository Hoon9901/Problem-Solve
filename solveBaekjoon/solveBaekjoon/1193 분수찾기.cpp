#include "solveBaekjoon.h"

void baekjoon::p1193() {
	int	x;		// x번째 분수
	cin >> x;
	int sumXdiff = 0;	// sum은 갯수이고 x를 뺴면 그 라인에 몇번째인지 나온다
	int i = 1;
	// 1부터 i번째까지의 분수가 몇개있는지 셈.
	for (int sum = 0; sum + i < x; i++) {
		sum += i;
		sumXdiff = x - sum;
	}
	if (i % 2 == 1) {	// 홀수
		cout << i - sumXdiff + 1 << '/' << sumXdiff;
	}
	else {				// 짝수
		cout << sumXdiff << '/' << i - sumXdiff + 1;
	}// 3, 2
}

// sum += i;
// 1개, 3개, 6개

/*
*	입력받은 x가 몇번째인지를 찾는다.
*
*
	홀수 번쨰
	1. 1/1	= 1
	3. 1/3 2/2 3/1
	5. 1/5 2/4 3/3 4/2 5/1
	7. 7/1 6/2 5/3 4/4 3/5 2/6 1/7   1/i

	짝수 번쨰
	2. 1/2, 2/1		= 2.5
	4. 1/4, 2/3, 3/2, 4/1	= 6.41
	6. 1/6, 2/5, 3/4, 4/3, 5/2, 6/1
	8. 1/8, 2/7, 3/6, 4/5, 5/4, 6/3, 7/2, 8/1       i/1
*/