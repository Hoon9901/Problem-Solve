#include "solveBaekjoon.h"

void baekjoon::p3052() {	
	int nums[10];
	for (int i = 0; i < 10; i++) {
		cin >> nums[i];
		nums[i] %= 42; // �Է¹��� �������� �ٽ� ����.
	}
	int result = 0;
	for (int i = 0; i < 10; i++) {
		int cnt = 0;
		for (int j = i+1; j < 10; j++) {
			if (nums[i] == nums[j]) cnt++; // ���� �� ������ ����
		}
		if (cnt == 0) // �������� ������ 
			result++;
	}	//i�� 9�ϋ� j�ݺ����� �ȵ��⿡ cnt == 0 ���� 1��������.
	cout << result;
}