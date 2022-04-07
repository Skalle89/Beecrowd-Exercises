def calculate_distance(a, b, c, d):
    return ((c - a) ** 2 + (d - b) ** 2)**0.5


x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

print("{:.4f}".format(calculate_distance(x1, y1, x2, y2)))
