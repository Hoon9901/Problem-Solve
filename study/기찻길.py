 # 기차 세로, 가로, 현 위치(R,C ), 소요시간 L
N, M, R, C, L = map(int, input().split())

dx = [
    [-1, 1, 0, 0], 
    [-1, 1],        
    [0, 0],         
    [-1, 0],        
    [1, 0],         
    [1, 0],        
    [-1, 0]         
    ]

dy = [
    [0, 0, -1, 1],
    [0, 0],
    [-1, 1],
    [0, 1],
    [0, 1],
    [0, -1],
    [0, -1]
    ]

# bfs
queue = list()
visited = [[0] * M for _ in range(N)]
graph = [[0] * M for _ in range(N)]

for i in range(N):
    graph[i] = list(map(int, (input().split())))

queue.append((R, C))
visited[R][C] = 1    # 시작 위치
count = 1

while queue:
    x, y = queue.pop(0)
    
    trail = graph[x][y] - 1 # 현재 서있는 선로 타입

    for i in range(len(dx[trail])): # 탐색
        xx = dx[trail][i]
        yy = dy[trail][i]
        nx = x + xx # 상하
        ny = y + yy # 좌우
        if 0 <= nx < N and 0 <= ny < M :
            if not visited[nx][ny] and graph[nx][ny] != 0 :
                nextTrail = graph[nx][ny] - 1 # 다음 선로 상태                
                nextX = dx[nextTrail]
                nextY = dy[nextTrail]
                
                isConnected = False
                # 위아래 연결 확인
                if xx != 0 and -xx in nextX:
                    isConnected = True
                if yy != 0 and -yy in nextY:
                    isConnected = True
                if isConnected:
                    visited[nx][ny] = visited[x][y] + 1 # 새로운 방문은 1시간 추가
                    queue.append((nx, ny))
                
count = 0
for i in visited:
    for j in i :
        if 0 < j <= L :
            count+=1
    
print(count)