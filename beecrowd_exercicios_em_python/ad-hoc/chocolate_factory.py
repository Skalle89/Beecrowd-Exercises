a, b, c = map(int, input().split())

while a != 0 and b != 0 and c != 0:

    print(int((a*b*c)**(1/3)))

    a, b, c = map(int, input().split())
