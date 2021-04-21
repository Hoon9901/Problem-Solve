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

// g V
int len;
string input;

tlong hasing() {
	const int M = 1234567891;
	tlong sum = 0;
	tlong R = 1;
	// 문자열 길이만큼 반복.
	for (int i = 0; i < len; i++) {
		int position = (input[i] - 'a') + 1; // 알파벳 위치 추출
		sum = (sum + (position * R)) % M;
		R = (R * 31) % M;
		// 모듈러 연산
	}
	return sum;
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
	hIn(len);
	hIn(input);
	
	cout << hasing();
	return 0;
}
