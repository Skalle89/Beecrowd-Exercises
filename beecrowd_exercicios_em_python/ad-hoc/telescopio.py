area = int(input())

stars = 0

n = int(input())

for i in range(n):

    fotons = int(input())

    if area*fotons >= 40000000:
        stars += 1

print(stars)
