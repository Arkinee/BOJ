t = input() # 전체 문자열
p = input() # 패턴
move = [0] * len(p) #이동경로 테이블로 초기 값 0으로 초기화
result = [] # 어디서 패턴매칭이 이뤄졌는 지
count = 0 # 몇 번 나오는 지

j = 0
#1글자일때는 어처피 아무것도 안 겹칠때와 같으므로 1부터 비교 시작
for i in range(1, len(p)):
    #현재 글자가 불일치하면 move 값을 따라감
    while j > 0 and p[i] != p[j]:
    	j = move[j-1]

    #현재 글자가 일치하면
    if p[i] == p[j]:
        j += 1 # 경계의 너비
        move[i] = j

j = 0
# 이동경로 테이블 구할때와 비슷하지만 t에서 검색을 함
for i in range(len(t)):
    while j>0 and t[i] != p[j]:
        j = move[j-1]
	
    if t[i] == p[j]:
        if j == (len(p)-1): # 문자가 일치하고 찾는 패턴의 마지막이면 이게 최대임
            # 문제에서 1부터 시작이므로 i-len(p)+1에 1 더해줌
            result.append(i-len(p)+2)
            count += 1
            j = move[j]
        else:
            j += 1

#문제에서 원하는 대로 출력
print(count)
for i in result:
    print(i, end=' ')

'''
t = input()
p = input()
fail = [0] * len(p)
result = []
count = 0

#이동경로 테이블 구하기
j = 0
for i in range(1, len(p)):
    while j>0 and p[i] != p[j]:
        j = fail[j-1]

    if p[i] == p[j]:
        j+=1
        fail[i] = j

j = 0
for i in range(len(t)):
    #현재 글자가 불일치하면 fail 값을 계속 따라감
    while j>0 and t[i] != p[j]:
        j = fail[j-1]

    #현재 글자가 일치하면
    if t[i] == p[j]:
        if j == (len(p)-1):
            result.append(i-len(p)+2)
            count += 1
            j = fail[j]
        else:
            j+=1


print(count)
for i in result:
    print(i, end=' ')
'''
