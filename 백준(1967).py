import sys
sys.setrecursionlimit(10000)

n = int(input())
graph = [[] for _ in range(n+1)]
dist = [-1] * (n+1)

#첫 노드에서 가장 노드 구하고 해당 노드에서 가장 먼 노드까지의 거리가 지름

for i in range(n-1):

    a, b, c = map(int, input().split())

    graph[a].append((b,c))
    graph[b].append((a,c))

#print(graph)

def dfs(x, d):
    
    for i in graph[x]:

        a, b = i
        if dist[a] == -1:
            dist[a] = d + b
            dfs(a, d + b)


dist[1] = 0 #노드 1 시
dfs(1, 0) # 노드 1에서 가장 먼 노드 구하기

start = dist.index(max(dist))
dist = [-1] * (n+1)
dist[start] = 0
dfs(start, 0)

print(max(dist))

