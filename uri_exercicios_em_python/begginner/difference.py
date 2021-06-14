def solve(x, y, z, w):
    return x * y - z * w


a = int(input())
b = int(input())
c = int(input())
d = int(input())

print("DIFERENCA = {}".format(solve(a, b, c, d)))
