#include "solveBaekjoon.h"
#include <cstring>

void baekjoon::p1152() {
	string s;
	getline(cin, s); // ���� ���� �Է�
	if (s.empty()){
		cout << "0";
		return ;
	}
	int cnt = 1; // �ܾ��� ����
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' '){
			cnt++;
		}
	}
	if (s[0] == ' ') cnt--; // �� ���� ����
	if (s[s.length() - 1] == ' ') cnt--; // ù ���� ���� ����
	cout << cnt << '\n';
}