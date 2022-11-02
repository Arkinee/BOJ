arr = []
for i in range(3):
    arr.append(input())

if arr[1] == '*':

    a = len(list(arr[0]))-1
    a += len(list(arr[2]))-1
    print('1', end='')
    for i in range(a):
        print('0',end='')
    
elif arr[1] == '+':
    print(int(arr[0]) + int(arr[2]))

