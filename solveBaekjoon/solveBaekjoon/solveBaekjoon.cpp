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
	int N;
	cin >> N;

	int movie = 666;
	int i = 0;
	// 666은 무조건 한번만 들어가야함.
	while (true) {
		string strMovie = to_string(movie);

		if (strMovie.find("666") != -1) { // 문자열에 "666"이 포함되어있으면 i를 증가
			i++;
		}
		// n번째
		if (i == N) {
			cout << movie << endl;
			break;
		}
		movie++; // 브루트 포스
	}

	return 0;
}
