n = int(input())
m = 1
while n != -1:
    print("Experiment {:d}: {:d} full cycle(s)".format(m, n // 2))

    m += 1

    n = int(input())
