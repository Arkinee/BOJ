h, m = map(int, input().split())
add = int(input())
m += add

if m >= 60:

    h += (m//60)
    m -= 60 * (m//60)

if h >= 24:

    h -= 24

print(str(h) + ' ' + str(m))
