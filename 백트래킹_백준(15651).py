def dfs():

    if len(history) == m:
        for num in history:
            print(num, end=' ')
        print()
        return

    for i in range(1, n+1):
        history.append(i)
        dfs()
        history.pop()


n, m = map(int, input().split())
history = []
dfs()
