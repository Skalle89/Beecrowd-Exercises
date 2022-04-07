def is_positive(x):
    return 1 if x > 0 else 0


rslt = 0

for i in range(6):
    rslt += is_positive(float(input()))

print("{} valores positivos".format(rslt))
