def check(m, n):
    if m > n:
        return "Decrescente"
    return "Crescente"


def solve():
    x, y = map(int, input().split())

    while x != y:
        print(check(x, y))
        x, y = map(int, input().split())


solve()
