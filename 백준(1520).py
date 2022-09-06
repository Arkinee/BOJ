import sys
sys.setrecursionlimit(10000)

m, n = map(int, input().split())
graph = []
dp = [[-1 for _ in range(n)] for _ in range(m)] # 그냥 dfs로 할 시 시간초과발생, dp로 최적해 쪼개서 메모제이션 이

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def dfs(x, y):
    
    cnt = 0

    if x == m-1 and y == n-1:
        return 1

    if dp[x][y] != -1: # 이미 갱신되어 있다면 그 곳에서 목표까지 가는 경로의 수가 저장되어 있으므로 답에 더해주면 됨
        return dp[x][y]
    
    for i in range(4):

        nx = x + dx[i]
        ny = y + dy[i]

        if 0<=nx<m and 0<=ny<n and graph[nx][ny] < graph[x][y]:
                      
            cnt += dfs(nx, ny) # 해당 길로 갔을 때 경로의 수 더해짐

    dp[x][y] = cnt # 해당 지점에서 도착 지점까지 갈 수 있는 경로의 수 업데이트

    return dp[x][y]

for i in range(m):

    graph.append(list(map(int,input().split())))


print(dfs(0,0))
