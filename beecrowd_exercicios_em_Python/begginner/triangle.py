def check(t, u, v):
    if t < u + v and u < t + v and v < t + u:
        return True
    return False


def is_triangle(x, y, z):
    if check(x, y, z):
        return "Perimetro = " + str(x + y + z)

    return "Area = " + str((x + y) * z / 2)


a, b, c = map(float, input().split())

print(is_triangle(a, b, c))
