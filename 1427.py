# 소트인사이드
N = int(input())


# 각 자리수 추출
nlist = []
for i in str(N) :
    nlist.append(i)
# 내림차순으르 리스트 정렬
nlist.sort(reverse=True)

# 정수로 변환
nSize = len(nlist)
result = 0
for i in range(nSize):
    result += int(nlist[i]) * (10**(nSize-i-1))
    
print(result)