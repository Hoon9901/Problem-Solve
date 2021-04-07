#include "solveBaekjoon.h"

void baekjoon::p2164() {
	int N;		// 1 <= N <= 500,000
	cin >> N;
	queue<int> cards;
	for (int i = 1; i <= N; i++) {
		cards.push(i);
	}
	while (cards.size() != 1) {
		// ���� ���� �ִ� ī�带 ������
		cards.pop();
		// �״��� ���� ���� �ִ� ī�带 ������ �ű��.
		int topCard = cards.front();
		cards.pop();
		cards.push(topCard);
	}
	cout << cards.front() << '\n';
}

/*


	1 ~ N
	N = 4�̸�
	
	1 2 3 4
	1�� ������
	2 3 4
	2�� ���� �Ʒ��� �ű��
	3 4 2
	3�� ������
	4 2
	4�� ���� �Ʒ��� �ű��
	2 4
	2�� ������
	4
	���� ī��� 4�̴�.
*/