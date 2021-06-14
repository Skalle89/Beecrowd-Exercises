def seq(x, y):
    if x > y:
        x, y = y, x

    for i in range(x, y + 1):
        print(i, end=" ")

    print("Sum={}".format(sum(list(range(x, y + 1)))))


def solve():
    m, n = map(int, input().split())

    while m > 0 and n > 0:
        seq(m, n)
        m, n = map(int, input().split())


solve()
