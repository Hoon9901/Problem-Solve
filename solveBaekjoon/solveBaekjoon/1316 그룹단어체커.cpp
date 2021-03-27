#include "solveBaekjoon.h"

void baekjoon::p1316() {
	int n, ans; // �ܾ��� ������ ����, ����
	string s, noOverlapStr; // �ߺ��ܾ�ȹ޴� ���ڿ�
	cin >> n;
	ans = n;
	int isNoGroupWord; // �׷�ܾ �ƴϸ� 1,
	for (int k = 0; k < n; k++) {
		cin >> s;
		isNoGroupWord = 0;
		for (int i = 0; i < s.length(); i++) {
			int isExistence = 0;
			for (int j = 0; j < noOverlapStr.length(); j++) {
				if (s[i] == noOverlapStr[j]) { //
					isExistence = 1; // �����Ѵ�.
					if (s[i - 1] != s[i]) {
						//cout << "�׷�ܾ �ƴϳ�\n";
						isNoGroupWord = 1;
					}
				}
			}
			if (!isExistence)
				noOverlapStr += s[i];
			if (isNoGroupWord == 1) { ans -= 1; break; } // �׷�ܾ �ƴϴ� 1�� ����
		}
		noOverlapStr.clear(); // �������� ���ο� ���� �ܾ �ޱ� ����
	}
	cout << ans << endl;
}

/*
ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����,
kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������,
aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.

1. ���ڿ��� ��ü Ž���Ѵ�.
2. ó�� ���� ���ڸ� noOverlap ���ڿ��� �߰��Ѵ�
3. ���ڿ��� Ž���ϴٰ� noOverlap�� �����ϴµ� �� ������ ���ڰ� �ִٸ� �� ������ �ִ� ���ڿ� ���Ѵ�.
4. ������ �ִ� ���ڿ� noOverlap�� �ִ� ���ڰ� �ٸ��ٸ� �� ���ڿ��� �׷�ܾ �ƴϴ�.
*/