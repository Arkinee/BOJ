arr = [False] * 30

for _ in range(28):

    a = int(input())
    arr[a-1] = True

for i in range(len(arr)):

    if not arr[i]:
        print(i+1)
