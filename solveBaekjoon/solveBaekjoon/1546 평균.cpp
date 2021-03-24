#include "solveBaekjoon.h"

void baekjoon::p1546() {
	int n; // ������ ����
	cin >> n;
	double * score = new double[n]; // n size ��ŭ �����Ҵ�
	int max = 0;
	for (int i = 0; i < n; i++) { // ���� �Է�
		cin >> score[i];
		if (score[i] > max) { // �ְ� ����
			max = score[i];
		}
	}

	double sum = 0;
	for (int i = 0; i < n; i++) { // ��� ���� socre/M*100
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	cout << sum / n;

	delete []score; // �޸� ����
}