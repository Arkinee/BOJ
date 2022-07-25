num = str(input())
arr = []

for i in num:
    arr.append(int(i))

arr.sort(reverse=True)


for i in arr:
    print(i, end="")
