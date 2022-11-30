arr = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
while True:

    s = input()
    answer = 0
    if s == '#':
        break

    for w in s:

        if w in arr:
            answer += 1


    print(answer)
