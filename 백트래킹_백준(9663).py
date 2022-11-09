n = int(input())
queen = [0] * n
answer = 0

def dfs(row):
    global answer
    global queen
    
    if row == n:    
        answer += 1
        return

    for i in range(n):
        #row행의 i열에 퀸을 두겠다
        queen[row] = i
        
        # 이전에 놓은 퀸과 같은 열에 놨거나 대각선에 위치한지 체크
        if check(row):
            #다음 행으로
            dfs(row+1)

def check(row):

    for i in range(row):
        # 대각선의 경우 기울기가 1 or -1 이면 대각선임
        if (queen[i] == queen[row]) or (abs(queen[row] - queen[i]) == abs(row - i)):
            return False

    return True
    
dfs(0)
print(answer)

