#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

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
int N, K;
int factorial();
int get_bino_coef();

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
#ifndef  ONLINE_JUDGE	// ONLINE_JUDGE 라는 값이 없으면 endif까지 아래 코드를 사용.
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);	// 출력이 너무 길때 사용
#endif // ! ONLINE_JUDGE

	cin >> N >> K;
	cout << get_bino_coef();

	return 0;
}

int factorial(int num){
	int result = 1;
	for (int i = 2; i <= num; i++){
		result *= i;
	}
	return result;
}

int get_bino_coef(){
	if (K < 0)
		return 0;
	else if (K > N)
		return 0;
	
	return factorial(N) / (factorial(N - K) * factorial(K));
}

// nCk = n! / (n-k)!k! 6C2 = 6! / 4!*2*
