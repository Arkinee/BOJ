city = int(input())
dist = list(map(int, input().split()))
price = list(map(int, input().split()))
result = 0 #요금
cost = price[0]

for i in range(city-1):

    if cost > price[i]:
        cost = price[i]

    result += cost * dist[i]
    

print(result)
