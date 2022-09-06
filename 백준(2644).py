import sys
sys.setrecursionlimit(10**5)

n = int(input())
a, b = map(int, input().split())
m = int(input())

graph = [[] for _ in range(n+1)]
visit = [0] * (n+1)

def dfs(a): #a노드에서 각 노드까지 거리 구하기

    for node in graph[a]:

        if visit[node] == 0: #갱신된 적이 없으면 현재 거리 + 1
            visit[node] = visit[a] + 1
            dfs(node)
    

for i in range(m):

    x, y = map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)

#print(graph)
dfs(a)
#print(visit)
if visit[b] > 0:
    print(visit[b])
else:
    print('-1')
