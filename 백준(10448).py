t = int(input())
num = [1, 3]
temp = [0] * 1001
add = 3

while max(num) < 1000:

    num.append(max(num) + add)
    add += 1

num = num[:-1]

for x in range(len(num)):
        for y in range(len(num)):
            for z in range(len(num)):

                if num[x] + num[y] + num [z] > 1000:
                    continue
                
                else:
                    temp[num[x] + num[y] + num[z]] = 1


for i in range(t):

    target = int(input())    
    print(temp[target])
