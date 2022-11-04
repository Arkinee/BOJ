while True:
    arr = input()

    if arr == 'END':
        break


    temp = list(arr)
    temp.reverse()
    print("".join(temp))

