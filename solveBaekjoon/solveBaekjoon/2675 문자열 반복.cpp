#include "solveBaekjoon.h"

void baekjoon::p2675() {
	int t; // �׽�Ʈ ���̽��� ���� 1<=T<=1000
	int r; // �ݺ�Ƚ�� 1<=R<=8
	string s;  // �ִ� 20
	string ans;
	cin >> t; // ���̽�
	for (int k = 0; k < t; k++) {
		cin >> r >> s; // �ݺ�Ƚ�� ���ڿ�
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < r; j++) {
				ans += s[i];
			}
		}
		cout << ans << '\n';
		ans.clear();
	}
}