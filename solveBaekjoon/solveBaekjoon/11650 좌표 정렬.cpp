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

bool compare(const pairInt & a, const pairInt & b) {
	if (a.first == b.first)
		return a.second < b.second;
	else
	 return a.first < b.first;
}
// 좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬
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
	hIn(N);
	vector<pairInt> v_Pos;
	// 문자열, 가입 순

	// 입력
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		v_Pos.push_back(make_pair(x, y));
	}
	// 정렬
	sort(v_Pos.begin(), v_Pos.end(), compare);
	// 출력
	for (int i = 0; i < N; i++) {
		cout << v_Pos[i].first << ' ' << v_Pos[i].second << '\n';
	}
	return 0;
}
