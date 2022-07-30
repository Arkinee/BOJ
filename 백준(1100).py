data = []
result = 0

for i in range(8):
    data.append(list(input()))

#print(data)

for i in range(8):
    for j in range(8):

        if (i % 2 == 0) and ( j % 2 == 0) and data[i][j] == 'F':
            result += 1

        if (i % 2 == 1) and ( j % 2 == 1) and data[i][j] == 'F':
            result += 1


print(str(result))
