#include "solveBaekjoon.h"

int cnt = 0;
int primeNum[1001] = { false, };	// 1000 ������ �Ҽ�
void IsPrimeNum(int num) {
	// 2�� ����, 3�� ����, ... NUM�� ����
	for (int i = 2; i * i <= num; i++) {
		// ���
		if (primeNum[i] == false) {
			for (int j = i * i; j <= num; j += i) {
				primeNum[j] = true;		// �Ҽ��� �ƴ�
			}
		}
	}
	// ã���� �ϴ� ���� �Ҽ��̸�
	if (primeNum[num] == false)	
		cnt++;	// �Ҽ� ���� ����
}

void baekjoon::p1978() {
	int T;		// test case
	cin >> T;
	primeNum[1] = true;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		IsPrimeNum(N);
	}
	cout << cnt << '\n';
}

/*
2�� �Ҽ��̹Ƿ� �״�� �ΰ� n���� 2�� ������� 0���� ġȯ
ex) primeNum[4] = 0, primeNum[6] = 0 ��
3�� �Ҽ��̹Ƿ� �״�� �ΰ� n���� 3�� ����� 0���� ġȯ
4�� 2������ 0���� ġȯ �����Ƿ� pass
���� ������ n�� �����ٿ��� ������ ������ �ݺ�
ex) 11^2 > 120 �̹Ƿ� 11���� ���� ���� ����鸸 üũ�ϸ� �ȴ�
2 ���� n���� 0���� ġȯ���� ���� �� ���

*/