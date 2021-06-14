def solve():
    x = int(input())
    while x != 0:
        seq = [i for i in range(1, x + 1)]
        print(*seq)
        x = int(input())


solve()
