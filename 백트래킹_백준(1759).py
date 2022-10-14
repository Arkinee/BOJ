l, c = map(int, input().split())

#답 참고함

arr = list(input().split())
arr.sort()
word = [''] * 16
isVowel = [False] * 26

def backtrack(index, prev, consonant, vowel):

    if index == l:
        if consonant >= 2 and vowel >= 1:
            print("".join(word[:l]))
            return
    
    for i in range(prev+1, c):
        word[index] = arr[i]
        backtrack(index+1, i, consonant + int(not isVowel[ord(arr[i])-ord('a')]),
                  vowel + int(isVowel[ord(arr[i])-ord('a')]))



isVowel[0] = isVowel[4] = isVowel[8] = isVowel[14] = isVowel[20] = True #a,e, i, o, u 모음
backtrack(0,-1,0,0)
