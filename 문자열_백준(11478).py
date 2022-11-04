import itertools

s = input()
d = dict()
size = 1
while size <= len(s): # 부분 문자열 크기

    for i in range(len(s)):

        temp = s[i:i+size]
        if temp not in d:
            d[temp] = 1

    size += 1

print(len(d))
