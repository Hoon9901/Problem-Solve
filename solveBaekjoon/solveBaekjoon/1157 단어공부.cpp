#include "solveBaekjoon.h"

void baekjoon::p1157() {
	string s;
	cin >> s;

	int n[27] = { 0 }; // a ~ z �� 26��
	for (int i = 0; s[i] != '\0'; i++) { // ���ڿ��� �ش��ϴ� ���ĺ� ī����
		n[toupper(s[i]) - 'A']++; 
	}
	int max[2] = { 0 }; // 0�� �ε����� max, 1�� �ε����� ���ĺ�
	for (int i = 0; i < 27; i++) { // ��ü Ž��
		if (n[i] > max[0]) { // �ִ��ΰ�
			max[0] = n[i]; 
			max[1] = 'A' + i;
			for (int j = 0; j < 27; j++) { // ���� ���� ���ĺ��� �������ΰ�
				if (i != j && max[0] == n[j]) {
					max[1] = '?';
					break;
				}
			}
		}
	}
	cout << (char)max[1] << endl;
}