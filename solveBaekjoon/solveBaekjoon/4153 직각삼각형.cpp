#include <iostream>
using namespace std;

int main(){
	int a, b, r;
	// 가로 세로 빗변
	while (1){
		cin >> a >> b >> r;
		if (a == 0 && b == 0 && r == 0)
			break;
		if ((a*a) + (b*b) == (r*r)){
			cout << "right" << '\n';
		}
		else if ((a*a) + (r*r) == (b*b))
			cout << "right" << '\n';
		else if ((b*b) + (r*r) == (a*a))
			cout << "right" << '\n';
		else 
			cout << "wrong" << '\n';
	}
	return 0;
}