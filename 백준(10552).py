import sys
sys.setrecursionlimit(100000)

n, m, p = map(int, input().split())
arr = [0] * (n+1)
hate = [[] for _ in range(m+1)]
visited = [False] * (m+1)
answer = 0

def dfs(x):
    global answer

    if visited[x]:
        return -1

    if len(hate[x]) == 0:
        return answer

    answer += 1

    visited[x] = True
    nc = arr[hate[x][0]]
    #print('nc' + str(nc))

    if len(hate[nc]) != 0:
        return dfs(nc)
    else:
        return answer
    

for i in range(n):
    a, b = map(int, input().split())

    arr[i+1] = a
    hate[b].append(i+1)

#print(arr)
#print(hate)

print(dfs(p))
