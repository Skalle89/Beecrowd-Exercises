def solve():
    x = float(input())
    media, y = 0, 0

    while y != 2:

        if x > 10 or x < 0:
            print("nota invalida")

        else:
            y += 1
            media += x

        x = float(input())

    print("media = {:.2f}".format(media))


solve()
