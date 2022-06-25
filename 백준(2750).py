n = int(input())
data = []

for i in range(n):
    data.append(int(input()))

data.sort()
for num in data:
    print(num)
