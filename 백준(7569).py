from collections import deque

m, n, h = map(int, input().split())

dx = [1, 0, -1, 0, 0, 0]
dy = [0, 1, 0, -1, 0, 0]
dz = [0, 0, 0, 0,1,-1]

graph = [[[0 for _ in range(m)] for _ in range(n)] for _ in range(h)]
queue = deque()

def bfs():

    global queue

    while queue:

        x, y, z = queue.popleft()
        
        for i in range(6):

            nx = x + dx[i]
            ny = y + dy[i]
            nz = z + dz[i]

            if nx < 0 or ny < 0 or nz < 0 or nx >= n or ny >= m or nz >= h:
                continue

            if graph[nz][nx][ny] == -1:
                continue

            if graph[nz][nx][ny] == 0:
                graph[nz][nx][ny] = graph[z][x][y] + 1
                queue.append((nx, ny, nz))


    #if graph[]
zero = 0

for z in range(h):
    for x in range(n):

        arr = list(map(int, input().split()))

        for y in range(len(arr)):
            graph[z][x][y] = arr[y]

            if arr[y] == 1:
                queue.append((x, y, z))

            if arr[y] == 0:
                zero += 1

if zero == 0:
    print(str(0))
else:

    bfs()
    num = -2

    flag = False
    for z in range(h):
        for x in range(n):
            for y in range(m):

                if graph[z][x][y] == 0:
                    print(str(-1))
                    flag = True
                    break

                if num < graph[z][x][y]:
                    num = graph[z][x][y]

            if flag:
                break
            
        if flag:
            break
        

    if not flag:
        if num == -2:
            print(str(0))
        else:
            print(str(num-1))
