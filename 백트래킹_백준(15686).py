import copy
from itertools import combinations

n, m = map(int, input().split())
#0, 1, 2 = 빈 칸, 집, 치킨집
graph = [list(map(int, input().split())) for _ in range(n)]
house = []
chicken = []
answer = 100000

for i in range(n):
    for j in range(m):

        if graph[i][j] == 1:
            house.append([i,j])
        elif graph[i][j] == 2:
            chicken.append([i,j])


dist = [[0 for _ in range(len(chicken))] for _ in range(len(house))]
#집과 치킨집들 사이 거리 구하기
for i in range(len(house)):
    for j in range(len(chicken)):
         dist[i][j] = abs(house[i][0] - chicken[j][0]) + abs(house[i][1] - chicken[j][1])

for ch in combinations(chicken, 

def dfs(depth, selected, history):
    #history에는 선택된 치킨집의 idx가 저장돼있음
    if depth == m:
        global answer
        total = 0

        for i in range(len(house)):
            dTemp = []
            for j in history:
                dTemp.append(dist[i][j])
            total += min(dTemp)
            print(total)

        answer = min(answer, total)
        return
        
        #가장 가까운 치킨집 구하고 해당 거리 더하기
    for i in range(len(chicken)):
        if not selected[i]:
            temp = copy.deepcopy(history)
            temp.append(i)
            selected[i] = True
            dfs(depth+1, selected, temp)
            selected[i] = False
                
                       

#치킨 집 선택상황
selected = [False] * len(chicken)
dfs(0, selected, [])
print(answer)
