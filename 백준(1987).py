import sys
sys.setrecursionlimit(10000)

r,c = map(int, input().split())

graph = []
visited = [0] * 26
board = [[False for col in range(c)] for row in range(r)]
#print(board)

cnt = 0

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]

def dfs(x, y, num):

    global cnt

    visited[ord(graph[x][y]) - 65] = 1
    cnt = max(cnt, num)
    board[x][y] = True

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if 0 <= nx < r and 0 <= ny < c and visited[ord(graph[nx][ny]) - 65] == 0 and board[nx][ny] == False:
            dfs(nx, ny, num + 1)
            visited[ord(graph[nx][ny]) - 65] = 0
            board[nx][ny] = False
    
    return True

for i in range(r):
    #graph.append(str(input()))
    graph.append(sys.stdin.readline())

cnt = 0
dfs(0, 0, 1)
print(str(cnt))
