n = int(input())

graph = []
num = [0]
cnt = 0

for i in range(n):
    graph.append(list(map(int, input())))


def dfs(x, y):

    #번지의 집 수
    global cnt

    #범위 벗어나는 경우
    if x <= -1 or x >= n or y <= -1 or y >= n:
        return False

    if graph[x][y] == 0: #집이 없는 경우
        return False

    graph[x][y] = 0 #집이 있으면(1), 0으로 바꿔주고 집수 + 1
    cnt += 1

    dfs(x+1, y) #해당 집 주변으로 dfs
    dfs(x, y+1)
    dfs(x-1, y)
    dfs(x, y-1)

    return True


for i in range(n):
    for j in range(n):
        search = dfs(i, j)

        if search:
            num[0] += 1
            num.append(cnt)
            cnt = 0

num = num[:1] + sorted(num[1:])

print(*num, sep='\n')
