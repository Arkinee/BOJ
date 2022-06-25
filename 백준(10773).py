k = int(input())

result = 0
data = []
for i in range(k):
    num = int(input())

    if num == 0:
        temp = data.pop(len(data)-1)
        result -= temp
    else :
        data.append(num)
        result += num

print(result)
