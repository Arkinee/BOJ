arr = [0]*26
n = int(input())
flag = False

for _ in range(n):

    a = input()[0]
    arr[ord(a)-97] += 1

for i in range(26):

    if arr[i] >=5:
        print(chr(i+97), end='')
        flag = True

if not flag:
    print('PREDAJA')
