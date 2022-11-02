a, b = map(list, input().split())

a.reverse()
b.reverse()

a = int("".join(a))
b = int("".join(b))
a += b
a = list(str(a))
a.reverse()
print(int("".join(a)))
