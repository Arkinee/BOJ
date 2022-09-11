n, m = map(int, input().split())
r, c, d = map(int, input().split())

graph = [] # 0:빈칸, 1:벽, 2:청소한 곳
for i in range(n):
    graph.append(list(map(int, input().split())))

#d: 0북, 1동, 2남, 3서
result = 0
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

x, y = r, c
graph[x][y] = 2
end = False

while True:

    first = False #청소를 이전에 했는

    for i in range(4): #네 방향 보기
        
        nx = x + dx[(d+3-i) % 4]
        ny = y + dy[(d+3-i) % 4]

        if graph[nx][ny] == 0: # 왼쪽 청소가능
            x, y = nx, ny
            d = (d+3-i) % 4 #방향 바꿈
            graph[x][y] = 2
            first = True

            #print(graph)
            #print('')
            break

    if first: # 위에서 청소를 했다면 밑에 무시하고 이동
        continue

    # 네 방향 모두 청소 못한 상태, +2는 반대 방향
    nx = x + dx[(d+2) % 4]
    ny = y + dy[(d+2) % 4]

    if graph[nx][ny] == 1:
        end = True
    else:
        x, y = nx, ny # 벽 아닌 경우, 후진

    if end: #탈
        break

for i in range(n):
    for j in range(m):
        if graph[i][j] == 2:
            result += 1

print(result)
