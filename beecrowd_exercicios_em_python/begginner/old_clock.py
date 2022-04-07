while True:
    try:
        h, m = map(int, input().split())

        h = "0"*(len("10") - len(str(h//30))) + str(h//30)
        m = "0"*(len("10") - len(str(m//6))) + str(m//6)

        print("%s:%s" % (h, m))

    except EOFError:
        break
