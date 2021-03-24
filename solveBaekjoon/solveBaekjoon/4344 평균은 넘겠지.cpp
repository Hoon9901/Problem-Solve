#include "solveBaekjoon.h"

void baekjoon::p4344() {
	int c; // ���̽� ����
	int studen; // �л� ��
	int scores[1000] = { 0 }; // �л��� ���� ����
	double result;

	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> studen;
		int sum = 0;
		for (int j = 0; j < studen; j++) {
			cin >> scores[j];
			sum += scores[j];
		}
		int avg = sum / studen; // ���
		int cnt = 0;
		for (int j = 0; j < studen; j++) { // ��� �Ѵ¾ֵ� count
			if (scores[j] > avg) cnt++;
		}
		result = (double)cnt / studen *100; // ����
		cout << fixed; // �Ҽ��� �Ʒ��� ����
		cout.precision(3); // �Ҽ��� �Ʒ� 3�ڸ������� ���
		cout << result << "%\n";
	}
}