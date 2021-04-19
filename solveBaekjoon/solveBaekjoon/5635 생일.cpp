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


// 이름, 일, 월, 년
int ageMax = 0;
int ageMin = 8000;
// 결과
string sMax = "";
string sMin = "";

void getMax(const string & name, const int& day, const int& month, const int& year)
{
	// 년도 -> 일수 변환, month -> 일수 변환
	int year2day = (2010 - year) * 365;
	int month2day = (12 - month) * 31;
	int sumDay = year2day + month2day + (31 - day);
	if (sumDay > ageMax) {
		ageMax = sumDay;
		sMax = name;
	}
}

void getMin(const string & name, const int& day, const int& month, const int& year)
{
	// 년도 -> 일수 변환, month -> 일수 변환
	int year2day = (2010 - year) * 365;
	int month2day = (12 - month) * 31;
	int sumDay = year2day + month2day + (31 - day);
	if (sumDay < ageMin) {
		ageMin = sumDay;
		sMin = name;
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
	int N;
	hIn(N);
	for (int i = 0; i < N; i++) {
		string name;
		int day, month, year;
		cin >> name >> day >> month >> year;
		// 최대
		getMax(name, day, month, year);
		getMin(name, day, month, year);
	}

	cout << sMin << '\n' << sMax;

	return 0;
}
