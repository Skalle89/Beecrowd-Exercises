def create_intervals():
    values = {"Intervalo [0,25]": [0, 25]}

    for i in range(25, 76, 25):
        values["Intervalo (" + str(i) + "," + str(i + 25) + "]"] = [i, i + 25]

    return values


def check_interval(x, y):
    for k in y.keys():
        if y[k][0] < x <= y[k][1]:
            return k

    return "Fora de Intervalo"


intervals = create_intervals()

n = float(input())

print(check_interval(n, intervals))
