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
int N;
stack<int> stc;

void m_stack(string in);

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
	
	for (int i = 0; i < N; i++){
		string input;
		cin >> input;
		m_stack(input);

	}

	return 0;
}

void m_stack(string in){
	// npos -> -1
	if (in.find("push") != string::npos){
		int num;
		cin >> num;
		stc.push(num);
	}
	else if (in.find("pop") != string::npos){
		if (stc.empty()){
			cout << "-1" << '\n';
		}
		else{
			cout << stc.top() << '\n';
			stc.pop();
		}
	}
	else if (in.find("size") != string::npos){
		cout << stc.size() << '\n';
	}
	else if (in.find("empty") != string::npos){
		stc.empty() ? cout << '1' << '\n' : cout << '0' << '\n';
	}
	else if (in.find("top") != string::npos){
		if (stc.empty()){
			cout << "-1" << '\n';
		}
		else{
			cout << stc.top() << '\n';
		}
	}
}

