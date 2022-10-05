arr = []
num = 0
for i in range(9):
    a = int(input())
    num += a
    arr.append(a)

num -= 100
temp = []
flag = False

for i in range(9):
    for j in range(i+1, 9):

        if (arr[i] + arr[j]) == num:

            a, b = arr[i], arr[j]
            flag = True
            break

    if flag:
        break

for i in range(len(arr)):

    if arr[i] == a or arr[i] == b:

        continue

    temp.append(arr[i])

temp.sort()
for i in temp:
    print(i)
