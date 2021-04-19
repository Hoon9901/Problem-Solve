#include <bits/stdc++.h>
/*
#include <iostream>
#include <deque>
#include <vector>
#include <queue>
#include <algorithm>
*/
using namespace std;

#define ONLINE_JUDGE		// if you use online judge you must write this code

#define hIn(x) cin >> (x)
#define hCin(x) int (x); cin >> (x)
#define hOut(x) cout << x << '\n'
#define hOutBlank(x) cout << x << ' '
#define hforOut(arr,size) for(int i = 0; i < size; i++) { cout << arr[i] << '\n';}
#define hforIn(arr, size) for(int i = 0 ; i < size; i++) cin >> arr[i];

#define delarr(x) delete [] x
#define pairInt pair<int, int>
#define tlong long long


int M, N;
int primeNum[10001] = { false, };	// 1000 까지의 소수
int sum = 0;
int _min = 0;
// 에라토스테네스의 체
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
	if (primeNum[num] == false) {
		sum += num;
		if (_min > num)
			_min = num;
	}
}

// M 이상 N 이하의 자연수 중 소수 찾기
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
#ifndef  ONLINE_JUDGE	// ONLINE_JUDGE 라는 값이 없으면 endif까지 아래 코드를 사용.
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);	// 출력이 너무 길때 사용
#endif // ! ONLINE_JUDGE
	hIn(M);
	hIn(N);
	primeNum[1] = true;
	_min = N;
	for (int i = M; i <= N; i++) {
		IsPrimeNum(i);
	}
	if (sum == 0)
		cout << -1;
	else
		cout << sum << '\n' << _min;

	return 0;
}
