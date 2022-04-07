def get_even(x):
    return 1 if x % 2 == 0 else 0


def solve():
    n = 0

    for _ in range(5):
        n += get_even(int(input()))

    print("{} valores pares".format(n))


solve()
