def show_result(y):
    if type(y) == str:
        print(y)
        return

    print("R$ {:.2f}".format(y))


def get_taxes(x):
    if x <= 2000:
        return "Isento"

    if 2000 < x <= 3000:
        return (x - 2000) * 0.08

    if 3000 < x <= 4500:
        return 1000 * 0.08 + (x - 3000) * 0.18

    return 1000 * 0.08 + 1500 * 0.18 + (x - 4500) * 0.28


n = float(input())

show_result(get_taxes(n))
