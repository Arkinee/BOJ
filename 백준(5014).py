from collections import deque

f, s, g, u, d = map(int, input().split())
#총 f, 목표 g, 현재 s
visited = [0] * (f+1)


q = deque()
q.append(s)
visited[s] = 1

while q:

    cur = q.popleft()

    if cur == g:
        break
    

    if u != 0:
        up = cur + u
    
    
        if up <= f and visited[up] == 0:
            visited[up] = visited[cur] + 1
            q.append(up)

    if d != 0:
        down = cur - d
        if down > 0 and visited[down] == 0:
            visited[down] = visited[cur] + 1
            q.append(down)


#print(visited)

if visited[g] == 0:
    print('use the stairs')
else:
    print(visited[g]-1)
