def solve(a, b):
    if a > b:
        a, b = b, a

    rslt = 0

    for i in range(a+1, b):
        if i % 2 != 0:
            rslt += i

    print(rslt)


x = int(input())
y = int(input())

solve(x,y)
