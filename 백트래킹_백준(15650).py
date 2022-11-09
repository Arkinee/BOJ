def dfs(start):
    
    if len(history) == m:
        for num in history:
            print(num, end=' ')
        print()
        return

    for i in range(start, n+1):
        history.append(i)
        dfs(i+1)
        history.pop()
                   
n, m = map(int, input().split())
history = []
dfs(1)

