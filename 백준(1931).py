n = int(input())
conf = []

for i in range(n):
    conf.append(list(map(int, input().split())))

conf.sort(key=lambda x: (x[1], x[0]))

#print(conf)

end = conf[0][1]
#print(end)
result = 1

for i in range(n):

    if i == 0:
        continue

    #print("i :" + str(i))
    if conf[i][0] >= end:
        result += 1
        end = conf[i][1]

print(result)
