#include "solveBaekjoon.h"

void baekjoon::p8958() {
	int case_n;
	cin >> case_n;
	string s;
	for (int i = 0; i < case_n; i++) {
		cin >> s;
		int sum = 0, cnt = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') cnt++;
			else cnt = 0;
			sum += cnt;
		}
		cout << sum << '\n';
	}
}