from collections import deque
INF = 999999

n, m, start = map(int, input().split())
arr = [[] * (n+1) for _ in range(n+1)] # 1번째 노드를 idx 1부터 시작하기 위해 n+1개로 만듬
dfs_result = []
bfs_result = []

for i in range(m):
    a, b = map(int, input().split())
    arr[a].append(b)
    arr[a].sort()
    arr[b].append(a)
    arr[b].sort()
    

#print(arr)

def dfs(graph, v, visited):

    visited[v] = True
    dfs_result.append(v)

    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)


def bfs(graph, v, visited):

    queue = deque([v])
    visited[v] = True

    while queue:
        vertex = queue.popleft()
        bfs_result.append(vertex)
        #print('v: ' + str(vertex))

        for i in graph[vertex]:
            #print('i: ' + str(i))
            #print('visited: ' + str(visited[i]))
            if not visited[i]:
                queue.append(i)
                #print(queue)
                visited[i] = True




visited = [False] * (n+1)
visited2 = [False] * (n+1)

dfs(arr, start, visited)
print(' '.join(str(x) for x in dfs_result))

bfs(arr, start, visited2)
print(' '.join(str(x) for x in bfs_result))
