import copy
def dfs(numbers, visited, history):
    
    if len(history) == m:
        for n in history:
            print(n, end=' ')
        print()
        return


    for n in numbers:
        temp = copy.deepcopy(history)
        if not visited[n]:
            temp.append(n)
            visited[n] = True
            dfs(numbers, visited, temp)
            


n, m = map(int, input().split())
numbers = [i for i in range(1,n+1)]
visited = [False] * (n+1)
dfs(numbers, visited, [])

