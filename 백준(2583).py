import sys
sys.setrecursionlimit(10000)
m, n, k = map(int, input().split())

graph = [[0 for _ in range(m)] for _ in range(n)]
square = []
cnt = 0

#print(graph)


def dfs(x, y):

    global cnt
    if x >= n or y >= m or x <0 or y < 0 or graph[x][y] == 1:
        return False

    graph[x][y] = 1
    cnt += 1

    dfs(x-1, y)
    dfs(x+1, y)
    dfs(x, y-1)
    dfs(x, y+1)

    return True



for i in range(k):

    x1, y1, x2, y2 = map(int, input().split())

    for a in range(x1,x2):
        for b in range(y1,y2):

            #print(str(a) + ' ' + str(b))
            graph[a][b] = 1


#print(graph)


for i in range(n):
    for j in range(m):

        if graph[i][j] == 0:
            
            search = dfs(i,j)
            if search:
                square.append(cnt)
            cnt = 0
            

print(str(len(square)))
square.sort()
for n in square:
    print(n, end=' ')

            

            
