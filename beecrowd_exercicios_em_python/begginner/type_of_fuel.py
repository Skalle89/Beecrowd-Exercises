def show_rslt(a):
    print("MUITO OBRIGADO")
    for k in a.keys():
        print("{} {}".format(a[k][1], a[k][0]))


def solve():
    fuel = {1: ["Alcool:", 0], 2: ["Gasolina:", 0], 3: ["Diesel:", 0]}
    x = int(input())

    while x != 4:
        if x in fuel:
            fuel[x][1] += 1

    show_rslt(fuel)


solve()
