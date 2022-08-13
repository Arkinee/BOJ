import sys
sys.setrecursionlimit(10**5)

n = int(input())

graph = [[] for _ in range(n+1)]
parents = [0 for _ in range(n+1)]
find = [False for _ in range(n+1)]
parents[1] = 1
#print(parent)

for i in range(n-1):

    a, b = map(int, input().split())

    graph[a].append(b)
    graph[b].append(a)


#print(graph)

def dfs(cur, graph, parents):

    for node in graph[cur]:

        if parents[node] == 0:
            parents[node] = cur
            dfs(node, graph, parents)

    
dfs(1, graph, parents)
for i in range(2, n+1):
    print(parents[i])
    
