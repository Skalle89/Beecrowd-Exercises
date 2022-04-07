def test_values(x, y, w, z):
    if y > w and z > x and w + z > x + y and w > 0 and z > 0 and x % 2 == 0:
        return "Valores aceitos"

    return "Valores nao aceitos"


a, b, c, d = map(int, input().split())

print(test_values(a, b, c, d))
