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
    vector<long long> list;
    long long min = 0;
    long long max = 0;
    long long mid = 0;
    
    int N, K;
    cin >> K >> N;
    for(int i = 0; i < K; i++){
        int temp;
        cin >> temp;
        list.push_back(temp);
        if(max < temp){
            max = temp;
        }
    }
    // get number bound
    max++;

    //  binary search about length
    while(min < max) {
        mid = (max + min) / 2;
        
        long long count = 0;
        // lan slice counting
        for(long long i = 0; i < list.size(); i++){
            count += list.at(i) / mid;
        }
        
        if(count < N)
            max = mid;
        else
            min = mid + 1;
    }
    cout << (min - 1);
	return 0;
}
