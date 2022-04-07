def solve(x, y, z):
    delta = y * y - 4 * x * z

    if delta < 0 or a == 0:
        return "Impossivel calcular"

    return "R1 = {:.5f}".format((-y + delta ** 0.5) / (2 * x)) + \
           "\nR2 = {:.5f}".format((-y - delta ** 0.5) / (2 * x))


a, b, c = map(float, input().split())

print(solve(a, b, c))
