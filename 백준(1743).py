import sys
sys.setrecursionlimit(100000)

n, m, k = map(int, input().split())
graph = [[0 for _ in range(m)] for _ in range(n)]
visited = [[False for _ in range(m)] for _ in range(n)]
arr = [] # 쓰레기 크기 넣어두는 리스트)
size = 0

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

def dfs(x, y):

    if visited[x][y]:
        return
    
    global size
    visited[x][y] = True
    size += 1

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if 0<=nx<n and 0<=ny<m and graph[nx][ny] == 1:
            dfs(nx, ny)
                
    
for i in range(k):

    a, b = map(int, input().split())
    graph[a-1][b-1] = 1


for i in range(n):
    for j in range(m):

        if graph[i][j] == 1:
            #print(str(i) + ' ' + str(j))
            dfs(i, j)
            arr.append(size)
            size = 0



print(max(arr))


