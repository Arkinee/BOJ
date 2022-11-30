from collections import Counter

a = int(input())
arr = list(map(int, input().split()))
b = int(input())
temp = Counter(arr)
print(temp[b])
