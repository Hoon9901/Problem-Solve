#include "solveBaekjoon.h"

void baekjoon::p1032() {
	int n; // 개수
	cin >> n;

	string s1;
	cin >> s1;

	string result = s1; // 파일 길이는 동일

	for (int i = 1; i < n; i++) {
		string temp;
		cin >> temp;

		for (int j = 0; j < s1.length(); j++) {
			if (s1[j] != temp[j]) {
				result[j] = '?';
			}
		}
	}
	cout << result << endl;
}