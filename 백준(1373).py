n = input()
stack = []

i = len(n)
while i > 0 :

    if i >= 3:

        stack.append(n[i-3:i])
        i -= 3

    else:
        stack.append(n[0:i])
        i = 0



for i in range(len(stack)-1, -1, -1):

    stack[i] = int(stack[i], 2)

while stack:
    print(stack.pop(), end='')



    
