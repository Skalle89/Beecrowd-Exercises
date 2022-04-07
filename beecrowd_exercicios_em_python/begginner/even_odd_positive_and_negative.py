def pos_neg(x):
    return x > 0 and x != 0


def even_odd(y):
    return y % 2 == 0


def show_result(a, b, c, d):
    print("{} valor(es) par(es)\n"
          "{} valor(es) impar(es)\n"
          "{} valor(es) positivo(s)\n"
          "{} valor(es) negativo(s)\n".format(a, b, c, d))


def solve():
    even, odd, pos, neg = 0, 0, 0, 0

    for i in range(5):
        n = int(input())

        if pos_neg(n):
            pos += 1
        else:
            neg += 1

        if even_odd(n):
            even += 1
        else:
            odd += 1

    show_result(even, odd, pos, neg)


solve()
