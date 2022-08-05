import itertools

n = int(input())
num = list(map(int, input().split()))
#print(num)
#+ - x /
arr = list(map(int, input().split()))
data = []

for i in range(4):

    if i == 0:
        for j in range(arr[i]):
            data.append('+')
    elif i == 1:
        for j in range(arr[i]):
            data.append('-')
    elif i == 2:
        for j in range(arr[i]):
            data.append('x')
    else:
        for j in range(arr[i]):
            data.append('/')

#print(data)

com = list(itertools.permutations(data, (n-1)))
#print(com)

Min = 1000000000
Max = -100000000

for i in range(len(com)):

    stack = com[i]
    c = 0
    n = num[0]
    for s in stack:

        if s == '+':

            n = n + num[c+1]
        
        elif s == '-':

            n = n - num[c+1]
            
        elif s == 'x':

            n = n * num[c+1]
            
        elif s == '/':

            if n >= 0:
                n = n // num[c+1]
            else:
                n = n / num[c+1]

                if -1 < n < 1:
                    n = 0

                n = int(n)

        c += 1
        #print(n)


    #print(n)
    Min = min(Min, n)
    Max = max(Max, n)

print(Max)
print(Min)

