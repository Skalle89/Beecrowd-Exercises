def sum_of_consec_II(a, b):
    if a > b:
        a, b = b, a
    rslt = [i for i in range(a + 1, b) if i % 2 != 0]
    return sum(rslt)


def solve(a):
    for i in range(a):
        x, y = map(int, input().split())
        print(sum_of_consec_II(x, y))


solve(int(input()))
