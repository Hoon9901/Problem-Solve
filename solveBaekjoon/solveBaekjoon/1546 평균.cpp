#include "solveBaekjoon.h"

void baekjoon::p1546() {
	int n; // 과목의 개수
	cin >> n;
	double * score = new double[n]; // n size 만큼 동적할당
	int max = 0;
	for (int i = 0; i < n; i++) { // 점수 입력
		cin >> score[i];
		if (score[i] > max) { // 최고 점수
			max = score[i];
		}
	}

	double sum = 0;
	for (int i = 0; i < n; i++) { // 모든 점수 socre/M*100
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	cout << sum / n;

	delete []score; // 메모리 해제
}