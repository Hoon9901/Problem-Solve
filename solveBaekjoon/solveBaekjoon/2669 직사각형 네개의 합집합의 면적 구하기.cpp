#include "solveBaekjoon.h"
/*
	모든 x좌표와 y좌표는 1이상이고 100이하인 정수이다.

	전체를 포괄하는 사각형 영역 구하기.
	-> 이유, 좌표평면의 경우의 수가 101 * 101임..

	푼 방식 ->
	1. 직사각형의 해당하는 면적을 1씩 증가.
	2. (0,0) ~ (100,100) 을 둘러보며 1 이상인 블록들을 세어줍니다.
	( 1 이상인 블록개수를 세우주므로, 중복된건 자연스럽게 하나씩만 카운팅)
*/


void baekjoon::p2669() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	int x1, y1, x2, y2;

	int  plane[101][101] = { 0 }; // 좌표평면
	// 입력 받기
	for (int i = 0; i < 4; i++) {
		cin >> x1 >> y1 >> x2 >> y2;

			for (int j = y1; j < y2; j++) {
				for (int k = x1; k < x2; k++) {
					plane[j][k]++;
				}
			}
	}
	// 겹치는 면접 합 구하기
	int sum = 0; 
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (plane[i][j] > 0) { // 겹치는 부분 1씩 증가
				sum++;
			}
		}
	}
	// 4개의 직사각형이 차지하는 면적
	cout << sum << endl;
}