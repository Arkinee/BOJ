total = int(input())
size = int(input())
graph = [list(map(int, input().split())) for _ in range(size)] 
cost = 0

for i in range(size):

    cost += (graph[i][0] * graph[i][1])

if cost == total:
    print('Yes')
else:
    print('No')
