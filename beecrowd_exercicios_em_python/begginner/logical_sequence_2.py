def solve(m, n):
    for i in range(n + 1):
        if i % m == 0:
            print(i)
        else:
            print(i, end=" ")


x, y = map(int, input().split())

solve(x, y)
