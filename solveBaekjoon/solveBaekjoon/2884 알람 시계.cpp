#include "solveBaekjoon.h"

void baekjoon::���ǹ�::p_2884() {
	int hour, min; // �ð�, ��
	cin >> hour >> min;
	
	// ������ ��ȯ
	int beforeAlarm = (hour * 60 + min) - 45;
	int newAlarm_hour = beforeAlarm / 60;
	int newAlarm_min = beforeAlarm % 60;
	if (hour == 0 && min < 45) { // ����	
		newAlarm_hour = 23;
		newAlarm_min += 60;
	}
	cout << newAlarm_hour << ' ' << newAlarm_min;
}