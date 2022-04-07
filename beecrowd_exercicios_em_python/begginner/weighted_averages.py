def weighted_avg(a, b, c):
    return "{:.1f}".format((a * 2 + b * 3 + c * 5) / 10)


n = int(input())

for i in range(n):
    x, y, z = map(float, input().split())
    print(weighted_avg(x, y, z))
