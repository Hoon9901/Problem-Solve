'''
2 - 2-1
3 - 3/3
4 - (4/2 2/2)
5 - 5-1, 4/2, 2/2 
6 - 6/3 2/2 1
7 - 7-1, 6/3, 2/2
8 - 8/2 4/2 2/2
9 - 9/3 3/3
10 - 
N = min( N/3+1, n/2+1, N-1 + 1)
'''

N = int(input())
dp = [0 for i in range(N+1)] # memoization

for i in range(2, N+1):
    dp[i] = dp[i-1] + 1
    #print('dp[{0}] => {1}'.format(i,dp[i]))
    if (i % 2 == 0):
        dp[i] = min(dp[i], dp[i//2]+1)
    if (i % 3 == 0):
        dp[i] = min(dp[i], dp[i//3]+1)
    
print(dp[N])