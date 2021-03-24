#include "solveBaekjoon.h"

void baekjoon::p4344() {
	int c; // 케이스 개수
	int studen; // 학생 수
	int scores[1000] = { 0 }; // 학생들 마다 점수
	double result;

	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> studen;
		int sum = 0;
		for (int j = 0; j < studen; j++) {
			cin >> scores[j];
			sum += scores[j];
		}
		int avg = sum / studen; // 평균
		int cnt = 0;
		for (int j = 0; j < studen; j++) { // 평균 넘는애들 count
			if (scores[j] > avg) cnt++;
		}
		result = (double)cnt / studen *100; // 비율
		cout << fixed; // 소수점 아래로 고정
		cout.precision(3); // 소수점 아래 3자리까지만 출력
		cout << result << "%\n";
	}
}