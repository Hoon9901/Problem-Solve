#include "solveBaekjoon.h"
#include <cmath>

//  n과 n의 각 자리수를 더하는 함수
int sumDigit(int n) {
	int sum = n; // n + n각자리수
	while (n != 0) {
		sum += n%10; 
		n /= 10; // 각 자리수 감소
	}
	return sum;
}

void baekjoon::p4673() {
	int n = 0; // start number
	static int Nums[10001] = { 0 };  // 0~10000 까지 탐색,
	for (int i = 0; i <= 10000; i++) {
		Nums[sumDigit(i)] = 1;
		if (!Nums[i]) { // 셀프넘버
			cout << i << endl;
		}
	}
}

// 셀프넘버를 찾는게 아닌 셀프넘버가 아닌(생성자가 있는 수) 수를 찾아서 그것을 1로 준다.
// 그러면 나머지 수들은 자연스레 셀프넘버만 0만 가지게된다.
// 1은 셀프넘버 num[1] = 0
// 1+1 = 2 2는 생성자가 있으므로 셀프넘버가 아님. 따라서 num[2] = 1 로 (1은 생성자 O)
// 3은 생성자가 없으므로 셀프넘버 num[3] = 0
// 4는 2+2 = 4 이므로 num[4] = 1
