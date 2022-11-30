a = []
b = []
x, y = map(int, input().split())

for _ in range(x):
    a.append(list(map(int, input().split())))

for _ in range(x):
    b.append(list(map(int, input().split())))
    
for i in range(x):
    for j in range(y):
        a[i][j] += b[i][j]

for i in range(x):
    for j in range(y):
        print(a[i][j], end=' ')

    print()
