s= input()

arr = [0 for _ in range(26)]

for i in range(len(s)):

    #print(str(ord(s[i]) - 97))
    arr[ord(s[i]) - 97] += 1

for i in range(len(arr)):
    print(arr[i], end=' ')
