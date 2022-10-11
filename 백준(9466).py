import sys
sys.setrecursionlimit(100000) # 횟수 1000, 1000000일때는 실패

#싸이클이 있을 수 있는 dfs의 경우 visited 와 finised 리스트가 둘 다 필요
t = int(input())
arr = [-1] * 100001
visited = []
finished = []


def dfs(x):
    global project
    
    visited[x] = True
    nv = arr[x]
    # 다음 정점이 visited True 이고 finished False 면 cycle임 -> 프로젝트 모임
    if visited[nv]:
        if not finished[nv]:
            temp = nv
            project += 1 #현재 정점
            
            while temp != x: # cycle에 속한 다른 정점
                project += 1
                temp = arr[temp]
        
    else: # 방문 안한 정점이면 방문
        dfs(nv)

    finished[x] = True
    

while t != 0:
    n = int(input())
    project = 0
    visited = [False] * 100001
    finished = [False] * 100001

    temp = list(map(int, input().split()))
    for i in range(len(temp)):
        arr[i+1] = temp[i]

    for i in range(1, n+1):
        if not visited[i]:
            dfs(i)

    print(n-project)
    

    t -= 1
