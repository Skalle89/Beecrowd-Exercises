def solve():

    avg, y, answ = 0, 0, 0

    while answ != 2:

        while y != 2:

            x = float(input())

            if x > 10 or x < 0:
                print("nota invalida")

            else:
                y += 1
                avg += x

            if y == 2:
                print("media = {:.2f}".format(avg/2))

        print("novo calculo (1-sim 2-nao)")
        answ = float(input())

        if answ == 1:
            avg = 0
            y = 0


solve()
