N = int(input())

for i in range(N):
    for j in range(i):
        print(end = ' ')
    for j in range((N*2) - (i *2) - 1):
        print('*', end = '')
    print()
for i in range(1,N):
    for j in range(N-(i+1)):
        print(end =' ')
    for j in range(i*2+1):
        print('*', end = '')
    print()
   

# 3 3  (3 = 5 - 2)
# 2 5  (2 = 5 - 3)
# 1 7  (1 = 5 - 4)
# 0 9  (0 = 5 - 5)
