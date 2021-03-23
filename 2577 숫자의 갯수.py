a = int(input())
b = int(input())
c = int(input())

res = str(a*b*c)
ans = [0]*10

for i in res :
    ans[int(i)] += 1

for i in ans :
    print(i)