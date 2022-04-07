def mdc(x, y):
    if x % y == 0:
        return y
    return mdc(y, x % y)


a, b, c, d = map(int, input().split())

if b != d:
    a *= d
    c *= b
    b = d = b * d

dividendo = a + c
divisor = b

print(dividendo // mdc(dividendo, divisor), divisor // mdc(dividendo, divisor))
