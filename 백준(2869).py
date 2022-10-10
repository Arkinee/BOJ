a, b, v = map(int, input().split())
right = v - b
result = 0

if right % (a-b) == 0:
    result = right // (a-b)
else:
    result = right // (a-b) + 1

print(result)
