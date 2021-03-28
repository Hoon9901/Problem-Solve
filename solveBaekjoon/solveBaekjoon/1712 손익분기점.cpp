#include "solveBaekjoon.h"

int breakEvenPoint(long fixedCost, long makeCost, long price) {
	int cnt = 0;		// 제품 개수

	if (makeCost > price)	// 만드는 비용이 판매 가격보다 더 크면 손익분기점 -1
		return -1;
	if (price - makeCost <= 0)
		return -1;
	if (fixedCost <= 0)
		return -1;
	cnt = fixedCost / (price - makeCost) + 1;

	return cnt;
}

void baekjoon::p1712() {
	long a, b, c;		// a,b,c 21억 이하의 자연수
	long result = 0;
	cin >> a >> b >> c;
	result = breakEvenPoint(a, b, c);
	cout << result;
}


/*
	A 는 고정 비용(매년)
	B 는 가변 비용(한대 생산시)
	C 는 제품 가격

	A + B * 개수 = 총 비용 (개수 만큼 만드는데 든 비용)
	C * 개수 = 총 수입 (개수 만큼의 판매 수입)

	A + B * 개수 < C * 개수
	를 넘는 시점이 손익분기점이다.
*/