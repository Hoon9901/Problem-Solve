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

bool compare(const pair<int, string> & a, const pair<int, string> & b) {
	 return a.first < b.first;
}
// 나이가 같으면 가입순( stable_sort 사용 ) 
/*
* Global valuable
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
#ifndef  ONLINE_JUDGE	// ONLINE_JUDGE 라는 값이 없으면 endif까지 아래 코드를 사용.
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);	// 출력이 너무 길때 사용
#endif // ! ONLINE_JUDGE
	int N;		// 1 <= N <= 20000
	hIn(N);
	vector<pair<int, string>> sResult;
	// 문자열, 가입 순

	string temp;
	int age;
	// 입력
	for (int i = 0; i < N; i++) {
		cin >> age >> temp;
		sResult.push_back(make_pair(age, temp));
	}
	// 정렬
	stable_sort(sResult.begin(), sResult.end(), compare);
	// 출력
	for (int i = 0; i < N; i++) {
		cout << sResult[i].first << ' ' << sResult[i].second << '\n';
	}
	return 0;
}
