#include "solveBaekjoon.h"

void baekjoon::p5622() {
	string call_words;
	cin >> call_words;

	// 1 ~ 9 + 2 = �ɸ��� �ð�
	int time = 0;
	for (int i = 0; i < call_words.length(); i++) {
		
		if (call_words[i] <= 'C')
			time += 3;
		else if (call_words[i] <= 'F') {
			time += 4;
		}
		else if (call_words[i] <= 'I') {
			time += 5;
		}
		else if (call_words[i] <= 'L') {
			time += 6;
		}
		else if (call_words[i] <= 'O') {
			time += 7;
		}
		else if (call_words[i] <= 'S') {
			time += 8;
		}
		else if (call_words[i] <= 'V') {
			time += 9;
		}
		else if (call_words[i] <= 'Z') {
			time += 10;
		}
	}
	cout << time;
}

// 1. �Է¹��� �ܾ -> ����(NUM)�� �ٲٰ�
// 2. �ɸ��� �ð��� ���ѵ� �װ��� ���ϸ� �ּҽð� ���´�.