data = []
Max = -1

for i in range(5):
    n = str(input())
    data.append(n)

    if len(n) > Max:
        Max = len(n)

#print(data)
#print(str(Max))
for i in range(Max):

    for j in range(len(data)):
        
        if len(data[j]) > i:
            print(data[j][i], end='')
