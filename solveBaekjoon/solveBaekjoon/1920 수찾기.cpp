#include "solveBaekjoon.h"

int N, M;				// �ڿ��� 1<= N <= 100,000
int* field;				// �ʵ�
int* target;			// ã�ƾ��ϴ� ��

int binartySearch(int i);

void baekjoon::p1920() {
	cin >> N;
	field = new int[N];
	for (int i = 0; i < N; i++)
		cin >> field[i];
	sort(field, field + N);	// �ʵ� ����

	cin >> M;
	target = new int[M];
	for (int i = 0; i < M; i++)
		cin >> target[i];
	// �̺�Ž�� ����
	for (int i = 0; i < M; i++) {
		binartySearch(i);
	}
	// �޸� ����
	delete[]target;
	delete[]field;
}


int binartySearch(int i) {
	int left, mid, right;
	// left, right �ʱ�ȭ
	left = 0;
	right = N - 1;
	while (left <= right) {
		int mid = (left + right) / 2;	// mid ����
		if (field[mid] == target[i]) {
			cout << 1 << '\n';
			return 1;
		}
		else if (field[mid] > target[i])
			right = mid - 1;
		else if (field[mid] < target[i])
			left = mid + 1;
	}
	cout << 0 << '\n';
	return -1;
}



/*
	�̺�Ž���� ����Ѵ�.

	left, mid , right�� ���÷� �ٲ��ָ�
	target�� ã�´� ã���� return���� �Լ� ��
	�ƴϸ� 0�� ����ϰ� return

*/