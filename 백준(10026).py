import sys
sys.setrecursionlimit(15000)
n = int(input())

graph = []
visited = [[0 for col in range(n)] for row in range(n)]
visited2 = [[0 for col in range(n)] for row in range(n)]

for i in range(n):
    graph.append(input())

#print(graph)
n_red = 0
n_green = 0
n_blue = 0
un_red_green = 0
un_blue = 0

def dfs_normal_red(x, y, visited):

    if x < 0 or y < 0 or x >= n or y >= n:
        return False

    if graph[x][y] == 'G' or graph[x][y] == 'B':
        return False

    if visited[x][y] == 0:
        visited[x][y] = 1

        dfs_normal_red(x-1, y, visited)
        dfs_normal_red(x, y-1, visited)
        dfs_normal_red(x+1, y, visited)
        dfs_normal_red(x, y+1, visited)

        return True

    return False

def dfs_normal_green(x, y, visited):
    if x < 0 or y < 0 or x >= n or y >= n:
        return False

    if graph[x][y] == 'R' or graph[x][y] == 'B':
        return False

    if visited[x][y] == 0:
        visited[x][y] = 1

        dfs_normal_green(x-1, y, visited)
        dfs_normal_green(x, y-1, visited)
        dfs_normal_green(x+1, y, visited)
        dfs_normal_green(x, y+1, visited)

        return True

    return False

def dfs_normal_blue(x, y, visited):
    if x < 0 or y < 0 or x >= n or y >= n:
        return False

    if graph[x][y] == 'G' or graph[x][y] == 'R':
        return False

    if visited[x][y] == 0:
        visited[x][y] = 1

        dfs_normal_blue(x-1, y, visited)
        dfs_normal_blue(x, y-1, visited)
        dfs_normal_blue(x+1, y, visited)
        dfs_normal_blue(x, y+1, visited)

        return True

    return False


def dfs_un_red_green(x, y, visited):
    if x < 0 or y < 0 or x >= n or y >= n:
        return False

    if graph[x][y] == 'B':
        return False

    if visited[x][y] == 0:
        visited[x][y] = 1

        dfs_un_red_green(x-1, y, visited)
        dfs_un_red_green(x, y-1, visited)
        dfs_un_red_green(x+1, y, visited)
        dfs_un_red_green(x, y+1, visited)

        return True

    return False


def dfs_un_blue(x, y, visited):
    if x < 0 or y < 0 or x >= n or y >= n:
        return False

    if graph[x][y] == 'G' or graph[x][y] == 'R':
        return False

    if visited[x][y] == 0:
        visited[x][y] = 1

        dfs_un_blue(x-1, y, visited)
        dfs_un_blue(x, y-1, visited)
        dfs_un_blue(x+1, y, visited)
        dfs_un_blue(x, y+1, visited)

        return True

    return False


for i in range(n):
    for j in range(n):

        if graph[i][j] == 'R':

            #print('i j: ' + str(i) + ' ' + str(j))
            search = dfs_normal_red(i, j, visited)
            if search:
                n_red += 1

            search2 = dfs_un_red_green(i, j, visited2)
            if search2:
                un_red_green += 1

        elif graph[i][j] == 'G':
            search = dfs_normal_green(i, j, visited)
            if search:
                n_green += 1

            search2 = dfs_un_red_green(i, j, visited2)
            if search2:
                un_red_green += 1
    
        else: #'B'
            search = dfs_normal_blue(i, j, visited)
            if search:
                n_blue += 1

            search2 = dfs_un_blue(i, j, visited2)
            if search2:
                un_blue += 1

print(str((n_red + n_green + n_blue)) + ' ' + str(un_red_green + un_blue))
            
