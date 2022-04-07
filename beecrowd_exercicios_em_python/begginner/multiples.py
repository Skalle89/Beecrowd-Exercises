def multiples(x, y):
    if x % y == 0 or y % x == 0:
        return "Sao Multiplos"

    return "Nao sao Multiplos"


a, b = map(int, input().split())
multiples(a, b)
