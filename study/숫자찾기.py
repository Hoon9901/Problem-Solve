
numbers = dict()
# del numbers[0] 삭제

idx = map(int, input().split())
for i in idx:
    numbers[i] = numbers.get(i,0) + 1
result = sorted(numbers.items(), key=(lambda x :x[1]))

print(result[-1])
