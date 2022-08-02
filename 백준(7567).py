n = input()

result = 10

for i in range(1, len(n)):

    if n[i-1] == n[i]:
        result += 5
    else:
        result += 10

print(result)
