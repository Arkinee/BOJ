n = int(input())
graph = [list(input()) for _ in range(n)]
maxNum = 0

#시간 복잡도 O(n^4) 지만 n<=50 이므로 6250000 < 1억
#n이 작아서 가능함

def check():
    global maxNum

    for i in range(n):
        cnt = 1
        for j in range(1, n):
            if graph[i][j] == graph[i][j-1]:
                cnt += 1
                maxNum = max(cnt, maxNum)
            else:
                cnt = 1

        cnt = 1
        for j in range(1, n):
            if graph[j][i] == graph[j-1][i]:
                cnt += 1
                maxNum = max(cnt, maxNum)
            else:
                cnt = 1

for i in range(n):
    for j in range(n):

        if j+1 < n: #행으로 바꾸는 경우

            graph[i][j], graph[i][j+1] = graph[i][j+1], graph[i][j]
            check()
            graph[i][j], graph[i][j+1] = graph[i][j+1], graph[i][j]

        if i+1 < n: # 열로 바꾸는 경우

            graph[i][j], graph[i+1][j] = graph[i+1][j], graph[i][j]
            check()
            graph[i][j], graph[i+1][j] = graph[i+1][j], graph[i][j]

print(maxNum)
