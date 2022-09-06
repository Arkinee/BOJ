from collections import deque

n, l, r = map(int, input().split())
graph = []
visited = [[0 for _ in range(n)] for _ in range(n)]

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
queue = deque()
pop = 0
cnt = 0

def dfs(x, y):

    global pop
    pop += graph[x][y]
    
    for i in range(4):

        nx = x + dx[i]
        ny = y + dy[i]

        if 0<=nx<n and 0<=ny<n and l <= (graph[x][y] - graph[nx][ny]) <= r and visited[nx][ny] == 0:

            visited[nx][ny] = 1
            queue.append((nx,ny))
            dfs(nx, ny)

            return True

    return False
    

for i in range(n):

    graph.append(list(map(int, input().split())))

    

visited[0][0] = 1
queue.append((0,0))

while dfs(0, 0):

    cnt += 1
    avg = pop / len(queue)
    while queue:

        a, b = queue.popleft()
        graph[a][b] = int(avg)

    pop = 0
    
print(cnt)


