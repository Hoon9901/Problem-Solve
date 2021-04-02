#include "solveBaekjoon.h"
// using queue, pair, string, vector

int t, n;		// test case 수 T
char mineMap[301][301];		// 1<= n <= 300
int visited[301][301] = { 0, };	// 지뢰가 없는곳만 방문
// 인접 8칸을 접근할 x,y 값을 담은 배열 (상하좌우, 시계방향)
int dx[8] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[8] = { -1, 1, 0, 0, -1, 1, 1, -1 };
// 
int click;

// i,j 위치의 인접 8칸 조사, 리턴은 bool형, 지뢰 -> false
bool check(int y, int x) {
	for (int i = 0; i < 8; i++) {
		// 좌표 설정 x + dx[i] -> 주변 칸 x 위치
		int nowX = x + dx[i];
		int nowY = y + dy[i];
		// 범위내에서 (0~n) 지뢰인곳이 1개 이상이라도 있으면 바로 false 리턴
		if (nowX >= 0 && nowX <= n && nowY >= 0 && nowY <= n && mineMap[nowY][nowX] == '*')
			return false;
	}
	return true; // 주변 8칸에 지뢰가 없음(8칸 모두 0).
}

void bfs(int iy, int ix) {	
	// 큐 에는 인접8칸에 지뢰가없는 위치만 들어간다.
	queue<pair<int, int>> q;
	q.push(make_pair(iy, ix));	// x,y 위치를 큐에 넘긴다.
	//cout << q.back().second << ", " << q.back().first << '\n';
	
	while (!q.empty()) {
		int y = q.front().first;	// i(y)
		int x = q.front().second;   // j(x)
		visited[y][x] = 1;			// 방문하지 않은곳을 방문
		q.pop();					// 방문한곳은 큐에서 pop

		// x,y에서 부터 주변 8칸 탐색, 다음 큐에 넣을 좌표 탐색
		for (int i = 0; i < 8; i++) {
			int nextX = x + dx[i];
			int nextY = y + dy[i];
			
			// mineMap 범위내에 방문하지않은곳, 지뢰가 없는곳 x,y
			if (nextX >= 0 && nextX <= n && nextY >= 0 && nextY <= n && !visited[nextY][nextX] && mineMap[nextY][nextX] == '.') {
				visited[nextY][nextX] = 1;		// 8칸중에 방문하지않곳은 1로
				if (check(nextY, nextX)) {		// nextX, nextY위치 인접 8칸은 지뢰가 없는곳이니 큐에 추가한다.
					q.push(make_pair(nextY, nextX));
					//cout << q.back().second << ", " << q.back().first << '\n';
				}
			}
		}
	}

}

//// 체크용 함수
//void showVisited() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << visited[i][j] << ' ';
//		}
//		cout << '\n' << '\n';
//	}
//}

void findMine() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// 방문하지않은곳, 현재 위치에 지뢰가 없고 ,주변 8칸에 지뢰가 없는곳을 bfs로 탐색한다.
			if (!visited[i][j] && mineMap[i][j] == '.' && check(i, j)) {
				click++;	// i,j 위치에 클릭
				bfs(i, j);
				//cout <<"클릭 : "<<click << '\n';
				//showVisited();
			}
			
		}
	}
	// 방문하지 못한곳중에 지뢰가 없는 곳을 센다
	/*
		..* 의 최소 개수를 구하면 0,0이 큐에 들어가고 그 인접 8칸을 조사하면 1 1 0, 1 1 0, 0 0 ? 이 됨
		..* 그런데 큐에 들어갈려면 방문하지않을곳에 그 위치에 지뢰가 없어야함 그래서 0,0만 들어가고 bfs가 종료됨
		**.
	*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && mineMap[i][j] == '.')
				click++;
		}
	}
}

void SwExpert::p1868() {
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		click = 0;
		memset(visited, 0, sizeof(visited));	// visited 배열 내부 0으로 초기화
		cin >> n;
		// mineMap 입력
		for (int j = 0; j < n; j++) {
			string sTemp;
			cin >> sTemp;
			for (int k = 0; k < sTemp.size(); k++) {
				mineMap[j][k] = sTemp[k];
			}
		}
		findMine();
		cout << "#" << (i + 1) << " " << click << '\n';	// 답
	}
}

/*
2
3
..*
..*
**.

 *지뢰
 . No 지뢰
 지뢰의 위치를 다 알때 최소 클릭(값)을 구한다.

 큐에 들어갈 좌표 ----> 그 좌표 인접 8칸에는 지뢰가 없어야함
 그래서 큐에 들어간 좌표를 탐색하면서 또 인접 지뢰가 없는 좌표를 찾고
 visited를 통해 1로 바꾸고 click을 증가하면
 최소 개수를 구한다.
 ..*
 ..*
 **. 이거같은 경우는 110
 *                 110
 *                 000 인데 최하단이 지뢰가없으니 카운트새준다

 1. 지뢰가 없는곳을 방문
 2. 주변 8칸에서도 지뢰가 없다면 방문한다.
 3. 최종적으로 방문하지 못한 곳중에
    지뢰가 없는 곳을 세어주면 값이 나온다


	i,j 주변 8칸 조사

	i-1,j-1		i-1,j	i-1,j+1
	i,j-1		i,j		i,j+1
	i+1,j-1		i+1,j	i+1,j+1

	상하좌우, 대각선
	dx = {0, 0, -1, 0, 1, 1, -1, -1}
	dy = {-1, 1, 0, 1, -1, 1, 1, -1}
*/