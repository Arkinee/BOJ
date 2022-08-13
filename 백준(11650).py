n = int(input())

data = []

for i in range(n):
    data.append(list(map(int, input().split())))


data.sort(key=lambda x : (x[0], x[1]))
#print(data)

for i in range(len(data)):

    print(str(data[i][0]) + ' ' + str(data[i][1]))
