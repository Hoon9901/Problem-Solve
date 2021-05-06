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
	deque<pair<int, int>> printer;
	// 중요도, 순서
	int T, N, M; // M은 target
	cin >> T; // 테스트 케이스 갯수
	for (int i = 0; i < T; i++) {
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			// 중요도 삽입
			int priority;
			cin >> priority;
			// 인덱스, 중요도 push
			q.push(make_pair(i, priority));
			// 중요도 push
			pq.push(priority);
		}
		int cnt = 0; // 번째 출력
		while (!q.empty()) {
			int idx = q.front().first; // 인덱스
			int pty = q.front().second; // 중요도
			q.pop();

			if (pq.top() == pty) { // 현재 문서 보다 중요도가 높은 문서가 없으면
				pq.pop();
				cnt++;
				if (idx == M) { // 타겟 찾으면
					cout << cnt << '\n'; break;
				}
			}
			else {
				q.push(make_pair(idx, pty)); // 뒤로 보낸다
			}
		}
	}
	return 0;
}

/*
*	size = 4
	A,2 B,1 C,4 D,3 -> C,4 D,3 A,2 B,1

	내림차순 정렬

*/