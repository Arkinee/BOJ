import sys
sys.setrecursionlimit(10000)

def dfs(x, y):

    if x < 0 or y < 0 or x >= h or y >= w:
        return False

    if graph[x][y] == 0:
        return False

    graph[x][y] = 0

    dfs(x-1, y)
    dfs(x, y-1)
    dfs(x+1, y)
    dfs(x, y+1)
    dfs(x+1, y+1)
    dfs(x-1, y-1)
    dfs(x+1, y+1)
    dfs(x-1, y+1)
    dfs(x+1, y-1)

    return True

while True:

    #w, h <= 50
    w, h = map(int, input().split())    
    #exit
    if w == 0 and h == 0:
        break
    
    graph = []
    result = 0

    for i in range(h):
        graph.append(list(map(int, input().split())))

    #print(graph)

    for i in range(h):
        for j in range(w):

            search = dfs(i, j)

            if search:
                result += 1

    print(result)
