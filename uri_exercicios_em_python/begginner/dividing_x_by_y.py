def check_division(a, b):
    if b == 0:
        return "divisao impossivel"
    return "{:.1f}".format(a / b)


def solve(n):
    for i in range(n):
        x, y = map(int, input().split())
        print(check_division(x, y))


solve(int(input()))
