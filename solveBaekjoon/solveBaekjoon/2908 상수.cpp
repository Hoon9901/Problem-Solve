#include "solveBaekjoon.h"

void baekjoon::p2908() {
	string s1, s2;
	cin >> s1 >> s2;
	string revS1, revS2;
	for (int i = 2; i >= 0; i--) {
		revS1 += s1[i];
		revS2 += s2[i];
	} // 문자열 반대로 대입.
	int ans1 =0 , ans2 =0;

	for (int i = 0; i < 3; i++) {
		ans1 += (revS1[i] - '0') * pow(10, 2-i);
		ans2 += (revS2[i] - '0') * pow(10, 2 - i);
	}
	(ans1 > ans2) ? cout << ans1 : cout << ans2;
}

/*
* 
* \,2,3 = 3
	123 = 
	100 = 123/ pow(10, i) * 100
		20
			3 = 123 % 10
			123 /= 10 -> 12
			3, 2. 1 
			3*100 2*10 1*1
			num += 3 * pow(10, i)
			i == 2, i == 1, i == 0
*/