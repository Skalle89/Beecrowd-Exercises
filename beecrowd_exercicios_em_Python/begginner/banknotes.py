def show_notes(x):
    for i in [100, 50, 20, 10, 5, 2, 1]:
        print("{} notas(s) de R$ {},00".format(x // i, i))
        x %= i


n = int(input())

show_notes(n)
