#include "solveBaekjoon.h"

//전역변수
int num1, num2;
int mGcd;	// 최대공약수
int mLcm;	// 최소공배수

/*
	1. A와 B의 최대공약수를 구하기 위해 A를 B로 나눈 나머지 R1을 구한다.

	2. B를 R1으로 나눈 나머지 R2를 구한다.

	3. R1을 R2로 나눈 나머지 R3를 구한다

	4. 위 과정을 계속 반복하여, 어느 한 쪽이 나누어떨어질 때(나머지 = 0)
	   까지 반복한다. 이 직전 얻은 나머지(Rn-1)가 최대공약수이다.

	   1254, 582
	   1254 = 582 X 2 + 90
	   582 = 90 X 6 + 42
	   90 = 42 X 2 + 6	-> 6이 gcd
	   42 = 6 X 7

	   345 190 
	   r1 = 345(n1) % 190(n2) = 155(r1)
	   r2 = 190(n2) % 155(r1) = 35 (r2)
	   r3 = 155(r1) % 35(r2) = 15	(r3)
	   r4 = 35(r2) % 15(r3) = 5 (r4)
	   r5 = 15(r3) % 5(r4) = 0 (r5)
	   gcd = r4

	   24 % 18 = 6 (r1)
	   18 % 6 = 0 (r2)gcd = 6

	   4%3 = 1 (r1)
	   3%1 = 0 (r2)

	   5 % 3 = 2 (r1)
	   3 % 2 = 1 (r2)
	   2 % 1 = 0 (r3)
	   r3 == 0)

*/

// 최대공약수를 구하는 함수
void getGCD() {
	int r1 = num1 % num2;	// 나머지 R1을 구한다.
	if (r1 == 0) {
		mGcd = num2; 
		return;
	}
	int r2 = num2 % r1;		// 나머지 R2를 구한다.
	if (r2 == 0) {
		mGcd = r1; 
		return;
	}
	int r3 = r1 % r2;		// R3를 구한다.
	if (r3 == 0) {
		mGcd = r2; 
		return;
	}
	while (true) {
		r1 = r2 % r3;
		if (r1 == 0) {
			mGcd = r3;
			break;
		}
		r2 = r3 % r1; 
		if (r2 == 0) {
			mGcd = r1;
			break;
		}
		r3 = r1 % r2;
		if (r3 == 0) {
			mGcd = r2;
			break;
		}

	}
	
}

void getLCM() {
	// AB = LG 에 따라서
	mLcm = (num1 * num2) / mGcd;
}

void baekjoon::p2609() {
	// input
	cin >> num1 >> num2;
	getGCD();
	getLCM();
	// ouput
	cout << mGcd << '\n' << mLcm;
}

/*
	최대공약수란?
	(GCD, Greateast Common Division)


	최소공배수란?
	(LCM, Least Common Multiple)

	두 수를 소인수분해를 한뒤,
	두수의 공통된 소인수를 모두 곱하면 최대공약수
	두 수의 모든 소인수를 곱하면 최소공배수

	A,B의 최대공약수를 G, 최소공배수를 L이라 하면..

				AB = LG

	* L = AB/G

	1만 이하의 자연수를 받으므로.....
	기본적으로 반복문이 중첩되면 시간초과 예상.. O(n^2)
	따라서 유클리드 호제법을 사용한다.

	A를 B로 나눈 몫을 Q라 하고, 나머지를 R이라 하자.
	이때, mGcd(A,B) = gcd(B,R) 이다.
	
	60 = 24 X 2 + 12
	gcd(60,24) = gcd(24, 12) = 12

	1. A와 B의 최대공약수를 구하기 위해 A를 B로 나눈 나머지 R1을 구한다.

	2. B를 R1으로 나눈 나머지 R2를 구한다.
		
	3. R1을 R2로 나눈 나머지 R3를 구한다

	4. 위 과정을 계속 반복하여, 어느 한 쪽이 나누어떨어질 때(나머지 = 0)
	   까지 반복한다. 이 직전 얻은 나머지(Rn-1)가 최대공약수이다.

*/