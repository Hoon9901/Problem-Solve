#include "solveBaekjoon.h"

void baekjoon::p10250() {
	int T;			// 테스트 케이스 
	cin >> T;		
	int H, W, N;	// 층 수(높이), 방 수(가로), 몇번째손님
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		int floor;
		floor = N / H;
		int num = N % H; // H1
		if (num > 0)
			floor++;
		else
			num = H;
		int room = num * 100 + floor;
		cout << room << '\n';
	}
}

/*
* 

6 12 12 
12/6 = 2 + 1 = 3

6 10 6
12 x 24
12

6%6 == 0
floor = N/H;
12%6 == 0
floor = 

30 50 72 
72/30 = 2 (floor)



6 10 6
H W  N
6 == 6 floor 1
num = 6 % 6 = 0
if (N%H == 0)
	num = N;

2
6 12 10
floor = H/W (H>W)
floor 10 / 6 = 1+1(floor)
Num = 10 % 6 = 4
num*100 + floor
400 + 2=  402
floor = N / H + 1 (N>H)
floor = 10/6+1 = 1+1(floor)
floor = 72/30+1 = 2+1(floor)
Num = N %H =

30 50 72
H  W  N

floor = N / H
        

30 50 72


402


*/