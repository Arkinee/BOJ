l = int(input())
w = input()
div = 1234567891
multi = 31
temp = [0] * 51
temp[0] = 1

for i in range(1, l+1):
    temp[i] = (temp[i-1] * 31) % div

total = 0
for i in range(len(w)):

    total += ((ord(w[i])-96) * temp[i])
    total %= div

print(total)
