result = 0
arr = input().split('-')


for i in arr[0].split('+'):
    result += int(i)
for i in arr[1:]:
    for j in i.split('+'):
        result -= int(j)

print(result)
