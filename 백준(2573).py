from collections import deque

n, m = map(int, input().split())
graph = []
zero = []
visit = []
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]


def bfs(x, y):

    q = deque()
    q.append((x,y))

    while q:

        a, b = q.popleft()
        visit[a][b] = 1

        for i in range(4):

            nx = a + dx[i]
            ny = b + dy[i]

            if 0<=nx<n and 0<=ny<m:
                if graph[nx][ny] != 0 and visit[nx][ny] == 0: #빙하가 있고 방문한 적 없음
                    visit[nx][ny] = 1
                    q.append((nx, ny))
                elif graph[nx][ny] == 0: # 다 녹은 곳일 경우 현재 위치의 주변 빙하 수 +1
                    zero[a][b] += 1

    return 1

#입력
for i in range(n):
    graph.append(list(map(int, input().split())))
    

cnt = 0 # 몇 일 걸리는 지
flag = False # 빙하가 분리 가능한 지
while True:

    visit = [[0 for _ in range(m)] for _ in range(n)]
    zero = [[0 for _ in range(m)] for _ in range(n)]
    result = []

    for i in range(n):
        for j in range(m):
            if graph[i][j] != 0 and visit[i][j] == 0:
                result.append(bfs(i, j)) #result 길이가 2이상이면 빙산 나눠진 것 

    #빙산 깍기
    for i in range(n):
        for j in range(m):

            if graph[i][j] >= zero[i][j]:
                graph[i][j] -= zero[i][j]
            else:
                graph[i][j] = 0 # 녹아서 0 된 경우

    if len(result) == 0: #다 녹을때까지 안 나눠지는 경우
        break
    if len(result) >= 2:
        flag = True
        break
        
    cnt += 1

if flag:
    print(cnt)
else:
    print(0)
