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
	int N, K;
	hIn(N); hIn(K);
	// 1 ~ N까지의 사람이 수열
	// K번째 사람 제거
	queue<int> q;
	// 1 ~ N 
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	
	// 요세푸스
	int cnt = 1;
	cout << '<';
	while (!q.empty()) {
		if (cnt == K) {
			if (q.size() == 1)
				cout << q.front();
			else
				cout << q.front() << ", ";

			q.pop();
			cnt = 0;
		}
		else{
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		cnt++; // 개수 증가
	}
	cout << ">";
	return 0;
}
