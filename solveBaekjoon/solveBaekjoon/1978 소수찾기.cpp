#include "solveBaekjoon.h"

int cnt = 0;
int primeNum[1001] = { false, };	// 1000 까지의 소수
void IsPrimeNum(int num) {
	// 2의 제곱, 3의 제곱, ... NUM의 제곱
	for (int i = 2; i * i <= num; i++) {
		// 배수
		if (primeNum[i] == false) {
			for (int j = i * i; j <= num; j += i) {
				primeNum[j] = true;		// 소수가 아님
			}
		}
	}
	// 찾고자 하는 값이 소수이면
	if (primeNum[num] == false)	
		cnt++;	// 소수 개수 증가
}

void baekjoon::p1978() {
	int T;		// test case
	cin >> T;
	primeNum[1] = true;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		IsPrimeNum(N);
	}
	cout << cnt << '\n';
}

/*
2는 소수이므로 그대로 두고 n까지 2의 배수들을 0으로 치환
ex) primeNum[4] = 0, primeNum[6] = 0 …
3은 소수이므로 그대로 두고 n까지 3의 배수들 0으로 치환
4는 2번에서 0으로 치환 됐으므로 pass
위의 과정을 n의 제곱근에서 내림한 수까지 반복
ex) 11^2 > 120 이므로 11보다 작은 수의 배수들만 체크하면 된다
2 부터 n까지 0으로 치환되지 않은 수 출력

*/