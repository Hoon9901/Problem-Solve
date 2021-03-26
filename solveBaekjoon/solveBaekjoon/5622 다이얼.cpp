#include "solveBaekjoon.h"

void baekjoon::p5622() {
	string call_words;
	cin >> call_words;

	// 1 ~ 9 + 2 = 걸리는 시간
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

// 1. 입력받은 단어를 -> 정수(NUM)로 바꾸고
// 2. 걸리는 시간을 구한뒤 그값을 더하면 최소시간 나온다.