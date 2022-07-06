from collections import deque

n, m = map(int, input().split())

dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

graph = []
for i in range(n):
    graph.append(list(map(int, input())))

#print(graph)

def bfs(x, y):
    queue = deque()
    queue.append((x,y))

    while queue:

        x, y = queue.popleft()
        #print('x y: ' + str(x) + ' ' + str(y))

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or ny < 0 or nx >=n or ny >= m: # 미로 벗어나는 경우
                #print('1 nx ny: ' + str(nx) + ' ' + str(ny))
                continue

            if graph[nx][ny] == 0: # 벽
                #print('2 nx ny: ' + str(nx) + ' ' + str(ny))
                continue

            if graph[nx][ny] == 1: # 갈 수 있음
                graph[nx][ny] = graph[x][y] + 1
                #print('3 nx ny: ' + str(nx) + ' ' + str(ny))
                queue.append((nx,ny))

    return graph[n-1][m-1]

print(bfs(0,0))
