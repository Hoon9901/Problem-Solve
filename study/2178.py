import sys

N, M = map(int, sys.stdin.readline().split())
# 상 하 좌 우 
                #    0 1 0
dx = [-1,1,0,0] #   0 -1 0
dy = [0,0,-1,1] #   -1 0 1
map = []
visited = [[0] * (M) for _ in range(N)]

for _ in range(N) :
    map.append(list(input()))
               
queue = [(0, 0)] # 튜플로 좌표 넘김
visited[0][0] = 1
while queue :
    x, y = queue.pop(0)
    
    if x == N-1 and y == M-1 :
        print(visited[x][y])    # 최종 목표지
        break
    
    for i in range(4): # 사방향
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < N and 0 <= ny < M : # 범위 내
            if not visited[nx][ny] and map[nx][ny] == '1' :
                visited[nx][ny] = visited[x][y] + 1
                queue.append((nx, ny))  # 인점 길 큐에 추가
                