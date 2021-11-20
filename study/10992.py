N = int(input())

for i in range(N):
    for j in range(N-i-1):
        print(end = ' ')
    print('*',end='')
    for j in range(i*2-1):
        if(i == N-1):
            print(end='*')
        else:            
            print(end=' ')
    if(i > 0 and i < N):
        print('*',end='')
    print()
