
numbers = dict()
idx = map(int, input().split())
for i in idx:

    numbers[i] = numbers.get(i,0) + 1
result = sorted(numbers.items(), key=(lambda x :(x[1], x[0])))

print(result[-1])
