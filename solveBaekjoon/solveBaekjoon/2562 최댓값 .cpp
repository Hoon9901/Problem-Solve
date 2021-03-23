#include "solveBaekjoon.h"

void baekjoon::p2438() {
	int arr[9];
	int max = 0;
	int maxIndex;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i + 1;
		}
	}

	cout << max << '\n' << maxIndex;
}