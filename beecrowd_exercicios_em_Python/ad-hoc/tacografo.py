def tac(m):
    dist = 0
    for i in range(m):
        a, b = input().split()
        dist += int(a) * int(b)
    print(dist)


n = int(input())

tac(n)
