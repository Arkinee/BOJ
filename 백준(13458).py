n = int(input())

data = list(map(int, input().split()))
b, c = map(int, input().split())
result = 0


for i in range(len(data)):

    if data[i] >= b:

        result += 1
        data[i] -= b

    else:
        result += 1
        data[i] = 0


    result += (data[i] // c)
    data[i] -= ((data[i] // c) * c)

    if data[i] > 0:

        result += 1

    #print(data)
    #print(result)


print(result)
