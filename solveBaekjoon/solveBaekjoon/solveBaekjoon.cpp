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
	int N, M, B;
	int map[500][500];
	cin >> N >> M >> B;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	// 0~256 브루트포스 
	int time = 0x7f7f7f7f;
	int maxHeight = 0;
	for (int height = 0; height < 257; height++) {
		int buildBlock = 0; // 채울 블록
		int removeBlock = 0; // 지울 블록
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				// 지워야할 블록 개수
				int needBlock = map[i][j] - height; // 한 타일의 높이 - 현재 높이 -> 필요한 블록
				if (needBlock > 0) { // 양수면 지워야함
					removeBlock += needBlock;
				}
				else if (needBlock < 0) { // 음수면 채워야함
					buildBlock -= needBlock;
				}
			}
		}
		// 시간 계산
		if ((removeBlock + B) >= buildBlock) { // -> 전체 탐색이므로 쓸데없는 연산 제외 (256높이에서 채워야되면 소요시간은 안되도록)
			int temp = removeBlock * 2 + buildBlock;
			if (time >= temp) {// 더 적은 소요시간으로 갱신
				time = temp;
				maxHeight = height;
			}
		}
	}
	// answer
	cout << time << ' ' << maxHeight << endl;

	return 0;
}

/*

1. 좌표 (i,j)의 가장위 블록을 제가하여 인벤토리 넣는다
2초 소모

2. 인벤토리에서 블록 하나를 꺼내 좌표 (i,j)의 가장 위에 있는 블록 위에 놓는다.
1초 소모

최소 높이 0 부터 256까지 반복
채울 블록개수
지울 블록개수
맵의 한타일 높이 - 반복문 높이(0부터 256까지) > 0 (양수)
-> 지워야할 블록 개수
그외 -> 채워야할 블록 개

만약 256높이까지 브루트포스 하면...

256높이에서 000001 맵을 채우면 256개 다 채우고 할려하니..
쓸데없는 시간 측정을 하게 되므로.
밑 조건문을 추가해서 시간갱신을 내부에서 돌린다.
조건 (지운 블록개수 + 인벤 블록 개수) >= 채운 블록 개수
-> 소요시간 : 지울 블록개수 * 2 + 채울 블록 개수
	if(소요시간 갱신)

*/