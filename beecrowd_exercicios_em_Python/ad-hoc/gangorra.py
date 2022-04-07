def gangorra(a, b, c, d):
    if a * b == c * d:
        return 0
    if a * b > c * d:
        return -1

    return 1


a, b, c, d = map(int, input().split())

print(gangorra(a, b, c, d))
