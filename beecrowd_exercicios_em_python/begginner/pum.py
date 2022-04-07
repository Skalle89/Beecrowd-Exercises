def solve(n):
    for i in range(1, n * 4+1):
        if i % 4 == 0:
            print("PUM", end="\n")
        else:
            print(i, end=" ")


solve(int(input()))
