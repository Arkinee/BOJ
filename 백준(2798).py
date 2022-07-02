from itertools import combinations

n, m = map(int, input().split())
arr = list(map(int, input().split()))
#print(arr)

result = -1
for i in combinations(arr, 3):
    if sum(i) >= result:
        if sum(i) > m:
            continue
        result = sum(i);

print(result)
