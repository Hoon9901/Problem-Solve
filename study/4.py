# 피자가게 배달
N = int(input())

table = [[0] * 3 for _ in range(N)]

for i in range(N):
    table[i] = list(map(int, input().split()))

# 인접하면 같은값 못선택
minList = [-1] * N
for i in range(N):
    min = max(table[i])
    for j in range(3): #배달대행 업체 선정
        if i > 0 and not(minList[i-1] == j):
            if table[i][j] < min:
                min = table[i][j]
                minList[i] = j
        elif i == 0:
            if table[i][j] < min:
                min = table[i][j]
                minList[i] = j
    print(minList)

result = 0
for i in range(N):
    result += int(table[i][minList[i]])
print(result)
        