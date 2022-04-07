def create_table(n, x=10):
    if x <= 0:
        return
    create_table(n, x - 1)
    print("{} x {} = {}".format(x, n, x * n))


create_table(int(input()))
