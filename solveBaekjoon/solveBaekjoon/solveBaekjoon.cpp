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
	queue<int> result;// 결과
	

	do{
		m_stack.push(i);
		if (m_stack.top() == seq.front()) {
			result.push(i);
			
			m_stack.pop();
			seq.pop();
		}
		else {
			i++;
		}
		cout << m_stack.top() << endl;
		
	} while (!m_stack.empty());

	return 0;
}
