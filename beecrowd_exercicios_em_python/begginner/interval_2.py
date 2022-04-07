def interval(x):
    return 1 if 10 <= x <= 20 else 0


def solve(n):
    rslt = 0

    for i in range(n):
        rslt += interval(int(input()))

    print("{} in\n{} out".format(rslt, n - rslt))


solve(int(input()))
