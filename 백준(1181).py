n = int(input())
arr = []

for i in range(n):
    tmp = str(input())
    if not tmp in arr:
        arr.append(tmp)
    

arr.sort()
arr.sort(key=len)

for i in arr:
    print(i)
