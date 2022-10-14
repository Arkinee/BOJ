from collections import deque

n, m = map(int, input().split())
graph = [list(input()) for _ in range(n)]
visited = [[[[False] * m for _ in range(n)] for _ in range(m)] for _ in range(n)]
q = deque()

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
rx, ry, bx, by = 0, 0, 0, 0

'''
실패 조건
파랑 구슬이 탈출하는 경우

'''

def move(x, y, dx, dy):
    cnt = 0
    
    while  graph[x+dx][y+dy] != '#' and graph[x][y] != 'O': #벽이거나 현재 위치가 탈출구 일때까지 이동
        x += dx
        y += dy
        cnt += 1

    return x, y, cnt

def bfs():

    while q:

        rx, ry, bx, by, cnt = q.popleft()
        #print('rx ry bx by cnt ' + str(rx) + ' ' + str(ry) + ' ' + str(bx) + ' ' + str(by) + ' ' + str(cnt))

        if cnt > 10: # 10회 이상 움직인 경우 실패
            break

        for i in range(4):

            nrx, nry, rcnt = move(rx, ry, dx[i], dy[i]) # 한 방향으로 계속 이동
            nbx, nby, bcnt = move(bx, by, dx[i], dy[i])

            if graph[nbx][nby] != 'O': # 실패조건
                
                if graph[nrx][nry] == 'O': # 성공
                    print(cnt)
                    return

                if nrx == nbx and nry == nby: # 겹침, 더 많이 이동한 구슬 1칸 뒤

                    if rcnt > bcnt:
                        nrx -= dx[i]
                        nry -= dy[i]
                    else:
                        nbx -= dx[i]
                        nby -= dy[i]


                if not visited[nrx][nry][nbx][nby]:
                    visited[nrx][nry][nbx][nby] = True
                    q.append((nrx, nry, nbx, nby, cnt + 1))


    print(-1) #위에서 못 나온 경우 실패            

for i in range(n):
    for j in range(m):

        if graph[i][j] == 'R':
            rx, ry = i, j

        elif graph[i][j] == 'B':
            bx, by = i, j

visited[rx][ry][bx][by] = True
q.append((rx, ry, bx, by, 1))
bfs()
