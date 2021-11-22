import sys

def dfs(matrix ,start, visited):
    print(start, end =' ')
    visited[start] = 1
    for i in range(1, N+1):
        if not visited[i] and matrix[start][i] == 1 :
            dfs(matrix, i, visited)

def bfs(matrix, start, visited):
    queue = list() # 큐 생성
    queue.append(start)
    visited[start] = 1
    while queue:
         start = queue.pop(0)
         print(start, end=' ')
         for i in range(1, N+1):
             if not visited[i] and matrix[start][i] == 1 :
                 queue.append(i)
                 visited[i] = 1

# 정점개수, M간선개수, V시작정점
N, M, V = map(int, sys.stdin.readline().split())
  
matrix = [[0] * (N+1) for i in range(N+1)] # 영행렬 생성
visited = [0] * (N+1)
for i in range(M):
    a, b = map(int, sys.stdin.readline().split()) 
    # 양방향 그래프
    matrix[a][b] = matrix[b][a] = 1

dfs(matrix, V, visited)
print()
visited = [0] * (N+1) # 다시 초기화
bfs(matrix, V, visited)