from collections import deque

n, k = map(int, input().split())
visit = [0] * 100002 # 100000일때 100001번째를 참조할 수 있으므로 100002개를 만들어둬야 함

queue = deque()
queue.append(n)

while queue:

    a = queue.popleft()
    if a == k:
        print(visit[a])
        break

    else:

        for i in [a*2, a-1, a+1]:

            if 0 <=i<=100000 and visit[i] == 0:

                if i == a*2: #순간이동은 0초 걸림
                    visit[i] = visit[a]
                else: #그 외 1초 걸림
                    visit[i] = visit[a]+1
                queue.append(i)
    
