sentence = input()

for c in sentence:
    #print(ord(c))
    if 65 <= ord(c) <= 90:
        idx = (ord(c)+13)
        if idx > 90:
            idx -= 26
        print(chr(idx), end='')

    elif 97 <= ord(c) <= 122:
        idx = (ord(c)+13)
        if idx > 122:
            idx -= 26
        print(chr(idx), end='')
    else:
        print(c,end='')
