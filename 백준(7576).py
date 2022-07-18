import sys
from collections import deque
sys.setrecursionlimit(10 ** 6)

m, n = map(int, input().split())

graph = []
day = 0
dx = [-1, 1, 0, 0]
dy = [0, 0, 1, -1]
queue = deque()

for i in range(n):
    graph.append(list(map(int, input().split())))
    for j in range(m):
        if graph[i][j] == 1:
            queue.append((i,j))
    

def bfs():
    global queue

    while queue:
        x, y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or ny < 0 or nx >= n or ny >= m:
                continue

            if graph[nx][ny] == -1:
                continue

            #graph[nx][ny] >= (graph[x][y] + 1) or
            if graph[nx][ny] == 0:
                #print('nx ny:' + str(nx) + ' '+ str(ny))                
                graph[nx][ny] = graph[x][y] + 1
                queue.append((nx, ny))
                

bfs()

flag = False
num = -1

#print(graph)
for i in range(n):
    for j in range(m):

        if graph[i][j] == 0:
            print(str(-1))
            flag = True
            break

        if num < graph[i][j]:
            num = graph[i][j]

    if flag:
        break

#print('num: ' + str(num))
if not flag:
    if num == -1:
        print(str(0))
    else:
        print(str(num - 1))

        
        
