def fuel_consumption(a, b):
    return a / b


x = int(input())
y = float(input())

print("{:.3f} km/l".format(fuel_consumption(x, y)))
