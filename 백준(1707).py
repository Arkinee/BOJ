from collections import deque
k = int(input())

while k>0:

    v, e = map(int, input().split())
    graph = [[] for _ in range(v+1)]
    visit = [0] * (v+1)

    for i in range(e):

        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)

    #print(graph)

    q = deque()
    result = True

    #bfs
    for i in range(1, v+1):

        if visit[i] == 0: #첫 방문
            q.append(i)
            visit[i] = 1

            while q:
                vert = q.popleft()
                for w in graph[vert]:
                    if visit[w] == 0:
                        q.append(w)
                        visit[w] = -1 * visit[vert] #지금 노드와 다른 그룹으로 지정, 2개의 그룹들로 나눔
                    elif visit[vert] == visit[w]: #이미 방문한 노드와 연결되어 있는 경우
                        result = False


    print('YES' if result else 'NO')

    k -= 1
