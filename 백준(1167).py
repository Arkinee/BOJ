import sys
sys.setrecursionlimit(1000)

#아이디어
# 아무 노드에서 가장 먼 노드를 구함(dfs 1번째)
# 해당 노드에서 가장 먼 노드를 구함(dfs 2번째)
# 두 노드 사이의 거리가 지

n = int(input())
graph = [[] for _ in range(n+1)]
dist = [-1] * (n+1)

for i in range(n):

    temp = list(map(int, input().split()))

    for j in range(1, len(temp)-1):

        if j % 2 == 1:

            graph[temp[0]].append((temp[j], temp[j+1]))


def dfs(x, d):

    for i in graph[x]:

        a, b = i
        if dist[a] == -1:
            dist[a] = d + b
            dfs(a, d + b)

    
dist[1] = 0
dfs(1, 0)

start = dist.index(max(dist))
dist = [-1] * (n+1)
dist[start] = 0
dfs(start, 0)

print(max(dist))
