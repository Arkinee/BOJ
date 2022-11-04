w = input()
arr = [97, 101, 105, 111, 117]
result = 0

for i in w:

    if ord(i) in arr:
        result += 1

print(result)
    
