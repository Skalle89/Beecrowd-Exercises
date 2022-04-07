a, b = map(float, input().split())

a /= 100
b /= 100

# print("{:.6f}".format(((1 + 1*b)*(1 + a) - 1)*100))

print("{:.6f}".format((a + a*b + b)*100))
