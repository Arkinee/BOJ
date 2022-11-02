n, m = map(int, input().split())

a = [input() for _ in range(n)]
b = [input() for _ in range(m)]
#print(a)
#print(b)
cnt = 0

for w in b:

    if w in a:
        cnt += 1

print(cnt)
