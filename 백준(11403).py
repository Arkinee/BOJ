n = int(input())

graph = [[] for _ in range(n)]
lst = [[0 for _ in range(n)] for _ in range(n)]
#print(lst)

def find(a, graph):

    stack = [a]
    visited = []

    while stack:
        current = stack.pop()

        for neighbor in graph[current]:
            if neighbor not in visited:
                stack.append(neighbor)
                visited.append(neighbor)

    return visited

for i in range(n):

    data = list(map(int, input().split(' ')))

    #print(data)

    for j in range(len(data)):

        if data[j] == 1:

            graph[i].append(j)

#print(graph)

for i in range(n):

    v = find(i, graph)
    #print(v)

    for j in v:
        
        lst[i][j] = 1

#print(lst)

for i in range(n):
    for j in range(n):

        print(lst[i][j], end=' ')

    print()
