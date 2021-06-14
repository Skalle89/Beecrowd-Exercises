def show_notes(x):
    print("NOTAS:")
    for n in [100, 50, 20, 10, 5, 2]:
        print("{} nota(s) de R$ {}.00".format(
            int(x / n),
            n
            )
        )
        x %= n

    return x


def show_coins(x):
    print("MOEDAS:")
    for c in [100, 50, 25, 10, 5, 1]:
        print("{} moeda(s) de R$ {:.2f}".format(
            int(x / c),
            c / 100
            )
        )
        x %= c


def show_notes_and_coins(x):

    x = show_notes(x) * 100

    show_coins(x)


y = float(input())

show_notes_and_coins(y)
