while True:
    try:
        n = input()
        p = int(input())

        t = 0
        chk = 0

        for i in range(len(n)):
            if n[i] == 'W':
                t += 1

                if chk % p == 0:
                    t += chk//p
                elif chk != 0:
                    t += chk//p + 1

                chk = 0

            elif n[i] == 'R':
                chk += 1

        if chk % p == 0:
            t += chk // p

        elif chk != 0:
            t += chk // p + 1

        print(t)

    except EOFError:
        break
