def check_quadrant(a, b):
    if a > 0:
        if b > 0:
            return "primeiro"
        return "quarto"

    if b > 0:
        return "segundo"
    return "terceiro"


def solve():
    x, y = map(int, input().split())
    while x != 0 and y != 0:
        print(check_quadrant(x, y))
        x, y = map(int, input().split())


solve()
