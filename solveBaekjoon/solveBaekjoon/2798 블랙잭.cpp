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

/*
* 전역변수
*/
int N, M;			// N : 카드 개수 M : 목적지
int cards[101];		// 카드가 쓰여 있는 수의 집합
int result;

//int userCards[3];
void findCard() {
	int range = 3000001;
	for (int i = 0; i < N - 2; i++) {
		int sum = cards[i];
		// 카드 3개를 택한다
		for (int j = i+1; j < N - 1; j++){
			for (int k = j + 1; k < N; k++) {
				sum = cards[i] + cards[j] + cards[k];
				// M에 가까울때..
				if (M - sum < range && M - sum >= 0) {
					range = M - sum;
					result = sum;
				}
			}
		}
		if (range == 0)	// 바로 종료
			break;
	}
	hOut(result);
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
	hIn(N);			// 3 <= N <= 100
	hIn(M);			// 10 <= M <= 300,000 
	// N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 
	// M에 최대한 가까운 카드 3장의 합을 구해 출력하시오.
	hforIn(cards, N);

	findCard();

	return 0;
}
