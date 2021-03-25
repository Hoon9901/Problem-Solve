#include "solveBaekjoon.h"
#include <cstring>

void baekjoon::p1152() {
	string s;
	getline(cin, s); // 공백 포함 입력
	if (s.empty()){
		cout << "0";
		return ;
	}
	int cnt = 1; // 단어의 개수
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' '){
			cnt++;
		}
	}
	if (s[0] == ' ') cnt--; // 끝 공백 제거
	if (s[s.length() - 1] == ' ') cnt--; // 첫 문자 공백 제거
	cout << cnt << '\n';
}