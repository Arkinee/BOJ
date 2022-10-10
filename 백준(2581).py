m = int(input())
n = int(input())

def is_prime(x):

    if x == 1:
        return False
    
    for i in range(2,x):

        if x % i == 0:
            return False

    return True


nums = []
for i in range(m, n+1):

    if is_prime(i):
        nums.append(i)

if len(nums) == 0:
    print(-1)
else:
    print(sum(nums))
    print(nums[0])
