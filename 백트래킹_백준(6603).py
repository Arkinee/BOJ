import copy
def dfs(numbers, visited, depth, start, history):

    if depth == 6:
        for num in history:
            print(num, end=' ')
        print()
        return

    for i in range(len(numbers)):
        if not visited[i] and numbers[i] > start:
            temp = copy.deepcopy(history)
            temp.append(numbers[i])
            visited[i] = True
            dfs(numbers, visited, depth+1, numbers[i], temp)
            visited[i] = False
    

while True:
    a = input()
    if a == "0":
        break

    arr = list(map(int, a.split()))
    visited = [False] * arr[0]
    temp = arr[1:]
    dfs(temp, visited, 0, 0, [])
    print()
    
