n = int(input())
s = []
select = [0 for _ in range(n)] # n개의 숫자들 절반 선택에 사용할 리스트
result = 99999999

for i in range(n):
    s.append(list(map(int,input().split())))


def dfs(idx, cnt):


    if cnt == n // 2: #절반만큼 선택함
        
        a, b = 0, 0 # 선택한 팀과 그 외 사람들로 된 팀
        
        for i in range(n):
            for j in range(n):

                if select[i] and select[j]: #두 숫자 모두 선택한 숫자면 a팀에 더하기
                    a += s[i][j]

                elif not select[i] and not select[j]: #둘 다 선택하지 않은 숫자라면 b팀에 더하기
                    b += s[i][j]

        global result
        result = min(result, abs(a - b))

    for i in range(idx, n):

        if select[i]: #이미 선택한 숫자
            continue
        select[i] = 1
        dfs(i+1, cnt+1) #다음 선택으로
        select[i] = 0 #백트래킹

dfs(0,0)
print(result)
