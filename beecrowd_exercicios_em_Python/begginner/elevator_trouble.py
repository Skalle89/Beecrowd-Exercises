f, s, g, u, d = map(int, input().split())

vzs = 0

if g == s:
    print(vzs)

elif g > s and u != 0:
    while s < g:
        s += u
        vzs += 1

    m = abs(s - g)

    if s == g:
        print(vzs)

    else:
        if d != 0 and m % d == 0:
            print(vzs + m // d)

        else:
            print("use the stairs")

elif g < s and d != 0:
    while s > g:
        s -= d
        vzs += 1

    m = abs(s - g)

    if s == g:
        print(vzs)

    else:
        if u != 0 and m % u == 0:

            print(vzs + m // d)
        else:
            print("use the stairs")

else:
    print("use the stairs")
