tc = int(input())

for i in range(tc):

    k = int(input())
    n = int(input())

    f0 = [x for x in range(1, n + 1)]

    for i in range(k):
        for j in range(1, n):
            f0[j] = f0[j] + f0[j-1]

    print(f0[n-1])
