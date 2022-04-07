a = str(int(input()))
b = str(int(input()))
c = str(int(input()))

d, e, f = "", "", ""

print("A = {:s}, B = {:s}, C = {:s}".format(a, b, c))

print("A = {:s}{:s}, B = {:s}{:s}, C = {:s}{:s}".format(
    (10 - len(a)) * " ", a, (10 - len(b)) * " ", b,
    (10 - len(c)) * " ", c))

if int(a) < 0:
    d = a[0]
    a = a[1:]
if int(b) < 0:
    d = b[0]
    b = b[1:]
if int(c) < 0:
    d = c[0]
    c = c[1:]

print("A = {:s}{:s}{:s}, B = {:s}{:s}{:s}, C = {:s}{:s}{:s}".format(
    d, (10 - len(d + a)) * "0", a, e, (10 - len(e + b)) * "0", b,
    f, (10 - len(f + c)) * "0", c))

print("A = {:s}{:s}, B = {:s}{:s}, C = {:s}{:s}".format(
    d + a, (10 - len(d + a)) * " ", e + b, (10 - len(e + b)) * " ", f + c,
    (10 - len(f + c)) * " "))
