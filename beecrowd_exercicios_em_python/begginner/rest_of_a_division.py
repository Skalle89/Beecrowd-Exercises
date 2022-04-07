def check_order(m, n):
    if m > n:
        return n, m

    return m, n


def solve(x, y):
    x, y = check_order(x, y)

    for i in range(x + 1, y):
        if i % 5 == 2 or i % 5 == 3:
            print(i)


a = int(input())
b = int(input())
solve(a, b)
