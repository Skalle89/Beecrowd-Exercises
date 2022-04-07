def tea(n, m):
    total = 0

    for i in range(len(m)):
        if m[i] == n:
            total += 1

    print(total)


n = int(input())

m = list(map(int, input().split()))

tea(n, m)
