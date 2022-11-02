from collections import Counter
n = int(input())
arr = [input() for _ in range(n)]
arr = dict(Counter(arr))

arr = sorted(arr.items(), key=lambda item:(-item[1], item[0]))
print(arr[0][0])
