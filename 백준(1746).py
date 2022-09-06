n, m = map(int, input().split())
hear = {}
words = []

for i in range(n):
    hear[str(input())] = '1'

for i in range(m):
    w = str(input())
    
    if w in hear.keys():
        words.append(w)


sorted(words)

print(len(words))
for w in words:
    print(w)
    

