n, s = map(int, input().split())
arr = list(map(int, input().split()))
answer, curr = 0, 0

def dfs(index):
    global curr
    global answer
    
    if (index == n):
        return

    if  (curr + arr[index] == s):
        answer += 1

    dfs(index+1) #현재 인덱스의 값 추가 안하고 dfs

    curr += arr[index] #현재 인덱스의 값 추가하고 dfs
    dfs(index+1)

    curr -= arr[index] # 원상태로


dfs(0)
print(answer)
