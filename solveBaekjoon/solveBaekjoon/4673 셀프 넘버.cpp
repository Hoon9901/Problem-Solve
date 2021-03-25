#include "solveBaekjoon.h"

//  n과 n의 각 자리수를 더하는 함수
int d(int n) {
	int tenThousands = 0; // 만
	int thousands = 0; // 천
	int hunders = 0; // 백
	int tens = 0; // 십
	int ones = 0; // 일 
	if (n < 10) { // 1자리수
		return n + n;
	}
	else if (n < 100) { // 2자리수
		tens = n / 10;
		ones = n % 10;
		return n + tens + ones;
	}
	else if (n < 1000) { // 3자리수
		hunders = n / 100;
		tens = (n % 100) / 10;
		ones = (n % 100) % 10;
		return n + hunders + tens + ones;
	}
	else if (n < 10000) { // 4자리수
		thousands = n / 1000;
		hunders = (n % 1000) / 100;
		tens = (n % 1000) % 100 / 10;
		ones = (n % 1000) % 100 % 10;
		return n + thousands + hunders + tens + ones;
	}
	else if (n < 100000) { // 5자리수
		tenThousands = n / 10000;
		thousands = (n % 10000) / 1000;
		hunders = (n % 10000) % 1000 / 100;
		tens = (n % 10000) % 1000 % 100 / 10;
		ones = (n % 10000) % 1000 % 100 % 10;
		return n + tenThousands + thousands + hunders + tens + ones;
	}
	else {
		cout << " 6자리수 이상" << '\n';
		return 0;
	}
}

// 셀프넘버를 찾는게 아닌 셀프넘버가 아닌(생성자가 있는 수) 수를 찾아서 그것을 1로 준다.
// 그러면 나머지 수들은 자연스레 셀프넘버만 0만 가지게된다.
// 1은 셀프넘버 num[1] = 0
// 1+1 = 2 2는 생성자가 있으므로 셀프넘버가 아님. 따라서 num[2] = 1 로 (1은 생성자 O)
// 3은 생성자가 없으므로 셀프넘버 num[3] = 0
// 4는 2+2 = 4 이므로 num[4] = 1
void baekjoon::p4673() {
	int n = 0; // start number
	static int Nums[10001] = { 0 };  // 0~10000 까지 탐색,
	for (int i = 0; i <= 10000; i++) {
		Nums[d(i)] = 1; 
		if (!Nums[i]) { // 셀프넘버
			cout << i << endl;
		}
	}
}