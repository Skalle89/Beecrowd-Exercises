def quadrant(a, b):
    if a == 0 or b == 0:
        if b == 0 and a != 0:
            return "Eixo X"
        if a == 0 and b != 0:
            return "Eixo Y"

        return "Origem"

    else:
        if a > 0:
            if b > 0:
                return "Q1"

            return "Q4"

        if b < 0:
            return "Q3"

        return "Q2"


x, y = map(float, input().split())

print(quadrant(x, y))
