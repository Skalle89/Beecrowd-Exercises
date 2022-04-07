def lines():
    print("-" * 39)


def build(fun, n=-1):
    i = 0
    while i < 39:
        if i == 0 or i == 12 or i == 22 or i == 38:
            print("|", end="")
        elif n == -1:
            i = fun(i)
        else:
            i = fun(i, n)
        i += 1

    print()


def title(i):
    if i == 3:
        print("decimal", end="")
        i += len("decimal") - 1

    elif i == 15:
        print("octal", end="")
        i += len("octal") - 1

    elif i == 25:
        print("Hexadecimal", end="")
        i += len("Hexadecimal") - 1
    else:
        print(" ", end="")

    return i


def to_octal(x):
    if x == 0:
        return "0"

    rslt = ""
    while x != 0:
        rslt += str(x % 8)
        x //= 8

    return rslt[::-1]


def to_hex(y):
    if y == 0:
        return "0"

    rslt = ""

    while y != 0:
        if y % 16 > 9:
            rslt += chr(y % 16 + ord('7'))
        else:
            rslt += str(y % 16)

        y //= 16

    return rslt[::-1]


def number(i, x):
    if i == 6:
        print((2 - len(str(x)))*" " + str(x), end="")
        i += len((2 - len(str(x)))*" " + str(x)) - 1
    elif i == 16:
        print((2 - len(to_octal(x)))*" " + to_octal(x), end="")
        i += len((2 - len(to_octal(x)))*" " + to_octal(x)) - 1
    elif i == 29:
        print((2 - len(str(to_hex(x))))*" " + to_hex(x), end="")
        i += len((2 - len(str(to_hex(x))))*" " + to_hex(x)) - 1
    else:
        print(" ", end="")

    return i


def numbers():
    for j in range(16):
        build(number, j)


lines()
build(title)
lines()
numbers()
lines()
