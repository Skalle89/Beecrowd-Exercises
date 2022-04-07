def order_snack(a, b, c):
    return c[a] * b


table = {1: 4.0, 2: 4.5, 3: 5.0, 4: 2.0, 5: 1.5}

x, y = map(int, input().split())

print("Total: R$ {:.2f}".format(order_snack(x, y, table)))
