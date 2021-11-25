n = 1260
cnt = 0
# 큰 단위부터
coins = [500, 100, 50, 10]

for coin in coins :
    cnt += n // coin
    n %= coin

print('{0}을 거슬렀을때 동전 개수 {1}'.format(n, cnt))

