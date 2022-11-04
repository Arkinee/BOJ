w1 = input()
w2 = input()
start = 0
result = 0
i = 0
while i < len(w1):

    for j in range(len(w2)):

        if (i+j) >= len(w1):
            break
            
        if w1[i+j] != w2[j]:

            break

        else:
            if j == (len(w2)-1):
                result += 1
                i += j

    i += 1
        

print(result)
