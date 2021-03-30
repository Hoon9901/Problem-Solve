#include "solveBaekjoon.h"

void baekjoon::p2292() {
	int n;					// ������ ���� ��ȣ
	cin >> n;
	int line_end = 1;		// �� ���� �� �� ��ȣ (�ʱ�� 1����)
	for (int i = 0; ; i++) {
		line_end = line_end + 6 * i;
		if (n <= line_end) {
			cout <<  i + 1 << '\n';
			break;
		}
	}
}

/*
	n 1<=n<=10�� n-> ������ ���� ��ȣ
	�� ���� ���� ��ȣ��
	end(i) = end(i-1) + 6 * i 
	���ѷ����� ����
	���� i ������ ������ ����ϰ�
	���� ������ n���� ���ų� ������
	������ �ּ� �� ������ ����Ѵ�(i +1)
	�ð����⵵ : O(n)
*/