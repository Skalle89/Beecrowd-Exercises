def get_products():

    products = {"code": 0, "units": 0, "price": 0}

    for i in range(2):
        code, units, price = input().split()
        products["units"] += int(units)
        products["price"] += float(price)

    return products


def calculate_amount(x):
    return x["units"]*x["price"]


print("VALOR A PAGAR: R$ {:.2f}".
      format(calculate_amount(get_products()))
      )
