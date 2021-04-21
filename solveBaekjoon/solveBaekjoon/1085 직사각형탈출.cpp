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

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
#ifndef  ONLINE_JUDGE	// ONLINE_JUDGE 라는 값이 없으면 endif까지 아래 코드를 사용.
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);	// 출력이 너무 길때 사용
#endif // ! ONLINE_JUDGE
	int x, y, w, h;
	// (x,y) 는 w,h 직사각형 범위 내에 있다.
	cin >> x >> y >> w >> h;
	// (x,y) 현 위치,  (0,0) - (w,h)
	int minX = 0;
	int minY = 0;

	if ((w - x) > x)
		minX = x;
	else
		minX = w - x;
	if ((h - y) > y)
		minY = y;
	else
		minY = h - y;

	(minX > minY) ? cout << minY : cout << minX;

	return 0;
}
