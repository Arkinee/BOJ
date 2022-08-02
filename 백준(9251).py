import sys
input = sys.stdin.readline

first = input().rstrip()
second = input().rstrip()


length = len(second)
last = second[-1]
stack = []

for c in first:
    stack.append(c)

    if c == last and ''.join(stack[-length:])
