def calc_time(a, b, c, d):
    minutes = (c - a) * 60 + d - b

    if minutes <= 0:
        minutes += 1440

    return [minutes // 60, minutes % 60]


x, y, z, w = map(int, input().split())

print("O JOGO DUROU {} HORAS E {} MINUTOS".format(
    calc_time(x, y, z, w)[0],
    calc_time(x, y, z, w)[1]
    )
)
