chk = False

while True:
    try:
        n = input()

        if not chk and "<body>" in n:
            chk = True

        elif "</body>" in n:
            chk = False

        if chk and "<body>" not in n:
            print(n)

    except EOFError:
        break
