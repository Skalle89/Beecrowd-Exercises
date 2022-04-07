while True:
    try:
        n = int(input())
        tree = "*"
        sp = n//2+len(tree)
        for i in range(0, n, 2):
            print("%*s" % (sp, tree))
            tree = "*" + tree + "*"
            sp += 1

        print("%*s" % (n//2+1, "*"))
        print("%*s" % (n//2+3, "***\n"))

    except EOFError:
        break
