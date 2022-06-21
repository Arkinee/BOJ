n, m = map(int, input().split())
result = 0
data = []

for i in range(n):
    data.append(int(input()))


data.sort(reverse=True)

for i in data:
    if i > m:
        continue

    result += (m // i)
    m -= (m // i) * i

    if m == 0:
        break

print(result)
