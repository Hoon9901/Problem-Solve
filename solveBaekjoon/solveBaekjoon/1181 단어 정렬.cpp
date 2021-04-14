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
* Global valuable
*/
int N;		// 1 <= N <= 20000
string * g_sinput;

bool scompare(const string & a, const string & b) {
	if (a.length() < b.length()) // 길이가 짧은 순
		return true;
	else // 길이가같으면 사전순
	{
		if (a.length() == b.length()) {
			return a < b;
		}
		else {
			return false;
		}

	}
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
	hIn(N);
	vector<string> sResult;

	string temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		sResult.push_back(temp);
	}
	// 정렬
	sort(sResult.begin(), sResult.end(), scompare);
	// 중복제거 후 마지막 원소 제거 unique -> 리턴 벡터 쓰레기값의 위치
	sResult.erase(unique(sResult.begin(), sResult.end()), sResult.end());
	for (int i = 0; i < sResult.size(); i++) {
		cout << sResult[i] << '\n';
	}
	return 0;
}
