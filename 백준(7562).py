from collections import deque

t = int(input())

dx = [-2, -1, 1, 2, 2, 1, -1, -2]
dy = [-1, -2, -2, -1, 1, 2, 2, 1]
graph = []
n = 0
visited = []

for l in range(t):

    n = int(input())

    queue = deque()
    graph = [[0 for col in range(n+1)] for row in range(n+1)]
    visited = [[0 for col in range(n+1)] for row in range(n+1)]
    #print(graph)

    now = list(map(int, input().split()))
    target = list(map(int, input().split()))

    visited[now[0]][now[1]] = 1
    queue.append((now[0], now[1], 0))

    while queue:

        x, y, z = queue.popleft()

        if x == target[0] and y == target[1] :
            print(z)
            break

        for i in range(8):

            nx = dx[i] + x
            ny = dy[i] + y

            if nx < 0 or ny < 0 or nx >= n or ny >= n:
                continue

            if visited[nx][ny] == 1:
                continue

            visited[nx][ny] = 1
            #graph[nx][ny] = graph[x][y] + 1
            queue.append((nx, ny, z+1))
