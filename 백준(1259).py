t = input()

while t != '0':

    flag = True

    for i in range(len(t) // 2):

        if t[i] != t[len(t)-i-1]:
            flag = False
            break
    
    if not flag:
        print('no')
    else:
        print('yes')


    t = input()
