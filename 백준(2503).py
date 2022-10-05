from itertools import permutations

q = int(input())
arr = [list(map(int, input().split())) for _ in range(q)]
nums = [1,2,3,4,5,6,7,8,9]
n_list = list(permutations(nums, 3))
cnt = 0

for n in n_list:

    flag = 0

    for i in range(q):

        s, b = 0, 0
        num_str = list(map(int, str(arr[i][0])))
        for j in range(3):

            if n[j] == num_str[j]: # r같은 위치 같은 숫자, 스트라이크
                s += 1
            else:
                if n[j] in num_str: # 숫자는 있지만 위치가 다른 경우
                    b += 1

        if s != arr[i][1] or b != arr[i][2]:    # 스트라이크 숫자가 다르거나 볼 숫자가 다르면 다음 숫자 체크
            flag = 0
            break

        else: # 스트라이크와 볼 숫자가 다 같은 경우 가능성 있는 숫자 발견
            flag = 1

    if flag == 1:
        cnt += 1

print(cnt)

    
