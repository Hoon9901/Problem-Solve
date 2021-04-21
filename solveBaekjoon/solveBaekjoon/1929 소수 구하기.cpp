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

int primeNum[1000001] = { false, };	
void setPrimeNum() {
	for (int i = 2; (i * i) <= 1000000; i++) {
		if (primeNum[i] == false) {
			for (int j = i * i; j <= 1000000; j += i) {
				primeNum[j] = true;		// 소수가 아님
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
#ifndef  ONLINE_JUDGE	// ONLINE_JUDGE 라는 값이 없으면 endif까지 아래 코드를 사용.
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);	// 출력이 너무 길때 사용
#endif // ! ONLINE_JUDGE
	int M, N; // 1 <= M <= N <= 1,000,000
	cin >> M >> N;
	primeNum[1] = true;
	setPrimeNum();

	for (int i = M; i <= N; i++) {
		if (primeNum[i] == false) {
			cout << i << '\n';
		}
	}
	
	return 0;
}
