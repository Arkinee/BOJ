a, b = map(str, input().split())
num = 100


for i in range(len(b)-len(a)+1):

    #print(i)
    temp = 0
    for j in range(len(a)):

        if a[j] != b[i+j]:

            temp += 1

    
    num = min(num, temp)

print(num)
