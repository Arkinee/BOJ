t = int(input())

primes = []

def is_prime(x):
    for i in range(2, x):
        if x % i == 0:
            return False
    return True

for i in range(2, 10001):

    if is_prime(i):
        primes.append(i)

#print(primes)

for i in range(t):

    n = int(input())
    
    
    for x in range(len(primes)):

        if primes[x] > n:
            break


        
        if n - primes[x] in primes:

            
    
