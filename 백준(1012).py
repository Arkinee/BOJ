import sys
sys.setrecursionlimit(10**6) #dfs로 하는 경우 보통 재귀 깊이 제한을 두어야 한다.

t = int(input())

answer = 0

for i in range(t):

    m, n, k = map(int, input().split())

    #그래프 0으로 초기화
    graph = [[0 for col in range(m)] for row in range(n)]

    for j in range(k):

        a, b = map(int, input().split())

        graph[b][a] = 1


    def dfs(x, y):

        if x >= n or x < 0 or y < 0 or y >= m:
            return False

        if graph[x][y] == 0:
            return False

        graph[x][y] = 0

        dfs(x+1, y)
        dfs(x, y+1)
        dfs(x-1, y)
        dfs(x, y-1)

        return True

    for p in range(n):
        for q in range(m):
            search = dfs(p,q)

            if search:
                answer += 1
    
    
    print(answer)
    answer = 0
        
