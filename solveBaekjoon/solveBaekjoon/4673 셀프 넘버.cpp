#include "solveBaekjoon.h"

//  n�� n�� �� �ڸ����� ���ϴ� �Լ�
int d(int n) {
	int tenThousands = 0; // ��
	int thousands = 0; // õ
	int hunders = 0; // ��
	int tens = 0; // ��
	int ones = 0; // �� 
	if (n < 10) { // 1�ڸ���
		return n + n;
	}
	else if (n < 100) { // 2�ڸ���
		tens = n / 10;
		ones = n % 10;
		return n + tens + ones;
	}
	else if (n < 1000) { // 3�ڸ���
		hunders = n / 100;
		tens = (n % 100) / 10;
		ones = (n % 100) % 10;
		return n + hunders + tens + ones;
	}
	else if (n < 10000) { // 4�ڸ���
		thousands = n / 1000;
		hunders = (n % 1000) / 100;
		tens = (n % 1000) % 100 / 10;
		ones = (n % 1000) % 100 % 10;
		return n + thousands + hunders + tens + ones;
	}
	else if (n < 100000) { // 5�ڸ���
		tenThousands = n / 10000;
		thousands = (n % 10000) / 1000;
		hunders = (n % 10000) % 1000 / 100;
		tens = (n % 10000) % 1000 % 100 / 10;
		ones = (n % 10000) % 1000 % 100 % 10;
		return n + tenThousands + thousands + hunders + tens + ones;
	}
	else {
		cout << " 6�ڸ��� �̻�" << '\n';
		return 0;
	}
}

// �����ѹ��� ã�°� �ƴ� �����ѹ��� �ƴ�(�����ڰ� �ִ� ��) ���� ã�Ƽ� �װ��� 1�� �ش�.
// �׷��� ������ ������ �ڿ����� �����ѹ��� 0�� �����Եȴ�.
// 1�� �����ѹ� num[1] = 0
// 1+1 = 2 2�� �����ڰ� �����Ƿ� �����ѹ��� �ƴ�. ���� num[2] = 1 �� (1�� ������ O)
// 3�� �����ڰ� �����Ƿ� �����ѹ� num[3] = 0
// 4�� 2+2 = 4 �̹Ƿ� num[4] = 1
void baekjoon::p4673() {
	int n = 0; // start number
	static int Nums[10001] = { 0 };  // 0~10000 ���� Ž��,
	for (int i = 0; i <= 10000; i++) {
		Nums[d(i)] = 1; 
		if (!Nums[i]) { // �����ѹ�
			cout << i << endl;
		}
	}
}