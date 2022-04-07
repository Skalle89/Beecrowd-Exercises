a, b, c = map(int, input().split())

x, y, z = map(int, input().split())


if x//a == 0 or y//b == 0 or z//c == 0:
    print(0)

else:
    print((x//a)*(y//b)*(z//c))
