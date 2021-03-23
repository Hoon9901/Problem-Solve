n = int(input())
arr = map(int, input().split())

max = -10000000000
min = 10000000000

for n in arr :
    if n > max :
        max = n
    if n < min :
        min = n

print(min, max)