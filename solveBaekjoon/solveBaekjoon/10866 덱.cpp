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

void m_deque(const string & command);

deque<int> g_deq;

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
		m_deque(temp);
	}
	return 0;
}

void m_deque(const string& command) {
	if (command == "push_front"){
		int temp;
		cin >> temp;
		g_deq.push_front(temp);
	}
	else if (command == "push_back") {
		int temp;
		cin >> temp;
		g_deq.push_back(temp);
	}
	else if (command == "pop_front") {
		if (g_deq.empty()) {
			cout << -1 << '\n';
			return;
		}
		int temp = g_deq.front();
		cout << temp << '\n';
		g_deq.pop_front();
	}
	else if (command == "pop_back") {
		if (g_deq.empty()) {
			cout << -1 << '\n';
			return;
		}
		int temp = g_deq.back();
		cout << temp << '\n';
		g_deq.pop_back();
	}
	else if (command == "size") {
		cout << g_deq.size() << '\n';
	}
	else if (command == "empty") {
		cout << g_deq.empty() << '\n';
	}
	else if (command == "front") {
		if (g_deq.empty()) {
			cout << -1 << '\n';
			return;
		}
		cout << g_deq.front() << '\n';
	}
	else if (command == "back") {
		if (g_deq.empty()) {
			cout << -1 << '\n';
			return;
		}
		cout << g_deq.back() << '\n';
	}
}