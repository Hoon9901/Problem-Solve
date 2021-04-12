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

int test_case;		// 테스트 케이스
string g_ps;			// 2 ~ 50


void IsParenString();	//

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
#ifndef  ONLINE_JUDGE	// ONLINE_JUDGE 라는 값이 없으면 endif까지 아래 코드를 사용.
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);	// 출력이 너무 길때 사용
#endif // ! ONLINE_JUDGE
	hIn(test_case);
	for (int i = 0; i < test_case; i++){
		cin >> g_ps;
		IsParenString();
	}

	return 0;
}

void IsParenString(){
	stack<char> sPs;		// 스택
	bool isPS = true;
	for (int i = 0; i < g_ps.length(); i++){
		if (g_ps[i] == '(')
			sPs.push(g_ps[i]);
		else if (g_ps[i] == ')' && !sPs.empty())
			sPs.pop();
		else if (g_ps[i] == ')' && sPs.empty()){
			isPS = false;
			break;
		}
	}

	if (isPS && sPs.empty())
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
}