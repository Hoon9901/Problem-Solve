#include <bits/stdc++.h>
/*
#include <iostream>
#include <deque>
#include <vector>
#include <queue>
#include <algorithm>
*/
using namespace std;

#define ONLINE_JUDGE

#define hIn(x) cin >> (x)
#define hCin(x) int (x); cin >> (x)
#define hOut(x) cout << x << '\n'
#define hOutBlank(x) cout << x << ' '
#define hforOut(arr,size) for(int i = 0; i < size; i++) { cout << arr[i] << '\n';}
#define hforIn(arr, size) for(int i = 0 ; i < size; i++) cin >> arr[i];

#define delarr(x) delete [] x
#define pairInt pair<int, int>
#define tlong long long

/*
* 전역변수
*/

int N, arr[1000001];	//
int* temp;	// 임시 배열

void merge(int list[], int left, int right) {
	int mid = (left + right) / 2;
	int i, j, k;
	i = left;
	j = mid + 1;
	k = left;
	// 왼쪽에서 정렬된 배열과, 오른쪽에서 정렬된 배열 합침
	// 둘중 하나가 끝까지 올때 까지 합친다.
	while (i <= mid && j <= right) {
		if (list[i] <= list[j])
			temp[k++] = list[i++];
		else
			temp[k++] = list[j++];
	}
	// 오른쪽 배열에 임시 배열로 추가할 수가 남으면 복사.
	int x = (i > mid) ? j : i;
	while (x <= right) {
		temp[k++] = list[x++];
	}
	for (int i = left; i <= right; i++) {
		list[i] = temp[i];
	}
}


void merge_sort(int list[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, right);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
#ifndef  ONLINE_JUDGE	// ONLINE_JUDGE 라는 값이 없으면 endif까지 아래 코드를 사용.
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);	// 출력이 너무 길때 사용
#endif // ! ONLINE_JUDGE
	cin >> N;
	hforIn(arr, N);
	temp = new int[N+1];

	merge_sort(arr, 0, N-1);

	hforOut(arr, N);
	return 0;
}
