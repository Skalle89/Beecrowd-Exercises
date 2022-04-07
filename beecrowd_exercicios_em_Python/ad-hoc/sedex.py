import math

d = int(input())

a, l, p = map(int, input().split())

if (d / 2) ** 2 * math.pi < l * p and d <= a:
    print("S")
else:
    print("N")
