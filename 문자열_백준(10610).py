import itertools
arr = list(input())
numSum = 0
check = False
temp = []

for i in arr:
    if i =='0':
        check = True
    numSum += int(i)
    temp.append(int(i))

temp.sort(reverse=True)
#print(temp)
#3 과 10d의 배수, 3의배수 -> 각 자리 숫자의 합이 3의 배수, 10의 배수 -> 0이 포함
if numSum % 3 == 0 and check:
    
    print("".join(map(str,temp)))

else:
    print(-1)
