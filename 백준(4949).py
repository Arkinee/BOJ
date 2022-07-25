import sys
arr = ''

while True:

    flag = True
    arr = str(input())
    str_arr = []

    if arr == '.':
        break

    else:
        #print(arr)
        for i in arr:

            if i == '(' or i == '[':
                str_arr.append(i)
                #print(str_arr)
                if len(str_arr) != 0:
                    flag = False

            elif i == ')':
                if len(str_arr) != 0 and str_arr[-1] == '(':
                    str_arr.pop()

                    if len(str_arr) == 0:
                        flag = True
                        break
                    
                else:
                    flag = False
                    break

            elif i == ']':
                if len(str_arr) != 0 and str_arr[-1] == '[':
                    str_arr.pop()

                    if len(str_arr) == 0:
                        flag = True
                        break
                    
                else:
                    flag = False
                    break

    if flag:
        print('yes')
    else:
        print('no')
        
