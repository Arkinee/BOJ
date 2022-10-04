a, b, c = map(int, input().split())
result = 0

if a == b == c:

    result += (10000 + a * 1000)
    
elif (a != b) and (b != c) and (a != c):

    num = max(a,b,c)
    result += (num * 100)

else:

    num = 0
    if a == b or a == c:
        num = a

    else:
        num = b

    result += (1000 + num * 100)

print(result)
