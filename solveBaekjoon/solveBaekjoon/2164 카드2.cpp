#include "solveBaekjoon.h"

void baekjoon::p2164() {
	int N;		// 1 <= N <= 500,000
	cin >> N;
	queue<int> cards;
	for (int i = 1; i <= N; i++) {
		cards.push(i);
	}
	while (cards.size() != 1) {
		// 제일 위에 있는 카드를 버린다
		cards.pop();
		// 그다음 제일 위에 있는 카드를 밑으로 옮긴다.
		int topCard = cards.front();
		cards.pop();
		cards.push(topCard);
	}
	cout << cards.front() << '\n';
}

/*


	1 ~ N
	N = 4이면
	
	1 2 3 4
	1을 버린다
	2 3 4
	2을 제일 아래로 옮긴다
	3 4 2
	3을 버린다
	4 2
	4를 제일 아래로 옮긴다
	2 4
	2을 버린다
	4
	남는 카드는 4이다.
*/