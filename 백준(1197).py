from collections import deque
import heapq

v, e = map(int, input().split())
visited = [0] * (v+1)
graph = [[] for _ in range(v+1)]
MIN = 2147483647

for i in range(e):

    a, b, c = map(int, input().split())

    graph[a].append([c,a,b])
    graph[b].append([c,b,a])
    
def prim(graph, a):

    visited[a] = 1
    adj_edge = graph[a]
    heapq.heapify(adj_edge) #heapq로 만들면 자동으로 정렬
    dist = 0
    
    while adj_edge:
        
        weight, x, y = heapq.heappop(adj_edge)

        if visited[y] == 0: #방문한 적 없는 가중치 가장 작은 간선
            visited[y] = 1 #방문 갱신
            dist += weight #가중치 갱신

            #print(graph[y])
            for e in graph[y]: #방문하지 않은 새로운 간선 추가
                if visited[e[2]] == 0:
                    heapq.heappush(adj_edge, e)

    return dist

print(prim(graph, 1))
