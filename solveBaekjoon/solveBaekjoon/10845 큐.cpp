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

void m_queue(const string & command);

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
	
	for (int i = 0; i < N; i++) {
		string temp; 
		cin >> temp;
		m_queue(temp);
	}

	return 0;
}
queue<int> global_q;
void m_queue(const string & command) {
	if (command.find("push") != string::npos)
	{
		int num;
		cin >> num;
		global_q.push(num);
	}
	else if (command.find("pop") != string::npos) {
		if (global_q.empty())
			cout << -1 << '\n';
		else {
			int qfront = global_q.front();
			global_q.pop();
			cout << qfront << '\n';
		}
	}
	else if (command.find("size") != string::npos) {
		cout << global_q.size() << '\n';
	}
	else if (command.find("empty") != string::npos) {
		global_q.empty() ? cout << 1 << '\n' : cout << 0 << '\n';
	}
	else if (command.find("front") != string::npos) {
		if (global_q.empty())
			cout << -1 << '\n';
		else
		{
			cout << global_q.front() << '\n';
		}
	}
	else { // back
		if (global_q.empty())
			cout << -1 << '\n';
		else
		{
			cout << global_q.back() << '\n';
		}
	}
}
