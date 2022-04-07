def dist(x):
    if x <= 800:
        return 1
    if 800 <= x <= 1400:
        return 2

    return 3


d = int(input())

print(dist(d))
