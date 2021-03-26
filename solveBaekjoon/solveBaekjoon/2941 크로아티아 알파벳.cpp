#include "solveBaekjoon.h"

void baekjoon::p2941(){
	static string ctaAlphbet;
	cin >> ctaAlphbet;
	int cnt = 0;
	for (int i = 0; i < ctaAlphbet.length(); i++) {
		if (ctaAlphbet[i] == 'c') {
			if (ctaAlphbet[i + 1] == '=') { cnt++; }
			else if (ctaAlphbet[i + 1] == '-') { cnt++; }
		}
		else if (ctaAlphbet[i] == 'd') {
			if (i == ctaAlphbet.length() - 1) { break; }
			if (ctaAlphbet[i + 1] == '-') { cnt++; }
			else if (ctaAlphbet[i+1] == 'z' &&ctaAlphbet[i + 2] == '=') { cnt++; }
		}
		else if (ctaAlphbet[i] == 'l' && ctaAlphbet[i + 1] == 'j') { cnt++; }
		else if (ctaAlphbet[i] == 'n' && ctaAlphbet[i + 1] == 'j') { cnt++; }
		else if (ctaAlphbet[i] == 's' && ctaAlphbet[i + 1] == '=') { cnt++; }
		else if (ctaAlphbet[i] == 'z' && ctaAlphbet[i + 1] == '=') { cnt++; }
	}
	cout << ctaAlphbet.length() - cnt; // 단어의 길이 - 크로아티아 알파벳 = 크로아티아 알파벳
}

// dadbdcdddedfdgdhdidjdkdldmdndodpdrdsdtdudvdzoooodc=dc-ddz=dd-dljdnjdsz=dz=d -> 75