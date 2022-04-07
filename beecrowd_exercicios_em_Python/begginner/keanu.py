n = int(input())

n *= n

if n % 2 == 0:
    print("%d casas brancas e %d casas pretas" % (n // 2, n // 2))
else:
    print("%d casas brancas e %d casas pretas" % (n // 2 + 1, n // 2))
