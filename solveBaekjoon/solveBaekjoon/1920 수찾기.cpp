#include "solveBaekjoon.h"

int N, M;				// 자연수 1<= N <= 100,000
int* field;				// 필드
int* target;			// 찾아야하는 수

int binartySearch(int i);

void baekjoon::p1920() {
	cin >> N;
	field = new int[N];
	for (int i = 0; i < N; i++)
		cin >> field[i];
	sort(field, field + N);	// 필드 정렬

	cin >> M;
	target = new int[M];
	for (int i = 0; i < M; i++)
		cin >> target[i];
	// 이분탐색 시작
	for (int i = 0; i < M; i++) {
		binartySearch(i);
	}
	// 메모리 해제
	delete[]target;
	delete[]field;
}


int binartySearch(int i) {
	int left, mid, right;
	// left, right 초기화
	left = 0;
	right = N - 1;
	while (left <= right) {
		int mid = (left + right) / 2;	// mid 갱신
		if (field[mid] == target[i]) {
			cout << 1 << '\n';
			return 1;
		}
		else if (field[mid] > target[i])
			right = mid - 1;
		else if (field[mid] < target[i])
			left = mid + 1;
	}
	cout << 0 << '\n';
	return -1;
}



/*
	이분탐색을 사용한다.

	left, mid , right를 수시로 바꿔주며
	target을 찾는다 찾으면 return으로 함수 종
	아니면 0을 출력하고 return

*/