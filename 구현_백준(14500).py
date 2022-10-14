n, m = map(int, input().split())

graph = [list(map(int, input().split())) for _ in range(n)]
visited = [[False] * m for _ in range(n)]
answer = 0
move = [(0, 1), (0, -1), (1, 0), (-1, 0)]


#ㅜ 모양 제외 최대값 계산
def dfs(x, y, _sum, cnt):

    global answer

    if cnt == 4:
        answer = max(answer, _sum)
        return

    for i in range(4):

        nx = x + move[i][0]
        ny = y + move[i][1]

        if 0<=nx<n and 0<=ny<m and not visited[nx][ny]:

            visited[nx][ny] = True
            dfs(nx, ny, _sum + graph[nx][ny], cnt+1)
            visited[nx][ny] = False #계산 후 방문 풀어주


def terr(x, y):

    global answer

    for i in range(4):
        temp = graph[x][y]
        for j in range(3):
            #move 배열의 것 중 3개를 사용함
            t = (i+j)%4
            nx = x + move[t][0]
            ny = y + move[t][1]

            if not (0<=nx<n and 0<=ny<m):
                temp = 0
                break

            temp += graph[nx][ny]


        answer = max(answer, temp)

for i in range(n):
    for j in range(m):

        visited[i][j] = True
        dfs(i, j, graph[i][j], 1)
        visited[i][j] = False

        terr(i, j)

print(answer)
