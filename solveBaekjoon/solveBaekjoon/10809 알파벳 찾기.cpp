#include "solveBaekjoon.h"

void baekjoon::p10809() {
	int ans[26]; // a ~ z
	fill_n(ans, 26, -1); // all -1 init
	char s[101];
	cin >> s;
	
	for (int i = 0; s[i] != '\0'; i++) {
		if (ans[(int)s[i] - 'a'] == -1) { // 처음 등장하는 위치만
			ans[(int)s[i] - 'a'] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << ans[i] << ' ';
	}
}