n = int(input())
data = []
data.append([0,0])

for i in range(n):
    data.append(list(map(int, input().split())))
#print(data)

dp = [0] * (n+1)

for i in range(1, n+1):

    if i+data[i][0]-1 < n+1:

        dp[i+data[i][0]-1] = max(dp[i+data[i][0]-1], data[i][1] + dp[i-1])

    dp[i] = max(dp[i], dp[i-1])

print(dp[n])
