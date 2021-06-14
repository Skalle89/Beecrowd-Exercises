def show(x):
    print("{} dia(s)\n"
          "{} hora(s)\n"
          "{} minuto(s)\n"
          "{} segundo(s)\n".format(
            x // 3600 // 24,
            x // 3600 % 24,
            x % 3600 // 60,
            x % 3600 % 60
                        )
          )


def get_seconds():
    a = input().split()
    b = input().split(" : ")

    return (int(a[1]) * 24 + int(b[0])) * 3600 + int(b[1]) * 60 + int(b[2])


def solve():
    rslt = get_seconds()
    rslt = get_seconds() - rslt

    if rslt <= 0:
        rslt += 24 * 3600

    show(rslt)


solve()
