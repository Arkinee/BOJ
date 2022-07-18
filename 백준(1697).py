from collections import deque

n, k = map(int, input().split())

def bfs():
    queue = deque()
    queue.append(n)

    while queue:
        x = queue.popleft()
        if x == k:
            print(dist[x])
            break

        #현재 x에서 갈 수 있는 곳은 x까지의 거리에서 + 1 한 값임
        for i in (x-1, x+1, x*2):
            if 0 <= i <= Max and not dist[i]:
                dist[i] = dist[x] + 1
                queue.append(i)
        
Max = 100000
dist = [0] * (Max + 1)
bfs()


