def get_area(x, y, z):
    return {"TRIANGULO: ": x * z / 2,
            "CIRCULO: ": z * z * 3.14159,
            "TRAPEZIO: ": (x + y) * z / 2,
            "QUADRADO: ": y ** 2,
            "RETANGULO: ": x * y,
            }


def print_values(w):
    for k in w.keys():
        print("{}{:.3f}".format(k, w[k]))


a, b, c = map(float, input().split())

area = get_area(a, b, c)

print_values(area)
