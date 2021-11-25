# sum, min, max -> iterable
print(sum([1,2,3])) # list
print(sum((4,5,6))) # tuple
print(sum({7,8,9})) # dict

strCal = eval("10+5")
print(strCal)

# itertools

from itertools import combinations, combinations_with_replacement, permutations, product

data = [1,2,3,4]
result = list(permutations(data,2)) # r = 뽑을꺼
print(result)

result = list(combinations(data,2)) # 4C2
print(result)

result = list(combinations_with_replacement(data,2)) # 중복
print(result) 

result = list(product(data, repeat=2)) # 비복원추출
print(result)

from bisect import bisect_left, bisect_right

arrayList = [1,2,3,4,5]
value = 4

print(bisect_left(arrayList, value)) # 하한
print(bisect_right(arrayList, value)) # 상한

# 정렬된 리스트에서 특정 범위 내 원소의 개수

def countByRange(arr, left_value, right_value):
    rightIdx = bisect_right(arr,right_value)
    leftIdx = bisect_left(arr, left_value)

    return rightIdx - leftIdx
 
arr = [0,1,1,2,2,3,4,5,6,7,8,8]
print(countByRange(arr, 4, 4)) # 4인 원소 개수
print(countByRange(arr, -1, 4)) # -1 ~ 4 원소 개수

from collections import deque

data = deque([2,3,4])
data.appendleft(1) # left -> 앞
data.append(5)

print(data)
print(list(data))

from collections import Counter

arr = Counter(['lol', 'df', 'lol', 'df', 'over', 'over', 'over'])

print(arr['over'])
print(arr['lol'])

print(dict(arr))

import math

print(math.factorial(5))

print(round(math.sqrt(2), 4))

print(math.gcd(12,6))

sets = set([1,1,2,2,3,3]) # & | - 집합연산, add1개, update여러개, remove 특정 삭제

print(list(sets)[0])