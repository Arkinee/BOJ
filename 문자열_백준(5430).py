from collections import deque
t = int(input())
q = deque()
eFlag = False
cnt = 0

while t != 0:

    func = input()
    leng = int(input())
    q = deque(input()[1:-1].split(','))

    if leng == 0 and 'D' in func:
        print('error')
        t -= 1
        continue

    for f in func:

        if f == 'R':
            cnt += 1

        elif f == 'D':
            
            if len(q) == 0:
                print('error')
                eFlag = True
                break

            else:
                if cnt % 2 == 1:
                    q.pop()
                else:
                    q.popleft()

    if eFlag:
        eFlag = False
        t -= 1
        cnt = 0
        q.clear()
        continue

    temp = list(q)

    if cnt % 2 == 1:
        temp.reverse()
        print("[" + ",".join(map(str,temp)) + "]")
    else:
        print("[" + ",".join(map(str,temp)) + "]")

    cnt = 0
    q.clear()
    t -= 1
