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

bool compare(const pairInt & p1, pairInt & p2){
	if (p1.second == p2.second) // 빈도수 같으면
		return p1.first < p2.first; // 숫자가 작은거를 앞으로
	return p1.second > p2.second;	// 빈도수 큰게 앞으로
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
	int N;		// 수의 개수
	double avg = 0;	// 평균
	int midVal = 0;	// N개의 수들중 그 중앙에 위치한 값
	int sameVal = 0;	// N개의 수들중 가장 많이 나타는 값
	int range = 0;	// 최대값과 최소값의 차이
	int min = 0x7f7f7f7f, max = -0x7f7f7f7f; // 최소값, 최대값

	cin >> N;
	vector<int>numlist;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		numlist.push_back(num);
		avg += num;
	}
	avg = (int)floor((avg/N) + 0.5);
	
	sort(numlist.begin(), numlist.end());
	range = numlist.back() - numlist.front();
	midVal = numlist[N / 2];

	vector<pairInt> vNumlist; // 숫자, 빈도수
	
	for (int i = 0; i < N; i++) {
		// vector가 
		if (vNumlist.empty()) {
			vNumlist.push_back(make_pair(numlist[i], 1));
			continue;
		}

		// 같은 숫자가 있다면
		if (vNumlist.back().first == numlist[i])
		{
			pairInt temp = vNumlist.back();	// 빈도수 갱신
			temp.second++;
			
			vNumlist.pop_back();
			vNumlist.push_back(temp);	// 갱신한 pair push
		}
		else {
			// 같은게 없으면 추가
			vNumlist.push_back(pairInt(numlist[i], 1));
		}
	}

	sort(vNumlist.begin(), vNumlist.end(), compare);
	// 최빈값이 여러개 있을때, 두번째로 작은 값 출력
	if (N > 1) {
		vNumlist[0].second == vNumlist[1].second ? sameVal = vNumlist[1].first : sameVal = vNumlist[0].first;
	}
	else {
		sameVal = vNumlist[0].first;
	}
	

	cout << avg << '\n';
	cout << midVal << '\n';
	cout << sameVal << '\n';
	cout << range << '\n';
	return 0;
}