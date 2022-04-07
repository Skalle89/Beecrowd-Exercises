while True:
    try:
        n, m = map(int, input().split())

        som = 0

        for i in range(n):
            som += m % 10
            m //= 10

        print("%d %s" % (som, "sim" if som % 3 == 0 else "nao"))
    except EOFError:
        break
