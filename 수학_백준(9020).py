t = int(input())
prime = [False] * 10001
prime[2] = True
end = 3

def isPrime(a):

    for i in range(2, int(a/2)+1):
        if a % i == 0:
            return False

    return True

while t != 0:

    cur = int(input())
    arr = []
    
    if end < cur:

        for i in range(end, cur):
            if isPrime(i):
                prime[i] = True

        end = cur

    for i in range(int(cur/2), 1, -1):

        if prime[i]:
            if prime[cur - i]:
                print(i, cur-i)
                break

    t -= 1
