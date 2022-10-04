t = int(input())

for i in range(t):

    h, w, n = map(int, input().split())


    y = n - h * (n // h)
    x = n // h + 1
    
    if y == 0:
        y = h
        x -= 1

    if x >=10:
        print(str(y) + str(x))
    else:
        print(str(y) + '0' + str(x))


