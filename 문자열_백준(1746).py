n,m = map(int, input().split())

arr = dict()
result = []

for i in range(n):

    temp = input()
    arr[temp] = '1'

#print(arr)

for j in range(m):

    temp = input()

    if temp in arr:
        result.append(temp)

print(len(result))
result.sort()
for p in result:
    print(p)
