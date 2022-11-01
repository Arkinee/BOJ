arr = []
flag = True
while True:

    temp = input()

    if temp =='.':
        break


    for w in temp:
        
        if w == '[' or w == '(':
            arr.append(w)


        elif w == ']':

            if len(arr) == 0:
                flag = False
                break

            if arr[-1] == '[':
                del arr[-1]

            else:
                break

        elif w == ')':

            if len(arr) == 0:
                flag = False
                break
        
            if arr[-1] == '(':
                del arr[-1]

            else:
                break


    if not flag or len(arr) > 0:
        print('no')
    else:
        print('yes')

    arr = []
    flag = True
