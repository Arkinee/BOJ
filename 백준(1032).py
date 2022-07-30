n = int(input())
data = []

for i in range(n):

    data.append(input())

if n == 1:
    print(data[0])

else:
    arr = [True for _ in range(len(data[0]))]
    
    for i in range(len(data[0])):

        flag = True
        tmp = data[0][i]

        for j in range(1, n):

            if data[j][i] != tmp:
                flag = False
                arr[i] = False


    #print(arr)
    for i in range(len(arr)):

        if arr[i]:
            print(data[0][i], end='')
        else:
            print('?', end='')
