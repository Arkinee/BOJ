word = input()

flag = True

for i in range(len(word)):

    if word[i] != word[len(word)-i-1]:
        flag = False


if flag:
    print('1')
else:
    print('0')
