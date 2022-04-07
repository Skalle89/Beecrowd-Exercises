# TODO
n, m = map(int, input().split())

matrix = []

for i in range(n):
    l = list(map(int, input().split()))
    matrix.append(l)

for i in range(n): 
    for j in range(m):
        if matrix[i][j] != 0:
            pass