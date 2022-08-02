import sys
input = sys.stdin.readline
#print = sys.stdout.write

arr = input().rstrip()
bomb = input().rstrip()

length = len(bomb)
last = bomb[-1]
stack = []

for word in arr:
    stack.append(word)

    if word == last and ''.join(stack[-length:]) == bomb: #폭발 문자열을 발견

        for _ in range(length): #해당 문자열 삭제
            stack.pop()


if stack:
    #print(f"{''.join(stack)}\n")
    print(''.join(stack))
else:
    #print('FRULA\n')
    print('FRULA\n')

