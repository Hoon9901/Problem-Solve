#include <bits/stdc++.h>
#include <unordered_map>
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
	int N, M;
	hIn(N);
	unordered_map<int, int> cards;
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		// 이미 추가됬으면 개수를 1씩 증가한다
		if (!cards.empty() && cards.find(num) != cards.end())
			cards[num] += 1;
		else // 최초 추가
			cards[num] = 1;
	}
	// 찾을 카드
	hIn(M);
	for (int i = 0; i < M; i++) {
		int findCards;
		cin >> findCards;
		// 찾으면 개수 출력
		if (!cards.empty() && cards.find(findCards) != cards.end())
			cout << cards[findCards] << ' ';
		else
			cout << 0 << ' ';
	}

	return 0;
}
