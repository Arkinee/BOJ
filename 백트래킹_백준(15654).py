n, m = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()
history = []

def dfs():
    if len(history) == m:
        for num in history:
            print(num, end= ' ')
        print()
        return

    for i in range(n):
        if arr[i] not in history:
            history.append(arr[i])
            dfs()
            history.pop()
    
dfs()
        
