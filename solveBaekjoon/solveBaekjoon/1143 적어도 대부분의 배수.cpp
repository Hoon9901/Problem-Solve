#include "solveBaekjoon.h"

void baekjoon::p1143() {
	int num[5];
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	
	int divNum = 1;
	while (true) {
		int cnt = 0;
		for (int i = 0; i < 5; i++) {
			if (divNum % num[i] == 0) { // ¹è¼ö
				cnt++;
			}
			if (cnt >= 3) {
				cout << divNum << endl;
				return;
			}
		}
		divNum++;
	}
}