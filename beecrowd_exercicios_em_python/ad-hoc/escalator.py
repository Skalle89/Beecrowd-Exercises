n = int(input())

while n != 0:

    total = 10

    m = input()

    if n > 1:
        m = list(map(int, m.split(" ")))

        for i in range(n - 1):
            if m[i + 1] - m[i] < 10:
                total += m[i + 1] - m[i]
            else:
                total += 10

    print(total)

    n = int(input())
