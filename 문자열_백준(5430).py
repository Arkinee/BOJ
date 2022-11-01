from collections import deque
t = int(input())
q = deque()
err = ['e','r','r','o','r']
eFlag = False

while t != 0:

    func = input()
    leng = int(input())
    arr = input()[1:-1].split(',')
    # leng->len(idx): 1->3(1), 2->5(1,3), 3->7(1,3,5)

    if leng == 0 and 'D' in func:
        print('error')
        continue
        
    for idx in range(len(arr)):

        num = arr[idx]
        if num != '[' and num != ']' and num != ',':
            q.append(int(num))

    #print('q ' + str(list(q)))  

    for f in func:

        if f == 'R':

            q.reverse()

        elif f == 'D':

            if len(q) == 0:
                print('error')
                eFlag = True
                break

            else:
                q.popleft()

    #print('[', end='')
    if eFlag:
        eFlag = False
        continue
    
    temp = list(q)
    print(temp, sep=',')
    #print(']')

    q.clear()
    t -= 1
