#include "solveBaekjoon.h"

void baekjoon::p2292() {
	int n;					// 목적지 방의 번호
	cin >> n;
	int line_end = 1;		// 각 줄의 끝 방 번호 (초기는 1번방)
	for (int i = 0; ; i++) {
		line_end = line_end + 6 * i;
		if (n <= line_end) {
			cout <<  i + 1 << '\n';
			break;
		}
	}
}

/*
	n 1<=n<=10억 n-> 목적지 방의 번호
	각 줄의 끝방 번호는
	end(i) = end(i-1) + 6 * i 
	무한루프에 들어가면
	현재 i 라인의 끝방을 계산하고
	구한 끝방이 n보다 같거나 작을때
	가야할 최소 방 개수를 출력한다(i +1)
	시간복잡도 : O(n)
*/