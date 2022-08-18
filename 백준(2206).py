from collections import deque
n, m = map(int, input().split())

graph = []
#벽의 파괴를 visited에서 확인해야 시간초과가 안 남
visited = [[[0]*2 for _ in range(m)] for _ in range(n)]
visited[0][0][0] = 1

dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

for i in range(n):
    graph.append(list(map(int, input())))

#print(graph)
#print(visited)

def bfs(a, b, c):

    queue = deque()
    queue.append([a, b, c])

    while queue:

        x, y, z = queue.popleft()
        if x == n-1 and y == m-1:   #목적지 도달
            return visited[x][y][z]
        
        for i in range(4):

            nx = x + dx[i]
            ny = y + dy[i]

            if not (0 <= nx < n and 0 <= ny < m):
                continue

            if graph[nx][ny] == 1 and z == 0: # 이동할 곳에 벽이 있고 벽 파괴한적 없을 때
                visited[nx][ny][1] = visited[x][y][0] + 1
                queue.append([nx, ny, 1])

            if graph[nx][ny] == 0 and visited[nx][ny][z] == 0: # 벽이 아니고 아직 방문 x
                visited[nx][ny][z] = visited[x][y][z] + 1
                queue.append([nx, ny, z])

    return -1 # 도달할 수 없으면 -1 반환

print(bfs(0,0,0))


