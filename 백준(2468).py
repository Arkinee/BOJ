import sys
sys.setrecursionlimit(10000)

import copy
n = int(input())
graph = []
tmp_graph = []
answer = []

for i in range(n):
    arr = list(map(int, input().split()))
    graph.append(arr)

max_value = max(map(max, graph))

def dfs(x, y):
    
    if x <0 or y <0 or x >= n or y >= n:
        return False

    if tmp_graph[x][y] == 0:
        return False

    tmp_graph[x][y] = 0

    dfs(x-1, y)
    dfs(x, y-1)
    dfs(x+1, y)
    dfs(x, y+1)

    return True


for m in range(max_value + 1):

    tmp_graph = copy.deepcopy(graph)
    for x in range(n):
        for y in range(n):

            if tmp_graph[x][y] <= m:
                tmp_graph[x][y] = 0 #rain
            else:
                tmp_graph[x][y] = 1 #safe

    cnt = 0
    for i in range(n):
        for j in range(n):

            if tmp_graph[i][j] == 1:

                search = dfs(i, j)

                if search:
                    cnt += 1

    answer.append(cnt)


#print(answer)
print(max(answer))
