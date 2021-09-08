
num = list()

N = int(input())

# 입력 
for i in range(0, N):
    num.append(int(input()))

def sortofNumber(target) :
    # 선택정렬
    for i in range(1, len(target)) :
        for j in range(i, 0, -1) :
            if target[j - 1] > target[j] :
                target[j - 1], target[j] = target[j], target[j - 1]
        
    for i in target :
        print(i)

sortofNumber(num)