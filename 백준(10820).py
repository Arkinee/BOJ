while(True):
    try:
        arr = str(input())
        a = 0 #소문자
        b = 0 #대문자
        c = 0 #숫자
        d = 0 #공백
        for j in range(len(arr)):
            if arr[j] == ' ':
                d += 1
                continue
            
            if ord(arr[j]) < 65:
                c += 1
                continue

            if ord(arr[j]) < 97:
                b += 1
                continue

            a += 1

        print('{} {} {} {}'.format(a,b,c,d))
    except EOFError:
        break

