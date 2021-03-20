#include "solveBaekjoon.h"

void baekjoon::조건문::p_2884() {
	int hour, min; // 시간, 분
	cin >> hour >> min;
	
	// 분으로 변환
	int beforeAlarm = (hour * 60 + min) - 45;
	int newAlarm_hour = beforeAlarm / 60;
	int newAlarm_min = beforeAlarm % 60;
	if (hour == 0 && min < 45) { // 자정	
		newAlarm_hour = 23;
		newAlarm_min += 60;
	}
	cout << newAlarm_hour << ' ' << newAlarm_min;
}