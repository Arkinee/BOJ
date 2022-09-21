from collections import deque
import sys
sys.setrecursionlimit(10000)

a, b = map(int, input().split())
visit = dict() #리스트로 구현 시 메모리초과 무조건 발생 -> 탐색 바로 가능한 dictionary로 구현

q = deque()
q.append(a)
visit[a] = 1

def bfs():
    while q:

        x = q.popleft()


        for num in [x * 2, x * 10 + 1]:
            
            if num < b:

                q.append(num)
                visit[num] = visit[x] + 1

            elif num == b:
                visit[b] = visit[x] + 1
                return visit[b]

    return -1 # b를 만들 수 없는 경

print(bfs())
