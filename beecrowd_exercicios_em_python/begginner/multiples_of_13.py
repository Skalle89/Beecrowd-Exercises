def check_order(m, n):
    if m > n:
        return n, m

    return m, n


def solve(x, y):
    x, y = check_order(x, y)

    rslt = [i for i in range(x, y+1) if i % 13 != 0]

    return sum(rslt)


a = int(input())
b = int(input())
print(solve(a, b))
