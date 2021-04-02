#include "solveBaekjoon.h"
// using queue, pair, string, vector

int t, n;		// test case �� T
char mineMap[301][301];		// 1<= n <= 300
int visited[301][301] = { 0, };	// ���ڰ� ���°��� �湮
// ���� 8ĭ�� ������ x,y ���� ���� �迭 (�����¿�, �ð����)
int dx[8] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[8] = { -1, 1, 0, 0, -1, 1, 1, -1 };
// 
int click;

// i,j ��ġ�� ���� 8ĭ ����, ������ bool��, ���� -> false
bool check(int y, int x) {
	for (int i = 0; i < 8; i++) {
		// ��ǥ ���� x + dx[i] -> �ֺ� ĭ x ��ġ
		int nowX = x + dx[i];
		int nowY = y + dy[i];
		// ���������� (0~n) �����ΰ��� 1�� �̻��̶� ������ �ٷ� false ����
		if (nowX >= 0 && nowX <= n && nowY >= 0 && nowY <= n && mineMap[nowY][nowX] == '*')
			return false;
	}
	return true; // �ֺ� 8ĭ�� ���ڰ� ����(8ĭ ��� 0).
}

void bfs(int iy, int ix) {	
	// ť ���� ����8ĭ�� ���ڰ����� ��ġ�� ����.
	queue<pair<int, int>> q;
	q.push(make_pair(iy, ix));	// x,y ��ġ�� ť�� �ѱ��.
	//cout << q.back().second << ", " << q.back().first << '\n';
	
	while (!q.empty()) {
		int y = q.front().first;	// i(y)
		int x = q.front().second;   // j(x)
		visited[y][x] = 1;			// �湮���� �������� �湮
		q.pop();					// �湮�Ѱ��� ť���� pop

		// x,y���� ���� �ֺ� 8ĭ Ž��, ���� ť�� ���� ��ǥ Ž��
		for (int i = 0; i < 8; i++) {
			int nextX = x + dx[i];
			int nextY = y + dy[i];
			
			// mineMap �������� �湮����������, ���ڰ� ���°� x,y
			if (nextX >= 0 && nextX <= n && nextY >= 0 && nextY <= n && !visited[nextY][nextX] && mineMap[nextY][nextX] == '.') {
				visited[nextY][nextX] = 1;		// 8ĭ�߿� �湮�����ʰ��� 1��
				if (check(nextY, nextX)) {		// nextX, nextY��ġ ���� 8ĭ�� ���ڰ� ���°��̴� ť�� �߰��Ѵ�.
					q.push(make_pair(nextY, nextX));
					//cout << q.back().second << ", " << q.back().first << '\n';
				}
			}
		}
	}

}

//// üũ�� �Լ�
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
			// �湮����������, ���� ��ġ�� ���ڰ� ���� ,�ֺ� 8ĭ�� ���ڰ� ���°��� bfs�� Ž���Ѵ�.
			if (!visited[i][j] && mineMap[i][j] == '.' && check(i, j)) {
				click++;	// i,j ��ġ�� Ŭ��
				bfs(i, j);
				//cout <<"Ŭ�� : "<<click << '\n';
				//showVisited();
			}
			
		}
	}
	// �湮���� ���Ѱ��߿� ���ڰ� ���� ���� ����
	/*
		..* �� �ּ� ������ ���ϸ� 0,0�� ť�� ���� �� ���� 8ĭ�� �����ϸ� 1 1 0, 1 1 0, 0 0 ? �� ��
		..* �׷��� ť�� ������ �湮������������ �� ��ġ�� ���ڰ� ������� �׷��� 0,0�� ���� bfs�� �����
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
		memset(visited, 0, sizeof(visited));	// visited �迭 ���� 0���� �ʱ�ȭ
		cin >> n;
		// mineMap �Է�
		for (int j = 0; j < n; j++) {
			string sTemp;
			cin >> sTemp;
			for (int k = 0; k < sTemp.size(); k++) {
				mineMap[j][k] = sTemp[k];
			}
		}
		findMine();
		cout << "#" << (i + 1) << " " << click << '\n';	// ��
	}
}

/*
2
3
..*
..*
**.

 *����
 . No ����
 ������ ��ġ�� �� �˶� �ּ� Ŭ��(��)�� ���Ѵ�.

 ť�� �� ��ǥ ----> �� ��ǥ ���� 8ĭ���� ���ڰ� �������
 �׷��� ť�� �� ��ǥ�� Ž���ϸ鼭 �� ���� ���ڰ� ���� ��ǥ�� ã��
 visited�� ���� 1�� �ٲٰ� click�� �����ϸ�
 �ּ� ������ ���Ѵ�.
 ..*
 ..*
 **. �̰Ű��� ���� 110
 *                 110
 *                 000 �ε� ���ϴ��� ���ڰ������� ī��Ʈ���ش�

 1. ���ڰ� ���°��� �湮
 2. �ֺ� 8ĭ������ ���ڰ� ���ٸ� �湮�Ѵ�.
 3. ���������� �湮���� ���� ���߿�
    ���ڰ� ���� ���� �����ָ� ���� ���´�


	i,j �ֺ� 8ĭ ����

	i-1,j-1		i-1,j	i-1,j+1
	i,j-1		i,j		i,j+1
	i+1,j-1		i+1,j	i+1,j+1

	�����¿�, �밢��
	dx = {0, 0, -1, 0, 1, 1, -1, -1}
	dy = {-1, 1, 0, 1, -1, 1, 1, -1}
*/