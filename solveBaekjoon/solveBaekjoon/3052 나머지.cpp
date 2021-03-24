#include "solveBaekjoon.h"

void baekjoon::p3052() {	
	int nums[10];
	for (int i = 0; i < 10; i++) {
		cin >> nums[i];
		nums[i] %= 42; // 입력받은 나머지를 다시 대입.
	}
	int result = 0;
	for (int i = 0; i < 10; i++) {
		int cnt = 0;
		for (int j = i+1; j < 10; j++) {
			if (nums[i] == nums[j]) cnt++; // 같은 수 있을시 증가
		}
		if (cnt == 0) // 같은수가 없으면 
			result++;
	}	//i가 9일떄 j반복문을 안돌기에 cnt == 0 으로 1개증가됨.
	cout << result;
}