#include "solveBaekjoon.h"

void baekjoon::p1316() {
	int n, ans; // 단어의 개수를 받음, 정답
	string s, noOverlapStr; // 중복단어안받는 문자열
	cin >> n;
	ans = n;
	int isNoGroupWord; // 그룹단어가 아니면 1,
	for (int k = 0; k < n; k++) {
		cin >> s;
		isNoGroupWord = 0;
		for (int i = 0; i < s.length(); i++) {
			int isExistence = 0;
			for (int j = 0; j < noOverlapStr.length(); j++) {
				if (s[i] == noOverlapStr[j]) { //
					isExistence = 1; // 존재한다.
					if (s[i - 1] != s[i]) {
						//cout << "그룹단어가 아니네\n";
						isNoGroupWord = 1;
					}
				}
			}
			if (!isExistence)
				noOverlapStr += s[i];
			if (isNoGroupWord == 1) { ans -= 1; break; } // 그룹단어가 아니니 1씩 감소
		}
		noOverlapStr.clear(); // 비워줘야함 새로운 다음 단어를 받기 위해
	}
	cout << ans << endl;
}

/*
ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고,
kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만,
aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

1. 문자열을 전체 탐색한다.
2. 처음 만난 문자를 noOverlap 문자열에 추가한다
3. 문자열을 탐색하다가 noOverlap에 존재하는데 또 만나는 문자가 있다면 그 이전에 있는 문자와 비교한다.
4. 이전에 있는 문자와 noOverlap에 있는 문자가 다르다면 그 문자열은 그룹단어가 아니다.
*/