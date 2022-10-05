n = int(input())
arr = list(map(int, input().split()))
num = [arr[0]]

for i in range(len(arr) - 1):
    num.append(max(num[i] + arr[i+1], arr[i+1]))

print(max(num))

