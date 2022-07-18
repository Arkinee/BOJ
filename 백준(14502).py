from collections import deque
import copy

def bfs():
    queue = deque()
    graph2 = copy.deepcopy(graph)

    for i in range(n):
        for j in range(m):
            if graph2[i][j] == 2:   #감염 시작 지역 찾기
                queue.append((i, j))
    
    while queue:
        x, y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or ny < 0 or nx >= n or ny >= m:
                continue

            if graph2[nx][ny] == 0: # 현재 안전 지역
                graph2[nx][ny] = 2 # 감염
                queue.append((nx, ny))

    
    global result
    cnt = 0

    for i in range(n):  #안전지역의 크기
        cnt += graph2[i].count(0)

    #이전 경우에 구한 안전지역과 현재 구한 안전지역 중 더 큰 것
    result = max(result, cnt)
    

def mwall(cnt):

    if cnt == 3: # 벽 3개 다 세우면 해당 상태로 감염 시작
        bfs()
        return

    for i in range(n):
        for j in range(m):
            if graph[i][j] == 0:
                graph[i][j] = 1 #벽 세움
                mwall(cnt + 1) # 그 다음 벽 세우로 재귀
                graph[i][j] = 0 # 벽 다시 내리고 다음 칸으로 이동


n , m = map(int, input().split())

graph = []
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

result = 0

for i in range(n):
    graph.append(list(map(int, input().split())))

mwall(0)
print(result)
