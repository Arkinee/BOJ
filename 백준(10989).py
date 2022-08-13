import sys
input = sys.stdin.readline

data = [0] * 10001

for i in range(int(input())):

    data[int(input())] += 1

for i in range(len(data)):
    for j in range(data[i]):
        print(i)



