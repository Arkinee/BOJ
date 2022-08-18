from collections import deque
n = int(input())
size = 2
eat = 0
graph = []
spoint = []
result = 0
sx, sy = 0, 0 # 아기상어 위치
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

for i in range(n):
    graph.append(list(map(int, input().split())))

for i in range(n):
    for j in range(n):

        if graph[i][j] == 9:
            sx, sy = i, j
            break

#print(graph)

def bfs(x, y, size):

    
    queue = deque()
    visited = [[0] * n for _ in range(n)]
    dist = [[0] * n for _ in range(n)]

    queue.append((x,y))
    visited[x][y] = 1
    temp = []

    while queue: # 지나는 칸 최소거리
        a, b = queue.popleft()

        for i in range(4):
            nx = a + dx[i]
            ny = b + dy[i]

            if 0<=nx<n and 0<=ny<n and visited[nx][ny] == 0:
                
                if graph[nx][ny] <= size:# 현재 크기보다 같거나 작으면 이동 가능한 칸
                    
                    queue.append((nx, ny))
                    visited[nx][ny] = 1
                    dist[nx][ny] = dist[a][b] + 1

                    if graph[nx][ny] < size and graph[nx][ny] != 0: #방문 안했고 사이즈가 작은 물고기 만
                        temp.append((nx, ny, dist[nx][ny]))

    return sorted(temp, key=lambda x:(-x[2], -x[0], -x[1])) #거리 같은 물고기 많으면, 가장위 -> 가장 왼쪽 물고기부터 먹음


while True:

    move = bfs(sx, sy, size)

    if len(move) == 0: # 더 이상 먹을 물고기 없는 경우
        break

    nx, ny, dist = move.pop()
    result += dist #움직이는 칸수 = 시간
    graph[sx][sy], graph[nx][ny] = 0, 0
    sx, sy = nx, ny #상어 위치 먹은 물고기 위치로 이동
    eat += 1
    
    if eat == size: # 크기만큼 먹으면 크기 + 1
        size +=1
        eat = 0

    
print(result)

                        
