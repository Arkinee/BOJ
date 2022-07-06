from collections import deque

n = int(input())
m = int(input())

arr = [[] * n for _ in range(n)]
for i in range(m):
    a, b = map(int, input().split())
    arr[a-1].append(b)
    arr[b-1].append(a)
    
#print(arr)

visited = [False] * (n+1)
count = 0

def dfs(graph, v, visited):
    global count
    visited[v] = True
    #print('visited: ' + str(v))

    for i in graph[v]:
        if not visited[i]:
            count += 1
            dfs(graph, i-1, visited)


def bfs(graph, v, visited):
    queue = deque([v])
    visited[v] = True
    global count

    while queue:
        #print('queue: ' + str(queue))
        vert = queue.popleft()
        #print('vert: ' + str(vert))
        
        
        for i in graph[vert]:
            #print('i: ' + str(i))
            if not visited[i-1]:
                queue.append(i-1)
                visited[i-1] = True
                count += 1


#dfs(arr, 0, visited)
bfs(arr, 0, visited)            
print(count)
