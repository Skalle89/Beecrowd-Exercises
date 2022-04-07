a, b = map(int, input().split())
c, d = map(int, input().split())

dias = 0

for i in range(b, d):

    if i == 2:
        dias += 28
    elif i == 4 or i == 6 or i == 9 or i == 11:
        dias += 30
    else:
        dias += 31

print(dias + (c - a))
