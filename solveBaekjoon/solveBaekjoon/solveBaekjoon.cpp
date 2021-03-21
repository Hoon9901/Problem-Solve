#include "solveBaekjoon.h"

int main()
{
	// using namespace baekjoon :: 
	//baekjoon::p10871();
	int n1, n2;
	while (true) {
		cin >> n1 >> n2;
		if (cin.eof()) break;
		cout << n1 + n2 << endl;
	}

	return 0;
}

