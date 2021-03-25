#include "solveBaekjoon.h"

void baekjoon::p2675() {
	int t; // 테스트 케이스의 개수 1<=T<=1000
	int r; // 반복횟수 1<=R<=8
	string s;  // 최대 20
	string ans;
	cin >> t; // 케이스
	for (int k = 0; k < t; k++) {
		cin >> r >> s; // 반복횟수 문자열
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < r; j++) {
				ans += s[i];
			}
		}
		cout << ans << '\n';
		ans.clear();
	}
}