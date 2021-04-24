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
	hIn(N); // 1 <= n <= 100,000S

	queue <int> seq; // 목표 수열

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		seq.push(temp);
	}
	// 1부터 N 까지
	int i = 1;
	stack<int> m_stack; // 스택
	queue<char> result;// 출력
	while (!seq.empty()) {
		if (!m_stack.empty() && seq.front() == m_stack.top())
		{ // 목표 지점까지 오면 pop
			m_stack.pop();
			// 수열에 넣고, 목표 수열은 pop
			result.push('-');
			seq.pop();
		} // 목표 지점 이전까지 스택에 값을 추가한다.
		else if(i <= seq.front()){
			while (i <= seq.front()) {
				m_stack.push(i++);
				result.push('+');
			}
			// 목표 수열까지 스택에 1씩 추가
		} // i가 seq.front()보다(목표값) 크다면 스택수열 안됨
		else {
			cout << "NO";
			return 0;
		}
	}
	// 출력
	while (!result.empty()) {
		cout << result.front() << '\n';
		result.pop();
	}


	return 0;
}
