while True:
    try:
        n, i = map(int, input().split())

        vzs = 0

        for j in range(n):
            p, q = map(int, input().split())
            if p == i and q == 0:
                vzs += 1

        print(vzs)

    except EOFError:
        break
