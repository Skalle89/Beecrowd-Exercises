def highest_and_position(x, y, w, z):
    if z > x:
        return z, w

    return x, y


def solve():
    high = -1
    pos = 1

    for i in range(1, 101):
        high, pos = highest_and_position(high, pos, i, int(input()))

    print(high, pos)


solve()
