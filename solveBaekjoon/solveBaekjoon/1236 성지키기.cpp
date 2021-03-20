#include "solveBaekjoon.h"
/*
	모든 행과 열에 한명 이상의 경비원이 있어야함.

	**** -> 4명
	****
	****
	****
	 
	X***
	*X**
	**X*
	***X -> 0명 모든행,열에 존재
	
	XXXX -> 1행에 모든열에 존재
	**** -> 2행에는 존재 X -> 1명
	**** -> 3행에는 존재 X -> 1명
	**** -> 4행에는 존재 X -> 1명
	
	X*** -> 1행에 모두 존재, 1열 1명
	X*** -> 2열 X -> 1명
	X*** -> 3열 X -> 1명
	X*** -> 4열 X -> 1명

	X** -> 2행 까지 경비원 존재하지만
	*X* -> 3열을 담당하는 경비원이 없어서 1명 필요.
*/
void baekjoon::p1236() {
	int n = 1, m = 1; // n,m <= 50
	cin >> n >> m;
	// 불 배열로 경비원과 없는 곳을 구분
	bool row[50] = { false }; 
	bool col[50] = { false };

	char map[50][50];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'X') {
				row[i] = col[j] = true; // 경비원 존재하면 true
			}
		}
	}
	int r = 0, c = 0;
	for (int i = 0; i < n; i++) {
		if (!row[i]) r++; // 경비원 없으면 r증가
	}
	for (int i = 0; i < m; i++) {
		if (!col[i]) c++; // 경비원 없으면 c증가
	}
	// r 과 c 둘중 큰 값을 출력
	cout << ((r > c) ? r : c) << endl;
}