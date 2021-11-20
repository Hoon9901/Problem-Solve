word = input()
# 10개 씩 끊어서 출력
for idx, i in enumerate(word):
    if(idx > 0 and idx % 10 == 0) :
        print()
    print(i, end='')