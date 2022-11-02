t = int(input())
for _ in range(t):

    a = int(input())
    nums = [input() for _ in range(a)]
    nums.sort()
    flag = True

    for i in range(a-1):
        leng = len(nums[i])
        if nums[i] == nums[i+1][:leng]:
            flag = False
            break

    if flag:
        print('YES')
    else:
        print('NO')
