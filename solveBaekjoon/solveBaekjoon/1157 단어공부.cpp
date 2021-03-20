#include "solveBaekjoon.h"

void baekjoon::p1157() {
	string s;
	cin >> s;

	int n[27] = { 0 }; // a ~ z 총 26개
	for (int i = 0; s[i] != '\0'; i++) { // 문자열에 해당하는 알파벳 카운팅
		n[toupper(s[i]) - 'A']++; 
	}
	int max[2] = { 0 }; // 0번 인덱스는 max, 1번 인덱스는 알파벳
	for (int i = 0; i < 27; i++) { // 전체 탐색
		if (n[i] > max[0]) { // 최대인가
			max[0] = n[i]; 
			max[1] = 'A' + i;
			for (int j = 0; j < 27; j++) { // 많이 사용된 알파벳이 여러개인가
				if (i != j && max[0] == n[j]) {
					max[1] = '?';
					break;
				}
			}
		}
	}
	cout << (char)max[1] << endl;
}