word = input()

for w in word:

    if ord(w) < 97:
        print(chr(ord(w)+32), end='')
    else:
        print(chr(ord(w)-32), end='')
