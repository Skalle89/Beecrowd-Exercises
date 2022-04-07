def check(a, b, c, d, e, f):
    if a * 3 + b > d * 3 + e:
        print("C")
        return
    if a * 3 + b < d * 3 + e:
        print("F")
        return
    else:
        if c > f:
            print("C")
            return
        if c < f:
            print("F")
            return
        else:
            print("=")
            return


a, b, c, d, e, f = map(int, input().split())

check(a, b, c, d, e, f)
