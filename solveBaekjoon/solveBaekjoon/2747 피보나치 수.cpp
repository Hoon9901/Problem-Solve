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

//
//int fibonacci(int num) {
//	if (num == 1)  // F(1) = F(0) -> 1
//		return 1;
//	else if (num == 2) // F(2) = F(1) + F(0) -> 0 + 1 = 1
//		return 1;
//	else
//		return fibonacci(num - 1) + fibonacci(num - 2);
//}

int loopFibo(int num) {
	int before = 0;
	int current = 1;
	int temp;
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else {
		for (int i = 1; i < num; i++) {
			temp = current;
			current = current + before;
			before = temp;
		}
	}
	return current;
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
	int n; // n <= 45
	hIn(n);
	// n >= 2
	cout << loopFibo(n);
	return 0;
}
