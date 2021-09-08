N, C, W = map(int,input().split())
# 나무의 개수, 자르는 비용, 나무 개당 가격
trees = list()
# 현재 가지고 있는 나무 입력
for i in range(N):
    trees.append(int(input()))

max_money = 0
for i in range(1, 10000): # 완전탐색
    trees_count = 0 # 자른 나무의 총 개수
    money = 0
    for j in range(N):
        sliceTree = trees[j] // i
        slicePrice = (trees[j] - 0.5) // i
        result = sliceTree * i * W - C * slicePrice
        if result > 0 :
            money += result
    max_money = max(max_money, money)
print(int(max_money))

