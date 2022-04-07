def swap(d, e, f):
    d[e], d[f] = d[f], d[e]


def sort_sides(d, e, f):
    array = [d, e, f]

    for i in range(1, len(array)):
        j = i
        while j > 0 and array[j] > array[j - 1]:
            swap(array, j - 1, j)
            j -= 1

    return array


def get_types(t, u, v):
    values = {}
    triangles = [
        "RETANGULO", "OBTUSANGULO",
        "ACUTANGULO", "EQUILATERO",
        "ISOSCELES"
    ]

    for i in range(len(triangles)):
        values["TRIANGULO " + triangles[i]] = \
            check_types(i, t, u, v)

    return values


def check_types(s, t, u, v):
    checks = [t ** 2 == u ** 2 + v ** 2,
              t ** 2 > u ** 2 + v ** 2,
              t ** 2 < u ** 2 + v ** 2,
              t == u == v,
              t == u != v or u == v != t or v == t != u
              ]

    return checks[s]


def show_results(w):
    for k in w.keys():
        if w[k]:
            print(k)


def triangle_types(x, y, z):
    sides = sort_sides(x, y, z)

    if sides[0] >= sides[1] + sides[2]:
        print("NAO FORMA TRIANGULO")
        return

    types = get_types(sides[0], sides[1], sides[2])

    show_results(types)


a, b, c = map(float, input().split())

triangle_types(a, b, c)
